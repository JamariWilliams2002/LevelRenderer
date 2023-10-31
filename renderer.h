// minimalistic code to draw a single triangle, this is not part of the API.
// required for compiling shaders on the fly, consider pre-compiling instead
#include <d3dcompiler.h>
#include <chrono>
#include <Windows.h>
#include <shobjidl.h>
#include <string>
#include <commdlg.h>
#pragma comment(lib, "d3dcompiler.lib")
#include "d3dx12.h" // official helper file provided by microsoft
#include "Gateware.h"
#include "h2bParser.h"
#include "FSLogo.h"
using namespace GW::MATH;


std::string ShaderAsString(const char* shaderFilePath)
{
	std::string output;
	unsigned int stringLength = 0;
	GW::SYSTEM::GFile file; file.Create();
	file.GetFileSize(shaderFilePath, stringLength);
	if (stringLength && +file.OpenBinaryRead(shaderFilePath))
	{
		output.resize(stringLength);
		file.Read(&output[0], stringLength);
	}
	else
		std::cout << "ERROR: Shader Source File "" << shaderFilePath << "" Not Found!" << std::endl;
	return output;
}
std::string VS_shaderString = ShaderAsString("../VertexShader.hlsl");
std::string PS_shaderString = ShaderAsString("../PixelShader.hlsl");
std::string GreyscalePS_shd = ShaderAsString("../GreyScalePixelShader.hlsl");
std::string GS_shaderString = ShaderAsString("../GeometryShader.hlsl");
std::string PointVSstring = ShaderAsString("../PointVertexShader.hlsl");

// TODO: Part 1b
// Simple Vertex Shader
#pragma region Vertex Shader

#pragma endregion

// Simple Pixel Shader
#pragma region Pixel Shader

#pragma endregion


//QUESTIONS
// how to unload things from the gpu when level hotswapping

//RETURNING NOTES:
//working on getting specular component working
// 


//struct LevelMesh
//{
//	std::string meshName;
//	GMATRIXF worldMatrix;
//};

#pragma region Structs
struct INDECIES
{
	unsigned int light;
	unsigned int projectionInd;
	unsigned int viewInd;
};

struct SHADERVARS
{
	GW::MATH::GMATRIXF worldMatrix;
	GW::MATH::GMATRIXF viewMatrix;
	GW::MATH::GMATRIXF projectionMatrix;
};
// TODO: Part 2b
struct SCENEDATA
{
	GVECTORF sunDirection, sunColor, sunAmbient, camPos;
	GMATRIXF viewMatrix[3], projectionMatrix[2];
	float padding[32];
};
struct MESHDATA
{
	GMATRIXF worldMatrix;
	H2B::ATTRIBUTES material;
	unsigned int padding[28];
};
struct POINTLIGHTDATA
{
	GVECTORF color[8];
	GVECTORF position[8];
};
struct RASTERIZEROUTPUT
{
	GVECTORF posH;
	GVECTORF nrmW;
	GVECTORF posW;
};
#pragma endregion

//0 == bool, toggle splitscreen. Default == off
//1 == int, camera index. Default == 0
//2 == bool, swap levels. Default == GameLevelDino
bool JammyInput[3] = { false };
bool JCurrentStates[3] = { false };
bool JCanCheck[3] = { false };
//
//enum JStates
//{
//	splitscreen = 0,
//	cameraIndex,
//	swapLevels
//};
class JModel
{
private:
	std::vector<std::string> paths =
	{
		"../Assets/OBJNatrue/",
		"../Assets/OBJFarm/",
		"../Assets/OBJUltimateBuildings/",
		"../Assets/OBJDinos/"
	};
public:
	std::string modelName;
	Microsoft::WRL::ComPtr<ID3D12Resource>		vertexBuffer;
	D3D12_VERTEX_BUFFER_VIEW					vertexView;
	Microsoft::WRL::ComPtr<ID3D12Resource> indexBuffer;
	Microsoft::WRL::ComPtr<ID3D12Resource>		constantBuffer;
	//Microsoft::WRL::ComPtr<ID3D12Resource> materialBuffer;
	D3D12_CONSTANT_BUFFER_VIEW_DESC constantView;
	Microsoft::WRL::ComPtr<ID3D12DescriptorHeap>		heapPtr;
	D3D12_INDEX_BUFFER_VIEW indexView;
	SCENEDATA scene;
	D3D12_DESCRIPTOR_HEAP_DESC  heapDesc = {};
	ID3D12Device* creator;
	GW::MATH::GMatrix gmatrix;
	//could have one buffer for all of the model's information
	//shader info, input layout
	std::vector<MESHDATA> meshes;
	POINTLIGHTDATA pointLights;
	GW::GRAPHICS::GDirectX12Surface d3d;
	H2B::Parser parser;
	GW::MATH::GMATRIXF worldMatrix;
	GW::MATH::GMATRIXF viewMatrix;
	D3D12_CPU_DESCRIPTOR_HANDLE rtv;
	D3D12_CPU_DESCRIPTOR_HANDLE dsv;
	D3D12_VIEWPORT* viewports = nullptr;
	unsigned int lightCount = 0;
	unsigned int clientH = 0, clientW = 0;
	D3D12_RECT* scissorRects;

	bool LoadModelData()
	{
		bool result;
		std::string fullPath;
		for (int i = 0; i < paths.size(); i++)
		{
			fullPath = paths[i] + modelName + ".h2b";
			result = parser.Parse(fullPath.c_str());
			if (result) //found file
				break;
		}
		return result;
	}

	bool LoadModelDataRuntime()
	{
		bool result;
		std::vector<std::string> pathcpy;
		pathcpy = paths;
		std::string fullPath;
		for (int i = 0; i < paths.size(); i++)
		{
			pathcpy[i].erase(0, 3);
			fullPath = pathcpy[i] + modelName + ".h2b";
			result = parser.Parse(fullPath.c_str());
			if (result) //found file
				break;
		}
		return result;
	}
	bool UploadDataToGPU(GW::GRAPHICS::GDirectX12Surface _d3d, GW::SYSTEM::GWindow _win)
	{
		d3d = _d3d;
		_d3d.GetDevice((void**)&creator);
		gmatrix.Create();
		_win.GetClientWidth(clientW);
		_win.GetClientHeight(clientH);
		//{
		//	//matrix adjustments
		//	GVECTORF scaler = { .25, .25, .25, 0 };
		//	gmatrix.ScaleGlobalF(worldMatrix, scaler, worldMatrix);
		//	scaler = { -2, 0, 0, 0 };
		//	gmatrix.TranslateGlobalF(worldMatrix, scaler, worldMatrix);
		//}
		//create meshdatas
		MESHDATA mesh;
		for (int i = 0; i < parser.meshCount; i++)
		{
			mesh.worldMatrix = worldMatrix;
			mesh.material = parser.materials[parser.meshes[i].materialIndex].attrib;
			meshes.push_back(mesh);
		}


		//setting up constant buffer
		{
			//memory for gpu
			IDXGISwapChain4* swap = nullptr;
			DXGI_SWAP_CHAIN_DESC desc;
			d3d.GetSwapchain4((reinterpret_cast<void**>(&swap)));
			swap->GetDesc(&desc);
			float activeFrames = desc.BufferCount;
			unsigned int gpumemory = ((sizeof(SCENEDATA) + (sizeof(POINTLIGHTDATA)) + (parser.meshCount * sizeof(MESHDATA)))) * activeFrames;

			creator->CreateCommittedResource( // using UPLOAD heap for simplicity
				&CD3DX12_HEAP_PROPERTIES(D3D12_HEAP_TYPE_UPLOAD), // DEFAULT recommend  
				D3D12_HEAP_FLAG_NONE, &CD3DX12_RESOURCE_DESC::Buffer(gpumemory),
				D3D12_RESOURCE_STATE_GENERIC_READ, nullptr, IID_PPV_ARGS(constantBuffer.ReleaseAndGetAddressOf()));

			UINT8* transferMemoryLocation = 0;
			constantBuffer->Map(0, &CD3DX12_RANGE(0, 0),
				reinterpret_cast<void**>(&transferMemoryLocation));
			for (int i = 0; i < activeFrames; i++)
			{
				//map scene
				memcpy(transferMemoryLocation, &scene, sizeof(scene));
				transferMemoryLocation += sizeof(scene);
				memcpy(transferMemoryLocation, &pointLights, sizeof(pointLights));
				transferMemoryLocation += sizeof(pointLights);

				//map mesh 1 or 2
				for (size_t i = 0; i < parser.meshes.size(); i++)
				{
					memcpy(transferMemoryLocation, &meshes[i], sizeof(MESHDATA));
					transferMemoryLocation += sizeof(MESHDATA); //offset for next location
				}
			}
			constantBuffer->Unmap(0, nullptr);

			heapDesc.NumDescriptors = 1;
			heapDesc.Type = D3D12_DESCRIPTOR_HEAP_TYPE_CBV_SRV_UAV; //type for constant buffers
			heapDesc.Flags = D3D12_DESCRIPTOR_HEAP_FLAG_SHADER_VISIBLE; //visible to shaders
			heapDesc.NodeMask = 0;
			creator->CreateDescriptorHeap(&heapDesc, IID_PPV_ARGS(heapPtr.ReleaseAndGetAddressOf()));
			constantView.BufferLocation = constantBuffer->GetGPUVirtualAddress();
			constantView.SizeInBytes = gpumemory;
			creator->CreateConstantBufferView(&constantView, heapPtr->GetCPUDescriptorHandleForHeapStart());
			auto incrementSize = creator->GetDescriptorHandleIncrementSize(D3D12_DESCRIPTOR_HEAP_TYPE_CBV_SRV_UAV);
		}

		//create buffers and views
		{
			//create index buffer/view
			UINT8* transferMemoryLocationa;
			creator->CreateCommittedResource(
				&CD3DX12_HEAP_PROPERTIES(D3D12_HEAP_TYPE_UPLOAD), // DEFAULT recommend  
				D3D12_HEAP_FLAG_NONE, &CD3DX12_RESOURCE_DESC::Buffer(sizeof(unsigned int) * parser.indexCount),
				D3D12_RESOURCE_STATE_GENERIC_READ, nullptr, IID_PPV_ARGS(indexBuffer.ReleaseAndGetAddressOf()));
			indexBuffer->Map(0, &CD3DX12_RANGE(0, 0),
				reinterpret_cast<void**>(&transferMemoryLocationa));
			memcpy(transferMemoryLocationa, parser.indices.data(), sizeof(unsigned int) * parser.indexCount);
			indexBuffer->Unmap(0, nullptr);
			indexView.BufferLocation = indexBuffer->GetGPUVirtualAddress();
			indexView.Format = DXGI_FORMAT_R32_UINT; //represents each element of the array
			indexView.SizeInBytes = sizeof(unsigned int) * parser.indexCount;

			//creating vertex buffer/view
			creator->CreateCommittedResource( // using UPLOAD heap for simplicity
				&CD3DX12_HEAP_PROPERTIES(D3D12_HEAP_TYPE_UPLOAD), // DEFAULT recommend  
				D3D12_HEAP_FLAG_NONE, &CD3DX12_RESOURCE_DESC::Buffer(sizeof(H2B::VERTEX) * parser.vertexCount),
				D3D12_RESOURCE_STATE_GENERIC_READ, nullptr, IID_PPV_ARGS(vertexBuffer.ReleaseAndGetAddressOf()));
			// Transfer triangle data to the vertex buffer.
			UINT8* transferMemoryLocation;
			vertexBuffer->Map(0, &CD3DX12_RANGE(0, 0),
				reinterpret_cast<void**>(&transferMemoryLocation));
			memcpy(transferMemoryLocation, parser.vertices.data(), sizeof(H2B::VERTEX) * parser.vertexCount);
			vertexBuffer->Unmap(0, nullptr);
			// Create a vertex View to send to a Draw() call.
			vertexView.BufferLocation = vertexBuffer->GetGPUVirtualAddress();
			vertexView.StrideInBytes = sizeof(H2B::VERTEX);
			vertexView.SizeInBytes = sizeof(H2B::VERTEX) * parser.vertexCount;
		}

		//release at the end
		creator->Release();
		return true;
	}

	void LocalDrawModel(ID3D12GraphicsCommandList* cmd)
	{
		int locationOffset = sizeof(SCENEDATA) + (sizeof(POINTLIGHTDATA));


		//drawing for left side
		for (int i = 0; i < parser.meshCount; i++)
		{
			cmd->SetGraphicsRootConstantBufferView(1, constantView.BufferLocation + locationOffset);
			cmd->DrawIndexedInstanced(parser.meshes[i].drawInfo.indexCount, 1, parser.meshes[i].drawInfo.indexOffset, 0, 0);
			//swap indecies
			locationOffset += sizeof(MESHDATA);
		}
	}

	void DrawModel(ID3D12GraphicsCommandList* cmd,
		D3D12_CPU_DESCRIPTOR_HANDLE rtv, D3D12_CPU_DESCRIPTOR_HANDLE dsv)
	{
		int bytesToSkipPerFrame = sizeof(SCENEDATA) + sizeof(POINTLIGHTDATA) + (sizeof(MESHDATA) * parser.meshCount);

		//adjust scene viewmatrix
		GW::MATH::GMATRIXF cameramatrix;
		gmatrix.IdentityF(cameramatrix);
		gmatrix.InverseF(viewMatrix, cameramatrix);
		scene.camPos = cameramatrix.row4;
		scene.viewMatrix[0] = viewMatrix;
		UINT8* transferMemoryLocation = 0;
		//send new camera and view up to gpu
		constantBuffer->Map(0, &CD3DX12_RANGE(0, 0), reinterpret_cast<void**>(&transferMemoryLocation));
		memcpy(transferMemoryLocation, &scene, sizeof(SCENEDATA));
		constantBuffer->Unmap(0, nullptr);

		cmd->SetGraphicsRootConstantBufferView(0, constantView.BufferLocation);
		//constantbuffer view for meshes
		cmd->SetDescriptorHeaps(1, heapPtr.GetAddressOf());
		cmd->SetGraphicsRootConstantBufferView(1, constantView.BufferLocation + sizeof(SCENEDATA) + sizeof(POINTLIGHTDATA));
		cmd->SetGraphicsRootConstantBufferView(2, constantView.BufferLocation + sizeof(SCENEDATA));
		INDECIES ind;
		ind.light = lightCount;
		ind.viewInd = 0;
		cmd->OMSetRenderTargets(1, &rtv, FALSE, &dsv);

		cmd->IASetVertexBuffers(0, 1, &vertexView);
		cmd->IASetPrimitiveTopology(D3D_PRIMITIVE_TOPOLOGY_TRIANGLELIST);
		cmd->IASetIndexBuffer(&indexView);
		if (!JammyInput[0])
		{
			cmd->RSSetViewports(1, &viewports[0]);
			cmd->RSSetScissorRects(1, &scissorRects[0]);
			ind.projectionInd = 0;
		}
		else
		{
			cmd->RSSetViewports(1, &viewports[1]);
			cmd->RSSetScissorRects(1, &scissorRects[1]);
			ind.projectionInd = 1;

		}
		cmd->SetGraphicsRoot32BitConstants(3, 3, &ind, 0);

		LocalDrawModel(cmd);
		if (JammyInput[0])
		{
			//drawing for right side
			INDECIES ind2;
			ind2.light = lightCount;
			ind2.projectionInd = 1;
			cmd->RSSetViewports(1, &viewports[2]);
			cmd->RSSetScissorRects(1, &scissorRects[2]);
			if (JammyInput[1])
				ind2.viewInd = 1;
			else
				ind2.viewInd = 2;

			cmd->SetGraphicsRoot32BitConstants(3, 3, &ind2, 0);
			LocalDrawModel(cmd);
		}
	}


	void UnloadData()
	{
		parser.Clear();
		meshes.clear();
	}

};

void JammyCheckIfOpen()
{
	bool a;
	std::ifstream file;
	char buffer[260] = { 0, };
	std::string path = "C:/Users/jamwi/source/repos/CodeForSchool/Project and Portfolio IV/Level Renderer/Assets/OBJUltimateBuildings/4Story_Center_Mat.h2b";
	path = "../Assets/OBJUltimateBuildings/4Story_Center_Mat.h2b";
	path = "Assets/OBJUltimateBuildings/4Story_Center_Mat.h2b";
	path = "../GeometryShader.hlsl";
	file.open(path, std::ios_base::in |
		std::ios_base::binary);
	if (file.is_open() == false)
		a = false;
	else
		a = true;
	file.close();
	if (a == false)
		std::cout << "FAIL" << std::endl;
	else
		std::cout << "SUCCESS" << std::endl;
}

struct JInstances
{
	GMATRIXF worldMatrix;
	unsigned int indexCount, indexStart;
};

class JLevelData
{
	//only has data, doesn't call draw

	//CPU level data
private:
	std::vector<std::string> paths =
	{
		"../Assets/OBJNatrue/",
		"../Assets/OBJFarm/",
		"../Assets/OBJUltimateBuildings/",
		"../Assets/OBJDinos/"
	};

public:
	//big vectors
	std::vector<H2B::VERTEX> vertices;
	std::vector<unsigned> indices;
	std::vector<H2B::MATERIAL> materials;
	std::vector<H2B::BATCH> batches;
	std::vector<H2B::MESH> h2bmeshes;

	H2B::Parser parser;
	std::string modelName;
	Microsoft::WRL::ComPtr<ID3D12Resource>		vertexBuffer;
	D3D12_VERTEX_BUFFER_VIEW					vertexView;
	Microsoft::WRL::ComPtr<ID3D12Resource> indexBuffer;
	Microsoft::WRL::ComPtr<ID3D12Resource>		constantBuffer;
	Microsoft::WRL::ComPtr<ID3D12Resource> materialBuffer;
	D3D12_CONSTANT_BUFFER_VIEW_DESC constantView;
	Microsoft::WRL::ComPtr<ID3D12DescriptorHeap>		heapPtr;
	D3D12_INDEX_BUFFER_VIEW indexView;
	SCENEDATA scene;
	D3D12_DESCRIPTOR_HEAP_DESC  heapDesc = {};
	ID3D12Device* creator;
	GW::MATH::GMatrix gmatrix;
	std::vector<MESHDATA> meshes;
	GW::GRAPHICS::GDirectX12Surface d3d;
	GW::MATH::GMATRIXF worldMatrix;
	GW::MATH::GMATRIXF viewMatrix;
	D3D12_CPU_DESCRIPTOR_HANDLE rtv;
	D3D12_CPU_DESCRIPTOR_HANDLE dsv;
	//GPU level data
	bool LoadModelData(std::string modelName)
	{
		bool result;
		std::string fullPath;
		for (int i = 0; i < paths.size(); i++)
		{
			fullPath = paths[i] + modelName + ".h2b";
			result = parser.Parse(fullPath.c_str());
			if (result) //found file
				break;
		}

		//append the vectors appropriately
		if (result)
		{
			vertices.insert(vertices.end(), parser.vertices.begin(), parser.vertices.end());

		}
		return result;
	}

	bool LoadModelDataRuntime(std::string modelName)
	{
		bool result;
		std::vector<std::string> pathcpy;
		pathcpy = paths;
		std::string fullPath;
		for (int i = 0; i < paths.size(); i++)
		{
			pathcpy[i].erase(0, 3);
			fullPath = pathcpy[i] + modelName + ".h2b";
			result = parser.Parse(fullPath.c_str());
			if (result) //found file
				break;
		}
		return result;
	}

	void UploadModelData()
	{
		MESHDATA mesh;
		for (int i = 0; i < parser.meshCount; i++)
		{
			mesh.worldMatrix = worldMatrix;
			mesh.material = parser.materials[parser.meshes[i].materialIndex].attrib;
			meshes.push_back(mesh);
		}
	}
};

// Creation, Rendering & Cleanup
class Renderer
{
	float jfov = 65, jar = 0;
	float degrees = 1;
	// TODO: Part 2a

	// proxy handles
	GW::SYSTEM::GWindow win;
	GW::GRAPHICS::GDirectX12Surface d3d;
	// what we need at a minimum to draw a triangle
	Microsoft::WRL::ComPtr<ID3D12RootSignature>	rootSignature;
	Microsoft::WRL::ComPtr<ID3D12PipelineState>	pipeline, pipelineGeo;
	Microsoft::WRL::ComPtr<IDXGISwapChain4> pSwapChain;
	ID3D12Device* creator;
	std::chrono::steady_clock::time_point last_update;

	//math stuff
	GW::MATH::GMatrix gmatrix;
	GW::MATH::GMATRIXF worldMatrix;
	GW::MATH::GMATRIXF translateMatrix;
	GW::MATH::GMATRIXF viewMatrix;
	GW::MATH::GMATRIXF cpycameraMatrix;
	GW::MATH::GMATRIXF projectionMatrix;
	GVECTORF lightDirection = { -1, -1, 2 };
	GVECTORF lightColor = { 0.9, 0.9, 1.0, 1.0 };

	//other
	SCENEDATA scene;
	POINTLIGHTDATA pointLights;
	unsigned int lightColorInd = 0;
	unsigned int lightPosInd = 0;
	GW::INPUT::GInput inp;
	GW::INPUT::GController cont;
	std::vector<JModel> meshes;
	std::vector<JInstances> instances;
	D3D12_RECT scissorRects[3];
	D3D12_VIEWPORT viewports[3];
	// TODO: Part 4f
public:

#pragma region My Functions
	void CheckSuccess(GW::GReturn result)
	{
		if (result != GW::GReturn::SUCCESS)
			std::cout << "failed with return: " << (int)result << "\n";
		else
			std::cout << (int)result << "\n";
	}
	void CheckSuccess(HRESULT result)
	{
		if (result != S_OK)
			std::cout << "failed with return: " << result << "\n";
		else
			std::cout << (int)result << "\n";
	}
	void CheckSuccess(bool result, std::string meshName)
	{
		if (result == false)
			std::cout << meshName << " failed to read! " << "\n";
		else
			std::cout << meshName << " passed " << "\n";
	}
	void UpdateCamera()
	{
		//delta time stuff
		auto now = std::chrono::steady_clock::now();
		float delta_time = std::chrono::duration_cast<std::chrono::microseconds>(now - last_update).count() / 100000.0f;
		//std::cout << delta_time << std::endl;
		last_update = now;

		//camera view matrix stuff
		gmatrix.InverseF(viewMatrix, cpycameraMatrix);
		//manipulate cpy camera
		using namespace GW::INPUT;
		using namespace GW::MATH;
		const float cameraSpeed = 0.25f;
		float ychange = 0.0f,
			xchange = 0.0f,
			percamera = cameraSpeed * delta_time,
			zchange = 0,
			outFloat1 = 0, outFloat2 = 0, outFloat3 = 0, outFloat4 = 0;
		GVECTORF vec = { 0, 0, 0, 0 };
#if 1
#if 1
		//position
		{
			GVECTORF translationVector = {};
			//ychange
			inp.GetState(G_KEY_SPACE, outFloat1);
			inp.GetState(G_KEY_LEFTSHIFT, outFloat2);
			inp.GetState(G_RIGHT_TRIGGER_AXIS, outFloat3);
			inp.GetState(G_LEFT_TRIGGER_AXIS, outFloat4);
			ychange = (outFloat1 - outFloat2) + (outFloat3 - outFloat4);

			GMATRIXF yh;
			gmatrix.IdentityF(yh);
			translationVector.y += ychange * percamera;
			gmatrix.TranslateGlobalF(yh, vec, yh);

			//zchange
			inp.GetState(G_KEY_W, outFloat1);
			inp.GetState(G_KEY_S, outFloat2);
			inp.GetState(G_LY_AXIS, outFloat3);
			zchange = (outFloat1 - outFloat2) + outFloat3;

			//xchange
			inp.GetState(G_KEY_D, outFloat1);
			inp.GetState(G_KEY_A, outFloat2);
			inp.GetState(G_LX_AXIS, outFloat3);
			xchange = (outFloat1 - outFloat2) + outFloat3;

			GMATRIXF transmat;
			gmatrix.IdentityF(transmat);
			vec.x = xchange * percamera;
			vec.y = 0;
			vec.z = zchange * percamera;
			vec.w = 1;
			/*transmat.row1 = { xchange * percamera, 0, 0, 0 };
			transmat.row3 = { 0, 0, zchange * percamera, 0 };*/
			gmatrix.TranslateLocalF(transmat, vec, transmat);
			gmatrix.MultiplyMatrixF(transmat, cpycameraMatrix, cpycameraMatrix);

			translationVector.w = 1;
			translationVector.x = xchange * percamera;
			translationVector.z = zchange * percamera;

			gmatrix.TranslateLocalF(cpycameraMatrix, translationVector, cpycameraMatrix);

		}
#endif // 1

#if 1
		//rotation
		{
			float thumbspeed = G_PI_F * delta_time,
				pitch = 0, yaw = 0,
				rax = 0,
				mousex = 0, mousey = 0;
			unsigned int height, width;
			GMATRIXF rotmat, rotmat2;
			gmatrix.IdentityF(rotmat);
			win.GetClientHeight(height);
			win.GetClientWidth(width);
			GW::GReturn result = inp.GetMouseDelta(mousex, mousey);
			//y rotation
			inp.GetState(G_RY_AXIS, rax);
			pitch = jfov * (mousey / (float)height) + rax * -thumbspeed;
			//std::cout << mousey << ", " << mousex << std::endl;
			if (result == GW::GReturn::SUCCESS && result != GW::GReturn::REDUNDANT)
			{
				gmatrix.RotateXLocalF(cpycameraMatrix, G_DEGREE_TO_RADIAN(pitch), cpycameraMatrix);
			}
			//gmatrix.MultiplyMatrixF(rotmat, cpycameraMatrix, cpycameraMatrix);

			//x rotation
			inp.GetState(G_RX_AXIS, rax);
			gmatrix.IdentityF(rotmat2);
			//if (mousex - 1 == 0 || mousex + 1 == 0)
			//	mousex = 0;
			yaw = jfov * jar * (mousex / (float)width) + rax * thumbspeed;
			if (result == GW::GReturn::SUCCESS && result != GW::GReturn::REDUNDANT)
			{
				gmatrix.RotateYGlobalF(cpycameraMatrix, G_DEGREE_TO_RADIAN(yaw), cpycameraMatrix);

			}
			//store position
			vec = cpycameraMatrix.row4;
			gmatrix.MultiplyMatrixF(cpycameraMatrix, rotmat2, cpycameraMatrix);
			//restore the position
			cpycameraMatrix.row4 = vec;
		}
#endif // 0


#endif // 0
		//place camera back into view space

		gmatrix.InverseF(cpycameraMatrix, viewMatrix);
		//viewProjectionMatrix = cpycameraMatrix;
	}
	void DeleteCharacters(std::string& line, std::string delimiters)
	{
		char current;
		for (size_t arrpos = 0; arrpos < delimiters.length(); arrpos++)
		{
			current = delimiters[arrpos];
			size_t check = line.find(current);
			if (check != std::string::npos)
				line.erase(std::remove(line.begin(), line.end(), current));
		}
	}
	void JammyMakeModels(bool runtime = false)
	{
		GVECTORF eye = { .75, 10, -1.5, 0 };
		GVECTORF at = { .15, .75, 0, 0 }; // the object the eyes should be looking at
		GVECTORF up = { 0, 1, 0, 0 };
		GMATRIXF temp;
		unsigned int w, h;
		win.GetClientWidth(w);
		win.GetClientHeight(h);
		scene.projectionMatrix[0] = projectionMatrix;

		gmatrix.ProjectionDirectXLHF(G_DEGREE_TO_RADIAN(100), w / h, .1f, 100.0f, temp);
		scene.projectionMatrix[1] = temp;
		scene.viewMatrix[0] = viewMatrix;
		gmatrix.LookAtLHF(eye, at, up, temp);
		scene.viewMatrix[1] = temp;

		eye = { 1, 5, -1, 0 };
		at = { 2, 0, 2, 0 };
		gmatrix.LookAtLHF(eye, at, up, temp);

		scene.viewMatrix[2] = temp;
		gmatrix.InverseF(viewMatrix, translateMatrix);
		scene.camPos = translateMatrix.row4;
		scene.sunAmbient = { .25, .25, .35, 1 };
		scene.sunColor = lightColor;
		scene.sunDirection = lightDirection;

		float radius = 3;
		for (int i = 0; i < lightColorInd; i++)
		{
			pointLights.position[i].w = radius;
		}

		scissorRects[0].left = 0;
		scissorRects[0].top = 0;
		scissorRects[0].right = w;
		scissorRects[0].bottom = h;
		viewports[0] =
		{
			0, 0, (float)w, (float)h, 0, 1
		};
#if 1


		scissorRects[1].left = 0;
		scissorRects[1].top = 0;
		scissorRects[1].right = (float)w / 2;
		scissorRects[1].bottom = h;

		scissorRects[2].left = w / 2;
		scissorRects[2].top = 0;
		scissorRects[2].right = w;
		scissorRects[2].bottom = h;

		//default view

		//leftmost view
		viewports[1] =
		{
			0, 0, ((float)w / 2), (float)h, 0, 1
		};

		viewports[2] =
		{
			((float)w / 2), 0,
			(float)w / 2, (float)h,
			0, 1
		};
#endif // 0



		for (int i = 0; i < meshes.size(); i++)
		{
			meshes[i].scene = scene;
			meshes[i].pointLights = pointLights;
			meshes[i].lightCount = lightColorInd;
			meshes[i].viewports = viewports;
			meshes[i].scissorRects = scissorRects;
			if (runtime)
				CheckSuccess(meshes[i].LoadModelDataRuntime(), meshes[i].modelName);
			else
				CheckSuccess(meshes[i].LoadModelData(), meshes[i].modelName);
			meshes[i].UploadDataToGPU(d3d, win);
		}
	}
	/// <summary>
	/// Fills the meshWorldMatrices vector with data from "GameLevel.txt"
	/// </summary>
	void JammyLevelParser(std::string filepath = "")
	{
		std::string line;
		int fileelem = 0;
		std::vector < std::string> filenames =
		{
			"../GameLevelTest.txt",
			"../GameLevelDino.txt"
		};

		if (filepath != "")
		{
			filenames.clear();
			filenames.push_back(filepath);
			fileelem = 0;
		}

		int result = 0;
		float element[4];
		char* ptr;
		std::string::size_type st;
		std::ifstream myfile(filenames[fileelem]);
		if (myfile.is_open())
		{
			std::cout << "File " << filenames[fileelem] << " is open!" << std::endl;
			while (!myfile.eof())
			{
				std::getline(myfile, line);
				//look for meshes
				result = std::strcmp(line.c_str(), "MESH");

				if (result == 0)
				{
					JModel mesh;
					std::getline(myfile, mesh.modelName);
					std::cout << mesh.modelName << std::endl;
					std::getline(myfile, line);

					//split the string
					std::string firstline = "<Matrix 4x4 (", slam;
					int check = 0;
					for (size_t i = 0; i < 4; i++)
					{
						std::cout << line << std::endl;
						check = line.find(firstline);
						if (check != std::string::npos) //on first row
							line.erase(0, firstline.length());

						//be rid of delimiters
						DeleteCharacters(line, "),(");
						//DeleteCharacters(line, "(,)");

						element[0] = std::stof(line, &st);
						slam = line.substr(st);
						element[1] = std::stof(slam, &st);
						slam = slam.substr(st);
						element[2] = std::stof(slam, &st);
						slam = slam.substr(st);
						element[3] = std::stof(slam, &st);

						//assign correct row
						if (i == 0)
							mesh.worldMatrix.row1 = { element[0], element[1], element[2], element[3] };
						else if (i == 1)
							mesh.worldMatrix.row2 = { element[0], element[1], element[2], element[3] };
						else if (i == 2)
							mesh.worldMatrix.row3 = { element[0], element[1], element[2], element[3] };
						else //i == 3
							mesh.worldMatrix.row4 = { element[0], element[1], element[2], element[3] };

						//get the next line of numbers
						if (i != 3)
							std::getline(myfile, line);
					}

					meshes.push_back(mesh);
				}
				std::cout << std::endl;
				result = std::strcmp(line.c_str(), "LIGHT");
				if (result == 0)
				{
					std::string light;
					std::getline(myfile, light);
					std::cout << light << std::endl;
					std::getline(myfile, line);

					std::string firstline = "<Matrix 4x4 (", slam;
					int check = 0;
					for (size_t i = 0; i < 4; i++)
					{
						std::cout << line << std::endl;
						check = line.find(firstline);
						if (check != std::string::npos) //on first row
							line.erase(0, firstline.length());

						//be rid of delimiters
						DeleteCharacters(line, "),(");
						//DeleteCharacters(line, "(,)");

						element[0] = std::stof(line, &st);
						slam = line.substr(st);
						element[1] = std::stof(slam, &st);
						slam = slam.substr(st);
						element[2] = std::stof(slam, &st);
						slam = slam.substr(st);
						element[3] = std::stof(slam, &st);

						//assign correct row
						if (i == 1)
						{
							pointLights.color[lightColorInd] = { element[0], element[1], element[2], element[3] };
							lightColorInd++;
						}
						else if (i == 3)
						{
							pointLights.position[lightPosInd] = { element[0], element[1], element[2], element[3] };
							lightPosInd++;

						}

						//get the next line of numbers
						if (i != 3)
							std::getline(myfile, line);
					}
				}
			}
		}
		else
		{
			std::cout << "File " << filenames[fileelem] << " failed to open!" << std::endl;
			return;
		}
		//close file when finished
		myfile.close();
		std::cout << "File " << filenames[fileelem] << " is closed!" << std::endl;
	}
	std::string MBFromW(LPCWSTR pwsz, UINT cp) {
		int cch = WideCharToMultiByte(cp, 0, pwsz, -1, 0, 0, NULL, NULL);

		char* psz = new char[cch];

		WideCharToMultiByte(cp, 0, pwsz, -1, psz, cch, NULL, NULL);

		std::string st(psz);
		delete[] psz;

		return st;
	}
	void SwapLevels() //put into update
	{
		float outFloat1 = 0;
		inp.GetState(G_KEY_F1, outFloat1);
		if (outFloat1 == 1) //button pressed
		{

			OPENFILENAME ofn = { 0 };
			HWND hwnd = nullptr;
			TCHAR szFile[260] = { 0 };
			ZeroMemory(&ofn, sizeof(ofn));
			ofn.lStructSize = sizeof(ofn);
			ofn.hwndOwner = hwnd;
			ofn.lpstrFile = szFile;
			// Set lpstrFile[0] to '\0' so that GetOpenFileName does not 
			// use the contents of szFile to initialize itself.
			ofn.lpstrFile[0] = '\0';
			ofn.nMaxFile = sizeof(ofn);
			ofn.lpstrFilter = (LPCWSTR)"All\0*.*\0Text\0*.TXT\0";
			ofn.nFilterIndex = 1;
			ofn.lpstrFileTitle = NULL;
			ofn.nMaxFileTitle = 0;
			ofn.lpstrInitialDir = NULL;
			ofn.Flags = OFN_PATHMUSTEXIST | OFN_FILEMUSTEXIST | OFN_EXPLORER;
			std::string v = "../Assets/OBJDinos/";
			if (GetOpenFileName(&ofn) == TRUE) 
			{
				//grab the clicked on filepath
				//int a = CDM_GETFILEPATH();
				//std::string s(ofn.lpstrFile);
				std::string newstr;
				newstr.assign((char*)ofn.lpstrFile, sizeof(ofn.lpstrFile));
				newstr = MBFromW(ofn.lpstrFile, CP_UTF8);
				//correct the string
				for (int i = 0; i < newstr.length(); i++)
				{
					if (newstr[i] == 92)
					{
						newstr[i] = '/';
						//newstr.erase(i + 1, 1);
					}
				}
				meshes.clear();
				//re parse the level
				JammyLevelParser(newstr);
				JammyMakeModels(true);
			}
		}
		//check for input 
	}
	void JammyManageInput()
	{
		//float outfloat1 = 0;
		////toggle splitscreen
		//GW::GReturn res = inp.GetState(G_KEY_TAB, outfloat1);
		//std::cout << outfloat1 << std::endl;
		//if (outfloat1 > 0)
		//	JCurrentStates[0] = true;
		//else
		//	JCurrentStates[0] = false;
		if (GetAsyncKeyState(0x31) & 1) // 1 key
		{
			JammyInput[0] = !JammyInput[0];
		}
		if (GetAsyncKeyState(0x32) & 1) //2 key
			JammyInput[1] = !JammyInput[1];
	}
#pragma endregion
	void CallBeforeRender()
	{
		UpdateCamera();
		JammyManageInput();
		SwapLevels();
	}
	Renderer(GW::SYSTEM::GWindow _win, GW::GRAPHICS::GDirectX12Surface _d3d)
	{
		win = _win;
		d3d = _d3d;
		d3d.GetDevice((void**)&creator);
		// TODO: part 2a
		// TODO: part 2b
		// TODO: Part 4f
		// TODO: Part 1c
		//int cles = sizeof(POINTLIGHTDATA);
		//all matrix stuff
		GVECTORF eye = { .75, 1, -1.5, 0 };
		GVECTORF at = { .15, .75, 0, 0 }; // the object the eyes should be looking at
		GVECTORF up = { 0, 1, 0, 0 };
		{
			CheckSuccess(gmatrix.Create());
			//set to identity to begin
			CheckSuccess(gmatrix.IdentityF(worldMatrix));
			//translate by .5 down the y axis
			gmatrix.IdentityF(translateMatrix);
			GVECTORF a = { 0, 0, 0, 0 };
			GVECTORF d = { 0, .15, .75, 0 };


			translateMatrix =
			{
				a, a, a, d
			};
			//CheckResult(gmatrix.TranslateGlobalF(worldMatrix, d, worldMatrix));
			//CheckResult(gmatrix.RotateXGlobalF(worldMatrix, G_DEGREE_TO_RADIAN(90), worldMatrix));
			//CheckResult(result);
			//math for camera matrix


			gmatrix.LookAtLHF(eye, at, up, viewMatrix);

			d3d.GetAspectRatio(jar);
			//projection
			gmatrix.ProjectionDirectXLHF(G_DEGREE_TO_RADIAN(jfov), jar, .1f, 100.0f, projectionMatrix);
			//multiply both into the view matrix
			//gmatrix.MultiplyMatrixF(viewMatrix, projectionMatrix, viewProjectionMatrix);

		}
		//input stuff for camera
		{
			GW::GReturn result = inp.Create(_win);
			result = cont.Create();
		}
		//level renderer stuff
		{
			//fills out the meshes array
			JammyLevelParser();
			//create the scene
			JammyMakeModels();
		}



		// Create Vertex Shader
		UINT compilerFlags = D3DCOMPILE_ENABLE_STRICTNESS;
#if _DEBUG
		compilerFlags |= D3DCOMPILE_DEBUG;
#endif
		Microsoft::WRL::ComPtr<ID3DBlob> vsBlob, errors;
		if (FAILED(D3DCompile(VS_shaderString.c_str(), strlen(VS_shaderString.c_str()),
			nullptr, nullptr, nullptr, "main", "vs_5_1", compilerFlags, 0,
			vsBlob.GetAddressOf(), errors.GetAddressOf())))
		{
			std::cout << (char*)errors->GetBufferPointer() << std::endl;
			abort();
		}
		Microsoft::WRL::ComPtr<ID3DBlob> pvsBlob; errors.Reset();
		if (FAILED(D3DCompile(PointVSstring.c_str(), strlen(PointVSstring.c_str()),
			nullptr, nullptr, nullptr, "main", "vs_5_1", compilerFlags, 0,
			pvsBlob.GetAddressOf(), errors.GetAddressOf())))
		{
			std::cout << (char*)errors->GetBufferPointer() << std::endl;
			abort();
		}
		// Create Pixel Shader
		Microsoft::WRL::ComPtr<ID3DBlob> psBlob; errors.Reset();
		if (FAILED(D3DCompile(PS_shaderString.c_str(), strlen(PS_shaderString.c_str()),
			nullptr, nullptr, nullptr, "main", "ps_5_1", compilerFlags, 0,
			psBlob.GetAddressOf(), errors.GetAddressOf())))
		{
			std::cout << (char*)errors->GetBufferPointer() << std::endl;
			abort();
		}
		//create geometry shader
		/*Microsoft::WRL::ComPtr<ID3DBlob> gsBlob; errors.Reset();
		JammyCheckIfOpen();
		if (FAILED(D3DCompile(GS_shaderString.c_str(), strlen(GS_shaderString.c_str()),
			nullptr, nullptr, nullptr, "main", "gs_5_1", compilerFlags, 0,
			gsBlob.GetAddressOf(), errors.GetAddressOf())))
		{
			std::cout << (char*)errors->GetBufferPointer() << std::endl;
			abort();
		}*/
		errors.Reset();

		// TODO: Part 1e
		// Create Input Layout
		D3D12_INPUT_ELEMENT_DESC format[] = {
			{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D12_APPEND_ALIGNED_ELEMENT, D3D12_INPUT_CLASSIFICATION_PER_VERTEX_DATA, 0},
			{ "TEXCOORD", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D12_APPEND_ALIGNED_ELEMENT, D3D12_INPUT_CLASSIFICATION_PER_VERTEX_DATA, 0 },
			{ "NORMAL", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D12_APPEND_ALIGNED_ELEMENT, D3D12_INPUT_CLASSIFICATION_PER_VERTEX_DATA, 0 }
		};
		// TODO: Part 2g
		// create root signature
		CD3DX12_ROOT_PARAMETER rootParam[4];

		//vertex only has a position, which is float4x4, meaning 16 floats

		rootParam[0].InitAsConstantBufferView(0);
		rootParam[1].InitAsConstantBufferView(1);
		rootParam[2].InitAsConstantBufferView(2);
		rootParam[3].InitAsConstants(3, 3);
		CD3DX12_ROOT_SIGNATURE_DESC rootSignatureDesc;
		rootSignatureDesc.Init(ARRAYSIZE(rootParam), rootParam, 0, nullptr,
			D3D12_ROOT_SIGNATURE_FLAG_ALLOW_INPUT_ASSEMBLER_INPUT_LAYOUT);
		Microsoft::WRL::ComPtr<ID3DBlob> signature;
		D3D12SerializeRootSignature(&rootSignatureDesc,
			D3D_ROOT_SIGNATURE_VERSION_1, &signature, &errors);
		creator->CreateRootSignature(0, signature->GetBufferPointer(),
			signature->GetBufferSize(), IID_PPV_ARGS(&rootSignature));
		// create pipeline state for MODELS
		{
			D3D12_GRAPHICS_PIPELINE_STATE_DESC psDesc;
			ZeroMemory(&psDesc, sizeof(D3D12_GRAPHICS_PIPELINE_STATE_DESC));
			psDesc.InputLayout = { format, ARRAYSIZE(format) };
			psDesc.pRootSignature = rootSignature.Get();
			psDesc.VS = CD3DX12_SHADER_BYTECODE(vsBlob.Get());
			psDesc.PS = CD3DX12_SHADER_BYTECODE(psBlob.Get());
			psDesc.RasterizerState = CD3DX12_RASTERIZER_DESC(D3D12_DEFAULT);
			psDesc.BlendState = CD3DX12_BLEND_DESC(D3D12_DEFAULT);
			psDesc.DepthStencilState = CD3DX12_DEPTH_STENCIL_DESC(D3D12_DEFAULT);
			psDesc.SampleMask = UINT_MAX;
			psDesc.PrimitiveTopologyType = D3D12_PRIMITIVE_TOPOLOGY_TYPE_TRIANGLE;
			psDesc.NumRenderTargets = 1;
			psDesc.RTVFormats[0] = DXGI_FORMAT_R8G8B8A8_UNORM;
			psDesc.DSVFormat = DXGI_FORMAT_D32_FLOAT;
			psDesc.SampleDesc.Count = 1;
			creator->CreateGraphicsPipelineState(&psDesc, IID_PPV_ARGS(&pipeline));
		}

		//create pipeline state for POINTS
		//{
		//	D3D12_GRAPHICS_PIPELINE_STATE_DESC psDesc;
		//	ZeroMemory(&psDesc, sizeof(D3D12_GRAPHICS_PIPELINE_STATE_DESC));
		//	psDesc.InputLayout = { format, ARRAYSIZE(format) };
		//	psDesc.pRootSignature = rootSignature.Get();
		//	psDesc.VS = CD3DX12_SHADER_BYTECODE(pvsBlob.Get());
		//	psDesc.PS = CD3DX12_SHADER_BYTECODE(psBlob.Get());
		//	psDesc.GS = CD3DX12_SHADER_BYTECODE(gsBlob.Get());
		//	psDesc.RasterizerState = CD3DX12_RASTERIZER_DESC(D3D12_DEFAULT);
		//	psDesc.BlendState = CD3DX12_BLEND_DESC(D3D12_DEFAULT);
		//	psDesc.DepthStencilState = CD3DX12_DEPTH_STENCIL_DESC(D3D12_DEFAULT);
		//	psDesc.SampleMask = UINT_MAX;
		//	psDesc.PrimitiveTopologyType = D3D12_PRIMITIVE_TOPOLOGY_TYPE_POINT;
		//	psDesc.NumRenderTargets = 1;
		//	psDesc.RTVFormats[0] = DXGI_FORMAT_R8G8B8A8_UNORM;
		//	psDesc.DSVFormat = DXGI_FORMAT_D32_FLOAT;
		//	psDesc.SampleDesc.Count = 1;
		//	creator->CreateGraphicsPipelineState(&psDesc, IID_PPV_ARGS(&pipelineGeo));
		//}
			// free temporary handle
		creator->Release();
	}
	void Render()
	{
		// TODO: Part 2a
		// TODO: Part 4d
		// grab the context & render target
		ID3D12GraphicsCommandList* cmd;
		D3D12_CPU_DESCRIPTOR_HANDLE rtv;
		D3D12_CPU_DESCRIPTOR_HANDLE dsv;
		d3d.GetCommandList((void**)&cmd);
		d3d.GetCurrentRenderTargetView((void**)&rtv);
		d3d.GetDepthStencilView((void**)&dsv);
		// setup the pipeline
		cmd->SetPipelineState(pipeline.Get());
		cmd->SetGraphicsRootSignature(rootSignature.Get());

		IDXGISwapChain4* swap = nullptr;
		DXGI_SWAP_CHAIN_DESC desc;
		d3d.GetSwapchain4((reinterpret_cast<void**>(&swap)));
		swap->GetDesc(&desc);
		float activeFrames = desc.BufferCount;

		for (int i = 0; i < meshes.size(); i++)
		{
			//updated matrix for camera stuff
			meshes[i].viewMatrix = viewMatrix;
			meshes[i].DrawModel(cmd, rtv, dsv);
		}

		SwapLevels();
		// release temp handles
		cmd->Release();
	}
	~Renderer()
	{
		// ComPtr will auto release so nothing to do here 
		for (int i = 0; i < meshes.size(); i++)
		{
			if (meshes[i].vertexBuffer != nullptr)
				std::cout << "vertex buffer for " << meshes[i].modelName << "is not null" << std::endl;
			if (meshes[i].constantBuffer != nullptr)
				std::cout << "constant buffer for " << meshes[i].modelName << "is not null" << std::endl;
			if (meshes[i].indexBuffer != nullptr)
				std::cout << "index buffer for " << meshes[i].modelName << "is not null" << std::endl;
		}
	}
};

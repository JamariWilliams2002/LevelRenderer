// an ultra simple hlsl vertex shader
// TODO: Part 2i
// TODO: Part 2b
// TODO: Part 4f
// TODO: Part 4a
// TODO: Part 1f
// TODO: Part 4b
#pragma pack_matrix(row_major)

//cbuffer SHADERVARS
//{
//	float4x4 worldMatrix; //16 32 bit values
//	float4x4 viewMatrix;
//	float4x4 projectionMatrix;
//};

struct VS_Input
{
    float3 Pos : POSITION;
    float3 Tex : TEXCOORD0;
    float3 Norm : NORMAL;
};

cbuffer INDECIES : register(b3)
{
    unsigned int lightCount;
    unsigned int projectionInd;
    unsigned int viewInd;
};

struct OBJ_ATTRIBUTES
{
    float3 kd;
    float d;
    float3 ks;
    float ns;
    float3 ka;
    float sharpness;
    float3 tf;
    float ni;
    float3 ke;
    unsigned int illum;
};

struct SCENEDATA
{
    float3 sunDirection;
    float3 sunColor;
    float3 sunAmbeint;
    float3 camPos;
    float4x4 viewMatrix[3];
    float4x4 projectionMatrix[2];
    float padding[32];
};

struct MESHDATA
{
    float4x4 worldMatrix; //16 32 bit values
    OBJ_ATTRIBUTES material;
    float padding[28];
};
struct POINTLIGHTDATA
{
    float4x4 worldMatrix;
    float radius;
    float3 color;
    float3 position;
    float padding[7];
};

struct RASTERIZEROUTPUT
{
    float4 posH : SV_POSITION;
    float3 nrmW : NORMAL;
    float3 posW : WORLD;
};

ConstantBuffer<SCENEDATA> cameraAndLights : register(b0, Space0);
ConstantBuffer<MESHDATA> meshInfo : register(b1, Space0);
ConstantBuffer<POINTLIGHTDATA> pointLight : register(b2, Space0);

RASTERIZEROUTPUT main(VS_Input inputVertex)
{
	// TODO: Part 1h
    RASTERIZEROUTPUT output;
    float4 pos = float4(inputVertex.Pos, 1);
	
	// TODO: Part 2i
	//	using scene data instead of old matrix data
	
	//pos = mul(pos, worldMatrix); 
	//pos = mul(pos, viewMatrix);
	//pos = mul(pos, projectionMatrix);

	//pos = pos + float4(0, -.75, .75, 0);
	
    pos = mul(pos, meshInfo.worldMatrix);
    output.posW = pos;
    pos = mul(pos, cameraAndLights.viewMatrix[viewInd]);
    pos = mul(pos, cameraAndLights.projectionMatrix[projectionInd]);
	
	// TODO: Part 4b
    output.posH = pos;
    output.nrmW = mul(float4(inputVertex.Norm, 0), meshInfo.worldMatrix);
    return output;
}
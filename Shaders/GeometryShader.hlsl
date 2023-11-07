// an ultra simple hlsl pixel shader
// TODO: Part 2b

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
    float4 color[8];
    float4 position[8];
};

struct RASTERIZEROUTPUT
{
    float4 posH : SV_POSITION;
    float3 nrmW : NORMAL;
    float3 posW : WORLD;
};

//ConstantBuffer<SCENEDATA> cameraAndLights : register(b0, Space0);
//ConstantBuffer<MESHDATA> meshInfo : register(b1, Space0);
//ConstantBuffer<POINTLIGHTDATA> pointLight : register(b2, Space0);


[maxvertexcount(3)]
RASTERIZEROUTPUT main(
	 RASTERIZEROUTPUT slid[1] : SV_POSITION,  
	RASTERIZEROUTPUT tristream)
{
    RASTERIZEROUTPUT gsout = 0;
    //gsout.posH = float4(input[0].posH.x + 0.5, input[0].posH.y + 0.5, input[0].posH.z, input[0].posH.w);
    //tristream.Append(gsout);
    //gsout.posH = float4(input[0].posH.x - 0.5, input[0].posH.y + 0.5, input[0].posH.z, input[0].posH.w);
    //tristream.Append(gsout);
    //gsout.posH = float4(input[0].posH.x - 0.5, input[0].posH.y - 0.5, input[0].posH.z, input[0].posH.w);
    //tristream.Append(gsout);

    
    return gsout;
}
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

ConstantBuffer<SCENEDATA> cameraAndLights : register(b0, Space0);
ConstantBuffer<MESHDATA> meshInfo : register(b1, Space0);
ConstantBuffer<POINTLIGHTDATA> pointLight : register(b2, Space0);
// TODO: Part 4f
// TODO: Part 4b
float4 main(RASTERIZEROUTPUT input) : SV_TARGET
{
	//need to normalize both of these before anything
    float3 directioncpy = normalize(cameraAndLights.sunDirection);
    float3 normalcpy = normalize(input.nrmW);

	// TODO:Part 3a
    float3 color = meshInfo.material.kd;
    float3 directColor = (cameraAndLights.sunColor) * color;
    float3 negDir = mul(directioncpy, -1);
	// TODO: Part 4c
    float lightRatio = clamp(dot(normalcpy, negDir), 0, 1);
    directColor = clamp(lightRatio * directColor, 0, 1);
    
    //point light stuff
    float3 finalPointColor = {0, 0, 0 };
    float3 specFinal = { 0, 0, 0 };
    for (int i = 0; i < lightCount; i++)
    {
        
        float3 pointDir = normalize(pointLight.position[i] - input.posW);
        float pointRatio = saturate(dot(pointDir, input.nrmW));
        float3 pointColor = pointLight.color[i] * color;
        float mag = length(pointLight.position[i] - input.posW) / pointLight.position[i].w;
        float attenuation = 1.0 - saturate(mag);
        pointRatio = pointRatio * attenuation;
        //add specular stuff
        float specularPower = meshInfo.material.ns;
        float specIntensity = meshInfo.material.ks;
        float3 viewDir = normalize(pointLight.position[i] - input.posW);
        float3 halfVec = normalize((-1 * normalize(pointLight.position[i])) + viewDir);
        float3 intensity = pow(saturate(dot(normalcpy, halfVec)), specularPower) * specIntensity;

        finalPointColor += saturate(pointRatio * pointColor );
        specFinal += saturate(intensity * pointColor);
    }
	// specular for directional light
    float specularPower = meshInfo.material.ns;
    float specIntensity = meshInfo.material.ks;
    float3 viewDir = normalize(cameraAndLights.camPos - input.posW);
    float3 halfVec = normalize((-1 * directioncpy) + viewDir);
    float3 intensity = pow(saturate(dot(normalcpy, halfVec)), specularPower) * specIntensity;

    //result from directional light
    float3 result = (directColor + finalPointColor + meshInfo.material.ks * intensity) + cameraAndLights.sunAmbeint * meshInfo.material.kd;
    result += specFinal;
	//float3 result = lightRatio * color * cameraAndLights.sunColor;
    return float4(result, 0); // TODO: Part 1a
}
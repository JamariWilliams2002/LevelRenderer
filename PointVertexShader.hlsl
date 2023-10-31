struct VS_Input
{
    float3 Pos : POSITION;
    float3 Tex : TEXCOORD0;
    float3 Norm : NORMAL;
};

struct RASTERIZEROUTPUT
{
    float4 posH : SV_POSITION;
    float3 nrmW : NORMAL;
    float3 posW : WORLD;
};


RASTERIZEROUTPUT main( VS_Input input)
{
    RASTERIZEROUTPUT output;
    output.nrmW = input.Norm;
    output.posH = float4(input.Pos, 1);
    output.posW = input.Pos;
	return output;
}
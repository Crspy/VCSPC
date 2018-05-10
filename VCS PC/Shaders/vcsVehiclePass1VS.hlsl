struct VS_INPUT
{
	float4 Position		: POSITION;
	float3 Normal		: NORMAL;
	float2 TexCoord		: TEXCOORD0;
};

struct VS_OUTPUT
{
	float4 position		: POSITION;
	float2 texcoord0	: TEXCOORD0;
	float4 color		: COLOR0;
};

float4x4	combined	: register(c0);
float4x4	world		: register(c4);
float3		directDir	: register(c13);
float3		ambient		: register(c15);
float4		matCol		: register(c16);
float3		directCol	: register(c17);
float3		lightDir[6]	: register(c18);
float3		lightCol[6]	: register(c24);

float3		surfProps	: register(c32);

#define surfAmb (surfProps.x)
#define surfDiff (surfProps.z)

VS_OUTPUT
main(in VS_INPUT In)
{
	VS_OUTPUT Out;

	Out.position = mul(In.Position, combined);
	Out.texcoord0 = In.TexCoord;
	float3 N = normalize(mul(In.Normal, (float3x3)world).xyz);	// NORMAL MAT

	float3 c = saturate(dot(N, -directDir))*surfDiff;
	c += ambient*surfAmb;
	for(int i = 0; i < 6; i++)
		c += lightCol[i]*saturate(dot(N, -lightDir[i]))*surfDiff;
	Out.color = float4(saturate(c), 1.0f)*matCol;

	return Out;
}

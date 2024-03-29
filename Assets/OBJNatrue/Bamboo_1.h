// "Bamboo_1.h" generated by "Obj2Header.exe" [Version 1.9d] Author: L.Norri Fullsail University.
// Data is converted to left-handed coordinate system and UV data is V flipped for Direct3D/Vulkan.
// The companion file "Bamboo_1.h2b" is a binary dump of this format(-padding) for more flexibility.
// Loading *.h2b: read version, sizes, handle strings(max len 260) by reading until null-terminated.
/***********************/
/*  Generator version  */
/***********************/
#ifndef _Bamboo_1_version_
const char Bamboo_1_version[4] = { '0','1','9','d' };
#define _Bamboo_1_version_
#endif
/************************************************/
/*  This section contains the model's size data */
/************************************************/
#ifndef _Bamboo_1_vertexcount_
const unsigned Bamboo_1_vertexcount = 146;
#define _Bamboo_1_vertexcount_
#endif
#ifndef _Bamboo_1_indexcount_
const unsigned Bamboo_1_indexcount = 246;
#define _Bamboo_1_indexcount_
#endif
#ifndef _Bamboo_1_materialcount_
const unsigned Bamboo_1_materialcount = 2; // can be used for batched draws
#define _Bamboo_1_materialcount_
#endif
#ifndef _Bamboo_1_meshcount_
const unsigned Bamboo_1_meshcount = 2;
#define _Bamboo_1_meshcount_
#endif
/************************************************/
/*  This section contains the raw data to load  */
/************************************************/
#ifndef __OBJ_VEC3__
typedef struct _OBJ_VEC3_
{
	float x,y,z; // 3D Coordinate.
}OBJ_VEC3;
#define __OBJ_VEC3__
#endif
#ifndef __OBJ_VERT__
typedef struct _OBJ_VERT_
{
	OBJ_VEC3 pos; // Left-handed +Z forward coordinate w not provided, assumed to be 1.
	OBJ_VEC3 uvw; // D3D/Vulkan style top left 0,0 coordinate.
	OBJ_VEC3 nrm; // Provided direct from obj file, may or may not be normalized.
}OBJ_VERT;
#define __OBJ_VERT__
#endif
#ifndef _Bamboo_1_vertices_
// Raw Vertex Data follows: Positions, Texture Coordinates and Normals.
const OBJ_VERT Bamboo_1_vertices[146] =
{
	{	{ -0.015604f, 0.196769f, 0.003748f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.008200f, 0.162500f, 0.986700f }	},
	{	{ -0.026705f, 0.173713f, 0.007639f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.008200f, 0.162500f, 0.986700f }	},
	{	{ -0.013023f, 0.159952f, 0.009792f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.008200f, 0.162500f, 0.986700f }	},
	{	{ 0.011908f, 0.167876f, 0.008278f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.008200f, 0.162500f, 0.986700f }	},
	{	{ 0.047779f, 0.250045f, -0.005558f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.008200f, 0.162500f, 0.986700f }	},
	{	{ 0.074961f, 0.220103f, -0.000852f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.008200f, 0.162500f, 0.986700f }	},
	{	{ 0.149811f, 0.313913f, -0.016931f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.008200f, 0.162500f, 0.986700f }	},
	{	{ -0.060505f, 0.214970f, 0.001125f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.008200f, 0.162500f, 0.986700f }	},
	{	{ -0.041274f, 0.182687f, 0.006282f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.008200f, 0.162500f, 0.986700f }	},
	{	{ -0.018114f, 0.183099f, 0.006021f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.008200f, 0.162500f, 0.986700f }	},
	{	{ -0.003743f, 0.214767f, 0.000684f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.008200f, 0.162500f, 0.986700f }	},
	{	{ -0.054368f, 0.339623f, -0.019462f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.008200f, 0.162500f, 0.986700f }	},
	{	{ 0.004506f, 0.338026f, -0.019691f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.008200f, 0.162500f, 0.986700f }	},
	{	{ -0.020559f, 0.509524f, -0.047734f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.008200f, 0.162500f, 0.986700f }	},
	{	{ -0.134788f, 0.199190f, 0.004344f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.008200f, 0.162500f, 0.986700f }	},
	{	{ -0.061105f, 0.160904f, 0.010036f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.008200f, 0.162500f, 0.986700f }	},
	{	{ -0.044354f, 0.196947f, 0.003959f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.008200f, 0.162500f, 0.986700f }	},
	{	{ -0.116931f, 0.235322f, -0.001757f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.008200f, 0.162500f, 0.986700f }	},
	{	{ -0.035342f, 0.159324f, 0.010082f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.008200f, 0.162500f, 0.986700f }	},
	{	{ -0.027581f, 0.177021f, 0.007101f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.008200f, 0.162500f, 0.986700f }	},
	{	{ -0.232888f, 0.268998f, -0.006337f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.008200f, 0.162500f, 0.986700f }	},
	{	{ -0.012790f, 0.162176f, -0.004675f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.008200f, -0.162500f, -0.986700f }	},
	{	{ -0.026472f, 0.175937f, -0.006827f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.008200f, -0.162500f, -0.986700f }	},
	{	{ -0.015371f, 0.198993f, -0.010718f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.008200f, -0.162500f, -0.986700f }	},
	{	{ 0.012141f, 0.170100f, -0.006188f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.008200f, -0.162500f, -0.986700f }	},
	{	{ 0.048011f, 0.252269f, -0.020024f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.008200f, -0.162500f, -0.986700f }	},
	{	{ 0.075194f, 0.222327f, -0.015318f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.008200f, -0.162500f, -0.986700f }	},
	{	{ 0.150044f, 0.316137f, -0.031398f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.008200f, -0.162500f, -0.986700f }	},
	{	{ -0.017881f, 0.185324f, -0.008445f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.008200f, -0.162500f, -0.986700f }	},
	{	{ -0.041041f, 0.184911f, -0.008184f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.008200f, -0.162500f, -0.986700f }	},
	{	{ -0.060273f, 0.217194f, -0.013342f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.008200f, -0.162500f, -0.986700f }	},
	{	{ -0.003510f, 0.216992f, -0.013782f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.008200f, -0.162500f, -0.986700f }	},
	{	{ -0.054136f, 0.341847f, -0.033929f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.008200f, -0.162500f, -0.986700f }	},
	{	{ 0.004738f, 0.340250f, -0.034157f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.008200f, -0.162500f, -0.986700f }	},
	{	{ -0.020326f, 0.511749f, -0.062200f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.008200f, -0.162500f, -0.986700f }	},
	{	{ -0.044122f, 0.199171f, -0.010507f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.008200f, -0.162500f, -0.986700f }	},
	{	{ -0.060873f, 0.163128f, -0.004430f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.008200f, -0.162500f, -0.986700f }	},
	{	{ -0.134555f, 0.201414f, -0.010122f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.008200f, -0.162500f, -0.986700f }	},
	{	{ -0.116698f, 0.237546f, -0.016224f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.008200f, -0.162500f, -0.986700f }	},
	{	{ -0.027348f, 0.179245f, -0.007365f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.008200f, -0.162500f, -0.986700f }	},
	{	{ -0.035110f, 0.161548f, -0.004385f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.008200f, -0.162500f, -0.986700f }	},
	{	{ -0.232656f, 0.271222f, -0.020803f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.008200f, -0.162500f, -0.986700f }	},
	{	{ -0.020559f, 0.509524f, -0.047734f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.980200f, 0.197500f, 0.014600f }	},
	{	{ -0.020326f, 0.511749f, -0.062200f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.980200f, 0.197500f, 0.014600f }	},
	{	{ -0.054136f, 0.341847f, -0.033929f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.980200f, 0.197500f, 0.014600f }	},
	{	{ -0.054368f, 0.339623f, -0.019462f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.980200f, 0.197500f, 0.014600f }	},
	{	{ -0.116931f, 0.235322f, -0.001757f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.270200f, 0.951000f, 0.150600f }	},
	{	{ -0.116698f, 0.237546f, -0.016224f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.270200f, 0.951000f, 0.150600f }	},
	{	{ -0.232656f, 0.271222f, -0.020803f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.270200f, 0.951000f, 0.150600f }	},
	{	{ -0.232888f, 0.268998f, -0.006337f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.270200f, 0.951000f, 0.150600f }	},
	{	{ -0.134788f, 0.199190f, 0.004344f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.447600f, -0.882700f, -0.142900f }	},
	{	{ -0.134555f, 0.201414f, -0.010122f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.447600f, -0.882700f, -0.142900f }	},
	{	{ -0.060873f, 0.163128f, -0.004430f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.447600f, -0.882700f, -0.142900f }	},
	{	{ -0.061105f, 0.160904f, 0.010036f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.447600f, -0.882700f, -0.142900f }	},
	{	{ -0.061105f, 0.160904f, 0.010036f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.060200f, -0.986400f, -0.152600f }	},
	{	{ -0.060873f, 0.163128f, -0.004430f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.060200f, -0.986400f, -0.152600f }	},
	{	{ -0.035110f, 0.161548f, -0.004385f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.060200f, -0.986400f, -0.152600f }	},
	{	{ -0.035342f, 0.159324f, 0.010082f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.060200f, -0.986400f, -0.152600f }	},
	{	{ -0.044354f, 0.196947f, 0.003959f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.453900f, 0.879600f, 0.142500f }	},
	{	{ -0.044122f, 0.199171f, -0.010507f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.453900f, 0.879600f, 0.142500f }	},
	{	{ -0.116698f, 0.237546f, -0.016224f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.453900f, 0.879600f, 0.142500f }	},
	{	{ -0.116931f, 0.235322f, -0.001757f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.453900f, 0.879600f, 0.142500f }	},
	{	{ -0.035342f, 0.159324f, 0.010082f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.911700f, -0.408000f, -0.048100f }	},
	{	{ -0.035110f, 0.161548f, -0.004385f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.911700f, -0.408000f, -0.048100f }	},
	{	{ -0.027348f, 0.179245f, -0.007365f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.911700f, -0.408000f, -0.048100f }	},
	{	{ -0.027581f, 0.177021f, 0.007101f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.911700f, -0.408000f, -0.048100f }	},
	{	{ -0.232888f, 0.268998f, -0.006337f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.564800f, -0.814200f, -0.134300f }	},
	{	{ -0.232656f, 0.271222f, -0.020803f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.564800f, -0.814200f, -0.134300f }	},
	{	{ -0.134555f, 0.201414f, -0.010122f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.564800f, -0.814200f, -0.134300f }	},
	{	{ -0.134788f, 0.199190f, 0.004344f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.564800f, -0.814200f, -0.134300f }	},
	{	{ -0.027581f, 0.177021f, 0.007101f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.751400f, 0.650200f, 0.112100f }	},
	{	{ -0.027348f, 0.179245f, -0.007365f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.751400f, 0.650200f, 0.112100f }	},
	{	{ -0.044122f, 0.199171f, -0.010507f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.751400f, 0.650200f, 0.112100f }	},
	{	{ -0.044354f, 0.196947f, 0.003959f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.751400f, 0.650200f, 0.112100f }	},
	{	{ -0.013023f, 0.159952f, 0.009792f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.292100f, -0.946000f, -0.140800f }	},
	{	{ -0.012790f, 0.162176f, -0.004675f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.292100f, -0.946000f, -0.140800f }	},
	{	{ 0.012141f, 0.170100f, -0.006188f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.292100f, -0.946000f, -0.140800f }	},
	{	{ 0.011908f, 0.167876f, 0.008278f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.292100f, -0.946000f, -0.140800f }	},
	{	{ -0.026705f, 0.173713f, 0.007639f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.694600f, -0.709300f, -0.120200f }	},
	{	{ -0.026472f, 0.175937f, -0.006827f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.694600f, -0.709300f, -0.120200f }	},
	{	{ -0.012790f, 0.162176f, -0.004675f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.694600f, -0.709300f, -0.120200f }	},
	{	{ -0.013023f, 0.159952f, 0.009792f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.694600f, -0.709300f, -0.120200f }	},
	{	{ 0.011908f, 0.167876f, 0.008278f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.624700f, -0.773200f, -0.108900f }	},
	{	{ 0.012141f, 0.170100f, -0.006188f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.624700f, -0.773200f, -0.108900f }	},
	{	{ 0.075194f, 0.222327f, -0.015318f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.624700f, -0.773200f, -0.108900f }	},
	{	{ 0.074961f, 0.220103f, -0.000852f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.624700f, -0.773200f, -0.108900f }	},
	{	{ -0.015604f, 0.196769f, 0.003748f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.896200f, 0.440500f, 0.053300f }	},
	{	{ -0.015371f, 0.198993f, -0.010718f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.896200f, 0.440500f, 0.053300f }	},
	{	{ -0.026472f, 0.175937f, -0.006827f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.896200f, 0.440500f, 0.053300f }	},
	{	{ -0.026705f, 0.173713f, 0.007639f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.896200f, 0.440500f, 0.053300f }	},
	{	{ 0.047779f, 0.250045f, -0.005558f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.630300f, 0.768800f, 0.108100f }	},
	{	{ 0.048011f, 0.252269f, -0.020024f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.630300f, 0.768800f, 0.108100f }	},
	{	{ -0.015371f, 0.198993f, -0.010718f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.630300f, 0.768800f, 0.108100f }	},
	{	{ -0.015604f, 0.196769f, 0.003748f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.630300f, 0.768800f, 0.108100f }	},
	{	{ 0.074961f, 0.220103f, -0.000852f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.771800f, -0.630300f, -0.084500f }	},
	{	{ 0.075194f, 0.222327f, -0.015318f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.771800f, -0.630300f, -0.084500f }	},
	{	{ 0.150044f, 0.316137f, -0.031398f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.771800f, -0.630300f, -0.084500f }	},
	{	{ 0.149811f, 0.313913f, -0.016931f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.771800f, -0.630300f, -0.084500f }	},
	{	{ 0.149811f, 0.313913f, -0.016931f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.516800f, 0.847400f, 0.122000f }	},
	{	{ 0.150044f, 0.316137f, -0.031398f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.516800f, 0.847400f, 0.122000f }	},
	{	{ 0.048011f, 0.252269f, -0.020024f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.516800f, 0.847400f, 0.122000f }	},
	{	{ 0.047779f, 0.250045f, -0.005558f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.516800f, 0.847400f, 0.122000f }	},
	{	{ -0.018114f, 0.183099f, 0.006021f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.906300f, -0.419700f, -0.050000f }	},
	{	{ -0.017881f, 0.185324f, -0.008445f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.906300f, -0.419700f, -0.050000f }	},
	{	{ -0.003510f, 0.216992f, -0.013782f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.906300f, -0.419700f, -0.050000f }	},
	{	{ -0.003743f, 0.214767f, 0.000684f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.906300f, -0.419700f, -0.050000f }	},
	{	{ -0.041274f, 0.182687f, 0.006282f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.015900f, -0.988300f, -0.151700f }	},
	{	{ -0.041041f, 0.184911f, -0.008184f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.015900f, -0.988300f, -0.151700f }	},
	{	{ -0.017881f, 0.185324f, -0.008445f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.015900f, -0.988300f, -0.151700f }	},
	{	{ -0.018114f, 0.183099f, 0.006021f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.015900f, -0.988300f, -0.151700f }	},
	{	{ -0.003743f, 0.214767f, 0.000684f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.997800f, -0.065800f, 0.005900f }	},
	{	{ -0.003510f, 0.216992f, -0.013782f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.997800f, -0.065800f, 0.005900f }	},
	{	{ 0.004738f, 0.340250f, -0.034157f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.997800f, -0.065800f, 0.005900f }	},
	{	{ 0.004506f, 0.338026f, -0.019691f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.997800f, -0.065800f, 0.005900f }	},
	{	{ -0.060505f, 0.214970f, 0.001125f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.848700f, -0.520500f, -0.093700f }	},
	{	{ -0.060273f, 0.217194f, -0.013342f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.848700f, -0.520500f, -0.093700f }	},
	{	{ -0.041041f, 0.184911f, -0.008184f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.848700f, -0.520500f, -0.093700f }	},
	{	{ -0.041274f, 0.182687f, 0.006282f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.848700f, -0.520500f, -0.093700f }	},
	{	{ -0.054368f, 0.339623f, -0.019462f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.998800f, 0.047700f, -0.008700f }	},
	{	{ -0.054136f, 0.341847f, -0.033929f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.998800f, 0.047700f, -0.008700f }	},
	{	{ -0.060273f, 0.217194f, -0.013342f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.998800f, 0.047700f, -0.008700f }	},
	{	{ -0.060505f, 0.214970f, 0.001125f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.998800f, 0.047700f, -0.008700f }	},
	{	{ 0.004506f, 0.338026f, -0.019691f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.987800f, 0.150800f, 0.039100f }	},
	{	{ 0.004738f, 0.340250f, -0.034157f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.987800f, 0.150800f, 0.039100f }	},
	{	{ -0.020326f, 0.511749f, -0.062200f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.987800f, 0.150800f, 0.039100f }	},
	{	{ -0.020559f, 0.509524f, -0.047734f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.987800f, 0.150800f, 0.039100f }	},
	{	{ -0.025416f, 0.194790f, 0.004156f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.033400f, 0.016400f, 0.999300f }	},
	{	{ -0.033547f, 0.183979f, 0.006005f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.033400f, 0.016400f, 0.999300f }	},
	{	{ -0.014019f, -0.001154f, 0.006998f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.033400f, 0.016400f, 0.999300f }	},
	{	{ 0.013787f, -0.001070f, 0.007468f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.033400f, 0.016400f, 0.999300f }	},
	{	{ -0.013787f, 0.001070f, -0.007468f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.033400f, -0.016400f, -0.999300f }	},
	{	{ -0.033314f, 0.186203f, -0.008461f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.033400f, -0.016400f, -0.999300f }	},
	{	{ -0.025184f, 0.197015f, -0.010310f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.033400f, -0.016400f, -0.999300f }	},
	{	{ 0.014019f, 0.001154f, -0.006998f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.033400f, -0.016400f, -0.999300f }	},
	{	{ -0.025416f, 0.194790f, 0.004156f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.789900f, 0.607900f, 0.080800f }	},
	{	{ -0.025184f, 0.197015f, -0.010310f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.789900f, 0.607900f, 0.080800f }	},
	{	{ -0.033314f, 0.186203f, -0.008461f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.789900f, 0.607900f, 0.080800f }	},
	{	{ -0.033547f, 0.183979f, 0.006005f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.789900f, 0.607900f, 0.080800f }	},
	{	{ 0.013787f, -0.001070f, 0.007468f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.979400f, 0.196800f, 0.046000f }	},
	{	{ 0.014019f, 0.001154f, -0.006998f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.979400f, 0.196800f, 0.046000f }	},
	{	{ -0.025184f, 0.197015f, -0.010310f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.979400f, 0.196800f, 0.046000f }	},
	{	{ -0.025416f, 0.194790f, 0.004156f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.979400f, 0.196800f, 0.046000f }	},
	{	{ -0.033547f, 0.183979f, 0.006005f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.994000f, -0.105000f, -0.032100f }	},
	{	{ -0.033314f, 0.186203f, -0.008461f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.994000f, -0.105000f, -0.032100f }	},
	{	{ -0.013787f, 0.001070f, -0.007468f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.994000f, -0.105000f, -0.032100f }	},
	{	{ -0.014019f, -0.001154f, 0.006998f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.994000f, -0.105000f, -0.032100f }	},
};
#define _Bamboo_1_vertices_
#endif
#ifndef _Bamboo_1_indices_
// Index Data follows: Sequential by mesh, Every Three Indices == One Triangle.
const unsigned int Bamboo_1_indices[246] =
{
	 0, 1, 2,
	 3, 0, 2,
	 4, 0, 3,
	 5, 4, 3,
	 6, 4, 5,
	 7, 8, 9,
	 10, 7, 9,
	 11, 7, 10,
	 12, 11, 10,
	 13, 11, 12,
	 14, 15, 16,
	 17, 14, 16,
	 15, 18, 19,
	 16, 15, 19,
	 20, 14, 17,
	 21, 22, 23,
	 24, 21, 23,
	 24, 23, 25,
	 26, 24, 25,
	 27, 26, 25,
	 28, 29, 30,
	 31, 28, 30,
	 31, 30, 32,
	 33, 31, 32,
	 34, 33, 32,
	 35, 36, 37,
	 38, 35, 37,
	 39, 40, 36,
	 35, 39, 36,
	 41, 38, 37,
	 42, 43, 44,
	 45, 42, 44,
	 46, 47, 48,
	 49, 46, 48,
	 50, 51, 52,
	 53, 50, 52,
	 54, 55, 56,
	 57, 54, 56,
	 58, 59, 60,
	 61, 58, 60,
	 62, 63, 64,
	 65, 62, 64,
	 66, 67, 68,
	 69, 66, 68,
	 70, 71, 72,
	 73, 70, 72,
	 74, 75, 76,
	 77, 74, 76,
	 78, 79, 80,
	 81, 78, 80,
	 82, 83, 84,
	 85, 82, 84,
	 86, 87, 88,
	 89, 86, 88,
	 90, 91, 92,
	 93, 90, 92,
	 94, 95, 96,
	 97, 94, 96,
	 98, 99, 100,
	 101, 98, 100,
	 102, 103, 104,
	 105, 102, 104,
	 106, 107, 108,
	 109, 106, 108,
	 110, 111, 112,
	 113, 110, 112,
	 114, 115, 116,
	 117, 114, 116,
	 118, 119, 120,
	 121, 118, 120,
	 122, 123, 124,
	 125, 122, 124,
	 126, 127, 128,
	 129, 126, 128,
	 130, 131, 132,
	 133, 130, 132,
	 134, 135, 136,
	 137, 134, 136,
	 138, 139, 140,
	 141, 138, 140,
	 142, 143, 144,
	 145, 142, 144,
};
#define _Bamboo_1_indices_
#endif
// Part of an OBJ_MATERIAL, the struct is 16 byte aligned so it is GPU register friendly.
#ifndef __OBJ_ATTRIBUTES__
typedef struct _OBJ_ATTRIBUTES_
{
	OBJ_VEC3    Kd; // diffuse reflectivity
	float	    d; // dissolve (transparency) 
	OBJ_VEC3    Ks; // specular reflectivity
	float       Ns; // specular exponent
	OBJ_VEC3    Ka; // ambient reflectivity
	float       sharpness; // local reflection map sharpness
	OBJ_VEC3    Tf; // transmission filter
	float       Ni; // optical density (index of refraction)
	OBJ_VEC3    Ke; // emissive reflectivity
	unsigned    illum; // illumination model
}OBJ_ATTRIBUTES;
#define __OBJ_ATTRIBUTES__
#endif
// This structure also has been made GPU register friendly so it can be transfered directly if desired.
// Note: Total struct size will vary depenedening on CPU processor architecture (string pointers).
#ifndef __OBJ_MATERIAL__
typedef struct _OBJ_MATERIAL_
{
	// The following items are typically used in a pixel/fragment shader, they are packed for GPU registers.
	OBJ_ATTRIBUTES attrib; // Surface shading characteristics & illumination model
	// All items below this line are not needed on the GPU and are generally only used during load time.
	const char* name; // the name of this material
	// If the model's materials contain any specific texture data it will be located below.
	const char* map_Kd; // diffuse texture
	const char* map_Ks; // specular texture
	const char* map_Ka; // ambient texture
	const char* map_Ke; // emissive texture
	const char* map_Ns; // specular exponent texture
	const char* map_d; // transparency texture
	const char* disp; // roughness map (displacement)
	const char* decal; // decal texture (lerps texture & material colors)
	const char* bump; // normal/bumpmap texture
	void* padding[2]; // 16 byte alignment on 32bit or 64bit
}OBJ_MATERIAL;
#define __OBJ_MATERIAL__
#endif
#ifndef _Bamboo_1_materials_
// Material Data follows: pulled from a .mtl file of the same name if present.
const OBJ_MATERIAL Bamboo_1_materials[2] =
{
	{
		{{ 0.069954f, 0.121857f, 0.047888f },
		1.000000f,
		{ 0.500000f, 0.500000f, 0.500000f },
		96.078430f,
		{ 1.000000f, 1.000000f, 1.000000f },
		60.000000f,
		{ 1.000000f, 1.000000f, 1.000000f },
		1.000000f,
		{ 0.000000f, 0.000000f, 0.000000f },
		2},
		"DarkGreen2",
		"",
		"",
		"",
		"",
		"",
		"",
		"",
		"",
		"",
	},
	{
		{{ 0.185317f, 0.358380f, 0.101168f },
		1.000000f,
		{ 0.500000f, 0.500000f, 0.500000f },
		96.078430f,
		{ 1.000000f, 1.000000f, 1.000000f },
		60.000000f,
		{ 1.000000f, 1.000000f, 1.000000f },
		1.000000f,
		{ 0.000000f, 0.000000f, 0.000000f },
		2},
		"Green",
		"",
		"",
		"",
		"",
		"",
		"",
		"",
		"",
		"",
	},
};
#define _Bamboo_1_materials_
#endif
/************************************************/
/*  This section contains the model's structure */
/************************************************/
#ifndef _Bamboo_1_batches_
// Use this conveinence array to batch render all geometry by like material.
// Each entry corresponds to the same entry in the materials array above.
// The two numbers provided are the IndexCount and the IndexOffset into the indices array.
// If you need more fine grained control(ex: for transformations) use the OBJ_MESH data below.
const unsigned int Bamboo_1_batches[2][2] =
{
	{ 216, 0 },
	{ 30, 216 },
};
#define _Bamboo_1_batches_
#endif
#ifndef __OBJ_MESH__
typedef struct _OBJ_MESH_
{
	const char* name;
	unsigned    indexCount;
	unsigned    indexOffset;
	unsigned    materialIndex;
}OBJ_MESH;
#define __OBJ_MESH__
#endif
#ifndef _Bamboo_1_meshes_
// Mesh Data follows: Meshes are .obj groups sorted & split by material.
// Meshes are provided in sequential order, sorted by material first and name second.
const OBJ_MESH Bamboo_1_meshes[2] =
{
	{
		"default",
		216,
		0,
		0,
	},
	{
		"default",
		30,
		216,
		1,
	},
};
#define _Bamboo_1_meshes_
#endif

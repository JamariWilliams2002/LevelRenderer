// "Grass_1.h" generated by "Obj2Header.exe" [Version 1.9d] Author: L.Norri Fullsail University.
// Data is converted to left-handed coordinate system and UV data is V flipped for Direct3D/Vulkan.
// The companion file "Grass_1.h2b" is a binary dump of this format(-padding) for more flexibility.
// Loading *.h2b: read version, sizes, handle strings(max len 260) by reading until null-terminated.
/***********************/
/*  Generator version  */
/***********************/
#ifndef _Grass_1_version_
const char Grass_1_version[4] = { '0','1','9','d' };
#define _Grass_1_version_
#endif
/************************************************/
/*  This section contains the model's size data */
/************************************************/
#ifndef _Grass_1_vertexcount_
const unsigned Grass_1_vertexcount = 136;
#define _Grass_1_vertexcount_
#endif
#ifndef _Grass_1_indexcount_
const unsigned Grass_1_indexcount = 192;
#define _Grass_1_indexcount_
#endif
#ifndef _Grass_1_materialcount_
const unsigned Grass_1_materialcount = 1; // can be used for batched draws
#define _Grass_1_materialcount_
#endif
#ifndef _Grass_1_meshcount_
const unsigned Grass_1_meshcount = 1;
#define _Grass_1_meshcount_
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
#ifndef _Grass_1_vertices_
// Raw Vertex Data follows: Positions, Texture Coordinates and Normals.
const OBJ_VERT Grass_1_vertices[136] =
{
	{	{ -0.044570f, 0.059621f, -0.010564f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.361300f, -0.295700f, -0.884300f }	},
	{	{ -0.032534f, -0.015862f, 0.009756f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.361300f, -0.295700f, -0.884300f }	},
	{	{ -0.067546f, -0.015862f, 0.024060f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.361300f, -0.295700f, -0.884300f }	},
	{	{ -0.073182f, 0.059621f, 0.001125f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.361300f, -0.295700f, -0.884300f }	},
	{	{ -0.073182f, 0.059621f, 0.001125f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.375000f, 0.130400f, -0.917800f }	},
	{	{ -0.050040f, 0.237218f, 0.016908f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.375000f, 0.130400f, -0.917800f }	},
	{	{ -0.044570f, 0.059621f, -0.010564f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.375000f, 0.130400f, -0.917800f }	},
	{	{ -0.044077f, 0.059621f, 0.077629f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.784100f, -0.295700f, -0.545700f }	},
	{	{ -0.022927f, -0.015862f, 0.088137f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.784100f, -0.295700f, -0.545700f }	},
	{	{ -0.044530f, -0.015862f, 0.119180f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.784100f, -0.295700f, -0.545700f }	},
	{	{ -0.061732f, 0.059621f, 0.102999f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.784100f, -0.295700f, -0.545700f }	},
	{	{ -0.061732f, 0.059621f, 0.102999f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.813800f, 0.130400f, -0.566300f }	},
	{	{ -0.033729f, 0.237218f, 0.103659f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.813800f, 0.130400f, -0.566300f }	},
	{	{ -0.044077f, 0.059621f, 0.077629f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.813800f, 0.130400f, -0.566300f }	},
	{	{ 0.062703f, 0.059621f, -0.153874f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.783200f, -0.295700f, -0.547000f }	},
	{	{ 0.083835f, -0.015862f, -0.143330f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.783200f, -0.295700f, -0.547000f }	},
	{	{ 0.062180f, -0.015862f, -0.112323f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.783200f, -0.295700f, -0.547000f }	},
	{	{ 0.045005f, 0.059621f, -0.128533f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.783200f, -0.295700f, -0.547000f }	},
	{	{ 0.045005f, 0.059621f, -0.128533f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.812800f, 0.130400f, -0.567700f }	},
	{	{ 0.073007f, 0.237218f, -0.127827f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.812800f, 0.130400f, -0.567700f }	},
	{	{ 0.062703f, 0.059621f, -0.153874f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.812800f, 0.130400f, -0.567700f }	},
	{	{ 0.118674f, 0.059621f, 0.042830f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.347700f, -0.295700f, 0.889800f }	},
	{	{ 0.123958f, -0.015862f, 0.019812f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.347700f, -0.295700f, 0.889800f }	},
	{	{ 0.159185f, -0.015862f, 0.033578f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.347700f, -0.295700f, 0.889800f }	},
	{	{ 0.147462f, 0.059621f, 0.054080f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.347700f, -0.295700f, 0.889800f }	},
	{	{ 0.147462f, 0.059621f, 0.054080f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.360900f, 0.130400f, 0.923500f }	},
	{	{ 0.141571f, 0.237218f, 0.026695f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.360900f, 0.130400f, 0.923500f }	},
	{	{ 0.118674f, 0.059621f, 0.042830f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.360900f, 0.130400f, 0.923500f }	},
	{	{ -0.049767f, -0.014237f, 0.024760f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.359500f, 0.302700f, 0.882700f }	},
	{	{ -0.014756f, -0.014237f, 0.010456f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.359500f, 0.302700f, 0.882700f }	},
	{	{ -0.026730f, 0.059357f, -0.009861f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.359500f, 0.302700f, 0.882700f }	},
	{	{ -0.055357f, 0.059136f, 0.001828f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.359500f, 0.302700f, 0.882700f }	},
	{	{ -0.055357f, 0.059136f, 0.001828f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.375600f, -0.130800f, 0.917500f }	},
	{	{ -0.026730f, 0.059357f, -0.009861f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.375600f, -0.130800f, 0.917500f }	},
	{	{ -0.032475f, 0.235439f, 0.017600f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.375600f, -0.130800f, 0.917500f }	},
	{	{ -0.025933f, -0.015079f, 0.119389f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.783100f, 0.298900f, 0.545400f }	},
	{	{ -0.004329f, -0.015079f, 0.088345f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.783100f, 0.298900f, 0.545400f }	},
	{	{ -0.025464f, 0.059511f, 0.077838f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.783100f, 0.298900f, 0.545400f }	},
	{	{ -0.043121f, 0.059432f, 0.103207f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.783100f, 0.298900f, 0.545400f }	},
	{	{ -0.043121f, 0.059432f, 0.103207f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.813900f, -0.130600f, 0.566100f }	},
	{	{ -0.025464f, 0.059511f, 0.077838f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.813900f, -0.130600f, 0.566100f }	},
	{	{ -0.015184f, 0.236353f, 0.103866f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.813900f, -0.130600f, 0.566100f }	},
	{	{ 0.080777f, -0.015078f, -0.112114f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.782200f, 0.298900f, 0.546700f }	},
	{	{ 0.102432f, -0.015078f, -0.143121f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.782200f, 0.298900f, 0.546700f }	},
	{	{ 0.081315f, 0.059511f, -0.153664f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.782200f, 0.298900f, 0.546700f }	},
	{	{ 0.063615f, 0.059431f, -0.128324f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.782200f, 0.298900f, 0.546700f }	},
	{	{ 0.063615f, 0.059431f, -0.128324f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.813000f, -0.130600f, 0.567400f }	},
	{	{ 0.081315f, 0.059511f, -0.153664f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.813000f, -0.130600f, 0.567400f }	},
	{	{ 0.091552f, 0.236352f, -0.127618f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.813000f, -0.130600f, 0.567400f }	},
	{	{ 0.176886f, -0.014181f, 0.032849f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.345900f, 0.303000f, -0.888000f }	},
	{	{ 0.141659f, -0.014181f, 0.019083f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.345900f, 0.303000f, -0.888000f }	},
	{	{ 0.136424f, 0.059118f, 0.042099f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.345900f, 0.303000f, -0.888000f }	},
	{	{ 0.165228f, 0.059346f, 0.053348f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.345900f, 0.303000f, -0.888000f }	},
	{	{ 0.165228f, 0.059346f, 0.053348f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.361600f, -0.130800f, -0.923100f }	},
	{	{ 0.136424f, 0.059118f, 0.042099f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.361600f, -0.130800f, -0.923100f }	},
	{	{ 0.159046f, 0.235379f, 0.025975f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.361600f, -0.130800f, -0.923100f }	},
	{	{ -0.049767f, -0.014237f, 0.024760f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.047000f, 0.290900f, 0.955600f }	},
	{	{ -0.055357f, 0.059136f, 0.001828f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.047000f, 0.290900f, 0.955600f }	},
	{	{ -0.073182f, 0.059621f, 0.001125f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.047000f, 0.290900f, 0.955600f }	},
	{	{ -0.067546f, -0.015862f, 0.024060f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.047000f, 0.290900f, 0.955600f }	},
	{	{ -0.014756f, -0.014237f, 0.010456f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.081400f, -0.976600f, 0.199300f }	},
	{	{ -0.049767f, -0.014237f, 0.024760f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.081400f, -0.976600f, 0.199300f }	},
	{	{ -0.067546f, -0.015862f, 0.024060f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.081400f, -0.976600f, 0.199300f }	},
	{	{ -0.032534f, -0.015862f, 0.009756f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.081400f, -0.976600f, 0.199300f }	},
	{	{ -0.026730f, 0.059357f, -0.009861f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.047800f, -0.255500f, -0.965600f }	},
	{	{ -0.014756f, -0.014237f, 0.010456f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.047800f, -0.255500f, -0.965600f }	},
	{	{ -0.032534f, -0.015862f, 0.009756f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.047800f, -0.255500f, -0.965600f }	},
	{	{ -0.044570f, 0.059621f, -0.010564f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.047800f, -0.255500f, -0.965600f }	},
	{	{ -0.032475f, 0.235439f, 0.017600f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.044500f, -0.083000f, 0.995600f }	},
	{	{ -0.050040f, 0.237218f, 0.016908f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.044500f, -0.083000f, 0.995600f }	},
	{	{ -0.073182f, 0.059621f, 0.001125f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.044500f, -0.083000f, 0.995600f }	},
	{	{ -0.055357f, 0.059136f, 0.001828f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.044500f, -0.083000f, 0.995600f }	},
	{	{ -0.032475f, 0.235439f, 0.017600f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.047800f, 0.154800f, -0.986800f }	},
	{	{ -0.026730f, 0.059357f, -0.009861f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.047800f, 0.154800f, -0.986800f }	},
	{	{ -0.044570f, 0.059621f, -0.010564f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.047800f, 0.154800f, -0.986800f }	},
	{	{ -0.050040f, 0.237218f, 0.016908f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.047800f, 0.154800f, -0.986800f }	},
	{	{ -0.025933f, -0.015079f, 0.119389f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.014300f, 0.207800f, 0.978100f }	},
	{	{ -0.043121f, 0.059432f, 0.103207f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.014300f, 0.207800f, 0.978100f }	},
	{	{ -0.061732f, 0.059621f, 0.102999f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.014300f, 0.207800f, 0.978100f }	},
	{	{ -0.044530f, -0.015862f, 0.119180f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.014300f, 0.207800f, 0.978100f }	},
	{	{ -0.004329f, -0.015079f, 0.088345f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.041700f, -0.998700f, 0.029000f }	},
	{	{ -0.025933f, -0.015079f, 0.119389f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.041700f, -0.998700f, 0.029000f }	},
	{	{ -0.044530f, -0.015862f, 0.119180f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.041700f, -0.998700f, 0.029000f }	},
	{	{ -0.022927f, -0.015862f, 0.088137f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.041700f, -0.998700f, 0.029000f }	},
	{	{ -0.025464f, 0.059511f, 0.077838f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.013500f, -0.134900f, -0.990800f }	},
	{	{ -0.004329f, -0.015079f, 0.088345f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.013500f, -0.134900f, -0.990800f }	},
	{	{ -0.022927f, -0.015862f, 0.088137f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.013500f, -0.134900f, -0.990800f }	},
	{	{ -0.044077f, 0.059621f, 0.077629f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.013500f, -0.134900f, -0.990800f }	},
	{	{ -0.043121f, 0.059432f, 0.103207f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.011300f, -0.001900f, 0.999900f }	},
	{	{ -0.015184f, 0.236353f, 0.103866f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.011300f, -0.001900f, 0.999900f }	},
	{	{ -0.033729f, 0.237218f, 0.103659f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.011300f, -0.001900f, 0.999900f }	},
	{	{ -0.061732f, 0.059621f, 0.102999f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.011300f, -0.001900f, 0.999900f }	},
	{	{ -0.015184f, 0.236353f, 0.103866f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.014900f, 0.144500f, -0.989400f }	},
	{	{ -0.025464f, 0.059511f, 0.077838f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.014900f, 0.144500f, -0.989400f }	},
	{	{ -0.044077f, 0.059621f, 0.077629f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.014900f, 0.144500f, -0.989400f }	},
	{	{ -0.033729f, 0.237218f, 0.103659f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.014900f, 0.144500f, -0.989400f }	},
	{	{ 0.080777f, -0.015078f, -0.112114f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.014300f, 0.208100f, 0.978000f }	},
	{	{ 0.063615f, 0.059431f, -0.128324f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.014300f, 0.208100f, 0.978000f }	},
	{	{ 0.045005f, 0.059621f, -0.128533f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.014300f, 0.208100f, 0.978000f }	},
	{	{ 0.062180f, -0.015862f, -0.112323f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.014300f, 0.208100f, 0.978000f }	},
	{	{ 0.102432f, -0.015078f, -0.143121f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.041800f, -0.998700f, 0.029200f }	},
	{	{ 0.080777f, -0.015078f, -0.112114f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.041800f, -0.998700f, 0.029200f }	},
	{	{ 0.062180f, -0.015862f, -0.112323f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.041800f, -0.998700f, 0.029200f }	},
	{	{ 0.083835f, -0.015862f, -0.143330f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.041800f, -0.998700f, 0.029200f }	},
	{	{ 0.081315f, 0.059511f, -0.153664f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.013600f, -0.135400f, -0.990700f }	},
	{	{ 0.102432f, -0.015078f, -0.143121f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.013600f, -0.135400f, -0.990700f }	},
	{	{ 0.083835f, -0.015862f, -0.143330f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.013600f, -0.135400f, -0.990700f }	},
	{	{ 0.062703f, 0.059621f, -0.153874f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.013600f, -0.135400f, -0.990700f }	},
	{	{ 0.063615f, 0.059431f, -0.128324f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.011300f, -0.002200f, 0.999900f }	},
	{	{ 0.091552f, 0.236352f, -0.127618f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.011300f, -0.002200f, 0.999900f }	},
	{	{ 0.073007f, 0.237218f, -0.127827f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.011300f, -0.002200f, 0.999900f }	},
	{	{ 0.045005f, 0.059621f, -0.128533f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.011300f, -0.002200f, 0.999900f }	},
	{	{ 0.091552f, 0.236352f, -0.127618f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.014900f, 0.144500f, -0.989400f }	},
	{	{ 0.081315f, 0.059511f, -0.153664f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.014900f, 0.144500f, -0.989400f }	},
	{	{ 0.062703f, 0.059621f, -0.153874f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.014900f, 0.144500f, -0.989400f }	},
	{	{ 0.073007f, 0.237218f, -0.127827f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.014900f, 0.144500f, -0.989400f }	},
	{	{ 0.176886f, -0.014181f, 0.032849f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.050000f, -0.257700f, 0.964900f }	},
	{	{ 0.165228f, 0.059346f, 0.053348f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.050000f, -0.257700f, 0.964900f }	},
	{	{ 0.147462f, 0.059621f, 0.054080f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.050000f, -0.257700f, 0.964900f }	},
	{	{ 0.159185f, -0.015862f, 0.033578f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.050000f, -0.257700f, 0.964900f }	},
	{	{ 0.141659f, -0.014181f, 0.019083f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.083600f, -0.973200f, -0.214000f }	},
	{	{ 0.176886f, -0.014181f, 0.032849f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.083600f, -0.973200f, -0.214000f }	},
	{	{ 0.159185f, -0.015862f, 0.033578f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.083600f, -0.973200f, -0.214000f }	},
	{	{ 0.123958f, -0.015862f, 0.019812f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.083600f, -0.973200f, -0.214000f }	},
	{	{ 0.136424f, 0.059118f, 0.042099f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.049000f, 0.292100f, -0.955100f }	},
	{	{ 0.141659f, -0.014181f, 0.019083f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.049000f, 0.292100f, -0.955100f }	},
	{	{ 0.123958f, -0.015862f, 0.019812f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.049000f, 0.292100f, -0.955100f }	},
	{	{ 0.118674f, 0.059621f, 0.042830f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.049000f, 0.292100f, -0.955100f }	},
	{	{ 0.165228f, 0.059346f, 0.053348f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.049900f, 0.154500f, 0.986700f }	},
	{	{ 0.159046f, 0.235379f, 0.025975f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.049900f, 0.154500f, 0.986700f }	},
	{	{ 0.141571f, 0.237218f, 0.026695f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.049900f, 0.154500f, 0.986700f }	},
	{	{ 0.147462f, 0.059621f, 0.054080f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.049900f, 0.154500f, 0.986700f }	},
	{	{ 0.159046f, 0.235379f, 0.025975f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.046600f, -0.084700f, -0.995300f }	},
	{	{ 0.136424f, 0.059118f, 0.042099f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.046600f, -0.084700f, -0.995300f }	},
	{	{ 0.118674f, 0.059621f, 0.042830f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.046600f, -0.084700f, -0.995300f }	},
	{	{ 0.141571f, 0.237218f, 0.026695f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.046600f, -0.084700f, -0.995300f }	},
};
#define _Grass_1_vertices_
#endif
#ifndef _Grass_1_indices_
// Index Data follows: Sequential by mesh, Every Three Indices == One Triangle.
const unsigned int Grass_1_indices[192] =
{
	 0, 1, 2,
	 3, 0, 2,
	 4, 5, 6,
	 7, 8, 9,
	 10, 7, 9,
	 11, 12, 13,
	 14, 15, 16,
	 17, 14, 16,
	 18, 19, 20,
	 21, 22, 23,
	 24, 21, 23,
	 25, 26, 27,
	 28, 29, 30,
	 31, 28, 30,
	 32, 33, 34,
	 35, 36, 37,
	 38, 35, 37,
	 39, 40, 41,
	 42, 43, 44,
	 45, 42, 44,
	 46, 47, 48,
	 49, 50, 51,
	 52, 49, 51,
	 53, 54, 55,
	 56, 57, 58,
	 59, 56, 58,
	 60, 61, 62,
	 63, 60, 62,
	 64, 65, 66,
	 67, 64, 66,
	 68, 69, 70,
	 71, 68, 70,
	 72, 73, 74,
	 75, 72, 74,
	 76, 77, 78,
	 79, 76, 78,
	 80, 81, 82,
	 83, 80, 82,
	 84, 85, 86,
	 87, 84, 86,
	 88, 89, 90,
	 91, 88, 90,
	 92, 93, 94,
	 95, 92, 94,
	 96, 97, 98,
	 99, 96, 98,
	 100, 101, 102,
	 103, 100, 102,
	 104, 105, 106,
	 107, 104, 106,
	 108, 109, 110,
	 111, 108, 110,
	 112, 113, 114,
	 115, 112, 114,
	 116, 117, 118,
	 119, 116, 118,
	 120, 121, 122,
	 123, 120, 122,
	 124, 125, 126,
	 127, 124, 126,
	 128, 129, 130,
	 131, 128, 130,
	 132, 133, 134,
	 135, 132, 134,
};
#define _Grass_1_indices_
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
#ifndef _Grass_1_materials_
// Material Data follows: pulled from a .mtl file of the same name if present.
const OBJ_MATERIAL Grass_1_materials[1] =
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
		"Green_Grass",
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
#define _Grass_1_materials_
#endif
/************************************************/
/*  This section contains the model's structure */
/************************************************/
#ifndef _Grass_1_batches_
// Use this conveinence array to batch render all geometry by like material.
// Each entry corresponds to the same entry in the materials array above.
// The two numbers provided are the IndexCount and the IndexOffset into the indices array.
// If you need more fine grained control(ex: for transformations) use the OBJ_MESH data below.
const unsigned int Grass_1_batches[1][2] =
{
	{ 192, 0 },
};
#define _Grass_1_batches_
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
#ifndef _Grass_1_meshes_
// Mesh Data follows: Meshes are .obj groups sorted & split by material.
// Meshes are provided in sequential order, sorted by material first and name second.
const OBJ_MESH Grass_1_meshes[1] =
{
	{
		"default",
		192,
		0,
		0,
	},
};
#define _Grass_1_meshes_
#endif
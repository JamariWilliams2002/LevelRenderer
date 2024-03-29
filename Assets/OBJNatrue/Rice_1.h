// "Rice_1.h" generated by "Obj2Header.exe" [Version 1.9d] Author: L.Norri Fullsail University.
// Data is converted to left-handed coordinate system and UV data is V flipped for Direct3D/Vulkan.
// The companion file "Rice_1.h2b" is a binary dump of this format(-padding) for more flexibility.
// Loading *.h2b: read version, sizes, handle strings(max len 260) by reading until null-terminated.
/***********************/
/*  Generator version  */
/***********************/
#ifndef _Rice_1_version_
const char Rice_1_version[4] = { '0','1','9','d' };
#define _Rice_1_version_
#endif
/************************************************/
/*  This section contains the model's size data */
/************************************************/
#ifndef _Rice_1_vertexcount_
const unsigned Rice_1_vertexcount = 180;
#define _Rice_1_vertexcount_
#endif
#ifndef _Rice_1_indexcount_
const unsigned Rice_1_indexcount = 264;
#define _Rice_1_indexcount_
#endif
#ifndef _Rice_1_materialcount_
const unsigned Rice_1_materialcount = 1; // can be used for batched draws
#define _Rice_1_materialcount_
#endif
#ifndef _Rice_1_meshcount_
const unsigned Rice_1_meshcount = 1;
#define _Rice_1_meshcount_
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
#ifndef _Rice_1_vertices_
// Raw Vertex Data follows: Positions, Texture Coordinates and Normals.
const OBJ_VERT Rice_1_vertices[180] =
{
	{	{ -0.013730f, 0.203738f, -0.013770f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.959800f, -0.117700f, -0.254700f }	},
	{	{ -0.006329f, 0.122284f, -0.004032f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.959800f, -0.117700f, -0.254700f }	},
	{	{ -0.007837f, 0.122315f, 0.001649f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.959800f, -0.117700f, -0.254700f }	},
	{	{ -0.019470f, 0.203882f, 0.007777f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.959800f, -0.117700f, -0.254700f }	},
	{	{ -0.037090f, 0.270872f, 0.006218f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.935500f, -0.251600f, -0.248200f }	},
	{	{ -0.029677f, 0.270612f, -0.021391f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.935500f, -0.251600f, -0.248200f }	},
	{	{ -0.013730f, 0.203738f, -0.013770f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.935500f, -0.251600f, -0.248200f }	},
	{	{ -0.019470f, 0.203882f, 0.007777f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.935500f, -0.251600f, -0.248200f }	},
	{	{ -0.052302f, 0.303810f, 0.003372f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.875200f, -0.427200f, -0.227000f }	},
	{	{ -0.047627f, 0.305558f, -0.018426f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.875200f, -0.427200f, -0.227000f }	},
	{	{ -0.029677f, 0.270612f, -0.021391f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.875200f, -0.427200f, -0.227000f }	},
	{	{ -0.037090f, 0.270872f, 0.006218f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.875200f, -0.427200f, -0.227000f }	},
	{	{ -0.078746f, 0.339373f, -0.007265f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.753000f, -0.622700f, -0.212800f }	},
	{	{ -0.077318f, 0.339680f, -0.013079f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.753000f, -0.622700f, -0.212800f }	},
	{	{ -0.047627f, 0.305558f, -0.018426f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.753000f, -0.622700f, -0.212800f }	},
	{	{ -0.052302f, 0.303810f, 0.003372f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.753000f, -0.622700f, -0.212800f }	},
	{	{ -0.078746f, 0.339373f, -0.007265f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.625000f, -0.756300f, -0.193400f }	},
	{	{ -0.084328f, 0.344974f, -0.011124f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.625000f, -0.756300f, -0.193400f }	},
	{	{ -0.077318f, 0.339680f, -0.013079f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.625000f, -0.756300f, -0.193400f }	},
	{	{ -0.006345f, 0.000949f, -0.004028f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.966600f, 0.000100f, -0.256300f }	},
	{	{ -0.007850f, 0.000949f, 0.001653f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.966600f, 0.000100f, -0.256300f }	},
	{	{ -0.007837f, 0.122315f, 0.001649f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.966600f, 0.000100f, -0.256300f }	},
	{	{ -0.006329f, 0.122284f, -0.004032f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.966600f, 0.000100f, -0.256300f }	},
	{	{ -0.003357f, 0.221473f, -0.013493f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.983600f, 0.110000f, 0.143000f }	},
	{	{ -0.008656f, 0.137814f, -0.003329f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.983600f, 0.110000f, 0.143000f }	},
	{	{ -0.010420f, 0.137814f, 0.002277f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.983600f, 0.110000f, 0.143000f }	},
	{	{ 0.002355f, 0.221489f, 0.008047f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.983600f, 0.110000f, 0.143000f }	},
	{	{ 0.020450f, 0.290169f, 0.006495f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.935400f, 0.251900f, 0.248200f }	},
	{	{ 0.013084f, 0.290006f, -0.021070f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.935400f, 0.251900f, 0.248200f }	},
	{	{ -0.003357f, 0.221473f, -0.013493f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.935400f, 0.251900f, 0.248200f }	},
	{	{ 0.002355f, 0.221489f, 0.008047f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.935400f, 0.251900f, 0.248200f }	},
	{	{ 0.036560f, 0.324998f, 0.003626f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.875300f, 0.427000f, 0.227000f }	},
	{	{ 0.031971f, 0.326838f, -0.018065f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.875300f, 0.427000f, 0.227000f }	},
	{	{ 0.013084f, 0.290006f, -0.021070f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.875300f, 0.427000f, 0.227000f }	},
	{	{ 0.020450f, 0.290169f, 0.006495f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.875300f, 0.427000f, 0.227000f }	},
	{	{ 0.064265f, 0.362255f, -0.006986f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.754200f, 0.621100f, 0.213000f }	},
	{	{ 0.062986f, 0.362686f, -0.012698f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.754200f, 0.621100f, 0.213000f }	},
	{	{ 0.031971f, 0.326838f, -0.018065f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.754200f, 0.621100f, 0.213000f }	},
	{	{ 0.036560f, 0.324998f, 0.003626f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.754200f, 0.621100f, 0.213000f }	},
	{	{ 0.064265f, 0.362255f, -0.006986f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.631300f, 0.749900f, 0.197900f }	},
	{	{ 0.070861f, 0.368816f, -0.010804f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.631300f, 0.749900f, 0.197900f }	},
	{	{ 0.062986f, 0.362686f, -0.012698f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.631300f, 0.749900f, 0.197900f }	},
	{	{ -0.002880f, 0.122709f, 0.000357f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.959900f, 0.117800f, 0.254400f }	},
	{	{ -0.001375f, 0.122709f, -0.005324f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.959900f, 0.117800f, 0.254400f }	},
	{	{ -0.008908f, 0.205040f, -0.015028f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.959900f, 0.117800f, 0.254400f }	},
	{	{ -0.014617f, 0.205040f, 0.006512f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.959900f, 0.117800f, 0.254400f }	},
	{	{ -0.008908f, 0.205040f, -0.015028f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.935500f, 0.251800f, 0.247900f }	},
	{	{ -0.025163f, 0.272861f, -0.022570f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.935500f, 0.251800f, 0.247900f }	},
	{	{ -0.032474f, 0.272861f, 0.005013f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.935500f, 0.251800f, 0.247900f }	},
	{	{ -0.014617f, 0.205040f, 0.006512f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.935500f, 0.251800f, 0.247900f }	},
	{	{ -0.025163f, 0.272861f, -0.022570f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.875300f, 0.427100f, 0.226800f }	},
	{	{ -0.043687f, 0.308828f, -0.019450f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.875300f, 0.427100f, 0.226800f }	},
	{	{ -0.048134f, 0.306733f, 0.002284f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.875300f, 0.427100f, 0.226800f }	},
	{	{ -0.032474f, 0.272861f, 0.005013f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.875300f, 0.427100f, 0.226800f }	},
	{	{ -0.043687f, 0.308828f, -0.019450f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.753300f, 0.621800f, 0.214100f }	},
	{	{ -0.074106f, 0.343772f, -0.013901f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.753300f, 0.621800f, 0.214100f }	},
	{	{ -0.075281f, 0.343218f, -0.008158f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.753300f, 0.621800f, 0.214100f }	},
	{	{ -0.048134f, 0.306733f, 0.002284f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.753300f, 0.621800f, 0.214100f }	},
	{	{ -0.075281f, 0.343218f, -0.008158f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.627100f, 0.752600f, 0.200800f }	},
	{	{ -0.074106f, 0.343772f, -0.013901f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.627100f, 0.752600f, 0.200800f }	},
	{	{ -0.081465f, 0.349356f, -0.011850f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.627100f, 0.752600f, 0.200800f }	},
	{	{ -0.002880f, 0.122709f, 0.000357f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.966600f, 0.000000f, 0.256200f }	},
	{	{ -0.002880f, 0.000949f, 0.000357f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.966600f, 0.000000f, 0.256200f }	},
	{	{ -0.001375f, 0.000949f, -0.005324f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.966600f, 0.000000f, 0.256200f }	},
	{	{ -0.001375f, 0.122709f, -0.005324f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.966600f, 0.000000f, 0.256200f }	},
	{	{ -0.005466f, 0.137201f, 0.000752f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.983600f, -0.109800f, -0.142900f }	},
	{	{ -0.003701f, 0.137201f, -0.004854f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.983600f, -0.109800f, -0.142900f }	},
	{	{ 0.001527f, 0.220414f, -0.015028f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.983600f, -0.109800f, -0.142900f }	},
	{	{ 0.007235f, 0.220414f, 0.006512f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.983600f, -0.109800f, -0.142900f }	},
	{	{ 0.001527f, 0.220414f, -0.015028f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.935500f, -0.251800f, -0.247900f }	},
	{	{ 0.017782f, 0.288235f, -0.022570f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.935500f, -0.251800f, -0.247900f }	},
	{	{ 0.025092f, 0.288235f, 0.005013f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.935500f, -0.251800f, -0.247900f }	},
	{	{ 0.007235f, 0.220414f, 0.006512f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.935500f, -0.251800f, -0.247900f }	},
	{	{ 0.017782f, 0.288235f, -0.022570f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.875300f, -0.427100f, -0.226800f }	},
	{	{ 0.036305f, 0.324202f, -0.019450f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.875300f, -0.427100f, -0.226800f }	},
	{	{ 0.040752f, 0.322107f, 0.002284f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.875300f, -0.427100f, -0.226800f }	},
	{	{ 0.025092f, 0.288235f, 0.005013f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.875300f, -0.427100f, -0.226800f }	},
	{	{ 0.036305f, 0.324202f, -0.019450f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.753300f, -0.621800f, -0.214100f }	},
	{	{ 0.066724f, 0.359146f, -0.013901f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.753300f, -0.621800f, -0.214100f }	},
	{	{ 0.067899f, 0.358592f, -0.008158f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.753300f, -0.621800f, -0.214100f }	},
	{	{ 0.040752f, 0.322107f, 0.002284f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.753300f, -0.621800f, -0.214100f }	},
	{	{ 0.067899f, 0.358592f, -0.008158f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.627100f, -0.752600f, -0.200800f }	},
	{	{ 0.066724f, 0.359146f, -0.013901f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.627100f, -0.752600f, -0.200800f }	},
	{	{ 0.074083f, 0.364729f, -0.011850f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.627100f, -0.752600f, -0.200800f }	},
	{	{ -0.002880f, 0.122709f, 0.000357f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.257500f, -0.035700f, 0.965600f }	},
	{	{ -0.014617f, 0.205040f, 0.006512f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.257500f, -0.035700f, 0.965600f }	},
	{	{ -0.019470f, 0.203882f, 0.007777f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.257500f, -0.035700f, 0.965600f }	},
	{	{ -0.007837f, 0.122315f, 0.001649f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.257500f, -0.035700f, 0.965600f }	},
	{	{ -0.008908f, 0.205040f, -0.015028f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.227600f, -0.135200f, -0.964300f }	},
	{	{ -0.001375f, 0.122709f, -0.005324f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.227600f, -0.135200f, -0.964300f }	},
	{	{ -0.006329f, 0.122284f, -0.004032f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.227600f, -0.135200f, -0.964300f }	},
	{	{ -0.013730f, 0.203738f, -0.013770f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.227600f, -0.135200f, -0.964300f }	},
	{	{ -0.014617f, 0.205040f, 0.006512f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.226200f, 0.081500f, 0.970700f }	},
	{	{ -0.032474f, 0.272861f, 0.005013f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.226200f, 0.081500f, 0.970700f }	},
	{	{ -0.037090f, 0.270872f, 0.006218f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.226200f, 0.081500f, 0.970700f }	},
	{	{ -0.019470f, 0.203882f, 0.007777f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.226200f, 0.081500f, 0.970700f }	},
	{	{ -0.025163f, 0.272861f, -0.022570f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.193700f, -0.155400f, -0.968700f }	},
	{	{ -0.008908f, 0.205040f, -0.015028f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.193700f, -0.155400f, -0.968700f }	},
	{	{ -0.013730f, 0.203738f, -0.013770f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.193700f, -0.155400f, -0.968700f }	},
	{	{ -0.029677f, 0.270612f, -0.021391f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.193700f, -0.155400f, -0.968700f }	},
	{	{ -0.032474f, 0.272861f, 0.005013f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.165800f, 0.157800f, 0.973400f }	},
	{	{ -0.048134f, 0.306733f, 0.002284f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.165800f, 0.157800f, 0.973400f }	},
	{	{ -0.052302f, 0.303810f, 0.003372f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.165800f, 0.157800f, 0.973400f }	},
	{	{ -0.037090f, 0.270872f, 0.006218f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.165800f, 0.157800f, 0.973400f }	},
	{	{ -0.043687f, 0.308828f, -0.019450f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.230500f, -0.035100f, -0.972400f }	},
	{	{ -0.025163f, 0.272861f, -0.022570f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.230500f, -0.035100f, -0.972400f }	},
	{	{ -0.029677f, 0.270612f, -0.021391f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.230500f, -0.035100f, -0.972400f }	},
	{	{ -0.047627f, 0.305558f, -0.018426f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.230500f, -0.035100f, -0.972400f }	},
	{	{ -0.048134f, 0.306733f, 0.002284f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.000000f, 0.280800f, 0.959800f }	},
	{	{ -0.075281f, 0.343218f, -0.008158f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.000000f, 0.280800f, 0.959800f }	},
	{	{ -0.078746f, 0.339373f, -0.007265f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.000000f, 0.280800f, 0.959800f }	},
	{	{ -0.052302f, 0.303810f, 0.003372f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.000000f, 0.280800f, 0.959800f }	},
	{	{ -0.074106f, 0.343772f, -0.013901f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.216400f, -0.034500f, -0.975700f }	},
	{	{ -0.043687f, 0.308828f, -0.019450f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.216400f, -0.034500f, -0.975700f }	},
	{	{ -0.047627f, 0.305558f, -0.018426f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.216400f, -0.034500f, -0.975700f }	},
	{	{ -0.077318f, 0.339680f, -0.013079f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.216400f, -0.034500f, -0.975700f }	},
	{	{ -0.075281f, 0.343218f, -0.008158f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.228600f, 0.354200f, 0.906800f }	},
	{	{ -0.081465f, 0.349356f, -0.011850f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.228600f, 0.354200f, 0.906800f }	},
	{	{ -0.084328f, 0.344974f, -0.011124f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.228600f, 0.354200f, 0.906800f }	},
	{	{ -0.078746f, 0.339373f, -0.007265f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.228600f, 0.354200f, 0.906800f }	},
	{	{ -0.081465f, 0.349356f, -0.011850f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.261000f, 0.010700f, -0.965300f }	},
	{	{ -0.074106f, 0.343772f, -0.013901f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.261000f, 0.010700f, -0.965300f }	},
	{	{ -0.077318f, 0.339680f, -0.013079f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.261000f, 0.010700f, -0.965300f }	},
	{	{ -0.084328f, 0.344974f, -0.011124f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.261000f, 0.010700f, -0.965300f }	},
	{	{ -0.001375f, 0.000949f, -0.005324f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.000000f, -1.000000f, -0.000000f }	},
	{	{ -0.002880f, 0.000949f, 0.000357f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.000000f, -1.000000f, -0.000000f }	},
	{	{ -0.007850f, 0.000949f, 0.001653f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.000000f, -1.000000f, -0.000000f }	},
	{	{ -0.006345f, 0.000949f, -0.004028f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.000000f, -1.000000f, -0.000000f }	},
	{	{ -0.001375f, 0.122709f, -0.005324f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.252400f, 0.000000f, -0.967600f }	},
	{	{ -0.001375f, 0.000949f, -0.005324f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.252400f, 0.000000f, -0.967600f }	},
	{	{ -0.006345f, 0.000949f, -0.004028f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.252400f, 0.000000f, -0.967600f }	},
	{	{ -0.006329f, 0.122284f, -0.004032f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.252400f, 0.000000f, -0.967600f }	},
	{	{ -0.002880f, 0.000949f, 0.000357f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.252400f, -0.000000f, 0.967600f }	},
	{	{ -0.002880f, 0.122709f, 0.000357f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.252400f, -0.000000f, 0.967600f }	},
	{	{ -0.007837f, 0.122315f, 0.001649f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.252400f, -0.000000f, 0.967600f }	},
	{	{ -0.007850f, 0.000949f, 0.001653f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.252400f, -0.000000f, 0.967600f }	},
	{	{ 0.007235f, 0.220414f, 0.006512f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.278300f, -0.108400f, 0.954300f }	},
	{	{ 0.002355f, 0.221489f, 0.008047f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.278300f, -0.108400f, 0.954300f }	},
	{	{ -0.010420f, 0.137814f, 0.002277f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.278300f, -0.108400f, 0.954300f }	},
	{	{ -0.005466f, 0.137201f, 0.000752f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.278300f, -0.108400f, 0.954300f }	},
	{	{ -0.003701f, 0.137201f, -0.004854f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.135600f, -0.989800f, -0.042700f }	},
	{	{ -0.005466f, 0.137201f, 0.000752f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.135600f, -0.989800f, -0.042700f }	},
	{	{ -0.010420f, 0.137814f, 0.002277f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.135600f, -0.989800f, -0.042700f }	},
	{	{ -0.008656f, 0.137814f, -0.003329f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.135600f, -0.989800f, -0.042700f }	},
	{	{ 0.001527f, 0.220414f, -0.015028f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.310400f, -0.095700f, -0.945800f }	},
	{	{ -0.003701f, 0.137201f, -0.004854f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.310400f, -0.095700f, -0.945800f }	},
	{	{ -0.008656f, 0.137814f, -0.003329f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.310400f, -0.095700f, -0.945800f }	},
	{	{ -0.003357f, 0.221473f, -0.013493f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.310400f, -0.095700f, -0.945800f }	},
	{	{ 0.007235f, 0.220414f, 0.006512f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.286000f, -0.054000f, 0.956700f }	},
	{	{ 0.025092f, 0.288235f, 0.005013f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.286000f, -0.054000f, 0.956700f }	},
	{	{ 0.020450f, 0.290169f, 0.006495f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.286000f, -0.054000f, 0.956700f }	},
	{	{ 0.002355f, 0.221489f, 0.008047f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.286000f, -0.054000f, 0.956700f }	},
	{	{ 0.017782f, 0.288235f, -0.022570f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.310100f, -0.031000f, -0.950200f }	},
	{	{ 0.001527f, 0.220414f, -0.015028f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.310100f, -0.031000f, -0.950200f }	},
	{	{ -0.003357f, 0.221473f, -0.013493f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.310100f, -0.031000f, -0.950200f }	},
	{	{ 0.013084f, 0.290006f, -0.021070f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.310100f, -0.031000f, -0.950200f }	},
	{	{ 0.040752f, 0.322107f, 0.002284f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.278700f, -0.050800f, 0.959000f }	},
	{	{ 0.036560f, 0.324998f, 0.003626f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.278700f, -0.050800f, 0.959000f }	},
	{	{ 0.020450f, 0.290169f, 0.006495f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.278700f, -0.050800f, 0.959000f }	},
	{	{ 0.025092f, 0.288235f, 0.005013f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.278700f, -0.050800f, 0.959000f }	},
	{	{ 0.017782f, 0.288235f, -0.022570f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.213200f, 0.190200f, -0.958300f }	},
	{	{ 0.013084f, 0.290006f, -0.021070f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.213200f, 0.190200f, -0.958300f }	},
	{	{ 0.031971f, 0.326838f, -0.018065f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.213200f, 0.190200f, -0.958300f }	},
	{	{ 0.036305f, 0.324202f, -0.019450f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.213200f, 0.190200f, -0.958300f }	},
	{	{ 0.040752f, 0.322107f, 0.002284f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.326200f, 0.027200f, 0.944900f }	},
	{	{ 0.067899f, 0.358592f, -0.008158f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.326200f, 0.027200f, 0.944900f }	},
	{	{ 0.064265f, 0.362255f, -0.006986f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.326200f, 0.027200f, 0.944900f }	},
	{	{ 0.036560f, 0.324998f, 0.003626f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.326200f, 0.027200f, 0.944900f }	},
	{	{ 0.066724f, 0.359146f, -0.013901f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.117000f, 0.249800f, -0.961200f }	},
	{	{ 0.036305f, 0.324202f, -0.019450f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.117000f, 0.249800f, -0.961200f }	},
	{	{ 0.031971f, 0.326838f, -0.018065f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.117000f, 0.249800f, -0.961200f }	},
	{	{ 0.062986f, 0.362686f, -0.012698f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.117000f, 0.249800f, -0.961200f }	},
	{	{ 0.067899f, 0.358592f, -0.008158f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.418300f, 0.112100f, 0.901400f }	},
	{	{ 0.074083f, 0.364729f, -0.011850f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.418300f, 0.112100f, 0.901400f }	},
	{	{ 0.070861f, 0.368816f, -0.010804f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.418300f, 0.112100f, 0.901400f }	},
	{	{ 0.064265f, 0.362255f, -0.006986f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.418300f, 0.112100f, 0.901400f }	},
	{	{ 0.074083f, 0.364729f, -0.011850f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.018100f, 0.297900f, -0.954400f }	},
	{	{ 0.066724f, 0.359146f, -0.013901f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.018100f, 0.297900f, -0.954400f }	},
	{	{ 0.062986f, 0.362686f, -0.012698f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.018100f, 0.297900f, -0.954400f }	},
	{	{ 0.070861f, 0.368816f, -0.010804f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.018100f, 0.297900f, -0.954400f }	},
};
#define _Rice_1_vertices_
#endif
#ifndef _Rice_1_indices_
// Index Data follows: Sequential by mesh, Every Three Indices == One Triangle.
const unsigned int Rice_1_indices[264] =
{
	 0, 1, 2,
	 3, 0, 2,
	 4, 5, 6,
	 7, 4, 6,
	 8, 9, 10,
	 11, 8, 10,
	 12, 13, 14,
	 15, 12, 14,
	 16, 17, 18,
	 19, 20, 21,
	 22, 19, 21,
	 23, 24, 25,
	 26, 23, 25,
	 27, 28, 29,
	 30, 27, 29,
	 31, 32, 33,
	 34, 31, 33,
	 35, 36, 37,
	 38, 35, 37,
	 39, 40, 41,
	 42, 43, 44,
	 45, 42, 44,
	 46, 47, 48,
	 49, 46, 48,
	 50, 51, 52,
	 53, 50, 52,
	 54, 55, 56,
	 57, 54, 56,
	 58, 59, 60,
	 61, 62, 63,
	 64, 61, 63,
	 65, 66, 67,
	 68, 65, 67,
	 69, 70, 71,
	 72, 69, 71,
	 73, 74, 75,
	 76, 73, 75,
	 77, 78, 79,
	 80, 77, 79,
	 81, 82, 83,
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
	 136, 137, 138,
	 139, 136, 138,
	 140, 141, 142,
	 143, 140, 142,
	 144, 145, 146,
	 147, 144, 146,
	 148, 149, 150,
	 151, 148, 150,
	 152, 153, 154,
	 155, 152, 154,
	 156, 157, 158,
	 159, 156, 158,
	 160, 161, 162,
	 163, 160, 162,
	 164, 165, 166,
	 167, 164, 166,
	 168, 169, 170,
	 171, 168, 170,
	 172, 173, 174,
	 175, 172, 174,
	 176, 177, 178,
	 179, 176, 178,
};
#define _Rice_1_indices_
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
#ifndef _Rice_1_materials_
// Material Data follows: pulled from a .mtl file of the same name if present.
const OBJ_MATERIAL Rice_1_materials[1] =
{
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
#define _Rice_1_materials_
#endif
/************************************************/
/*  This section contains the model's structure */
/************************************************/
#ifndef _Rice_1_batches_
// Use this conveinence array to batch render all geometry by like material.
// Each entry corresponds to the same entry in the materials array above.
// The two numbers provided are the IndexCount and the IndexOffset into the indices array.
// If you need more fine grained control(ex: for transformations) use the OBJ_MESH data below.
const unsigned int Rice_1_batches[1][2] =
{
	{ 264, 0 },
};
#define _Rice_1_batches_
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
#ifndef _Rice_1_meshes_
// Mesh Data follows: Meshes are .obj groups sorted & split by material.
// Meshes are provided in sequential order, sorted by material first and name second.
const OBJ_MESH Rice_1_meshes[1] =
{
	{
		"default",
		264,
		0,
		0,
	},
};
#define _Rice_1_meshes_
#endif

// "BushBerries_Crop.h" generated by "Obj2Header.exe" [Version 1.9d] Author: L.Norri Fullsail University.
// Data is converted to left-handed coordinate system and UV data is V flipped for Direct3D/Vulkan.
// The companion file "BushBerries_Crop.h2b" is a binary dump of this format(-padding) for more flexibility.
// Loading *.h2b: read version, sizes, handle strings(max len 260) by reading until null-terminated.
/***********************/
/*  Generator version  */
/***********************/
#ifndef _BushBerries_Crop_version_
const char BushBerries_Crop_version[4] = { '0','1','9','d' };
#define _BushBerries_Crop_version_
#endif
/************************************************/
/*  This section contains the model's size data */
/************************************************/
#ifndef _BushBerries_Crop_vertexcount_
const unsigned BushBerries_Crop_vertexcount = 96;
#define _BushBerries_Crop_vertexcount_
#endif
#ifndef _BushBerries_Crop_indexcount_
const unsigned BushBerries_Crop_indexcount = 144;
#define _BushBerries_Crop_indexcount_
#endif
#ifndef _BushBerries_Crop_materialcount_
const unsigned BushBerries_Crop_materialcount = 1; // can be used for batched draws
#define _BushBerries_Crop_materialcount_
#endif
#ifndef _BushBerries_Crop_meshcount_
const unsigned BushBerries_Crop_meshcount = 1;
#define _BushBerries_Crop_meshcount_
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
#ifndef _BushBerries_Crop_vertices_
// Raw Vertex Data follows: Positions, Texture Coordinates and Normals.
const OBJ_VERT BushBerries_Crop_vertices[96] =
{
	{	{ -0.013287f, 0.001035f, -0.072002f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.007500f, 0.321200f, -0.947000f }	},
	{	{ -0.017463f, 0.035049f, -0.066706f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.007500f, 0.321200f, -0.947000f }	},
	{	{ 0.038664f, 0.063267f, -0.050484f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.007500f, 0.321200f, -0.947000f }	},
	{	{ 0.055714f, 0.005694f, -0.076086f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.007500f, 0.321200f, -0.947000f }	},
	{	{ 0.030123f, -0.043760f, -0.049360f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.182800f, -0.578800f, -0.794700f }	},
	{	{ -0.007068f, -0.027638f, -0.037364f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.182800f, -0.578800f, -0.794700f }	},
	{	{ -0.013287f, 0.001035f, -0.072002f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.182800f, -0.578800f, -0.794700f }	},
	{	{ 0.055714f, 0.005694f, -0.076086f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.182800f, -0.578800f, -0.794700f }	},
	{	{ 0.084734f, 0.000737f, -0.008070f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.743200f, -0.473600f, -0.472600f }	},
	{	{ 0.068817f, -0.035735f, -0.013959f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.743200f, -0.473600f, -0.472600f }	},
	{	{ 0.030123f, -0.043760f, -0.049360f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.743200f, -0.473600f, -0.472600f }	},
	{	{ 0.055714f, 0.005694f, -0.076086f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.743200f, -0.473600f, -0.472600f }	},
	{	{ 0.038664f, 0.063267f, -0.050484f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.840300f, 0.324400f, -0.434400f }	},
	{	{ 0.083030f, 0.040712f, 0.002899f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.840300f, 0.324400f, -0.434400f }	},
	{	{ 0.084734f, 0.000737f, -0.008070f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.840300f, 0.324400f, -0.434400f }	},
	{	{ 0.055714f, 0.005694f, -0.076086f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.840300f, 0.324400f, -0.434400f }	},
	{	{ -0.053072f, 0.035804f, 0.056537f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.738200f, -0.473300f, 0.480700f }	},
	{	{ -0.084226f, 0.023113f, 0.011808f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.738200f, -0.473300f, 0.480700f }	},
	{	{ -0.055169f, -0.011161f, 0.007069f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.738200f, -0.473300f, 0.480700f }	},
	{	{ -0.041357f, -0.013487f, 0.041604f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.738200f, -0.473300f, 0.480700f }	},
	{	{ -0.001744f, -0.012138f, 0.055449f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.449100f, -0.497700f, 0.742000f }	},
	{	{ -0.002119f, 0.023344f, 0.090053f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.449100f, -0.497700f, 0.742000f }	},
	{	{ -0.053072f, 0.035804f, 0.056537f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.449100f, -0.497700f, 0.742000f }	},
	{	{ -0.041357f, -0.013487f, 0.041604f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.449100f, -0.497700f, 0.742000f }	},
	{	{ -0.022064f, -0.043894f, 0.013908f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.344600f, -0.656900f, 0.670700f }	},
	{	{ -0.000002f, -0.039986f, 0.036896f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.344600f, -0.656900f, 0.670700f }	},
	{	{ -0.001744f, -0.012138f, 0.055449f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.344600f, -0.656900f, 0.670700f }	},
	{	{ -0.041357f, -0.013487f, 0.041604f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.344600f, -0.656900f, 0.670700f }	},
	{	{ -0.055169f, -0.011161f, 0.007069f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.710300f, -0.682200f, 0.173400f }	},
	{	{ -0.031735f, -0.033458f, 0.002457f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.710300f, -0.682200f, 0.173400f }	},
	{	{ -0.022064f, -0.043894f, 0.013908f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.710300f, -0.682200f, 0.173400f }	},
	{	{ -0.041357f, -0.013487f, 0.041604f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.710300f, -0.682200f, 0.173400f }	},
	{	{ 0.068817f, -0.035735f, -0.013959f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.689500f, -0.512000f, 0.512300f }	},
	{	{ 0.084734f, 0.000737f, -0.008070f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.689500f, -0.512000f, 0.512300f }	},
	{	{ 0.047199f, -0.007448f, 0.043409f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.689500f, -0.512000f, 0.512300f }	},
	{	{ 0.030626f, -0.049664f, 0.014392f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.689500f, -0.512000f, 0.512300f }	},
	{	{ -0.001744f, -0.012138f, 0.055449f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.294000f, -0.578700f, 0.760700f }	},
	{	{ -0.000002f, -0.039986f, 0.036896f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.294000f, -0.578700f, 0.760700f }	},
	{	{ 0.030626f, -0.049664f, 0.014392f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.294000f, -0.578700f, 0.760700f }	},
	{	{ 0.047199f, -0.007448f, 0.043409f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.294000f, -0.578700f, 0.760700f }	},
	{	{ 0.048735f, 0.053089f, 0.068201f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.426000f, -0.479700f, 0.767100f }	},
	{	{ -0.002119f, 0.023344f, 0.090053f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.426000f, -0.479700f, 0.767100f }	},
	{	{ -0.001744f, -0.012138f, 0.055449f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.426000f, -0.479700f, 0.767100f }	},
	{	{ 0.047199f, -0.007448f, 0.043409f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.426000f, -0.479700f, 0.767100f }	},
	{	{ 0.084734f, 0.000737f, -0.008070f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.834400f, -0.183500f, 0.519800f }	},
	{	{ 0.083030f, 0.040712f, 0.002899f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.834400f, -0.183500f, 0.519800f }	},
	{	{ 0.048735f, 0.053089f, 0.068201f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.834400f, -0.183500f, 0.519800f }	},
	{	{ 0.047199f, -0.007448f, 0.043409f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.834400f, -0.183500f, 0.519800f }	},
	{	{ -0.020968f, -0.037238f, -0.013743f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.441900f, -0.746700f, -0.497200f }	},
	{	{ -0.007068f, -0.027638f, -0.037364f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.441900f, -0.746700f, -0.497200f }	},
	{	{ 0.030123f, -0.043760f, -0.049360f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.441900f, -0.746700f, -0.497200f }	},
	{	{ -0.004067f, -0.049872f, -0.006643f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.441900f, -0.746700f, -0.497200f }	},
	{	{ -0.022064f, -0.043894f, 0.013908f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.549800f, -0.806900f, -0.216100f }	},
	{	{ -0.031735f, -0.033458f, 0.002457f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.549800f, -0.806900f, -0.216100f }	},
	{	{ -0.020968f, -0.037238f, -0.013743f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.549800f, -0.806900f, -0.216100f }	},
	{	{ -0.004067f, -0.049872f, -0.006643f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.549800f, -0.806900f, -0.216100f }	},
	{	{ 0.030626f, -0.049664f, 0.014392f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.108000f, -0.967200f, 0.229700f }	},
	{	{ -0.000002f, -0.039986f, 0.036896f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.108000f, -0.967200f, 0.229700f }	},
	{	{ -0.022064f, -0.043894f, 0.013908f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.108000f, -0.967200f, 0.229700f }	},
	{	{ -0.004067f, -0.049872f, -0.006643f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.108000f, -0.967200f, 0.229700f }	},
	{	{ 0.030123f, -0.043760f, -0.049360f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.180700f, -0.979200f, -0.092100f }	},
	{	{ 0.068817f, -0.035735f, -0.013959f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.180700f, -0.979200f, -0.092100f }	},
	{	{ 0.030626f, -0.049664f, 0.014392f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.180700f, -0.979200f, -0.092100f }	},
	{	{ -0.004067f, -0.049872f, -0.006643f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.180700f, -0.979200f, -0.092100f }	},
	{	{ 0.048735f, 0.053089f, 0.068201f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.381300f, 0.923300f, 0.046800f }	},
	{	{ 0.083030f, 0.040712f, 0.002899f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.381300f, 0.923300f, 0.046800f }	},
	{	{ 0.038664f, 0.063267f, -0.050484f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.381300f, 0.923300f, 0.046800f }	},
	{	{ -0.018349f, 0.081853f, 0.017157f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.381300f, 0.923300f, 0.046800f }	},
	{	{ -0.002119f, 0.023344f, 0.090053f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.199300f, 0.742100f, 0.640000f }	},
	{	{ 0.048735f, 0.053089f, 0.068201f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.199300f, 0.742100f, 0.640000f }	},
	{	{ -0.018349f, 0.081853f, 0.017157f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.199300f, 0.742100f, 0.640000f }	},
	{	{ -0.053072f, 0.035804f, 0.056537f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.199300f, 0.742100f, 0.640000f }	},
	{	{ -0.074104f, 0.047627f, -0.041449f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.658300f, 0.717500f, 0.227900f }	},
	{	{ -0.084226f, 0.023113f, 0.011808f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.658300f, 0.717500f, 0.227900f }	},
	{	{ -0.053072f, 0.035804f, 0.056537f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.658300f, 0.717500f, 0.227900f }	},
	{	{ -0.018349f, 0.081853f, 0.017157f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.658300f, 0.717500f, 0.227900f }	},
	{	{ 0.038664f, 0.063267f, -0.050484f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.158100f, 0.861500f, -0.482500f }	},
	{	{ -0.017463f, 0.035049f, -0.066706f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.158100f, 0.861500f, -0.482500f }	},
	{	{ -0.074104f, 0.047627f, -0.041449f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.158100f, 0.861500f, -0.482500f }	},
	{	{ -0.018349f, 0.081853f, 0.017157f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.158100f, 0.861500f, -0.482500f }	},
	{	{ -0.074104f, 0.047627f, -0.041449f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.619600f, -0.347000f, -0.704100f }	},
	{	{ -0.017463f, 0.035049f, -0.066706f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.619600f, -0.347000f, -0.704100f }	},
	{	{ -0.013287f, 0.001035f, -0.072002f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.619600f, -0.347000f, -0.704100f }	},
	{	{ -0.040854f, -0.005849f, -0.025968f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.619600f, -0.347000f, -0.704100f }	},
	{	{ -0.055169f, -0.011161f, 0.007069f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.723700f, -0.562800f, -0.399400f }	},
	{	{ -0.084226f, 0.023113f, 0.011808f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.723700f, -0.562800f, -0.399400f }	},
	{	{ -0.074104f, 0.047627f, -0.041449f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.723700f, -0.562800f, -0.399400f }	},
	{	{ -0.040854f, -0.005849f, -0.025968f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.723700f, -0.562800f, -0.399400f }	},
	{	{ -0.020968f, -0.037238f, -0.013743f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.695400f, -0.614100f, -0.373300f }	},
	{	{ -0.031735f, -0.033458f, 0.002457f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.695400f, -0.614100f, -0.373300f }	},
	{	{ -0.055169f, -0.011161f, 0.007069f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.695400f, -0.614100f, -0.373300f }	},
	{	{ -0.040854f, -0.005849f, -0.025968f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.695400f, -0.614100f, -0.373300f }	},
	{	{ -0.013287f, 0.001035f, -0.072002f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.582300f, -0.642100f, -0.498600f }	},
	{	{ -0.007068f, -0.027638f, -0.037364f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.582300f, -0.642100f, -0.498600f }	},
	{	{ -0.020968f, -0.037238f, -0.013743f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.582300f, -0.642100f, -0.498600f }	},
	{	{ -0.040854f, -0.005849f, -0.025968f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.582300f, -0.642100f, -0.498600f }	},
};
#define _BushBerries_Crop_vertices_
#endif
#ifndef _BushBerries_Crop_indices_
// Index Data follows: Sequential by mesh, Every Three Indices == One Triangle.
const unsigned int BushBerries_Crop_indices[144] =
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
	 19, 16, 18,
	 20, 21, 22,
	 23, 20, 22,
	 24, 25, 26,
	 27, 24, 26,
	 28, 29, 30,
	 31, 28, 30,
	 32, 33, 34,
	 35, 32, 34,
	 36, 37, 38,
	 39, 36, 38,
	 40, 41, 42,
	 43, 40, 42,
	 44, 45, 46,
	 47, 44, 46,
	 48, 49, 50,
	 51, 48, 50,
	 52, 53, 54,
	 55, 52, 54,
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
};
#define _BushBerries_Crop_indices_
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
#ifndef _BushBerries_Crop_materials_
// Material Data follows: pulled from a .mtl file of the same name if present.
const OBJ_MATERIAL BushBerries_Crop_materials[1] =
{
	{
		{{ 0.373759f, 0.021626f, 0.030571f },
		1.000000f,
		{ 0.500000f, 0.500000f, 0.500000f },
		96.078430f,
		{ 1.000000f, 1.000000f, 1.000000f },
		60.000000f,
		{ 1.000000f, 1.000000f, 1.000000f },
		1.000000f,
		{ 0.000000f, 0.000000f, 0.000000f },
		2},
		"Berry",
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
#define _BushBerries_Crop_materials_
#endif
/************************************************/
/*  This section contains the model's structure */
/************************************************/
#ifndef _BushBerries_Crop_batches_
// Use this conveinence array to batch render all geometry by like material.
// Each entry corresponds to the same entry in the materials array above.
// The two numbers provided are the IndexCount and the IndexOffset into the indices array.
// If you need more fine grained control(ex: for transformations) use the OBJ_MESH data below.
const unsigned int BushBerries_Crop_batches[1][2] =
{
	{ 144, 0 },
};
#define _BushBerries_Crop_batches_
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
#ifndef _BushBerries_Crop_meshes_
// Mesh Data follows: Meshes are .obj groups sorted & split by material.
// Meshes are provided in sequential order, sorted by material first and name second.
const OBJ_MESH BushBerries_Crop_meshes[1] =
{
	{
		"default",
		144,
		0,
		0,
	},
};
#define _BushBerries_Crop_meshes_
#endif

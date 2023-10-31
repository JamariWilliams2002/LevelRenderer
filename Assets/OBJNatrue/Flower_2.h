// "Flower_2.h" generated by "Obj2Header.exe" [Version 1.9d] Author: L.Norri Fullsail University.
// Data is converted to left-handed coordinate system and UV data is V flipped for Direct3D/Vulkan.
// The companion file "Flower_2.h2b" is a binary dump of this format(-padding) for more flexibility.
// Loading *.h2b: read version, sizes, handle strings(max len 260) by reading until null-terminated.
/***********************/
/*  Generator version  */
/***********************/
#ifndef _Flower_2_version_
const char Flower_2_version[4] = { '0','1','9','d' };
#define _Flower_2_version_
#endif
/************************************************/
/*  This section contains the model's size data */
/************************************************/
#ifndef _Flower_2_vertexcount_
const unsigned Flower_2_vertexcount = 84;
#define _Flower_2_vertexcount_
#endif
#ifndef _Flower_2_indexcount_
const unsigned Flower_2_indexcount = 126;
#define _Flower_2_indexcount_
#endif
#ifndef _Flower_2_materialcount_
const unsigned Flower_2_materialcount = 1; // can be used for batched draws
#define _Flower_2_materialcount_
#endif
#ifndef _Flower_2_meshcount_
const unsigned Flower_2_meshcount = 1;
#define _Flower_2_meshcount_
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
#ifndef _Flower_2_vertices_
// Raw Vertex Data follows: Positions, Texture Coordinates and Normals.
const OBJ_VERT Flower_2_vertices[84] =
{
	{	{ -0.036217f, 0.326618f, 0.029599f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.463900f, -0.885600f, -0.022900f }	},
	{	{ -0.033340f, 0.326191f, -0.012290f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.463900f, -0.885600f, -0.022900f }	},
	{	{ -0.000126f, 0.308272f, 0.007862f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.463900f, -0.885600f, -0.022900f }	},
	{	{ -0.000557f, 0.308336f, 0.014140f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.463900f, -0.885600f, -0.022900f }	},
	{	{ 0.007069f, 0.118202f, -0.008488f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.024600f, -0.119100f, 0.992600f }	},
	{	{ 0.011587f, 0.309021f, 0.014968f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.024600f, -0.119100f, 0.992600f }	},
	{	{ -0.000557f, 0.308336f, 0.014140f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.024600f, -0.119100f, 0.992600f }	},
	{	{ -0.010913f, 0.118204f, -0.008488f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.024600f, -0.119100f, 0.992600f }	},
	{	{ 0.011130f, -0.000308f, -0.003132f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.000000f, -0.097700f, -0.995200f }	},
	{	{ -0.011130f, -0.000308f, -0.003132f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.000000f, -0.097700f, -0.995200f }	},
	{	{ -0.010823f, 0.118310f, -0.014780f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.000000f, -0.097700f, -0.995200f }	},
	{	{ 0.007158f, 0.118310f, -0.014780f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.000000f, -0.097700f, -0.995200f }	},
	{	{ -0.010913f, 0.118204f, -0.008488f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.997300f, 0.060100f, -0.041100f }	},
	{	{ -0.000557f, 0.308336f, 0.014140f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.997300f, 0.060100f, -0.041100f }	},
	{	{ -0.000126f, 0.308272f, 0.007862f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.997300f, 0.060100f, -0.041100f }	},
	{	{ -0.010823f, 0.118310f, -0.014780f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.997300f, 0.060100f, -0.041100f }	},
	{	{ -0.010913f, 0.118204f, -0.008488f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.000000f, 0.098100f, 0.995200f }	},
	{	{ -0.011130f, 0.000308f, 0.003132f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.000000f, 0.098100f, 0.995200f }	},
	{	{ 0.011130f, 0.000308f, 0.003132f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.000000f, 0.098100f, 0.995200f }	},
	{	{ 0.007069f, 0.118202f, -0.008488f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.000000f, 0.098100f, 0.995200f }	},
	{	{ -0.020956f, 0.373169f, -0.004776f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.059300f, 0.142400f, -0.988000f }	},
	{	{ 0.034382f, 0.376290f, -0.001006f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.059300f, 0.142400f, -0.988000f }	},
	{	{ 0.047677f, 0.330761f, -0.006770f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.059300f, 0.142400f, -0.988000f }	},
	{	{ -0.033340f, 0.326191f, -0.012290f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.059300f, 0.142400f, -0.988000f }	},
	{	{ 0.011587f, 0.309021f, 0.014968f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.998700f, -0.029600f, 0.041300f }	},
	{	{ 0.007069f, 0.118202f, -0.008488f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.998700f, -0.029600f, 0.041300f }	},
	{	{ 0.007158f, 0.118310f, -0.014780f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.998700f, -0.029600f, 0.041300f }	},
	{	{ 0.012018f, 0.308957f, 0.008689f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.998700f, -0.029600f, 0.041300f }	},
	{	{ 0.007069f, 0.118202f, -0.008488f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.999400f, 0.034500f, 0.005700f }	},
	{	{ 0.011130f, 0.000308f, 0.003132f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.999400f, 0.034500f, 0.005700f }	},
	{	{ 0.011130f, -0.000308f, -0.003132f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.999400f, 0.034500f, 0.005700f }	},
	{	{ 0.007158f, 0.118310f, -0.014780f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.999400f, 0.034500f, 0.005700f }	},
	{	{ -0.011130f, 0.000308f, 0.003132f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -1.000000f, 0.001500f, -0.007200f }	},
	{	{ -0.010913f, 0.118204f, -0.008488f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -1.000000f, 0.001500f, -0.007200f }	},
	{	{ -0.010823f, 0.118310f, -0.014780f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -1.000000f, 0.001500f, -0.007200f }	},
	{	{ -0.011130f, -0.000308f, -0.003132f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -1.000000f, 0.001500f, -0.007200f }	},
	{	{ 0.047677f, 0.330761f, -0.006770f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.535400f, -0.843400f, 0.045400f }	},
	{	{ 0.044801f, 0.331188f, 0.035119f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.535400f, -0.843400f, 0.045400f }	},
	{	{ 0.011587f, 0.309021f, 0.014968f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.535400f, -0.843400f, 0.045400f }	},
	{	{ 0.012018f, 0.308957f, 0.008689f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.535400f, -0.843400f, 0.045400f }	},
	{	{ -0.033340f, 0.326191f, -0.012290f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.088000f, -0.667900f, -0.739000f }	},
	{	{ 0.047677f, 0.330761f, -0.006770f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.088000f, -0.667900f, -0.739000f }	},
	{	{ 0.012018f, 0.308957f, 0.008689f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.088000f, -0.667900f, -0.739000f }	},
	{	{ -0.000126f, 0.308272f, 0.007862f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.088000f, -0.667900f, -0.739000f }	},
	{	{ -0.010823f, 0.118310f, -0.014780f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.024500f, 0.119200f, -0.992600f }	},
	{	{ -0.000126f, 0.308272f, 0.007862f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.024500f, 0.119200f, -0.992600f }	},
	{	{ 0.012018f, 0.308957f, 0.008689f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.024500f, 0.119200f, -0.992600f }	},
	{	{ 0.007158f, 0.118310f, -0.014780f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.024500f, 0.119200f, -0.992600f }	},
	{	{ 0.044801f, 0.331188f, 0.035119f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.013800f, -0.661200f, 0.750100f }	},
	{	{ -0.036217f, 0.326618f, 0.029599f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.013800f, -0.661200f, 0.750100f }	},
	{	{ -0.000557f, 0.308336f, 0.014140f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.013800f, -0.661200f, 0.750100f }	},
	{	{ 0.011587f, 0.309021f, 0.014968f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.013800f, -0.661200f, 0.750100f }	},
	{	{ 0.011769f, 0.411425f, 0.015078f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.081500f, 0.294100f, 0.952300f }	},
	{	{ -0.000753f, 0.410719f, 0.014225f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.081500f, 0.294100f, 0.952300f }	},
	{	{ -0.022921f, 0.373460f, 0.023835f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.081500f, 0.294100f, 0.952300f }	},
	{	{ 0.032417f, 0.376581f, 0.027606f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.081500f, 0.294100f, 0.952300f }	},
	{	{ -0.022921f, 0.373460f, 0.023835f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.961900f, 0.264600f, -0.068800f }	},
	{	{ -0.020956f, 0.373169f, -0.004776f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.961900f, 0.264600f, -0.068800f }	},
	{	{ -0.033340f, 0.326191f, -0.012290f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.961900f, 0.264600f, -0.068800f }	},
	{	{ -0.036217f, 0.326618f, 0.029599f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.961900f, 0.264600f, -0.068800f }	},
	{	{ 0.034382f, 0.376290f, -0.001006f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.960100f, 0.272400f, 0.063200f }	},
	{	{ 0.032417f, 0.376581f, 0.027606f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.960100f, 0.272400f, 0.063200f }	},
	{	{ 0.044801f, 0.331188f, 0.035119f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.960100f, 0.272400f, 0.063200f }	},
	{	{ 0.047677f, 0.330761f, -0.006770f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.960100f, 0.272400f, 0.063200f }	},
	{	{ 0.032417f, 0.376581f, 0.027606f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.075300f, 0.142800f, 0.986900f }	},
	{	{ -0.022921f, 0.373460f, 0.023835f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.075300f, 0.142800f, 0.986900f }	},
	{	{ -0.036217f, 0.326618f, 0.029599f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.075300f, 0.142800f, 0.986900f }	},
	{	{ 0.044801f, 0.331188f, 0.035119f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.075300f, 0.142800f, 0.986900f }	},
	{	{ -0.000753f, 0.410719f, 0.014225f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.055400f, 0.998400f, -0.014000f }	},
	{	{ 0.011769f, 0.411425f, 0.015078f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.055400f, 0.998400f, -0.014000f }	},
	{	{ 0.012214f, 0.411359f, 0.008604f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.055400f, 0.998400f, -0.014000f }	},
	{	{ -0.000308f, 0.410653f, 0.007751f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.055400f, 0.998400f, -0.014000f }	},
	{	{ -0.000308f, 0.410653f, 0.007751f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.048600f, 0.292400f, -0.955100f }	},
	{	{ 0.012214f, 0.411359f, 0.008604f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.048600f, 0.292400f, -0.955100f }	},
	{	{ 0.034382f, 0.376290f, -0.001006f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.048600f, 0.292400f, -0.955100f }	},
	{	{ -0.020956f, 0.373169f, -0.004776f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.048600f, 0.292400f, -0.955100f }	},
	{	{ -0.000753f, 0.410719f, 0.014225f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.864800f, 0.497900f, -0.064500f }	},
	{	{ -0.000308f, 0.410653f, 0.007751f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.864800f, 0.497900f, -0.064500f }	},
	{	{ -0.020956f, 0.373169f, -0.004776f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.864800f, 0.497900f, -0.064500f }	},
	{	{ -0.022921f, 0.373460f, 0.023835f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.864800f, 0.497900f, -0.064500f }	},
	{	{ 0.012214f, 0.411359f, 0.008604f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.850600f, 0.523100f, 0.053100f }	},
	{	{ 0.011769f, 0.411425f, 0.015078f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.850600f, 0.523100f, 0.053100f }	},
	{	{ 0.032417f, 0.376581f, 0.027606f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.850600f, 0.523100f, 0.053100f }	},
	{	{ 0.034382f, 0.376290f, -0.001006f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.850600f, 0.523100f, 0.053100f }	},
};
#define _Flower_2_vertices_
#endif
#ifndef _Flower_2_indices_
// Index Data follows: Sequential by mesh, Every Three Indices == One Triangle.
const unsigned int Flower_2_indices[126] =
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
};
#define _Flower_2_indices_
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
#ifndef _Flower_2_materials_
// Material Data follows: pulled from a .mtl file of the same name if present.
const OBJ_MATERIAL Flower_2_materials[1] =
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
};
#define _Flower_2_materials_
#endif
/************************************************/
/*  This section contains the model's structure */
/************************************************/
#ifndef _Flower_2_batches_
// Use this conveinence array to batch render all geometry by like material.
// Each entry corresponds to the same entry in the materials array above.
// The two numbers provided are the IndexCount and the IndexOffset into the indices array.
// If you need more fine grained control(ex: for transformations) use the OBJ_MESH data below.
const unsigned int Flower_2_batches[1][2] =
{
	{ 126, 0 },
};
#define _Flower_2_batches_
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
#ifndef _Flower_2_meshes_
// Mesh Data follows: Meshes are .obj groups sorted & split by material.
// Meshes are provided in sequential order, sorted by material first and name second.
const OBJ_MESH Flower_2_meshes[1] =
{
	{
		"default",
		126,
		0,
		0,
	},
};
#define _Flower_2_meshes_
#endif
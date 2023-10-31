// "Corn_Crop.h" generated by "Obj2Header.exe" [Version 1.9d] Author: L.Norri Fullsail University.
// Data is converted to left-handed coordinate system and UV data is V flipped for Direct3D/Vulkan.
// The companion file "Corn_Crop.h2b" is a binary dump of this format(-padding) for more flexibility.
// Loading *.h2b: read version, sizes, handle strings(max len 260) by reading until null-terminated.
/***********************/
/*  Generator version  */
/***********************/
#ifndef _Corn_Crop_version_
const char Corn_Crop_version[4] = { '0','1','9','d' };
#define _Corn_Crop_version_
#endif
/************************************************/
/*  This section contains the model's size data */
/************************************************/
#ifndef _Corn_Crop_vertexcount_
const unsigned Corn_Crop_vertexcount = 176;
#define _Corn_Crop_vertexcount_
#endif
#ifndef _Corn_Crop_indexcount_
const unsigned Corn_Crop_indexcount = 240;
#define _Corn_Crop_indexcount_
#endif
#ifndef _Corn_Crop_materialcount_
const unsigned Corn_Crop_materialcount = 2; // can be used for batched draws
#define _Corn_Crop_materialcount_
#endif
#ifndef _Corn_Crop_meshcount_
const unsigned Corn_Crop_meshcount = 2;
#define _Corn_Crop_meshcount_
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
#ifndef _Corn_Crop_vertices_
// Raw Vertex Data follows: Positions, Texture Coordinates and Normals.
const OBJ_VERT Corn_Crop_vertices[176] =
{
	{	{ 0.155325f, -0.000033f, 0.071342f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.502400f, -0.832700f, -0.232800f }	},
	{	{ 0.061343f, -0.055836f, 0.055816f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.502400f, -0.832700f, -0.232800f }	},
	{	{ 0.061822f, -0.050662f, 0.050662f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.502400f, -0.832700f, -0.232800f }	},
	{	{ 0.158040f, 0.000000f, 0.064758f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.502400f, -0.832700f, -0.232800f }	},
	{	{ 0.061343f, 0.055769f, -0.055790f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.502400f, -0.228500f, -0.833900f }	},
	{	{ 0.155325f, 0.071296f, 0.000013f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.502400f, -0.228500f, -0.833900f }	},
	{	{ 0.158040f, 0.064758f, 0.000000f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.502400f, -0.228500f, -0.833900f }	},
	{	{ 0.061822f, 0.050662f, -0.050662f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.502400f, -0.228500f, -0.833900f }	},
	{	{ 0.155325f, -0.000033f, -0.071316f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.502400f, 0.834800f, 0.225200f }	},
	{	{ 0.061343f, 0.055769f, -0.055790f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.502400f, 0.834800f, 0.225200f }	},
	{	{ 0.061822f, 0.050662f, -0.050662f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.502400f, 0.834800f, 0.225200f }	},
	{	{ 0.158040f, 0.000000f, -0.064758f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.502400f, 0.834800f, 0.225200f }	},
	{	{ 0.155325f, -0.071363f, 0.000013f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.502400f, 0.226200f, -0.834600f }	},
	{	{ 0.061343f, -0.055836f, -0.055790f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.502400f, 0.226200f, -0.834600f }	},
	{	{ 0.061822f, -0.050662f, -0.050662f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.502400f, 0.226200f, -0.834600f }	},
	{	{ 0.158040f, -0.064758f, 0.000000f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.502400f, 0.226200f, -0.834600f }	},
	{	{ 0.155325f, -0.000033f, 0.071342f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.502400f, 0.835100f, -0.224300f }	},
	{	{ 0.158040f, 0.000000f, 0.064758f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.502400f, 0.835100f, -0.224300f }	},
	{	{ 0.061822f, 0.050662f, 0.050662f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.502400f, 0.835100f, -0.224300f }	},
	{	{ 0.061343f, 0.055769f, 0.055816f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.502400f, 0.835100f, -0.224300f }	},
	{	{ 0.155325f, 0.071296f, 0.000013f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.502400f, -0.231800f, 0.833000f }	},
	{	{ 0.061343f, 0.055769f, 0.055816f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.502400f, -0.231800f, 0.833000f }	},
	{	{ 0.061822f, 0.050662f, 0.050662f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.502400f, -0.231800f, 0.833000f }	},
	{	{ 0.158040f, 0.064758f, 0.000000f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.502400f, -0.231800f, 0.833000f }	},
	{	{ 0.061343f, -0.055836f, -0.055790f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.502400f, -0.832500f, 0.233700f }	},
	{	{ 0.155325f, -0.000033f, -0.071316f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.502400f, -0.832500f, 0.233700f }	},
	{	{ 0.158040f, 0.000000f, -0.064758f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.502400f, -0.832500f, 0.233700f }	},
	{	{ 0.061822f, -0.050662f, -0.050662f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.502400f, -0.832500f, 0.233700f }	},
	{	{ 0.061343f, -0.055836f, 0.055816f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.502400f, 0.229500f, 0.833700f }	},
	{	{ 0.155325f, -0.071363f, 0.000013f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.502400f, 0.229500f, 0.833700f }	},
	{	{ 0.158040f, -0.064758f, 0.000000f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.502400f, 0.229500f, 0.833700f }	},
	{	{ 0.061822f, -0.050662f, 0.050662f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.502400f, 0.229500f, 0.833700f }	},
	{	{ 0.061343f, 0.074370f, 0.000013f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.060000f, 0.947000f, -0.315700f }	},
	{	{ 0.061343f, 0.055769f, -0.055790f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.060000f, 0.947000f, -0.315700f }	},
	{	{ -0.023554f, 0.051733f, -0.051754f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.060000f, 0.947000f, -0.315700f }	},
	{	{ -0.023554f, 0.068989f, 0.000013f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.060000f, 0.947000f, -0.315700f }	},
	{	{ -0.023554f, 0.051733f, 0.051780f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.060000f, 0.947000f, 0.315700f }	},
	{	{ 0.061343f, 0.055769f, 0.055816f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.060000f, 0.947000f, 0.315700f }	},
	{	{ 0.061343f, 0.074370f, 0.000013f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.060000f, 0.947000f, 0.315700f }	},
	{	{ -0.023554f, 0.068989f, 0.000013f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.060000f, 0.947000f, 0.315700f }	},
	{	{ 0.061343f, -0.000034f, 0.074417f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.060000f, 0.315700f, 0.947000f }	},
	{	{ 0.061343f, 0.055769f, 0.055816f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.060000f, 0.315700f, 0.947000f }	},
	{	{ -0.023554f, 0.051733f, 0.051780f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.060000f, 0.315700f, 0.947000f }	},
	{	{ -0.023554f, -0.000034f, 0.069035f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.060000f, 0.315700f, 0.947000f }	},
	{	{ -0.023554f, -0.051800f, 0.051780f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.060000f, -0.315700f, 0.947000f }	},
	{	{ 0.061343f, -0.055836f, 0.055816f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.060000f, -0.315700f, 0.947000f }	},
	{	{ 0.061343f, -0.000034f, 0.074417f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.060000f, -0.315700f, 0.947000f }	},
	{	{ -0.023554f, -0.000034f, 0.069035f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.060000f, -0.315700f, 0.947000f }	},
	{	{ 0.061343f, -0.074437f, 0.000013f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.060000f, -0.947000f, 0.315700f }	},
	{	{ 0.061343f, -0.055836f, 0.055816f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.060000f, -0.947000f, 0.315700f }	},
	{	{ -0.023554f, -0.051800f, 0.051780f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.060000f, -0.947000f, 0.315700f }	},
	{	{ -0.023554f, -0.069056f, 0.000013f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.060000f, -0.947000f, 0.315700f }	},
	{	{ -0.023554f, -0.051800f, -0.051754f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.060000f, -0.947000f, -0.315700f }	},
	{	{ 0.061343f, -0.055836f, -0.055790f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.060000f, -0.947000f, -0.315700f }	},
	{	{ 0.061343f, -0.074437f, 0.000013f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.060000f, -0.947000f, -0.315700f }	},
	{	{ -0.023554f, -0.069056f, 0.000013f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.060000f, -0.947000f, -0.315700f }	},
	{	{ 0.061343f, -0.000034f, -0.074391f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.060000f, -0.315700f, -0.947000f }	},
	{	{ 0.061343f, -0.055836f, -0.055790f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.060000f, -0.315700f, -0.947000f }	},
	{	{ -0.023554f, -0.051800f, -0.051754f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.060000f, -0.315700f, -0.947000f }	},
	{	{ -0.023554f, -0.000034f, -0.069009f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.060000f, -0.315700f, -0.947000f }	},
	{	{ -0.023554f, 0.051733f, -0.051754f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.060000f, 0.315700f, -0.947000f }	},
	{	{ 0.061343f, 0.055769f, -0.055790f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.060000f, 0.315700f, -0.947000f }	},
	{	{ 0.061343f, -0.000034f, -0.074391f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.060000f, 0.315700f, -0.947000f }	},
	{	{ -0.023554f, -0.000034f, -0.069009f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.060000f, 0.315700f, -0.947000f }	},
	{	{ -0.023554f, -0.000034f, 0.069035f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.916400f, -0.283100f, 0.283100f }	},
	{	{ -0.058815f, 0.007607f, -0.002961f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.916400f, -0.283100f, 0.283100f }	},
	{	{ -0.023554f, -0.069056f, 0.000013f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.916400f, -0.283100f, 0.283100f }	},
	{	{ -0.023554f, -0.051800f, 0.051780f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.916400f, -0.283100f, 0.283100f }	},
	{	{ -0.058815f, 0.007607f, -0.002961f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.908200f, -0.296000f, -0.296000f }	},
	{	{ -0.023554f, -0.000034f, -0.069009f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.908200f, -0.296000f, -0.296000f }	},
	{	{ -0.023554f, -0.051800f, -0.051754f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.908200f, -0.296000f, -0.296000f }	},
	{	{ -0.023554f, -0.069056f, 0.000013f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.908200f, -0.296000f, -0.296000f }	},
	{	{ -0.023554f, 0.051733f, 0.051780f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.892900f, 0.318400f, 0.318400f }	},
	{	{ -0.023554f, 0.068989f, 0.000013f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.892900f, 0.318400f, 0.318400f }	},
	{	{ -0.058815f, 0.007607f, -0.002961f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.892900f, 0.318400f, 0.318400f }	},
	{	{ -0.023554f, -0.000034f, 0.069035f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.892900f, 0.318400f, 0.318400f }	},
	{	{ -0.023554f, 0.068989f, 0.000013f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.881100f, 0.334400f, -0.334400f }	},
	{	{ -0.023554f, 0.051733f, -0.051754f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.881100f, 0.334400f, -0.334400f }	},
	{	{ -0.023554f, -0.000034f, -0.069009f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.881100f, 0.334400f, -0.334400f }	},
	{	{ -0.058815f, 0.007607f, -0.002961f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.881100f, 0.334400f, -0.334400f }	},
	{	{ 0.061343f, -0.055836f, -0.055790f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.031000f, -0.948200f, -0.316100f }	},
	{	{ 0.155325f, -0.071363f, 0.000013f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.031000f, -0.948200f, -0.316100f }	},
	{	{ 0.061343f, -0.074437f, 0.000013f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.031000f, -0.948200f, -0.316100f }	},
	{	{ 0.061343f, -0.055836f, 0.055816f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.031000f, -0.948200f, 0.316100f }	},
	{	{ 0.061343f, -0.074437f, 0.000013f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.031000f, -0.948200f, 0.316100f }	},
	{	{ 0.155325f, -0.071363f, 0.000013f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.031000f, -0.948200f, 0.316100f }	},
	{	{ 0.061343f, 0.055769f, 0.055816f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.031000f, 0.316100f, 0.948200f }	},
	{	{ 0.061343f, -0.000034f, 0.074417f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.031000f, 0.316100f, 0.948200f }	},
	{	{ 0.155325f, -0.000033f, 0.071342f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.031000f, 0.316100f, 0.948200f }	},
	{	{ 0.061343f, -0.055836f, 0.055816f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.031000f, -0.316100f, 0.948200f }	},
	{	{ 0.155325f, -0.000033f, 0.071342f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.031000f, -0.316100f, 0.948200f }	},
	{	{ 0.061343f, -0.000034f, 0.074417f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.031000f, -0.316100f, 0.948200f }	},
	{	{ 0.061343f, 0.055769f, 0.055816f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.031000f, 0.948200f, 0.316100f }	},
	{	{ 0.155325f, 0.071296f, 0.000013f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.031000f, 0.948200f, 0.316100f }	},
	{	{ 0.061343f, 0.074370f, 0.000013f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.031000f, 0.948200f, 0.316100f }	},
	{	{ 0.061343f, 0.055769f, -0.055790f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.031000f, 0.948200f, -0.316100f }	},
	{	{ 0.061343f, 0.074370f, 0.000013f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.031000f, 0.948200f, -0.316100f }	},
	{	{ 0.155325f, 0.071296f, 0.000013f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.031000f, 0.948200f, -0.316100f }	},
	{	{ 0.061343f, -0.055836f, -0.055790f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.031000f, -0.316100f, -0.948200f }	},
	{	{ 0.061343f, -0.000034f, -0.074391f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.031000f, -0.316100f, -0.948200f }	},
	{	{ 0.155325f, -0.000033f, -0.071316f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.031000f, -0.316100f, -0.948200f }	},
	{	{ 0.061343f, 0.055769f, -0.055790f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.031000f, 0.316100f, -0.948200f }	},
	{	{ 0.155325f, -0.000033f, -0.071316f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.031000f, 0.316100f, -0.948200f }	},
	{	{ 0.061343f, -0.000034f, -0.074391f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.031000f, 0.316100f, -0.948200f }	},
	{	{ 0.158040f, 0.064758f, 0.000000f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.027500f, 0.948300f, 0.316100f }	},
	{	{ 0.061822f, 0.050662f, 0.050662f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.027500f, 0.948300f, 0.316100f }	},
	{	{ 0.158040f, 0.048568f, 0.048568f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.027500f, 0.948300f, 0.316100f }	},
	{	{ 0.158040f, 0.064758f, 0.000000f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.027500f, 0.948300f, -0.316100f }	},
	{	{ 0.158040f, 0.048568f, -0.048568f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.027500f, 0.948300f, -0.316100f }	},
	{	{ 0.061822f, 0.050662f, -0.050662f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.027500f, 0.948300f, -0.316100f }	},
	{	{ 0.256523f, 0.034690f, 0.000000f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.291800f, 0.895600f, -0.335800f }	},
	{	{ 0.230991f, 0.029808f, -0.029808f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.291800f, 0.895600f, -0.335800f }	},
	{	{ 0.158040f, 0.048568f, -0.048568f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.291800f, 0.895600f, -0.335800f }	},
	{	{ 0.158040f, 0.064758f, 0.000000f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.291800f, 0.895600f, -0.335800f }	},
	{	{ 0.158040f, 0.048568f, 0.048568f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.291800f, 0.895600f, 0.335800f }	},
	{	{ 0.230991f, 0.029808f, 0.029808f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.291800f, 0.895600f, 0.335800f }	},
	{	{ 0.256523f, 0.034690f, 0.000000f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.291800f, 0.895600f, 0.335800f }	},
	{	{ 0.158040f, 0.064758f, 0.000000f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.291800f, 0.895600f, 0.335800f }	},
	{	{ 0.256523f, 0.000000f, 0.034690f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.585500f, -0.573200f, 0.573200f }	},
	{	{ 0.230991f, -0.029808f, 0.029808f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.585500f, -0.573200f, 0.573200f }	},
	{	{ 0.256523f, -0.034690f, 0.000000f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.585500f, -0.573200f, 0.573200f }	},
	{	{ 0.289351f, 0.000000f, 0.000000f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.585500f, -0.573200f, 0.573200f }	},
	{	{ 0.256523f, 0.034690f, 0.000000f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.585500f, 0.573200f, 0.573200f }	},
	{	{ 0.230991f, 0.029808f, 0.029808f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.585500f, 0.573200f, 0.573200f }	},
	{	{ 0.256523f, 0.000000f, 0.034690f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.585500f, 0.573200f, 0.573200f }	},
	{	{ 0.289351f, 0.000000f, 0.000000f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.585500f, 0.573200f, 0.573200f }	},
	{	{ 0.256523f, 0.000000f, -0.034690f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.585500f, 0.573200f, -0.573200f }	},
	{	{ 0.230991f, 0.029808f, -0.029808f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.585500f, 0.573200f, -0.573200f }	},
	{	{ 0.256523f, 0.034690f, 0.000000f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.585500f, 0.573200f, -0.573200f }	},
	{	{ 0.289351f, 0.000000f, 0.000000f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.585500f, 0.573200f, -0.573200f }	},
	{	{ 0.256523f, -0.034690f, 0.000000f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.585500f, -0.573200f, -0.573200f }	},
	{	{ 0.230991f, -0.029808f, -0.029808f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.585500f, -0.573200f, -0.573200f }	},
	{	{ 0.256523f, 0.000000f, -0.034690f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.585500f, -0.573200f, -0.573200f }	},
	{	{ 0.289351f, 0.000000f, 0.000000f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.585500f, -0.573200f, -0.573200f }	},
	{	{ 0.158040f, 0.000000f, -0.064758f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.027500f, 0.316100f, -0.948300f }	},
	{	{ 0.061822f, 0.050662f, -0.050662f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.027500f, 0.316100f, -0.948300f }	},
	{	{ 0.158040f, 0.048568f, -0.048568f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.027500f, 0.316100f, -0.948300f }	},
	{	{ 0.158040f, 0.000000f, -0.064758f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.027500f, -0.316100f, -0.948300f }	},
	{	{ 0.158040f, -0.048568f, -0.048568f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.027500f, -0.316100f, -0.948300f }	},
	{	{ 0.061822f, -0.050662f, -0.050662f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.027500f, -0.316100f, -0.948300f }	},
	{	{ 0.256523f, 0.000000f, -0.034690f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.291800f, -0.335800f, -0.895600f }	},
	{	{ 0.230991f, -0.029808f, -0.029808f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.291800f, -0.335800f, -0.895600f }	},
	{	{ 0.158040f, -0.048568f, -0.048568f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.291800f, -0.335800f, -0.895600f }	},
	{	{ 0.158040f, 0.000000f, -0.064758f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.291800f, -0.335800f, -0.895600f }	},
	{	{ 0.158040f, 0.048568f, -0.048568f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.291800f, 0.335800f, -0.895600f }	},
	{	{ 0.230991f, 0.029808f, -0.029808f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.291800f, 0.335800f, -0.895600f }	},
	{	{ 0.256523f, 0.000000f, -0.034690f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.291800f, 0.335800f, -0.895600f }	},
	{	{ 0.158040f, 0.000000f, -0.064758f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.291800f, 0.335800f, -0.895600f }	},
	{	{ 0.158040f, 0.000000f, 0.064758f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.027500f, -0.316100f, 0.948300f }	},
	{	{ 0.061822f, -0.050662f, 0.050662f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.027500f, -0.316100f, 0.948300f }	},
	{	{ 0.158040f, -0.048568f, 0.048568f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.027500f, -0.316100f, 0.948300f }	},
	{	{ 0.158040f, 0.000000f, 0.064758f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.027500f, 0.316100f, 0.948300f }	},
	{	{ 0.158040f, 0.048568f, 0.048568f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.027500f, 0.316100f, 0.948300f }	},
	{	{ 0.061822f, 0.050662f, 0.050662f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.027500f, 0.316100f, 0.948300f }	},
	{	{ 0.256523f, 0.000000f, 0.034690f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.291800f, 0.335800f, 0.895600f }	},
	{	{ 0.230991f, 0.029808f, 0.029808f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.291800f, 0.335800f, 0.895600f }	},
	{	{ 0.158040f, 0.048568f, 0.048568f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.291800f, 0.335800f, 0.895600f }	},
	{	{ 0.158040f, 0.000000f, 0.064758f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.291800f, 0.335800f, 0.895600f }	},
	{	{ 0.158040f, -0.048568f, 0.048568f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.291800f, -0.335800f, 0.895600f }	},
	{	{ 0.230991f, -0.029808f, 0.029808f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.291800f, -0.335800f, 0.895600f }	},
	{	{ 0.256523f, 0.000000f, 0.034690f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.291800f, -0.335800f, 0.895600f }	},
	{	{ 0.158040f, 0.000000f, 0.064758f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.291800f, -0.335800f, 0.895600f }	},
	{	{ 0.158040f, -0.064758f, 0.000000f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.027500f, -0.948300f, -0.316100f }	},
	{	{ 0.061822f, -0.050662f, -0.050662f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.027500f, -0.948300f, -0.316100f }	},
	{	{ 0.158040f, -0.048568f, -0.048568f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.027500f, -0.948300f, -0.316100f }	},
	{	{ 0.158040f, -0.064758f, 0.000000f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.027500f, -0.948300f, 0.316100f }	},
	{	{ 0.158040f, -0.048568f, 0.048568f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.027500f, -0.948300f, 0.316100f }	},
	{	{ 0.061822f, -0.050662f, 0.050662f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.027500f, -0.948300f, 0.316100f }	},
	{	{ 0.256523f, -0.034690f, 0.000000f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.291800f, -0.895600f, 0.335800f }	},
	{	{ 0.230991f, -0.029808f, 0.029808f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.291800f, -0.895600f, 0.335800f }	},
	{	{ 0.158040f, -0.048568f, 0.048568f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.291800f, -0.895600f, 0.335800f }	},
	{	{ 0.158040f, -0.064758f, 0.000000f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.291800f, -0.895600f, 0.335800f }	},
	{	{ 0.158040f, -0.048568f, -0.048568f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.291800f, -0.895600f, -0.335800f }	},
	{	{ 0.230991f, -0.029808f, -0.029808f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.291800f, -0.895600f, -0.335800f }	},
	{	{ 0.256523f, -0.034690f, 0.000000f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.291800f, -0.895600f, -0.335800f }	},
	{	{ 0.158040f, -0.064758f, 0.000000f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.291800f, -0.895600f, -0.335800f }	},
};
#define _Corn_Crop_vertices_
#endif
#ifndef _Corn_Crop_indices_
// Index Data follows: Sequential by mesh, Every Three Indices == One Triangle.
const unsigned int Corn_Crop_indices[240] =
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
	 83, 84, 85,
	 86, 87, 88,
	 89, 90, 91,
	 92, 93, 94,
	 95, 96, 97,
	 98, 99, 100,
	 101, 102, 103,
	 104, 105, 106,
	 107, 108, 109,
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
	 137, 138, 139,
	 140, 141, 142,
	 143, 140, 142,
	 144, 145, 146,
	 147, 144, 146,
	 148, 149, 150,
	 151, 152, 153,
	 154, 155, 156,
	 157, 154, 156,
	 158, 159, 160,
	 161, 158, 160,
	 162, 163, 164,
	 165, 166, 167,
	 168, 169, 170,
	 171, 168, 170,
	 172, 173, 174,
	 175, 172, 174,
};
#define _Corn_Crop_indices_
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
#ifndef _Corn_Crop_materials_
// Material Data follows: pulled from a .mtl file of the same name if present.
const OBJ_MATERIAL Corn_Crop_materials[2] =
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
		{{ 0.358380f, 0.283791f, 0.090115f },
		1.000000f,
		{ 0.500000f, 0.500000f, 0.500000f },
		96.078430f,
		{ 1.000000f, 1.000000f, 1.000000f },
		60.000000f,
		{ 1.000000f, 1.000000f, 1.000000f },
		1.000000f,
		{ 0.000000f, 0.000000f, 0.000000f },
		2},
		"Yellow",
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
#define _Corn_Crop_materials_
#endif
/************************************************/
/*  This section contains the model's structure */
/************************************************/
#ifndef _Corn_Crop_batches_
// Use this conveinence array to batch render all geometry by like material.
// Each entry corresponds to the same entry in the materials array above.
// The two numbers provided are the IndexCount and the IndexOffset into the indices array.
// If you need more fine grained control(ex: for transformations) use the OBJ_MESH data below.
const unsigned int Corn_Crop_batches[2][2] =
{
	{ 144, 0 },
	{ 96, 144 },
};
#define _Corn_Crop_batches_
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
#ifndef _Corn_Crop_meshes_
// Mesh Data follows: Meshes are .obj groups sorted & split by material.
// Meshes are provided in sequential order, sorted by material first and name second.
const OBJ_MESH Corn_Crop_meshes[2] =
{
	{
		"default",
		144,
		0,
		0,
	},
	{
		"default",
		96,
		144,
		1,
	},
};
#define _Corn_Crop_meshes_
#endif

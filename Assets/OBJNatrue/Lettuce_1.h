// "Lettuce_1.h" generated by "Obj2Header.exe" [Version 1.9d] Author: L.Norri Fullsail University.
// Data is converted to left-handed coordinate system and UV data is V flipped for Direct3D/Vulkan.
// The companion file "Lettuce_1.h2b" is a binary dump of this format(-padding) for more flexibility.
// Loading *.h2b: read version, sizes, handle strings(max len 260) by reading until null-terminated.
/***********************/
/*  Generator version  */
/***********************/
#ifndef _Lettuce_1_version_
const char Lettuce_1_version[4] = { '0','1','9','d' };
#define _Lettuce_1_version_
#endif
/************************************************/
/*  This section contains the model's size data */
/************************************************/
#ifndef _Lettuce_1_vertexcount_
const unsigned Lettuce_1_vertexcount = 180;
#define _Lettuce_1_vertexcount_
#endif
#ifndef _Lettuce_1_indexcount_
const unsigned Lettuce_1_indexcount = 264;
#define _Lettuce_1_indexcount_
#endif
#ifndef _Lettuce_1_materialcount_
const unsigned Lettuce_1_materialcount = 1; // can be used for batched draws
#define _Lettuce_1_materialcount_
#endif
#ifndef _Lettuce_1_meshcount_
const unsigned Lettuce_1_meshcount = 1;
#define _Lettuce_1_meshcount_
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
#ifndef _Lettuce_1_vertices_
// Raw Vertex Data follows: Positions, Texture Coordinates and Normals.
const OBJ_VERT Lettuce_1_vertices[180] =
{
	{	{ -0.023934f, 0.121693f, -0.026428f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.952900f, -0.206100f, -0.222700f }	},
	{	{ -0.011033f, 0.042499f, -0.007028f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.952900f, -0.206100f, -0.222700f }	},
	{	{ -0.013662f, 0.042529f, 0.002875f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.952900f, -0.206100f, -0.222700f }	},
	{	{ -0.033941f, 0.121833f, 0.017572f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.952900f, -0.206100f, -0.222700f }	},
	{	{ -0.064657f, 0.186965f, 0.017878f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.884800f, -0.429800f, -0.180000f }	},
	{	{ -0.051733f, 0.186712f, -0.049882f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.884800f, -0.429800f, -0.180000f }	},
	{	{ -0.023934f, 0.121693f, -0.026428f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.884800f, -0.429800f, -0.180000f }	},
	{	{ -0.033941f, 0.121833f, 0.017572f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.884800f, -0.429800f, -0.180000f }	},
	{	{ -0.091175f, 0.218990f, 0.008473f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.747800f, -0.647300f, -0.147400f }	},
	{	{ -0.083025f, 0.220689f, -0.037012f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.747800f, -0.647300f, -0.147400f }	},
	{	{ -0.051733f, 0.186712f, -0.049882f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.747800f, -0.647300f, -0.147400f }	},
	{	{ -0.064657f, 0.186965f, 0.017878f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.747800f, -0.647300f, -0.147400f }	},
	{	{ -0.137272f, 0.253566f, -0.012665f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.557400f, -0.819000f, -0.136000f }	},
	{	{ -0.134783f, 0.253865f, -0.022799f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.557400f, -0.819000f, -0.136000f }	},
	{	{ -0.083025f, 0.220689f, -0.037012f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.557400f, -0.819000f, -0.136000f }	},
	{	{ -0.091175f, 0.218990f, 0.008473f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.557400f, -0.819000f, -0.136000f }	},
	{	{ -0.137272f, 0.253566f, -0.012665f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.415100f, -0.900600f, -0.128500f }	},
	{	{ -0.147003f, 0.259011f, -0.019392f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.415100f, -0.900600f, -0.128500f }	},
	{	{ -0.134783f, 0.253865f, -0.022799f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.415100f, -0.900600f, -0.128500f }	},
	{	{ -0.005852f, 0.152468f, -0.029504f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.950300f, 0.274100f, 0.147900f }	},
	{	{ -0.020585f, 0.086815f, -0.005338f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.950300f, 0.274100f, 0.147900f }	},
	{	{ -0.019631f, 0.086815f, 0.003624f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.950300f, 0.274100f, 0.147900f }	},
	{	{ 0.004105f, 0.152483f, 0.031593f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.950300f, 0.274100f, 0.147900f }	},
	{	{ 0.035649f, 0.219259f, 0.041460f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.896000f, 0.426800f, 0.122400f }	},
	{	{ 0.022809f, 0.219099f, -0.063777f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.896000f, 0.426800f, 0.122400f }	},
	{	{ -0.005852f, 0.152468f, -0.029504f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.896000f, 0.426800f, 0.122400f }	},
	{	{ 0.004105f, 0.152483f, 0.031593f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.896000f, 0.426800f, 0.122400f }	},
	{	{ 0.063733f, 0.253121f, 0.026235f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.749500f, 0.655400f, 0.093100f }	},
	{	{ 0.055732f, 0.254910f, -0.047866f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.749500f, 0.655400f, 0.093100f }	},
	{	{ 0.022809f, 0.219099f, -0.063777f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.749500f, 0.655400f, 0.093100f }	},
	{	{ 0.035649f, 0.219259f, 0.041460f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.749500f, 0.655400f, 0.093100f }	},
	{	{ 0.112029f, 0.289345f, -0.011601f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.559900f, 0.824000f, 0.086600f }	},
	{	{ 0.109800f, 0.289764f, -0.024596f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.559900f, 0.824000f, 0.086600f }	},
	{	{ 0.055732f, 0.254910f, -0.047866f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.559900f, 0.824000f, 0.086600f }	},
	{	{ 0.063733f, 0.253121f, 0.026235f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.559900f, 0.824000f, 0.086600f }	},
	{	{ 0.112029f, 0.289345f, -0.011601f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.426400f, 0.898700f, 0.102100f }	},
	{	{ 0.123527f, 0.295724f, -0.019722f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.426400f, 0.898700f, 0.102100f }	},
	{	{ 0.109800f, 0.289764f, -0.024596f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.426400f, 0.898700f, 0.102100f }	},
	{	{ -0.005021f, 0.042911f, 0.000622f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.954500f, 0.206700f, 0.214800f }	},
	{	{ -0.002396f, 0.042911f, -0.009281f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.954500f, 0.206700f, 0.214800f }	},
	{	{ -0.015529f, 0.122959f, -0.029724f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.954500f, 0.206700f, 0.214800f }	},
	{	{ -0.025480f, 0.122959f, 0.016258f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.954500f, 0.206700f, 0.214800f }	},
	{	{ -0.015529f, 0.122959f, -0.029724f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.886100f, 0.431400f, 0.169600f }	},
	{	{ -0.043865f, 0.188899f, -0.055419f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.886100f, 0.431400f, 0.169600f }	},
	{	{ -0.056609f, 0.188899f, 0.017154f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.886100f, 0.431400f, 0.169600f }	},
	{	{ -0.025480f, 0.122959f, 0.016258f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.886100f, 0.431400f, 0.169600f }	},
	{	{ -0.043865f, 0.188899f, -0.055419f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.749400f, 0.647500f, 0.138200f }	},
	{	{ -0.076156f, 0.223868f, -0.040680f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.749400f, 0.647500f, 0.138200f }	},
	{	{ -0.083908f, 0.221832f, 0.007433f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.749400f, 0.647500f, 0.138200f }	},
	{	{ -0.056609f, 0.188899f, 0.017154f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.749400f, 0.647500f, 0.138200f }	},
	{	{ -0.076156f, 0.223868f, -0.040680f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.559600f, 0.818400f, 0.130600f }	},
	{	{ -0.129184f, 0.257843f, -0.024233f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.559600f, 0.818400f, 0.130600f }	},
	{	{ -0.131232f, 0.257305f, -0.014221f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.559600f, 0.818400f, 0.130600f }	},
	{	{ -0.083908f, 0.221832f, 0.007433f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.559600f, 0.818400f, 0.130600f }	},
	{	{ -0.131232f, 0.257305f, -0.014221f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.417600f, 0.898700f, 0.133800f }	},
	{	{ -0.129184f, 0.257843f, -0.024233f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.417600f, 0.898700f, 0.133800f }	},
	{	{ -0.142011f, 0.263272f, -0.020657f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.417600f, 0.898700f, 0.133800f }	},
	{	{ -0.011060f, 0.001654f, -0.007021f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.966600f, 0.000600f, -0.256300f }	},
	{	{ -0.013685f, 0.001654f, 0.002881f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.966600f, 0.000600f, -0.256300f }	},
	{	{ -0.013662f, 0.042529f, 0.002875f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.966600f, 0.000600f, -0.256300f }	},
	{	{ -0.011033f, 0.042499f, -0.007028f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.966600f, 0.000600f, -0.256300f }	},
	{	{ -0.011790f, 0.086274f, 0.001277f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.946300f, -0.288800f, -0.145100f }	},
	{	{ -0.012744f, 0.086274f, -0.007746f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.946300f, -0.288800f, -0.145100f }	},
	{	{ 0.002661f, 0.151438f, -0.034195f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.946300f, -0.288800f, -0.145100f }	},
	{	{ 0.012613f, 0.151438f, 0.027910f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.946300f, -0.288800f, -0.145100f }	},
	{	{ 0.002661f, 0.151438f, -0.034195f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.895200f, -0.428900f, -0.121400f }	},
	{	{ 0.030998f, 0.217378f, -0.069502f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.895200f, -0.428900f, -0.121400f }	},
	{	{ 0.043741f, 0.217378f, 0.035804f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.895200f, -0.428900f, -0.121400f }	},
	{	{ 0.012613f, 0.151438f, 0.027910f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.895200f, -0.428900f, -0.121400f }	},
	{	{ 0.030998f, 0.217378f, -0.069502f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.750300f, -0.654500f, -0.093500f }	},
	{	{ 0.063289f, 0.252347f, -0.052092f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.750300f, -0.654500f, -0.093500f }	},
	{	{ 0.071040f, 0.250310f, 0.021269f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.750300f, -0.654500f, -0.093500f }	},
	{	{ 0.043741f, 0.217378f, 0.035804f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.750300f, -0.654500f, -0.093500f }	},
	{	{ 0.063289f, 0.252347f, -0.052092f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.560600f, -0.823400f, -0.088400f }	},
	{	{ 0.116316f, 0.286322f, -0.027052f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.560600f, -0.823400f, -0.088400f }	},
	{	{ 0.118364f, 0.285784f, -0.014284f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.560600f, -0.823400f, -0.088400f }	},
	{	{ 0.071040f, 0.250310f, 0.021269f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.560600f, -0.823400f, -0.088400f }	},
	{	{ 0.118364f, 0.285784f, -0.014284f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.424200f, -0.899300f, -0.106000f }	},
	{	{ 0.116316f, 0.286322f, -0.027052f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.424200f, -0.899300f, -0.106000f }	},
	{	{ 0.129144f, 0.291751f, -0.021776f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.424200f, -0.899300f, -0.106000f }	},
	{	{ -0.005021f, 0.042911f, 0.000622f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.213400f, -0.129700f, 0.968300f }	},
	{	{ -0.025480f, 0.122959f, 0.016258f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.213400f, -0.129700f, 0.968300f }	},
	{	{ -0.033941f, 0.121833f, 0.017572f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.213400f, -0.129700f, 0.968300f }	},
	{	{ -0.013662f, 0.042529f, 0.002875f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.213400f, -0.129700f, 0.968300f }	},
	{	{ -0.015529f, 0.122959f, -0.029724f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.273000f, -0.275300f, -0.921800f }	},
	{	{ -0.002396f, 0.042911f, -0.009281f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.273000f, -0.275300f, -0.921800f }	},
	{	{ -0.011033f, 0.042499f, -0.007028f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.273000f, -0.275300f, -0.921800f }	},
	{	{ -0.023934f, 0.121693f, -0.026428f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.273000f, -0.275300f, -0.921800f }	},
	{	{ -0.025480f, 0.122959f, 0.016258f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.114200f, 0.044800f, 0.992400f }	},
	{	{ -0.056609f, 0.188899f, 0.017154f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.114200f, 0.044800f, 0.992400f }	},
	{	{ -0.064657f, 0.186965f, 0.017878f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.114200f, 0.044800f, 0.992400f }	},
	{	{ -0.033941f, 0.121833f, 0.017572f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.114200f, 0.044800f, 0.992400f }	},
	{	{ -0.043865f, 0.188899f, -0.055419f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.347700f, -0.456400f, -0.819000f }	},
	{	{ -0.015529f, 0.122959f, -0.029724f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.347700f, -0.456400f, -0.819000f }	},
	{	{ -0.023934f, 0.121693f, -0.026428f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.347700f, -0.456400f, -0.819000f }	},
	{	{ -0.051733f, 0.186712f, -0.049882f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.347700f, -0.456400f, -0.819000f }	},
	{	{ -0.056609f, 0.188899f, 0.017154f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.017700f, 0.295900f, 0.955100f }	},
	{	{ -0.083908f, 0.221832f, 0.007433f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.017700f, 0.295900f, 0.955100f }	},
	{	{ -0.091175f, 0.218990f, 0.008473f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.017700f, 0.295900f, 0.955100f }	},
	{	{ -0.064657f, 0.186965f, 0.017878f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.017700f, 0.295900f, 0.955100f }	},
	{	{ -0.076156f, 0.223868f, -0.040680f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.496400f, -0.113100f, -0.860700f }	},
	{	{ -0.043865f, 0.188899f, -0.055419f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.496400f, -0.113100f, -0.860700f }	},
	{	{ -0.051733f, 0.186712f, -0.049882f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.496400f, -0.113100f, -0.860700f }	},
	{	{ -0.083025f, 0.220689f, -0.037012f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.496400f, -0.113100f, -0.860700f }	},
	{	{ -0.083908f, 0.221832f, 0.007433f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.057000f, 0.464000f, 0.884000f }	},
	{	{ -0.131232f, 0.257305f, -0.014221f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.057000f, 0.464000f, 0.884000f }	},
	{	{ -0.137272f, 0.253566f, -0.012665f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.057000f, 0.464000f, 0.884000f }	},
	{	{ -0.091175f, 0.218990f, 0.008473f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.057000f, 0.464000f, 0.884000f }	},
	{	{ -0.129184f, 0.257843f, -0.024233f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.332400f, -0.090100f, -0.938800f }	},
	{	{ -0.076156f, 0.223868f, -0.040680f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.332400f, -0.090100f, -0.938800f }	},
	{	{ -0.083025f, 0.220689f, -0.037012f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.332400f, -0.090100f, -0.938800f }	},
	{	{ -0.134783f, 0.253865f, -0.022799f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.332400f, -0.090100f, -0.938800f }	},
	{	{ -0.131232f, 0.257305f, -0.014221f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.202200f, 0.561800f, 0.802200f }	},
	{	{ -0.142011f, 0.263272f, -0.020657f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.202200f, 0.561800f, 0.802200f }	},
	{	{ -0.147003f, 0.259011f, -0.019392f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.202200f, 0.561800f, 0.802200f }	},
	{	{ -0.137272f, 0.253566f, -0.012665f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.202200f, 0.561800f, 0.802200f }	},
	{	{ -0.142011f, 0.263272f, -0.020657f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.261000f, 0.019200f, -0.965200f }	},
	{	{ -0.129184f, 0.257843f, -0.024233f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.261000f, 0.019200f, -0.965200f }	},
	{	{ -0.134783f, 0.253865f, -0.022799f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.261000f, 0.019200f, -0.965200f }	},
	{	{ -0.147003f, 0.259011f, -0.019392f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.261000f, 0.019200f, -0.965200f }	},
	{	{ -0.002396f, 0.001654f, -0.009281f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.000000f, -1.000000f, 0.000000f }	},
	{	{ -0.005021f, 0.001654f, 0.000622f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.000000f, -1.000000f, 0.000000f }	},
	{	{ -0.013685f, 0.001654f, 0.002881f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.000000f, -1.000000f, 0.000000f }	},
	{	{ -0.011060f, 0.001654f, -0.007021f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.000000f, -1.000000f, 0.000000f }	},
	{	{ -0.005021f, 0.042911f, 0.000622f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.966600f, 0.000000f, 0.256200f }	},
	{	{ -0.005021f, 0.001654f, 0.000622f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.966600f, 0.000000f, 0.256200f }	},
	{	{ -0.002396f, 0.001654f, -0.009281f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.966600f, 0.000000f, 0.256200f }	},
	{	{ -0.002396f, 0.042911f, -0.009281f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.966600f, 0.000000f, 0.256200f }	},
	{	{ -0.002396f, 0.042911f, -0.009281f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.252400f, 0.000000f, -0.967600f }	},
	{	{ -0.002396f, 0.001654f, -0.009281f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.252400f, 0.000000f, -0.967600f }	},
	{	{ -0.011060f, 0.001654f, -0.007021f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.252400f, 0.000000f, -0.967600f }	},
	{	{ -0.011033f, 0.042499f, -0.007028f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.252400f, 0.000000f, -0.967600f }	},
	{	{ -0.011790f, 0.086274f, 0.001277f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.269400f, -0.453600f, 0.849500f }	},
	{	{ 0.012613f, 0.151438f, 0.027910f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.269400f, -0.453600f, 0.849500f }	},
	{	{ 0.004105f, 0.152483f, 0.031593f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.269400f, -0.453600f, 0.849500f }	},
	{	{ -0.019631f, 0.086815f, 0.003624f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.269400f, -0.453600f, 0.849500f }	},
	{	{ -0.012744f, 0.086274f, -0.007746f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.066700f, -0.997700f, 0.007100f }	},
	{	{ -0.011790f, 0.086274f, 0.001277f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.066700f, -0.997700f, 0.007100f }	},
	{	{ -0.019631f, 0.086815f, 0.003624f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.066700f, -0.997700f, 0.007100f }	},
	{	{ -0.020585f, 0.086815f, -0.005338f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.066700f, -0.997700f, 0.007100f }	},
	{	{ 0.002661f, 0.151438f, -0.034195f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.405700f, -0.247000f, -0.880000f }	},
	{	{ -0.012744f, 0.086274f, -0.007746f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.405700f, -0.247000f, -0.880000f }	},
	{	{ -0.020585f, 0.086815f, -0.005338f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.405700f, -0.247000f, -0.880000f }	},
	{	{ -0.005852f, 0.152468f, -0.029504f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.405700f, -0.247000f, -0.880000f }	},
	{	{ 0.012613f, 0.151438f, 0.027910f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.423000f, -0.313500f, 0.850100f }	},
	{	{ 0.043741f, 0.217378f, 0.035804f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.423000f, -0.313500f, 0.850100f }	},
	{	{ 0.035649f, 0.219259f, 0.041460f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.423000f, -0.313500f, 0.850100f }	},
	{	{ 0.004105f, 0.152483f, 0.031593f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.423000f, -0.313500f, 0.850100f }	},
	{	{ 0.030998f, 0.217378f, -0.069502f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.542000f, -0.195900f, -0.817300f }	},
	{	{ 0.002661f, 0.151438f, -0.034195f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.542000f, -0.195900f, -0.817300f }	},
	{	{ -0.005852f, 0.152468f, -0.029504f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.542000f, -0.195900f, -0.817300f }	},
	{	{ 0.022809f, 0.219099f, -0.063777f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.542000f, -0.195900f, -0.817300f }	},
	{	{ 0.043741f, 0.217378f, 0.035804f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.548300f, -0.083900f, 0.832100f }	},
	{	{ 0.071040f, 0.250310f, 0.021269f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.548300f, -0.083900f, 0.832100f }	},
	{	{ 0.063733f, 0.253121f, 0.026235f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.548300f, -0.083900f, 0.832100f }	},
	{	{ 0.035649f, 0.219259f, 0.041460f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.548300f, -0.083900f, 0.832100f }	},
	{	{ 0.063289f, 0.252347f, -0.052092f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.294500f, 0.615500f, -0.731000f }	},
	{	{ 0.030998f, 0.217378f, -0.069502f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.294500f, 0.615500f, -0.731000f }	},
	{	{ 0.022809f, 0.219099f, -0.063777f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.294500f, 0.615500f, -0.731000f }	},
	{	{ 0.055732f, 0.254910f, -0.047866f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.294500f, 0.615500f, -0.731000f }	},
	{	{ 0.071040f, 0.250310f, 0.021269f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.533600f, 0.141800f, 0.833800f }	},
	{	{ 0.118364f, 0.285784f, -0.014284f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.533600f, 0.141800f, 0.833800f }	},
	{	{ 0.112029f, 0.289345f, -0.011601f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.533600f, 0.141800f, 0.833800f }	},
	{	{ 0.063733f, 0.253121f, 0.026235f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.533600f, 0.141800f, 0.833800f }	},
	{	{ 0.116316f, 0.286322f, -0.027052f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.079400f, 0.652500f, -0.753600f }	},
	{	{ 0.063289f, 0.252347f, -0.052092f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.079400f, 0.652500f, -0.753600f }	},
	{	{ 0.055732f, 0.254910f, -0.047866f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.079400f, 0.652500f, -0.753600f }	},
	{	{ 0.109800f, 0.289764f, -0.024596f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.079400f, 0.652500f, -0.753600f }	},
	{	{ 0.118364f, 0.285784f, -0.014284f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.475700f, 0.219000f, 0.851900f }	},
	{	{ 0.129144f, 0.291751f, -0.021776f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.475700f, 0.219000f, 0.851900f }	},
	{	{ 0.123527f, 0.295724f, -0.019722f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.475700f, 0.219000f, 0.851900f }	},
	{	{ 0.112029f, 0.289345f, -0.011601f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.475700f, 0.219000f, 0.851900f }	},
	{	{ 0.129144f, 0.291751f, -0.021776f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.057600f, 0.585900f, -0.808300f }	},
	{	{ 0.116316f, 0.286322f, -0.027052f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.057600f, 0.585900f, -0.808300f }	},
	{	{ 0.109800f, 0.289764f, -0.024596f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.057600f, 0.585900f, -0.808300f }	},
	{	{ 0.123527f, 0.295724f, -0.019722f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.057600f, 0.585900f, -0.808300f }	},
	{	{ -0.005021f, 0.001654f, 0.000622f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.252400f, -0.000000f, 0.967600f }	},
	{	{ -0.005021f, 0.042911f, 0.000622f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.252400f, -0.000000f, 0.967600f }	},
	{	{ -0.013662f, 0.042529f, 0.002875f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.252400f, -0.000000f, 0.967600f }	},
	{	{ -0.013685f, 0.001654f, 0.002881f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.252400f, -0.000000f, 0.967600f }	},
};
#define _Lettuce_1_vertices_
#endif
#ifndef _Lettuce_1_indices_
// Index Data follows: Sequential by mesh, Every Three Indices == One Triangle.
const unsigned int Lettuce_1_indices[264] =
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
	 38, 39, 40,
	 41, 38, 40,
	 42, 43, 44,
	 45, 42, 44,
	 46, 47, 48,
	 49, 46, 48,
	 50, 51, 52,
	 53, 50, 52,
	 54, 55, 56,
	 57, 58, 59,
	 60, 57, 59,
	 61, 62, 63,
	 64, 61, 63,
	 65, 66, 67,
	 68, 65, 67,
	 69, 70, 71,
	 72, 69, 71,
	 73, 74, 75,
	 76, 73, 75,
	 77, 78, 79,
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
#define _Lettuce_1_indices_
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
#ifndef _Lettuce_1_materials_
// Material Data follows: pulled from a .mtl file of the same name if present.
const OBJ_MATERIAL Lettuce_1_materials[1] =
{
	{
		{{ 0.117745f, 0.134357f, 0.073605f },
		1.000000f,
		{ 0.500000f, 0.500000f, 0.500000f },
		96.078430f,
		{ 1.000000f, 1.000000f, 1.000000f },
		60.000000f,
		{ 1.000000f, 1.000000f, 1.000000f },
		1.000000f,
		{ 0.000000f, 0.000000f, 0.000000f },
		2},
		"DarkGreen",
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
#define _Lettuce_1_materials_
#endif
/************************************************/
/*  This section contains the model's structure */
/************************************************/
#ifndef _Lettuce_1_batches_
// Use this conveinence array to batch render all geometry by like material.
// Each entry corresponds to the same entry in the materials array above.
// The two numbers provided are the IndexCount and the IndexOffset into the indices array.
// If you need more fine grained control(ex: for transformations) use the OBJ_MESH data below.
const unsigned int Lettuce_1_batches[1][2] =
{
	{ 264, 0 },
};
#define _Lettuce_1_batches_
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
#ifndef _Lettuce_1_meshes_
// Mesh Data follows: Meshes are .obj groups sorted & split by material.
// Meshes are provided in sequential order, sorted by material first and name second.
const OBJ_MESH Lettuce_1_meshes[1] =
{
	{
		"default",
		264,
		0,
		0,
	},
};
#define _Lettuce_1_meshes_
#endif
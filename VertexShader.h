#if 0
//
// Generated by Microsoft (R) HLSL Shader Compiler 10.1
//
//
// Buffer Definitions: 
//
// cbuffer INDECIES
// {
//
//   uint lightCount;                   // Offset:    0 Size:     4 [unused]
//   uint projectionInd;                // Offset:    4 Size:     4
//   uint viewInd;                      // Offset:    8 Size:     4
//
// }
//
// cbuffer cameraAndLights
// {
//
//   struct SCENEDATA
//   {
//       
//       float3 sunDirection;           // Offset:    0
//       float3 sunColor;               // Offset:   16
//       float3 sunAmbeint;             // Offset:   32
//       float3 camPos;                 // Offset:   48
//       row_major float4x4 viewMatrix[3];// Offset:   64
//       row_major float4x4 projectionMatrix[2];// Offset:  256
//       float padding[32];             // Offset:  384
//
//   } cameraAndLights;                 // Offset:    0 Size:   884
//
// }
//
// cbuffer meshInfo
// {
//
//   struct MESHDATA
//   {
//       
//       row_major float4x4 worldMatrix;// Offset:    0
//       
//       struct OBJ_ATTRIBUTES
//       {
//           
//           float3 kd;                 // Offset:   64
//           float d;                   // Offset:   76
//           float3 ks;                 // Offset:   80
//           float ns;                  // Offset:   92
//           float3 ka;                 // Offset:   96
//           float sharpness;           // Offset:  108
//           float3 tf;                 // Offset:  112
//           float ni;                  // Offset:  124
//           float3 ke;                 // Offset:  128
//           uint illum;                // Offset:  140
//
//       } material;                    // Offset:   64
//       float padding[28];             // Offset:  144
//
//   } meshInfo;                        // Offset:    0 Size:   580
//
// }
//
//
// Resource Bindings:
//
// Name                                 Type  Format         Dim      ID      HLSL Bind  Count
// ------------------------------ ---------- ------- ----------- ------- -------------- ------
// cameraAndLights                   cbuffer      NA          NA     CB0            cb0      1 
// meshInfo                          cbuffer      NA          NA     CB1            cb1      1 
// INDECIES                          cbuffer      NA          NA     CB2            cb3      1 
//
//
//
// Input signature:
//
// Name                 Index   Mask Register SysValue  Format   Used
// -------------------- ----- ------ -------- -------- ------- ------
// POSITION                 0   xyz         0     NONE   float   xyz 
// TEXCOORD                 0   xyz         1     NONE   float       
// NORMAL                   0   xyz         2     NONE   float   xyz 
//
//
// Output signature:
//
// Name                 Index   Mask Register SysValue  Format   Used
// -------------------- ----- ------ -------- -------- ------- ------
// SV_POSITION              0   xyzw        0      POS   float   xyzw
// NORMAL                   0   xyz         1     NONE   float   xyz 
// WORLD                    0   xyz         2     NONE   float   xyz 
//
vs_5_1
dcl_globalFlags refactoringAllowed
dcl_constantbuffer CB0[0:0][56], dynamicIndexed, space=0
dcl_constantbuffer CB1[1:1][4], immediateIndexed, space=0
dcl_constantbuffer CB2[3:3][1], immediateIndexed, space=0
dcl_input v0.xyz
dcl_input v2.xyz
dcl_output_siv o0.xyzw, position
dcl_output o1.xyz
dcl_output o2.xyz
dcl_temps 4
mul r0.xyzw, v0.yyyy, CB1[1][1].xyzw
mad r0.xyzw, v0.xxxx, CB1[1][0].xyzw, r0.xyzw
mad r0.xyzw, v0.zzzz, CB1[1][2].xyzw, r0.xyzw
add r0.xyzw, r0.xyzw, CB1[1][3].xyzw
ishl r1.xy, CB2[3][0].zyzz, l(2, 2, 0, 0)
mul r2.xyzw, r0.yyyy, CB0[0][r1.x + 5].xyzw
mad r2.xyzw, r0.xxxx, CB0[0][r1.x + 4].xyzw, r2.xyzw
mad r2.xyzw, r0.zzzz, CB0[0][r1.x + 6].xyzw, r2.xyzw
mad r2.xyzw, r0.wwww, CB0[0][r1.x + 7].xyzw, r2.xyzw
mul r3.xyzw, r2.yyyy, CB0[0][r1.y + 17].xyzw
mad r3.xyzw, r2.xxxx, CB0[0][r1.y + 16].xyzw, r3.xyzw
mad r3.xyzw, r2.zzzz, CB0[0][r1.y + 18].xyzw, r3.xyzw
mad o0.xyzw, r2.wwww, CB0[0][r1.y + 19].xyzw, r3.xyzw
mul r1.xyz, v2.yyyy, CB1[1][1].xyzx
mad r1.xyz, v2.xxxx, CB1[1][0].xyzx, r1.xyzx
mad o1.xyz, v2.zzzz, CB1[1][2].xyzx, r1.xyzx
mov o2.xyz, r0.xyzx
ret 
// Approximately 18 instruction slots used
#endif

const BYTE VertexShader[] =
{
     68,  88,  66,  67, 145,  42, 
    167, 124,  15,  56,  97, 227, 
     47,  52, 235,  48, 174, 225, 
    244, 229,   1,   0,   0,   0, 
     16,  11,   0,   0,   5,   0, 
      0,   0,  52,   0,   0,   0, 
    232,   5,   0,   0,  92,   6, 
      0,   0, 208,   6,   0,   0, 
    116,  10,   0,   0,  82,  68, 
     69,  70, 172,   5,   0,   0, 
      3,   0,   0,   0, 216,   0, 
      0,   0,   3,   0,   0,   0, 
     60,   0,   0,   0,   1,   5, 
    254, 255,   0,   5,   0,   0, 
    132,   5,   0,   0,  19,  19, 
     68,  37,  60,   0,   0,   0, 
     24,   0,   0,   0,  40,   0, 
      0,   0,  40,   0,   0,   0, 
     36,   0,   0,   0,  12,   0, 
      0,   0,   0,   0,   0,   0, 
    180,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      1,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0, 196,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      1,   0,   0,   0,   1,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   1,   0, 
      0,   0, 205,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   3,   0, 
      0,   0,   1,   0,   0,   0, 
      1,   0,   0,   0,   0,   0, 
      0,   0,   2,   0,   0,   0, 
     99,  97, 109, 101, 114,  97, 
     65, 110, 100,  76, 105, 103, 
    104, 116, 115,   0, 109, 101, 
    115, 104,  73, 110, 102, 111, 
      0,  73,  78,  68,  69,  67, 
     73,  69,  83,   0, 171, 171, 
    205,   0,   0,   0,   3,   0, 
      0,   0,  32,   1,   0,   0, 
     16,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
    180,   0,   0,   0,   1,   0, 
      0,   0, 232,   1,   0,   0, 
    128,   3,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
    196,   0,   0,   0,   1,   0, 
      0,   0, 140,   3,   0,   0, 
     80,   2,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
    152,   1,   0,   0,   0,   0, 
      0,   0,   4,   0,   0,   0, 
      0,   0,   0,   0, 172,   1, 
      0,   0,   0,   0,   0,   0, 
    255, 255, 255, 255,   0,   0, 
      0,   0, 255, 255, 255, 255, 
      0,   0,   0,   0, 208,   1, 
      0,   0,   4,   0,   0,   0, 
      4,   0,   0,   0,   2,   0, 
      0,   0, 172,   1,   0,   0, 
      0,   0,   0,   0, 255, 255, 
    255, 255,   0,   0,   0,   0, 
    255, 255, 255, 255,   0,   0, 
      0,   0, 222,   1,   0,   0, 
      8,   0,   0,   0,   4,   0, 
      0,   0,   2,   0,   0,   0, 
    172,   1,   0,   0,   0,   0, 
      0,   0, 255, 255, 255, 255, 
      0,   0,   0,   0, 255, 255, 
    255, 255,   0,   0,   0,   0, 
    108, 105, 103, 104, 116,  67, 
    111, 117, 110, 116,   0, 100, 
    119, 111, 114, 100,   0, 171, 
    171, 171,   0,   0,  19,   0, 
      1,   0,   1,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0, 163,   1, 
      0,   0, 112, 114, 111, 106, 
    101,  99, 116, 105, 111, 110, 
     73, 110, 100,   0, 118, 105, 
    101, 119,  73, 110, 100,   0, 
    171, 171, 180,   0,   0,   0, 
      0,   0,   0,   0, 116,   3, 
      0,   0,   2,   0,   0,   0, 
    104,   3,   0,   0,   0,   0, 
      0,   0, 255, 255, 255, 255, 
      0,   0,   0,   0, 255, 255, 
    255, 255,   0,   0,   0,   0, 
     83,  67,  69,  78,  69,  68, 
     65,  84,  65,   0, 115, 117, 
    110,  68, 105, 114, 101,  99, 
    116, 105, 111, 110,   0, 102, 
    108, 111,  97, 116,  51,   0, 
    171, 171,   1,   0,   3,   0, 
      1,   0,   3,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,  39,   2, 
      0,   0, 115, 117, 110,  67, 
    111, 108, 111, 114,   0, 115, 
    117, 110,  65, 109,  98, 101, 
    105, 110, 116,   0,  99,  97, 
    109,  80, 111, 115,   0, 118, 
    105, 101, 119,  77,  97, 116, 
    114, 105, 120,   0, 102, 108, 
    111,  97, 116,  52, 120,  52, 
      0, 171,   2,   0,   3,   0, 
      4,   0,   4,   0,   3,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0, 122,   2, 
      0,   0, 112, 114, 111, 106, 
    101,  99, 116, 105, 111, 110, 
     77,  97, 116, 114, 105, 120, 
      0, 171, 171, 171,   2,   0, 
      3,   0,   4,   0,   4,   0, 
      2,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
    122,   2,   0,   0, 112,  97, 
    100, 100, 105, 110, 103,   0, 
    102, 108, 111,  97, 116,   0, 
    171, 171,   0,   0,   3,   0, 
      1,   0,   1,   0,  32,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0, 232,   2, 
      0,   0,  26,   2,   0,   0, 
     48,   2,   0,   0,   0,   0, 
      0,   0,  84,   2,   0,   0, 
     48,   2,   0,   0,  16,   0, 
      0,   0,  93,   2,   0,   0, 
     48,   2,   0,   0,  32,   0, 
      0,   0, 104,   2,   0,   0, 
     48,   2,   0,   0,  48,   0, 
      0,   0, 111,   2,   0,   0, 
    132,   2,   0,   0,  64,   0, 
      0,   0, 168,   2,   0,   0, 
    188,   2,   0,   0,   0,   1, 
      0,   0, 224,   2,   0,   0, 
    240,   2,   0,   0, 128,   1, 
      0,   0,   5,   0,   0,   0, 
      1,   0, 124,   0,   0,   0, 
      7,   0,  20,   3,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,  16,   2, 
      0,   0, 196,   0,   0,   0, 
      0,   0,   0,   0,  68,   2, 
      0,   0,   2,   0,   0,   0, 
     96,   5,   0,   0,   0,   0, 
      0,   0, 255, 255, 255, 255, 
      0,   0,   0,   0, 255, 255, 
    255, 255,   0,   0,   0,   0, 
     77,  69,  83,  72,  68,  65, 
     84,  65,   0, 119, 111, 114, 
    108, 100,  77,  97, 116, 114, 
    105, 120,   0, 171, 171, 171, 
      2,   0,   3,   0,   4,   0, 
      4,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0, 122,   2,   0,   0, 
    109,  97, 116, 101, 114, 105, 
     97, 108,   0,  79,  66,  74, 
     95,  65,  84,  84,  82,  73, 
     66,  85,  84,  69,  83,   0, 
    107, 100,   0, 100,   0, 171, 
    171, 171,   0,   0,   3,   0, 
      1,   0,   1,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0, 232,   2, 
      0,   0, 107, 115,   0, 110, 
    115,   0, 107,  97,   0, 115, 
    104,  97, 114, 112, 110, 101, 
    115, 115,   0, 116, 102,   0, 
    110, 105,   0, 107, 101,   0, 
    105, 108, 108, 117, 109,   0, 
    171, 171,   0,   0,  19,   0, 
      1,   0,   1,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0, 163,   1, 
      0,   0,   8,   4,   0,   0, 
     48,   2,   0,   0,   0,   0, 
      0,   0,  11,   4,   0,   0, 
     16,   4,   0,   0,  12,   0, 
      0,   0,  52,   4,   0,   0, 
     48,   2,   0,   0,  16,   0, 
      0,   0,  55,   4,   0,   0, 
     16,   4,   0,   0,  28,   0, 
      0,   0,  58,   4,   0,   0, 
     48,   2,   0,   0,  32,   0, 
      0,   0,  61,   4,   0,   0, 
     16,   4,   0,   0,  44,   0, 
      0,   0,  71,   4,   0,   0, 
     48,   2,   0,   0,  48,   0, 
      0,   0,  74,   4,   0,   0, 
     16,   4,   0,   0,  60,   0, 
      0,   0,  77,   4,   0,   0, 
     48,   2,   0,   0,  64,   0, 
      0,   0,  80,   4,   0,   0, 
     88,   4,   0,   0,  76,   0, 
      0,   0,   5,   0,   0,   0, 
      1,   0,  20,   0,   0,   0, 
     10,   0, 124,   4,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0, 249,   3, 
      0,   0,   0,   0,   3,   0, 
      1,   0,   1,   0,  28,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0, 232,   2, 
      0,   0, 189,   3,   0,   0, 
    204,   3,   0,   0,   0,   0, 
      0,   0, 240,   3,   0,   0, 
    244,   4,   0,   0,  64,   0, 
      0,   0, 224,   2,   0,   0, 
     24,   5,   0,   0, 144,   0, 
      0,   0,   5,   0,   0,   0, 
      1,   0,  64,   0,   0,   0, 
      3,   0,  60,   5,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0, 180,   3, 
      0,   0,  77, 105,  99, 114, 
    111, 115, 111, 102, 116,  32, 
     40,  82,  41,  32,  72,  76, 
     83,  76,  32,  83, 104,  97, 
    100, 101, 114,  32,  67, 111, 
    109, 112, 105, 108, 101, 114, 
     32,  49,  48,  46,  49,   0, 
     73,  83,  71,  78, 108,   0, 
      0,   0,   3,   0,   0,   0, 
      8,   0,   0,   0,  80,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   3,   0, 
      0,   0,   0,   0,   0,   0, 
      7,   7,   0,   0,  89,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   3,   0, 
      0,   0,   1,   0,   0,   0, 
      7,   0,   0,   0,  98,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   3,   0, 
      0,   0,   2,   0,   0,   0, 
      7,   7,   0,   0,  80,  79, 
     83,  73,  84,  73,  79,  78, 
      0,  84,  69,  88,  67,  79, 
     79,  82,  68,   0,  78,  79, 
     82,  77,  65,  76,   0, 171, 
    171, 171,  79,  83,  71,  78, 
    108,   0,   0,   0,   3,   0, 
      0,   0,   8,   0,   0,   0, 
     80,   0,   0,   0,   0,   0, 
      0,   0,   1,   0,   0,   0, 
      3,   0,   0,   0,   0,   0, 
      0,   0,  15,   0,   0,   0, 
     92,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      3,   0,   0,   0,   1,   0, 
      0,   0,   7,   8,   0,   0, 
     99,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      3,   0,   0,   0,   2,   0, 
      0,   0,   7,   8,   0,   0, 
     83,  86,  95,  80,  79,  83, 
     73,  84,  73,  79,  78,   0, 
     78,  79,  82,  77,  65,  76, 
      0,  87,  79,  82,  76,  68, 
      0, 171, 171, 171,  83,  72, 
     69,  88, 156,   3,   0,   0, 
     81,   0,   1,   0, 231,   0, 
      0,   0, 106,   8,   0,   1, 
     89,   8,   0,   7,  70, 142, 
     48,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,  56,   0,   0,   0, 
      0,   0,   0,   0,  89,   0, 
      0,   7,  70, 142,  48,   0, 
      1,   0,   0,   0,   1,   0, 
      0,   0,   1,   0,   0,   0, 
      4,   0,   0,   0,   0,   0, 
      0,   0,  89,   0,   0,   7, 
     70, 142,  48,   0,   2,   0, 
      0,   0,   3,   0,   0,   0, 
      3,   0,   0,   0,   1,   0, 
      0,   0,   0,   0,   0,   0, 
     95,   0,   0,   3, 114,  16, 
     16,   0,   0,   0,   0,   0, 
     95,   0,   0,   3, 114,  16, 
     16,   0,   2,   0,   0,   0, 
    103,   0,   0,   4, 242,  32, 
     16,   0,   0,   0,   0,   0, 
      1,   0,   0,   0, 101,   0, 
      0,   3, 114,  32,  16,   0, 
      1,   0,   0,   0, 101,   0, 
      0,   3, 114,  32,  16,   0, 
      2,   0,   0,   0, 104,   0, 
      0,   2,   4,   0,   0,   0, 
     56,   0,   0,   9, 242,   0, 
     16,   0,   0,   0,   0,   0, 
     86,  21,  16,   0,   0,   0, 
      0,   0,  70, 142,  48,   0, 
      1,   0,   0,   0,   1,   0, 
      0,   0,   1,   0,   0,   0, 
     50,   0,   0,  11, 242,   0, 
     16,   0,   0,   0,   0,   0, 
      6,  16,  16,   0,   0,   0, 
      0,   0,  70, 142,  48,   0, 
      1,   0,   0,   0,   1,   0, 
      0,   0,   0,   0,   0,   0, 
     70,  14,  16,   0,   0,   0, 
      0,   0,  50,   0,   0,  11, 
    242,   0,  16,   0,   0,   0, 
      0,   0, 166,  26,  16,   0, 
      0,   0,   0,   0,  70, 142, 
     48,   0,   1,   0,   0,   0, 
      1,   0,   0,   0,   2,   0, 
      0,   0,  70,  14,  16,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   9, 242,   0,  16,   0, 
      0,   0,   0,   0,  70,  14, 
     16,   0,   0,   0,   0,   0, 
     70, 142,  48,   0,   1,   0, 
      0,   0,   1,   0,   0,   0, 
      3,   0,   0,   0,  41,   0, 
      0,  12,  50,   0,  16,   0, 
      1,   0,   0,   0, 102, 138, 
     48,   0,   2,   0,   0,   0, 
      3,   0,   0,   0,   0,   0, 
      0,   0,   2,  64,   0,   0, 
      2,   0,   0,   0,   2,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,  56,   0, 
      0,  11, 242,   0,  16,   0, 
      2,   0,   0,   0,  86,   5, 
     16,   0,   0,   0,   0,   0, 
     70, 142,  48,  48,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      5,   0,   0,   0,  10,   0, 
     16,   0,   1,   0,   0,   0, 
     50,   0,   0,  13, 242,   0, 
     16,   0,   2,   0,   0,   0, 
      6,   0,  16,   0,   0,   0, 
      0,   0,  70, 142,  48,  48, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   4,   0,   0,   0, 
     10,   0,  16,   0,   1,   0, 
      0,   0,  70,  14,  16,   0, 
      2,   0,   0,   0,  50,   0, 
      0,  13, 242,   0,  16,   0, 
      2,   0,   0,   0, 166,  10, 
     16,   0,   0,   0,   0,   0, 
     70, 142,  48,  48,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      6,   0,   0,   0,  10,   0, 
     16,   0,   1,   0,   0,   0, 
     70,  14,  16,   0,   2,   0, 
      0,   0,  50,   0,   0,  13, 
    242,   0,  16,   0,   2,   0, 
      0,   0, 246,  15,  16,   0, 
      0,   0,   0,   0,  70, 142, 
     48,  48,   0,   0,   0,   0, 
      0,   0,   0,   0,   7,   0, 
      0,   0,  10,   0,  16,   0, 
      1,   0,   0,   0,  70,  14, 
     16,   0,   2,   0,   0,   0, 
     56,   0,   0,  11, 242,   0, 
     16,   0,   3,   0,   0,   0, 
     86,   5,  16,   0,   2,   0, 
      0,   0,  70, 142,  48,  48, 
      0,   0,   0,   0,   0,   0, 
      0,   0,  17,   0,   0,   0, 
     26,   0,  16,   0,   1,   0, 
      0,   0,  50,   0,   0,  13, 
    242,   0,  16,   0,   3,   0, 
      0,   0,   6,   0,  16,   0, 
      2,   0,   0,   0,  70, 142, 
     48,  48,   0,   0,   0,   0, 
      0,   0,   0,   0,  16,   0, 
      0,   0,  26,   0,  16,   0, 
      1,   0,   0,   0,  70,  14, 
     16,   0,   3,   0,   0,   0, 
     50,   0,   0,  13, 242,   0, 
     16,   0,   3,   0,   0,   0, 
    166,  10,  16,   0,   2,   0, 
      0,   0,  70, 142,  48,  48, 
      0,   0,   0,   0,   0,   0, 
      0,   0,  18,   0,   0,   0, 
     26,   0,  16,   0,   1,   0, 
      0,   0,  70,  14,  16,   0, 
      3,   0,   0,   0,  50,   0, 
      0,  13, 242,  32,  16,   0, 
      0,   0,   0,   0, 246,  15, 
     16,   0,   2,   0,   0,   0, 
     70, 142,  48,  48,   0,   0, 
      0,   0,   0,   0,   0,   0, 
     19,   0,   0,   0,  26,   0, 
     16,   0,   1,   0,   0,   0, 
     70,  14,  16,   0,   3,   0, 
      0,   0,  56,   0,   0,   9, 
    114,   0,  16,   0,   1,   0, 
      0,   0,  86,  21,  16,   0, 
      2,   0,   0,   0,  70, 130, 
     48,   0,   1,   0,   0,   0, 
      1,   0,   0,   0,   1,   0, 
      0,   0,  50,   0,   0,  11, 
    114,   0,  16,   0,   1,   0, 
      0,   0,   6,  16,  16,   0, 
      2,   0,   0,   0,  70, 130, 
     48,   0,   1,   0,   0,   0, 
      1,   0,   0,   0,   0,   0, 
      0,   0,  70,   2,  16,   0, 
      1,   0,   0,   0,  50,   0, 
      0,  11, 114,  32,  16,   0, 
      1,   0,   0,   0, 166,  26, 
     16,   0,   2,   0,   0,   0, 
     70, 130,  48,   0,   1,   0, 
      0,   0,   1,   0,   0,   0, 
      2,   0,   0,   0,  70,   2, 
     16,   0,   1,   0,   0,   0, 
     54,   0,   0,   5, 114,  32, 
     16,   0,   2,   0,   0,   0, 
     70,   2,  16,   0,   0,   0, 
      0,   0,  62,   0,   0,   1, 
     83,  84,  65,  84, 148,   0, 
      0,   0,  18,   0,   0,   0, 
      4,   0,   0,   0,   0,   0, 
      0,   0,   5,   0,   0,   0, 
     15,   0,   0,   0,   1,   0, 
      0,   0,   0,   0,   0,   0, 
      1,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      1,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0
};

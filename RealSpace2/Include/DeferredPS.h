#if 0
//
// Generated by Microsoft (R) HLSL Shader Compiler 9.29.952.3111
//
//   fxc /Eps_main /Tps_3_0 /FhInclude/DeferredPS.h /VnDeferredPSData
//    Source/Deferred.hlsl /O3
//
//
// Parameters:
//
//   float Far;
//   float Near;
//   float Opacity;
//   float SpecLevel;
//   sampler2D diffuseTexture;
//   sampler2D normalTexture;
//   sampler2D opacityTexture;
//   sampler2D selfIllumTexture;
//   sampler2D specularTexture;
//
//
// Registers:
//
//   Name             Reg   Size
//   ---------------- ----- ----
//   SpecLevel        c15      1
//   Opacity          c17      1
//   Near             c18      1
//   Far              c19      1
//   diffuseTexture   s0       1
//   normalTexture    s1       1
//   specularTexture  s2       1
//   opacityTexture   s3       1
//   selfIllumTexture s4       1
//

    ps_3_0
    def c0, -0.400000006, 2, -1, 0
    def c1, 0.5, 0.300000012, 0, 0
    dcl_texcoord1 v0.xyz
    dcl_texcoord2 v1.xy
    dcl_texcoord3 v2.xyz
    dcl_texcoord4 v3.xyz
    dcl_texcoord5 v4.z
    dcl_2d s0
    dcl_2d s1
    dcl_2d s2
    dcl_2d s3
    dcl_2d s4
    mov r0.x, c18.x
    add r0.x, -r0.x, c19.x
    rcp r0.x, r0.x
    add r0.y, -c18.x, v4.z
    mul oC2.xyz, r0.x, r0.y
    texld r0, v1, s3
    max r1.x, c17.x, r0.w
    add r0, r1.x, c0.x
    texkill r0
    texld r0, v1, s1
    mad r0.xyz, r0, c0.y, c0.z
    nrm r1.xyz, r0
    mul r0.xyz, r1.x, v2
    mad r0.xyz, r1.z, v0, r0
    mad r0.xyz, r1.y, v3, r0
    nrm r1.xyz, r0
    mov r0.w, c0.w
    if_ge -c15.x, r0.w
      mov r0.x, c0.w
    else
      texld r2, v1, s2
      mov r0.x, r2.w
    endif
    mad oC1.xyz, r1, c1.x, c1.x
    texld r1, v1, s0
    texld r2, v1, s4
    mad oC3.xyz, r1, c1.y, r2
    mov r0.yzw, r1.xxyz
    mov oC0, r0.yzwx
    mov oC1.w, c15.x
    mov oC2.w, -c0.z
    mov oC3.w, -c0.z

// approximately 38 instruction slots used (5 texture, 33 arithmetic)
#endif

const BYTE DeferredPSData[] =
{
      0,   3, 255, 255, 254, 255, 
    119,   0,  67,  84,  65,  66, 
     28,   0,   0,   0, 167,   1, 
      0,   0,   0,   3, 255, 255, 
      9,   0,   0,   0,  28,   0, 
      0,   0,   0, 129,   0,   0, 
    160,   1,   0,   0, 208,   0, 
      0,   0,   2,   0,  19,   0, 
      1,   0,  78,   0, 212,   0, 
      0,   0,   0,   0,   0,   0, 
    228,   0,   0,   0,   2,   0, 
     18,   0,   1,   0,  74,   0, 
    212,   0,   0,   0,   0,   0, 
      0,   0, 233,   0,   0,   0, 
      2,   0,  17,   0,   1,   0, 
     70,   0, 212,   0,   0,   0, 
      0,   0,   0,   0, 241,   0, 
      0,   0,   2,   0,  15,   0, 
      1,   0,  62,   0, 212,   0, 
      0,   0,   0,   0,   0,   0, 
    251,   0,   0,   0,   3,   0, 
      0,   0,   1,   0,   2,   0, 
     12,   1,   0,   0,   0,   0, 
      0,   0,  28,   1,   0,   0, 
      3,   0,   1,   0,   1,   0, 
      6,   0,  44,   1,   0,   0, 
      0,   0,   0,   0,  60,   1, 
      0,   0,   3,   0,   3,   0, 
      1,   0,  14,   0,  76,   1, 
      0,   0,   0,   0,   0,   0, 
     92,   1,   0,   0,   3,   0, 
      4,   0,   1,   0,  18,   0, 
    112,   1,   0,   0,   0,   0, 
      0,   0, 128,   1,   0,   0, 
      3,   0,   2,   0,   1,   0, 
     10,   0, 144,   1,   0,   0, 
      0,   0,   0,   0,  70,  97, 
    114,   0,   0,   0,   3,   0, 
      1,   0,   1,   0,   1,   0, 
      0,   0,   0,   0,   0,   0, 
     78, 101,  97, 114,   0,  79, 
    112,  97,  99, 105, 116, 121, 
      0,  83, 112, 101,  99,  76, 
    101, 118, 101, 108,   0, 100, 
    105, 102, 102, 117, 115, 101, 
     84, 101, 120, 116, 117, 114, 
    101,   0, 171, 171,   4,   0, 
     12,   0,   1,   0,   1,   0, 
      1,   0,   0,   0,   0,   0, 
      0,   0, 110, 111, 114, 109, 
     97, 108,  84, 101, 120, 116, 
    117, 114, 101,   0, 171, 171, 
      4,   0,  12,   0,   1,   0, 
      1,   0,   1,   0,   0,   0, 
      0,   0,   0,   0, 111, 112, 
     97,  99, 105, 116, 121,  84, 
    101, 120, 116, 117, 114, 101, 
      0, 171,   4,   0,  12,   0, 
      1,   0,   1,   0,   1,   0, 
      0,   0,   0,   0,   0,   0, 
    115, 101, 108, 102,  73, 108, 
    108, 117, 109,  84, 101, 120, 
    116, 117, 114, 101,   0, 171, 
    171, 171,   4,   0,  12,   0, 
      1,   0,   1,   0,   1,   0, 
      0,   0,   0,   0,   0,   0, 
    115, 112, 101,  99, 117, 108, 
     97, 114,  84, 101, 120, 116, 
    117, 114, 101,   0,   4,   0, 
     12,   0,   1,   0,   1,   0, 
      1,   0,   0,   0,   0,   0, 
      0,   0, 112, 115,  95,  51, 
     95,  48,   0,  77, 105,  99, 
    114, 111, 115, 111, 102, 116, 
     32,  40,  82,  41,  32,  72, 
     76,  83,  76,  32,  83, 104, 
     97, 100, 101, 114,  32,  67, 
    111, 109, 112, 105, 108, 101, 
    114,  32,  57,  46,  50,  57, 
     46,  57,  53,  50,  46,  51, 
     49,  49,  49,   0,  81,   0, 
      0,   5,   0,   0,  15, 160, 
    205, 204, 204, 190,   0,   0, 
      0,  64,   0,   0, 128, 191, 
      0,   0,   0,   0,  81,   0, 
      0,   5,   1,   0,  15, 160, 
      0,   0,   0,  63, 154, 153, 
    153,  62,   0,   0,   0,   0, 
      0,   0,   0,   0,  31,   0, 
      0,   2,   5,   0,   1, 128, 
      0,   0,   7, 144,  31,   0, 
      0,   2,   5,   0,   2, 128, 
      1,   0,   3, 144,  31,   0, 
      0,   2,   5,   0,   3, 128, 
      2,   0,   7, 144,  31,   0, 
      0,   2,   5,   0,   4, 128, 
      3,   0,   7, 144,  31,   0, 
      0,   2,   5,   0,   5, 128, 
      4,   0,   4, 144,  31,   0, 
      0,   2,   0,   0,   0, 144, 
      0,   8,  15, 160,  31,   0, 
      0,   2,   0,   0,   0, 144, 
      1,   8,  15, 160,  31,   0, 
      0,   2,   0,   0,   0, 144, 
      2,   8,  15, 160,  31,   0, 
      0,   2,   0,   0,   0, 144, 
      3,   8,  15, 160,  31,   0, 
      0,   2,   0,   0,   0, 144, 
      4,   8,  15, 160,   1,   0, 
      0,   2,   0,   0,   1, 128, 
     18,   0,   0, 160,   2,   0, 
      0,   3,   0,   0,   1, 128, 
      0,   0,   0, 129,  19,   0, 
      0, 160,   6,   0,   0,   2, 
      0,   0,   1, 128,   0,   0, 
      0, 128,   2,   0,   0,   3, 
      0,   0,   2, 128,  18,   0, 
      0, 161,   4,   0, 170, 144, 
      5,   0,   0,   3,   2,   8, 
      7, 128,   0,   0,   0, 128, 
      0,   0,  85, 128,  66,   0, 
      0,   3,   0,   0,  15, 128, 
      1,   0, 228, 144,   3,   8, 
    228, 160,  11,   0,   0,   3, 
      1,   0,   1, 128,  17,   0, 
      0, 160,   0,   0, 255, 128, 
      2,   0,   0,   3,   0,   0, 
     15, 128,   1,   0,   0, 128, 
      0,   0,   0, 160,  65,   0, 
      0,   1,   0,   0,  15, 128, 
     66,   0,   0,   3,   0,   0, 
     15, 128,   1,   0, 228, 144, 
      1,   8, 228, 160,   4,   0, 
      0,   4,   0,   0,   7, 128, 
      0,   0, 228, 128,   0,   0, 
     85, 160,   0,   0, 170, 160, 
     36,   0,   0,   2,   1,   0, 
      7, 128,   0,   0, 228, 128, 
      5,   0,   0,   3,   0,   0, 
      7, 128,   1,   0,   0, 128, 
      2,   0, 228, 144,   4,   0, 
      0,   4,   0,   0,   7, 128, 
      1,   0, 170, 128,   0,   0, 
    228, 144,   0,   0, 228, 128, 
      4,   0,   0,   4,   0,   0, 
      7, 128,   1,   0,  85, 128, 
      3,   0, 228, 144,   0,   0, 
    228, 128,  36,   0,   0,   2, 
      1,   0,   7, 128,   0,   0, 
    228, 128,   1,   0,   0,   2, 
      0,   0,   8, 128,   0,   0, 
    255, 160,  41,   0,   3,   2, 
     15,   0,   0, 161,   0,   0, 
    255, 128,   1,   0,   0,   2, 
      0,   0,   1, 128,   0,   0, 
    255, 160,  42,   0,   0,   0, 
     66,   0,   0,   3,   2,   0, 
     15, 128,   1,   0, 228, 144, 
      2,   8, 228, 160,   1,   0, 
      0,   2,   0,   0,   1, 128, 
      2,   0, 255, 128,  43,   0, 
      0,   0,   4,   0,   0,   4, 
      1,   8,   7, 128,   1,   0, 
    228, 128,   1,   0,   0, 160, 
      1,   0,   0, 160,  66,   0, 
      0,   3,   1,   0,  15, 128, 
      1,   0, 228, 144,   0,   8, 
    228, 160,  66,   0,   0,   3, 
      2,   0,  15, 128,   1,   0, 
    228, 144,   4,   8, 228, 160, 
      4,   0,   0,   4,   3,   8, 
      7, 128,   1,   0, 228, 128, 
      1,   0,  85, 160,   2,   0, 
    228, 128,   1,   0,   0,   2, 
      0,   0,  14, 128,   1,   0, 
    144, 128,   1,   0,   0,   2, 
      0,   8,  15, 128,   0,   0, 
     57, 128,   1,   0,   0,   2, 
      1,   8,   8, 128,  15,   0, 
      0, 160,   1,   0,   0,   2, 
      2,   8,   8, 128,   0,   0, 
    170, 161,   1,   0,   0,   2, 
      3,   8,   8, 128,   0,   0, 
    170, 161, 255, 255,   0,   0
};

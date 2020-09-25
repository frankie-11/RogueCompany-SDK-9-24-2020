#pragma once

// RogueCompany (4.24) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Sub_Hero_ABP_Face.Sub_Hero_ABP_Face_C.ExecuteUbergraph_Sub_Hero_ABP_Face
struct USub_Hero_ABP_Face_C_ExecuteUbergraph_Sub_Hero_ABP_Face_Params
{
	int*                                               bpp__EntryPoint__pf;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Sub_Hero_ABP_Face.Sub_Hero_ABP_Face_C.AnimGraph
struct USub_Hero_ABP_Face_C_AnimGraph_Params
{
	struct FPoseLink*                                  bpp__InPose__pf;                                          // (Parm)
	struct FPoseLink                                   bpp__AnimGraph__pf;                                       // (Parm, OutParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

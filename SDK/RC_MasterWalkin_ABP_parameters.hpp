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

// Function MasterWalkin_ABP.MasterWalkin_ABP_C.AnimGraph
struct UMasterWalkin_ABP_C_AnimGraph_Params
{
	struct FPoseLink                                   AnimGraph;                                                // (Parm, OutParm)
};

// Function MasterWalkin_ABP.MasterWalkin_ABP_C.Update Skin Dependent Variables
struct UMasterWalkin_ABP_C_Update_Skin_Dependent_Variables_Params
{
};

// Function MasterWalkin_ABP.MasterWalkin_ABP_C.BlueprintUpdateAnimation
struct UMasterWalkin_ABP_C_BlueprintUpdateAnimation_Params
{
	float*                                             DeltaTimeX;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MasterWalkin_ABP.MasterWalkin_ABP_C.Set Skin Parameters
struct UMasterWalkin_ABP_C_Set_Skin_Parameters_Params
{
};

// Function MasterWalkin_ABP.MasterWalkin_ABP_C.BlueprintInitializeAnimation
struct UMasterWalkin_ABP_C_BlueprintInitializeAnimation_Params
{
};

// Function MasterWalkin_ABP.MasterWalkin_ABP_C.ExecuteUbergraph_MasterWalkin_ABP
struct UMasterWalkin_ABP_C_ExecuteUbergraph_MasterWalkin_ABP_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

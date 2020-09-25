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

// Function ClothingSystemRuntimeNv.ClothingSimulationInteractorNv.SetAnimDriveSpringStiffness
struct UClothingSimulationInteractorNv_SetAnimDriveSpringStiffness_Params
{
	float*                                             InStiffness;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ClothingSystemRuntimeNv.ClothingSimulationInteractorNv.SetAnimDriveDamperStiffness
struct UClothingSimulationInteractorNv_SetAnimDriveDamperStiffness_Params
{
	float*                                             InStiffness;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ClothingSystemRuntimeNv.ClothingSimulationInteractorNv.EnableGravityOverride
struct UClothingSimulationInteractorNv_EnableGravityOverride_Params
{
	struct FVector*                                    InVector;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function ClothingSystemRuntimeNv.ClothingSimulationInteractorNv.DisableGravityOverride
struct UClothingSimulationInteractorNv_DisableGravityOverride_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

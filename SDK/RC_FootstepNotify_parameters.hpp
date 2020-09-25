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

// Function FootstepNotify.FootstepNotify_C.Received_Notify
struct UFootstepNotify_C_Received_Notify_Params
{
	class USkeletalMeshComponent**                     bpp__MeshComp__pf;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAnimSequenceBase**                          bpp__Animation__pf;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FootstepNotify.FootstepNotify_C.GetSFXMaterial
struct UFootstepNotify_C_GetSFXMaterial_Params
{
	class UAnimInstance**                              bpp__AnimInstance__pf;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      bpp__BonexName__pfT;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       bpp__MaterialxReturn__pfT;                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      bpp__ActorxReturn__pfT;                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function MasterWeapon_ABP.MasterWeapon_ABP_C.UpdateUnspentShellVisibility
struct UMasterWeapon_ABP_C_UpdateUnspentShellVisibility_Params
{
	int*                                               bpp__ShellIndex__pf;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bpp__NewxVisibility__pfT;                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MasterWeapon_ABP.MasterWeapon_ABP_C.UpdateSpentShellVisibility
struct UMasterWeapon_ABP_C_UpdateSpentShellVisibility_Params
{
	int*                                               bpp__ShellIndex__pf;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bpp__NewxVisibility__pfT;                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MasterWeapon_ABP.MasterWeapon_ABP_C.Set Weapon State
struct UMasterWeapon_ABP_C_Set_Weapon_State_Params
{
	class UKSWeaponComponent**                         bpp__OwningxWeaponxComponent__pfTT;                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	EWeaponStateNew*                                   bpp__OldxState__pfT;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	EWeaponStateNew*                                   bpp__NewxState__pfT;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MasterWeapon_ABP.MasterWeapon_ABP_C.Set Scope Scale Alpha
struct UMasterWeapon_ABP_C_Set_Scope_Scale_Alpha_Params
{
	float*                                             bpp__NewxAlpha__pfT;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MasterWeapon_ABP.MasterWeapon_ABP_C.Set Revolver Chamber Rot
struct UMasterWeapon_ABP_C_Set_Revolver_Chamber_Rot_Params
{
	struct FRotator*                                   bpp__NewxRevolverxChamberxRot__pfTTT;                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MasterWeapon_ABP.MasterWeapon_ABP_C.Set Multi Stage Reload
struct UMasterWeapon_ABP_C_Set_Multi_Stage_Reload_Params
{
	bool*                                              bpp__NewxIsxMultixStagexReload__pfTTTT;                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MasterWeapon_ABP.MasterWeapon_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_MasterWeapon_ABP_AnimGraphNode_ModifyBone_52465FEA4D6701EB8BD2D5B0FF7D5E44
struct UMasterWeapon_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_MasterWeapon_ABP_AnimGraphNode_ModifyBone_52465FEA4D6701EB8BD2D5B0FF7D5E44_Params
{
};

// Function MasterWeapon_ABP.MasterWeapon_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_MasterWeapon_ABP_AnimGraphNode_BlendListByBool_8D407D3B4E9DF8DEBA89FBB2A5413674
struct UMasterWeapon_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_MasterWeapon_ABP_AnimGraphNode_BlendListByBool_8D407D3B4E9DF8DEBA89FBB2A5413674_Params
{
};

// Function MasterWeapon_ABP.MasterWeapon_ABP_C.AnimNotify_Unhide Mag
struct UMasterWeapon_ABP_C_AnimNotify_Unhide_Mag_Params
{
};

// Function MasterWeapon_ABP.MasterWeapon_ABP_C.AnimNotify_Hide Mag
struct UMasterWeapon_ABP_C_AnimNotify_Hide_Mag_Params
{
};

// Function MasterWeapon_ABP.MasterWeapon_ABP_C.AnimGraph
struct UMasterWeapon_ABP_C_AnimGraph_Params
{
	struct FPoseLink                                   bpp__AnimGraph__pf;                                       // (Parm, OutParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

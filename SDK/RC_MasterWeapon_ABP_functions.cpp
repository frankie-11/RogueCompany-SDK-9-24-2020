// RogueCompany (4.24) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MasterWeapon_ABP.MasterWeapon_ABP_C.UpdateUnspentShellVisibility
// (Native, Public, BlueprintCallable)
// Parameters:
// int*                           bpp__ShellIndex__pf            (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bpp__NewxVisibility__pfT       (Parm, ZeroConstructor, IsPlainOldData)

void UMasterWeapon_ABP_C::UpdateUnspentShellVisibility(int* bpp__ShellIndex__pf, bool* bpp__NewxVisibility__pfT)
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterWeapon_ABP.MasterWeapon_ABP_C.UpdateUnspentShellVisibility");

	UMasterWeapon_ABP_C_UpdateUnspentShellVisibility_Params params;
	params.bpp__ShellIndex__pf = bpp__ShellIndex__pf;
	params.bpp__NewxVisibility__pfT = bpp__NewxVisibility__pfT;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MasterWeapon_ABP.MasterWeapon_ABP_C.UpdateSpentShellVisibility
// (Native, Public, BlueprintCallable)
// Parameters:
// int*                           bpp__ShellIndex__pf            (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bpp__NewxVisibility__pfT       (Parm, ZeroConstructor, IsPlainOldData)

void UMasterWeapon_ABP_C::UpdateSpentShellVisibility(int* bpp__ShellIndex__pf, bool* bpp__NewxVisibility__pfT)
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterWeapon_ABP.MasterWeapon_ABP_C.UpdateSpentShellVisibility");

	UMasterWeapon_ABP_C_UpdateSpentShellVisibility_Params params;
	params.bpp__ShellIndex__pf = bpp__ShellIndex__pf;
	params.bpp__NewxVisibility__pfT = bpp__NewxVisibility__pfT;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MasterWeapon_ABP.MasterWeapon_ABP_C.Set Weapon State
// (Native, Public, BlueprintCallable)
// Parameters:
// class UKSWeaponComponent**     bpp__OwningxWeaponxComponent__pfTT (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// EWeaponStateNew*               bpp__OldxState__pfT            (Parm, ZeroConstructor, IsPlainOldData)
// EWeaponStateNew*               bpp__NewxState__pfT            (Parm, ZeroConstructor, IsPlainOldData)

void UMasterWeapon_ABP_C::Set_Weapon_State(class UKSWeaponComponent** bpp__OwningxWeaponxComponent__pfTT, EWeaponStateNew* bpp__OldxState__pfT, EWeaponStateNew* bpp__NewxState__pfT)
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterWeapon_ABP.MasterWeapon_ABP_C.Set Weapon State");

	UMasterWeapon_ABP_C_Set_Weapon_State_Params params;
	params.bpp__OwningxWeaponxComponent__pfTT = bpp__OwningxWeaponxComponent__pfTT;
	params.bpp__OldxState__pfT = bpp__OldxState__pfT;
	params.bpp__NewxState__pfT = bpp__NewxState__pfT;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MasterWeapon_ABP.MasterWeapon_ABP_C.Set Scope Scale Alpha
// (Native, Public, BlueprintCallable)
// Parameters:
// float*                         bpp__NewxAlpha__pfT            (Parm, ZeroConstructor, IsPlainOldData)

void UMasterWeapon_ABP_C::Set_Scope_Scale_Alpha(float* bpp__NewxAlpha__pfT)
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterWeapon_ABP.MasterWeapon_ABP_C.Set Scope Scale Alpha");

	UMasterWeapon_ABP_C_Set_Scope_Scale_Alpha_Params params;
	params.bpp__NewxAlpha__pfT = bpp__NewxAlpha__pfT;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MasterWeapon_ABP.MasterWeapon_ABP_C.Set Revolver Chamber Rot
// (Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRotator*               bpp__NewxRevolverxChamberxRot__pfTTT (Parm, ZeroConstructor, IsPlainOldData)

void UMasterWeapon_ABP_C::Set_Revolver_Chamber_Rot(struct FRotator* bpp__NewxRevolverxChamberxRot__pfTTT)
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterWeapon_ABP.MasterWeapon_ABP_C.Set Revolver Chamber Rot");

	UMasterWeapon_ABP_C_Set_Revolver_Chamber_Rot_Params params;
	params.bpp__NewxRevolverxChamberxRot__pfTTT = bpp__NewxRevolverxChamberxRot__pfTTT;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MasterWeapon_ABP.MasterWeapon_ABP_C.Set Multi Stage Reload
// (Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bpp__NewxIsxMultixStagexReload__pfTTTT (Parm, ZeroConstructor, IsPlainOldData)

void UMasterWeapon_ABP_C::Set_Multi_Stage_Reload(bool* bpp__NewxIsxMultixStagexReload__pfTTTT)
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterWeapon_ABP.MasterWeapon_ABP_C.Set Multi Stage Reload");

	UMasterWeapon_ABP_C_Set_Multi_Stage_Reload_Params params;
	params.bpp__NewxIsxMultixStagexReload__pfTTTT = bpp__NewxIsxMultixStagexReload__pfTTTT;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MasterWeapon_ABP.MasterWeapon_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_MasterWeapon_ABP_AnimGraphNode_ModifyBone_52465FEA4D6701EB8BD2D5B0FF7D5E44
// (Native, Public)

void UMasterWeapon_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_MasterWeapon_ABP_AnimGraphNode_ModifyBone_52465FEA4D6701EB8BD2D5B0FF7D5E44()
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterWeapon_ABP.MasterWeapon_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_MasterWeapon_ABP_AnimGraphNode_ModifyBone_52465FEA4D6701EB8BD2D5B0FF7D5E44");

	UMasterWeapon_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_MasterWeapon_ABP_AnimGraphNode_ModifyBone_52465FEA4D6701EB8BD2D5B0FF7D5E44_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MasterWeapon_ABP.MasterWeapon_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_MasterWeapon_ABP_AnimGraphNode_BlendListByBool_8D407D3B4E9DF8DEBA89FBB2A5413674
// (Native, Public)

void UMasterWeapon_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_MasterWeapon_ABP_AnimGraphNode_BlendListByBool_8D407D3B4E9DF8DEBA89FBB2A5413674()
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterWeapon_ABP.MasterWeapon_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_MasterWeapon_ABP_AnimGraphNode_BlendListByBool_8D407D3B4E9DF8DEBA89FBB2A5413674");

	UMasterWeapon_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_MasterWeapon_ABP_AnimGraphNode_BlendListByBool_8D407D3B4E9DF8DEBA89FBB2A5413674_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MasterWeapon_ABP.MasterWeapon_ABP_C.AnimNotify_Unhide Mag
// (Native, Public, BlueprintCallable)

void UMasterWeapon_ABP_C::AnimNotify_Unhide_Mag()
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterWeapon_ABP.MasterWeapon_ABP_C.AnimNotify_Unhide Mag");

	UMasterWeapon_ABP_C_AnimNotify_Unhide_Mag_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MasterWeapon_ABP.MasterWeapon_ABP_C.AnimNotify_Hide Mag
// (Native, Public, BlueprintCallable)

void UMasterWeapon_ABP_C::AnimNotify_Hide_Mag()
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterWeapon_ABP.MasterWeapon_ABP_C.AnimNotify_Hide Mag");

	UMasterWeapon_ABP_C_AnimNotify_Hide_Mag_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MasterWeapon_ABP.MasterWeapon_ABP_C.AnimGraph
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FPoseLink               bpp__AnimGraph__pf             (Parm, OutParm)

void UMasterWeapon_ABP_C::AnimGraph(struct FPoseLink* bpp__AnimGraph__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterWeapon_ABP.MasterWeapon_ABP_C.AnimGraph");

	UMasterWeapon_ABP_C_AnimGraph_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bpp__AnimGraph__pf != nullptr)
		*bpp__AnimGraph__pf = params.bpp__AnimGraph__pf;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

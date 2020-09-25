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

// DelegateFunction PCM_Hero_ABP.PCM_Hero_ABP_C.OnMagThrow__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void UPCM_Hero_ABP_C::OnMagThrow__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction PCM_Hero_ABP.PCM_Hero_ABP_C.OnMagThrow__DelegateSignature");

	UPCM_Hero_ABP_C_OnMagThrow__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.ZipLineTurnReset
// (Native, Public, BlueprintCallable)

void UPCM_Hero_ABP_C::ZipLineTurnReset()
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.ZipLineTurnReset");

	UPCM_Hero_ABP_C_ZipLineTurnReset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.UpdateSkinDependantVariables
// (Native, Public, HasOutParms, BlueprintCallable)

void UPCM_Hero_ABP_C::UpdateSkinDependantVariables()
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.UpdateSkinDependantVariables");

	UPCM_Hero_ABP_C_UpdateSkinDependantVariables_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.UpdateRagdollPelvis
// (Native, Public, BlueprintCallable)

void UPCM_Hero_ABP_C::UpdateRagdollPelvis()
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.UpdateRagdollPelvis");

	UPCM_Hero_ABP_C_UpdateRagdollPelvis_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.UpdateIKHandRuleset
// (Native, Public, BlueprintCallable)
// Parameters:
// class UKSWeaponComponent**     bpp__InWeaponComponent__pf     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UPCM_Hero_ABP_C::UpdateIKHandRuleset(class UKSWeaponComponent** bpp__InWeaponComponent__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.UpdateIKHandRuleset");

	UPCM_Hero_ABP_C_UpdateIKHandRuleset_Params params;
	params.bpp__InWeaponComponent__pf = bpp__InWeaponComponent__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.UpdateEngHeadAdditive
// (Native, Public, BlueprintCallable)

void UPCM_Hero_ABP_C::UpdateEngHeadAdditive()
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.UpdateEngHeadAdditive");

	UPCM_Hero_ABP_C_UpdateEngHeadAdditive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.UpdateCustomPivot
// (Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bpp__bNewValue__pf             (Parm, ZeroConstructor, IsPlainOldData)

void UPCM_Hero_ABP_C::UpdateCustomPivot(bool* bpp__bNewValue__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.UpdateCustomPivot");

	UPCM_Hero_ABP_C_UpdateCustomPivot_Params params;
	params.bpp__bNewValue__pf = bpp__bNewValue__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.UnhideMag
// (Native, Event, Public, BlueprintCallable)

void UPCM_Hero_ABP_C::UnhideMag()
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.UnhideMag");

	UPCM_Hero_ABP_C_UnhideMag_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.TurnInPlace
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// bool                           bpp__TurnxOver__pfT            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPCM_Hero_ABP_C::TurnInPlace(bool* bpp__TurnxOver__pfT)
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.TurnInPlace");

	UPCM_Hero_ABP_C_TurnInPlace_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bpp__TurnxOver__pfT != nullptr)
		*bpp__TurnxOver__pfT = params.bpp__TurnxOver__pfT;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.TickHitReacts
// (Native, Public, BlueprintCallable)

void UPCM_Hero_ABP_C::TickHitReacts()
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.TickHitReacts");

	UPCM_Hero_ABP_C_TickHitReacts_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.SwitchWeaponIK
// (Native, Public, BlueprintCallable)
// Parameters:
// class UKSWeaponComponent**     bpp__WeaponRef__pf             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UPCM_Hero_ABP_C::SwitchWeaponIK(class UKSWeaponComponent** bpp__WeaponRef__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.SwitchWeaponIK");

	UPCM_Hero_ABP_C_SwitchWeaponIK_Params params;
	params.bpp__WeaponRef__pf = bpp__WeaponRef__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.SwitchWeapon
// (Native, Public, BlueprintCallable)
// Parameters:
// class UKSWeaponComponent**     bpp__WeaponRef__pf             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UPCM_Hero_ABP_C::SwitchWeapon(class UKSWeaponComponent** bpp__WeaponRef__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.SwitchWeapon");

	UPCM_Hero_ABP_C_SwitchWeapon_Params params;
	params.bpp__WeaponRef__pf = bpp__WeaponRef__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.Stop Turn In Place
// (Native, Public, BlueprintCallable)

void UPCM_Hero_ABP_C::Stop_Turn_In_Place()
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.Stop Turn In Place");

	UPCM_Hero_ABP_C_Stop_Turn_In_Place_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.Start Turn In Place
// (Native, Public, BlueprintCallable)

void UPCM_Hero_ABP_C::Start_Turn_In_Place()
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.Start Turn In Place");

	UPCM_Hero_ABP_C_Start_Turn_In_Place_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.StartRevivee
// (Native, Event, Public)

void UPCM_Hero_ABP_C::StartRevivee()
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.StartRevivee");

	UPCM_Hero_ABP_C_StartRevivee_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.Should Update Component Rotation
// (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// float*                         bpp__DeltaxTime__pfT           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bpp__ReturnxValue__pfT         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          bpp__NewxCompoentxYaw__pfTT    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPCM_Hero_ABP_C::Should_Update_Component_Rotation(float* bpp__DeltaxTime__pfT, bool* bpp__ReturnxValue__pfT, float* bpp__NewxCompoentxYaw__pfTT)
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.Should Update Component Rotation");

	UPCM_Hero_ABP_C_Should_Update_Component_Rotation_Params params;
	params.bpp__DeltaxTime__pfT = bpp__DeltaxTime__pfT;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bpp__ReturnxValue__pfT != nullptr)
		*bpp__ReturnxValue__pfT = params.bpp__ReturnxValue__pfT;
	if (bpp__NewxCompoentxYaw__pfTT != nullptr)
		*bpp__NewxCompoentxYaw__pfTT = params.bpp__NewxCompoentxYaw__pfTT;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.Should Turn In Place Be Active
// (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           bpp__ReturnxValue__pfT         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPCM_Hero_ABP_C::Should_Turn_In_Place_Be_Active(bool* bpp__ReturnxValue__pfT)
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.Should Turn In Place Be Active");

	UPCM_Hero_ABP_C_Should_Turn_In_Place_Be_Active_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bpp__ReturnxValue__pfT != nullptr)
		*bpp__ReturnxValue__pfT = params.bpp__ReturnxValue__pfT;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.ShoulderCharge
// (Native, Event, Public, BlueprintCallable)

void UPCM_Hero_ABP_C::ShoulderCharge()
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.ShoulderCharge");

	UPCM_Hero_ABP_C_ShoulderCharge_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.Set Turn Value
// (Native, Public, BlueprintCallable)
// Parameters:
// float*                         bpp__Yaw__pf                   (Parm, ZeroConstructor, IsPlainOldData)

void UPCM_Hero_ABP_C::Set_Turn_Value(float* bpp__Yaw__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.Set Turn Value");

	UPCM_Hero_ABP_C_Set_Turn_Value_Params params;
	params.bpp__Yaw__pf = bpp__Yaw__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.Set Skinned Local Parameters
// (Native, Public, HasOutParms, BlueprintCallable)

void UPCM_Hero_ABP_C::Set_Skinned_Local_Parameters()
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.Set Skinned Local Parameters");

	UPCM_Hero_ABP_C_Set_Skinned_Local_Parameters_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.Set Footstep SFX Switches
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName*                  bpp__ShoexName__pfT            (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  bpp__StepxName__pfT            (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  bpp__MaterialxName__pfT        (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 bpp__Actor__pf                 (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  bpp__ActorxReturn__pfT         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPCM_Hero_ABP_C::Set_Footstep_SFX_Switches(struct FName* bpp__ShoexName__pfT, struct FName* bpp__StepxName__pfT, struct FName* bpp__MaterialxName__pfT, class AActor** bpp__Actor__pf, class AActor** bpp__ActorxReturn__pfT)
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.Set Footstep SFX Switches");

	UPCM_Hero_ABP_C_Set_Footstep_SFX_Switches_Params params;
	params.bpp__ShoexName__pfT = bpp__ShoexName__pfT;
	params.bpp__StepxName__pfT = bpp__StepxName__pfT;
	params.bpp__MaterialxName__pfT = bpp__MaterialxName__pfT;
	params.bpp__Actor__pf = bpp__Actor__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bpp__ActorxReturn__pfT != nullptr)
		*bpp__ActorxReturn__pfT = params.bpp__ActorxReturn__pfT;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.Set Desired Component Yaw
// (Native, Public, BlueprintCallable)

void UPCM_Hero_ABP_C::Set_Desired_Component_Yaw()
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.Set Desired Component Yaw");

	UPCM_Hero_ABP_C_Set_Desired_Component_Yaw_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.Set Clothing SFX Switch
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName*                  bpp__ClothingxType__pfT        (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  bpp__ActorxReturn__pfT         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPCM_Hero_ABP_C::Set_Clothing_SFX_Switch(struct FName* bpp__ClothingxType__pfT, class AActor** bpp__ActorxReturn__pfT)
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.Set Clothing SFX Switch");

	UPCM_Hero_ABP_C_Set_Clothing_SFX_Switch_Params params;
	params.bpp__ClothingxType__pfT = bpp__ClothingxType__pfT;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bpp__ActorxReturn__pfT != nullptr)
		*bpp__ActorxReturn__pfT = params.bpp__ActorxReturn__pfT;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.Set Aims
// (Native, Public, BlueprintCallable)

void UPCM_Hero_ABP_C::Set_Aims()
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.Set Aims");

	UPCM_Hero_ABP_C_Set_Aims_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.Set ADS 1p Aims
// (Native, Public, BlueprintCallable)

void UPCM_Hero_ABP_C::Set_ADS_1p_Aims()
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.Set ADS 1p Aims");

	UPCM_Hero_ABP_C_Set_ADS_1p_Aims_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.SetUpStopAnims
// (Native, Public, BlueprintCallable)
// Parameters:
// EKSMovementDirection*          bpp__NewMoveDirection__pf      (Parm, ZeroConstructor, IsPlainOldData)

void UPCM_Hero_ABP_C::SetUpStopAnims(EKSMovementDirection* bpp__NewMoveDirection__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.SetUpStopAnims");

	UPCM_Hero_ABP_C_SetUpStopAnims_Params params;
	params.bpp__NewMoveDirection__pf = bpp__NewMoveDirection__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.SetUpStartAnims
// (Native, Public, BlueprintCallable)
// Parameters:
// EKSMovementDirection*          bpp__NewMoveDirection__pf      (Parm, ZeroConstructor, IsPlainOldData)

void UPCM_Hero_ABP_C::SetUpStartAnims(EKSMovementDirection* bpp__NewMoveDirection__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.SetUpStartAnims");

	UPCM_Hero_ABP_C_SetUpStartAnims_Params params;
	params.bpp__NewMoveDirection__pf = bpp__NewMoveDirection__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.SetTransitionAnims
// (Native, Public, BlueprintCallable)
// Parameters:
// class UAnimSequenceBase**      bpp__StartMoving__pf           (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimSequenceBase**      bpp__CurrentStopMovingA__pf    (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimSequenceBase**      bpp__CurrentDirectionPivot__pf (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimSequenceBase**      bpp__StartMovingCrouch__pf     (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimSequenceBase**      bpp__CurrentStopMovingCrouch__pf (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimSequenceBase**      bpp__CurrentDirectionPivotCrouch__pf (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimSequenceBase**      bpp__StartDisableMoving__pf    (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimSequenceBase**      bpp__StopDisableMoving__pf     (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimSequenceBase**      bpp__CurrentDisablePivot__pf   (Parm, ZeroConstructor, IsPlainOldData)

void UPCM_Hero_ABP_C::SetTransitionAnims(class UAnimSequenceBase** bpp__StartMoving__pf, class UAnimSequenceBase** bpp__CurrentStopMovingA__pf, class UAnimSequenceBase** bpp__CurrentDirectionPivot__pf, class UAnimSequenceBase** bpp__StartMovingCrouch__pf, class UAnimSequenceBase** bpp__CurrentStopMovingCrouch__pf, class UAnimSequenceBase** bpp__CurrentDirectionPivotCrouch__pf, class UAnimSequenceBase** bpp__StartDisableMoving__pf, class UAnimSequenceBase** bpp__StopDisableMoving__pf, class UAnimSequenceBase** bpp__CurrentDisablePivot__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.SetTransitionAnims");

	UPCM_Hero_ABP_C_SetTransitionAnims_Params params;
	params.bpp__StartMoving__pf = bpp__StartMoving__pf;
	params.bpp__CurrentStopMovingA__pf = bpp__CurrentStopMovingA__pf;
	params.bpp__CurrentDirectionPivot__pf = bpp__CurrentDirectionPivot__pf;
	params.bpp__StartMovingCrouch__pf = bpp__StartMovingCrouch__pf;
	params.bpp__CurrentStopMovingCrouch__pf = bpp__CurrentStopMovingCrouch__pf;
	params.bpp__CurrentDirectionPivotCrouch__pf = bpp__CurrentDirectionPivotCrouch__pf;
	params.bpp__StartDisableMoving__pf = bpp__StartDisableMoving__pf;
	params.bpp__StopDisableMoving__pf = bpp__StopDisableMoving__pf;
	params.bpp__CurrentDisablePivot__pf = bpp__CurrentDisablePivot__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.SetStopAnim
// (Native, Public, BlueprintCallable)
// Parameters:
// EKSMovementDirection*          bpp__Direction__pf             (Parm, ZeroConstructor, IsPlainOldData)

void UPCM_Hero_ABP_C::SetStopAnim(EKSMovementDirection* bpp__Direction__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.SetStopAnim");

	UPCM_Hero_ABP_C_SetStopAnim_Params params;
	params.bpp__Direction__pf = bpp__Direction__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.SetStartMeleeLowerBodyAnim
// (Native, Public, BlueprintCallable)
// Parameters:
// EKSMovementDirection*          bpp__Direction__pf             (Parm, ZeroConstructor, IsPlainOldData)

void UPCM_Hero_ABP_C::SetStartMeleeLowerBodyAnim(EKSMovementDirection* bpp__Direction__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.SetStartMeleeLowerBodyAnim");

	UPCM_Hero_ABP_C_SetStartMeleeLowerBodyAnim_Params params;
	params.bpp__Direction__pf = bpp__Direction__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.SetStartAnim
// (Native, Public, BlueprintCallable)
// Parameters:
// EKSMovementDirection*          bpp__Direction__pf             (Parm, ZeroConstructor, IsPlainOldData)

void UPCM_Hero_ABP_C::SetStartAnim(EKSMovementDirection* bpp__Direction__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.SetStartAnim");

	UPCM_Hero_ABP_C_SetStartAnim_Params params;
	params.bpp__Direction__pf = bpp__Direction__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.SetPoseDrivenHitReactParams
// (Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector*                bpp__ImpactxNormal__pfT        (Parm, ZeroConstructor, IsPlainOldData)
// float*                         bpp__Damage__pf                (Parm, ZeroConstructor, IsPlainOldData)

void UPCM_Hero_ABP_C::SetPoseDrivenHitReactParams(struct FVector* bpp__ImpactxNormal__pfT, float* bpp__Damage__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.SetPoseDrivenHitReactParams");

	UPCM_Hero_ABP_C_SetPoseDrivenHitReactParams_Params params;
	params.bpp__ImpactxNormal__pfT = bpp__ImpactxNormal__pfT;
	params.bpp__Damage__pf = bpp__Damage__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.SetMovementDirection
// (Native, Public, BlueprintCallable)
// Parameters:
// EKSMovementDirection*          bpp__Direction__pf             (Parm, ZeroConstructor, IsPlainOldData)
// EKSMovementDirection*          bpp__OldMoveDirection__pf      (Parm, ZeroConstructor, IsPlainOldData)

void UPCM_Hero_ABP_C::SetMovementDirection(EKSMovementDirection* bpp__Direction__pf, EKSMovementDirection* bpp__OldMoveDirection__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.SetMovementDirection");

	UPCM_Hero_ABP_C_SetMovementDirection_Params params;
	params.bpp__Direction__pf = bpp__Direction__pf;
	params.bpp__OldMoveDirection__pf = bpp__OldMoveDirection__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.SetMaxSpeedValues_2
// (Native, Public, BlueprintCallable)
// Parameters:
// class UKSWeaponAsset**         bpp__WeaponAsset__pf           (Parm, ZeroConstructor, IsPlainOldData)

void UPCM_Hero_ABP_C::SetMaxSpeedValues_2(class UKSWeaponAsset** bpp__WeaponAsset__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.SetMaxSpeedValues_2");

	UPCM_Hero_ABP_C_SetMaxSpeedValues_2_Params params;
	params.bpp__WeaponAsset__pf = bpp__WeaponAsset__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.SetHitReactParams
// (Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector*                bpp__RelativeImpactLocation__pf (Parm, ZeroConstructor, IsPlainOldData)
// EKSMovementDirection*          bpp__HitDirection__pf          (Parm, ZeroConstructor, IsPlainOldData)

void UPCM_Hero_ABP_C::SetHitReactParams(struct FVector* bpp__RelativeImpactLocation__pf, EKSMovementDirection* bpp__HitDirection__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.SetHitReactParams");

	UPCM_Hero_ABP_C_SetHitReactParams_Params params;
	params.bpp__RelativeImpactLocation__pf = bpp__RelativeImpactLocation__pf;
	params.bpp__HitDirection__pf = bpp__HitDirection__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.ReviveMesh
// (Native, Event, Public, BlueprintCallable)
// Parameters:
// class UAnimMontage**           bpp__ReviveMontage__pf         (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bpp__bIsInAir__pf              (Parm, ZeroConstructor, IsPlainOldData)

void UPCM_Hero_ABP_C::ReviveMesh(class UAnimMontage** bpp__ReviveMontage__pf, bool* bpp__bIsInAir__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.ReviveMesh");

	UPCM_Hero_ABP_C_ReviveMesh_Params params;
	params.bpp__ReviveMontage__pf = bpp__ReviveMontage__pf;
	params.bpp__bIsInAir__pf = bpp__bIsInAir__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.RequestNewCombatState
// (Native, Event, Public)
// Parameters:
// ECombatState*                  bpp__NewCombatState__pf        (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bpp__bBlockCooldown__pf        (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bpp__bForce__pf                (Parm, ZeroConstructor, IsPlainOldData)

void UPCM_Hero_ABP_C::RequestNewCombatState(ECombatState* bpp__NewCombatState__pf, bool* bpp__bBlockCooldown__pf, bool* bpp__bForce__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.RequestNewCombatState");

	UPCM_Hero_ABP_C_RequestNewCombatState_Params params;
	params.bpp__NewCombatState__pf = bpp__NewCombatState__pf;
	params.bpp__bBlockCooldown__pf = bpp__bBlockCooldown__pf;
	params.bpp__bForce__pf = bpp__bForce__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.RemoveExpiredHitReact
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FHitReaction*           bpp__ExpiredHitReact__pf       (Parm)

void UPCM_Hero_ABP_C::RemoveExpiredHitReact(struct FHitReaction* bpp__ExpiredHitReact__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.RemoveExpiredHitReact");

	UPCM_Hero_ABP_C_RemoveExpiredHitReact_Params params;
	params.bpp__ExpiredHitReact__pf = bpp__ExpiredHitReact__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.On Sprint Changed
// (Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bpp__IsSprinting__pf           (Parm, ZeroConstructor, IsPlainOldData)

void UPCM_Hero_ABP_C::On_Sprint_Changed(bool* bpp__IsSprinting__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.On Sprint Changed");

	UPCM_Hero_ABP_C_On_Sprint_Changed_Params params;
	params.bpp__IsSprinting__pf = bpp__IsSprinting__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnShoulderChanged
// (Native, Event, Public, BlueprintCallable)

void UPCM_Hero_ABP_C::OnShoulderChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnShoulderChanged");

	UPCM_Hero_ABP_C_OnShoulderChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnNotifyEnd_F55321C648B813A33A06BF926330EB4F
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FName*                  bpp__NotifyName__pf            (Parm, ZeroConstructor, IsPlainOldData)
// int*                           bpp__MontageInstanceID__pf     (Parm, ZeroConstructor, IsPlainOldData)

void UPCM_Hero_ABP_C::OnNotifyEnd_F55321C648B813A33A06BF926330EB4F(struct FName* bpp__NotifyName__pf, int* bpp__MontageInstanceID__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnNotifyEnd_F55321C648B813A33A06BF926330EB4F");

	UPCM_Hero_ABP_C_OnNotifyEnd_F55321C648B813A33A06BF926330EB4F_Params params;
	params.bpp__NotifyName__pf = bpp__NotifyName__pf;
	params.bpp__MontageInstanceID__pf = bpp__MontageInstanceID__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnNotifyEnd_D0E2AA7A43FF94C946DDED97889E22B1
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FName*                  bpp__NotifyName__pf            (Parm, ZeroConstructor, IsPlainOldData)
// int*                           bpp__MontageInstanceID__pf     (Parm, ZeroConstructor, IsPlainOldData)

void UPCM_Hero_ABP_C::OnNotifyEnd_D0E2AA7A43FF94C946DDED97889E22B1(struct FName* bpp__NotifyName__pf, int* bpp__MontageInstanceID__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnNotifyEnd_D0E2AA7A43FF94C946DDED97889E22B1");

	UPCM_Hero_ABP_C_OnNotifyEnd_D0E2AA7A43FF94C946DDED97889E22B1_Params params;
	params.bpp__NotifyName__pf = bpp__NotifyName__pf;
	params.bpp__MontageInstanceID__pf = bpp__MontageInstanceID__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnNotifyEnd_D02C034A4EB0D0E596D903B8DBD4801B
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FName*                  bpp__NotifyName__pf            (Parm, ZeroConstructor, IsPlainOldData)
// int*                           bpp__MontageInstanceID__pf     (Parm, ZeroConstructor, IsPlainOldData)

void UPCM_Hero_ABP_C::OnNotifyEnd_D02C034A4EB0D0E596D903B8DBD4801B(struct FName* bpp__NotifyName__pf, int* bpp__MontageInstanceID__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnNotifyEnd_D02C034A4EB0D0E596D903B8DBD4801B");

	UPCM_Hero_ABP_C_OnNotifyEnd_D02C034A4EB0D0E596D903B8DBD4801B_Params params;
	params.bpp__NotifyName__pf = bpp__NotifyName__pf;
	params.bpp__MontageInstanceID__pf = bpp__MontageInstanceID__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnNotifyEnd_C78BE1F74ADCCB255C1BCD9E6240104B
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FName*                  bpp__NotifyName__pf            (Parm, ZeroConstructor, IsPlainOldData)
// int*                           bpp__MontageInstanceID__pf     (Parm, ZeroConstructor, IsPlainOldData)

void UPCM_Hero_ABP_C::OnNotifyEnd_C78BE1F74ADCCB255C1BCD9E6240104B(struct FName* bpp__NotifyName__pf, int* bpp__MontageInstanceID__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnNotifyEnd_C78BE1F74ADCCB255C1BCD9E6240104B");

	UPCM_Hero_ABP_C_OnNotifyEnd_C78BE1F74ADCCB255C1BCD9E6240104B_Params params;
	params.bpp__NotifyName__pf = bpp__NotifyName__pf;
	params.bpp__MontageInstanceID__pf = bpp__MontageInstanceID__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnNotifyEnd_B5B16ACD4F176963194D6B8527E16FBB
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FName*                  bpp__NotifyName__pf            (Parm, ZeroConstructor, IsPlainOldData)
// int*                           bpp__MontageInstanceID__pf     (Parm, ZeroConstructor, IsPlainOldData)

void UPCM_Hero_ABP_C::OnNotifyEnd_B5B16ACD4F176963194D6B8527E16FBB(struct FName* bpp__NotifyName__pf, int* bpp__MontageInstanceID__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnNotifyEnd_B5B16ACD4F176963194D6B8527E16FBB");

	UPCM_Hero_ABP_C_OnNotifyEnd_B5B16ACD4F176963194D6B8527E16FBB_Params params;
	params.bpp__NotifyName__pf = bpp__NotifyName__pf;
	params.bpp__MontageInstanceID__pf = bpp__MontageInstanceID__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnNotifyEnd_9E6BC1B74A4D30EF4551EDBB637F89EE
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FName*                  bpp__NotifyName__pf            (Parm, ZeroConstructor, IsPlainOldData)
// int*                           bpp__MontageInstanceID__pf     (Parm, ZeroConstructor, IsPlainOldData)

void UPCM_Hero_ABP_C::OnNotifyEnd_9E6BC1B74A4D30EF4551EDBB637F89EE(struct FName* bpp__NotifyName__pf, int* bpp__MontageInstanceID__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnNotifyEnd_9E6BC1B74A4D30EF4551EDBB637F89EE");

	UPCM_Hero_ABP_C_OnNotifyEnd_9E6BC1B74A4D30EF4551EDBB637F89EE_Params params;
	params.bpp__NotifyName__pf = bpp__NotifyName__pf;
	params.bpp__MontageInstanceID__pf = bpp__MontageInstanceID__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnNotifyEnd_68DE575241BD5D31439A859E850392A2
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FName*                  bpp__NotifyName__pf            (Parm, ZeroConstructor, IsPlainOldData)
// int*                           bpp__MontageInstanceID__pf     (Parm, ZeroConstructor, IsPlainOldData)

void UPCM_Hero_ABP_C::OnNotifyEnd_68DE575241BD5D31439A859E850392A2(struct FName* bpp__NotifyName__pf, int* bpp__MontageInstanceID__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnNotifyEnd_68DE575241BD5D31439A859E850392A2");

	UPCM_Hero_ABP_C_OnNotifyEnd_68DE575241BD5D31439A859E850392A2_Params params;
	params.bpp__NotifyName__pf = bpp__NotifyName__pf;
	params.bpp__MontageInstanceID__pf = bpp__MontageInstanceID__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnNotifyEnd_4DE3C6AE469BE13DC02A7AB80E924B7B
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FName*                  bpp__NotifyName__pf            (Parm, ZeroConstructor, IsPlainOldData)
// int*                           bpp__MontageInstanceID__pf     (Parm, ZeroConstructor, IsPlainOldData)

void UPCM_Hero_ABP_C::OnNotifyEnd_4DE3C6AE469BE13DC02A7AB80E924B7B(struct FName* bpp__NotifyName__pf, int* bpp__MontageInstanceID__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnNotifyEnd_4DE3C6AE469BE13DC02A7AB80E924B7B");

	UPCM_Hero_ABP_C_OnNotifyEnd_4DE3C6AE469BE13DC02A7AB80E924B7B_Params params;
	params.bpp__NotifyName__pf = bpp__NotifyName__pf;
	params.bpp__MontageInstanceID__pf = bpp__MontageInstanceID__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnNotifyEnd_1BE19CEA4A7E760561F3419034A02FE3
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FName*                  bpp__NotifyName__pf            (Parm, ZeroConstructor, IsPlainOldData)
// int*                           bpp__MontageInstanceID__pf     (Parm, ZeroConstructor, IsPlainOldData)

void UPCM_Hero_ABP_C::OnNotifyEnd_1BE19CEA4A7E760561F3419034A02FE3(struct FName* bpp__NotifyName__pf, int* bpp__MontageInstanceID__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnNotifyEnd_1BE19CEA4A7E760561F3419034A02FE3");

	UPCM_Hero_ABP_C_OnNotifyEnd_1BE19CEA4A7E760561F3419034A02FE3_Params params;
	params.bpp__NotifyName__pf = bpp__NotifyName__pf;
	params.bpp__MontageInstanceID__pf = bpp__MontageInstanceID__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnNotifyEnd_143632A9488E9A82D17492B8710C0540
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FName*                  bpp__NotifyName__pf            (Parm, ZeroConstructor, IsPlainOldData)
// int*                           bpp__MontageInstanceID__pf     (Parm, ZeroConstructor, IsPlainOldData)

void UPCM_Hero_ABP_C::OnNotifyEnd_143632A9488E9A82D17492B8710C0540(struct FName* bpp__NotifyName__pf, int* bpp__MontageInstanceID__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnNotifyEnd_143632A9488E9A82D17492B8710C0540");

	UPCM_Hero_ABP_C_OnNotifyEnd_143632A9488E9A82D17492B8710C0540_Params params;
	params.bpp__NotifyName__pf = bpp__NotifyName__pf;
	params.bpp__MontageInstanceID__pf = bpp__MontageInstanceID__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnNotifyBegin_F55321C648B813A33A06BF926330EB4F
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FName*                  bpp__NotifyName__pf            (Parm, ZeroConstructor, IsPlainOldData)
// int*                           bpp__MontageInstanceID__pf     (Parm, ZeroConstructor, IsPlainOldData)

void UPCM_Hero_ABP_C::OnNotifyBegin_F55321C648B813A33A06BF926330EB4F(struct FName* bpp__NotifyName__pf, int* bpp__MontageInstanceID__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnNotifyBegin_F55321C648B813A33A06BF926330EB4F");

	UPCM_Hero_ABP_C_OnNotifyBegin_F55321C648B813A33A06BF926330EB4F_Params params;
	params.bpp__NotifyName__pf = bpp__NotifyName__pf;
	params.bpp__MontageInstanceID__pf = bpp__MontageInstanceID__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnNotifyBegin_D0E2AA7A43FF94C946DDED97889E22B1
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FName*                  bpp__NotifyName__pf            (Parm, ZeroConstructor, IsPlainOldData)
// int*                           bpp__MontageInstanceID__pf     (Parm, ZeroConstructor, IsPlainOldData)

void UPCM_Hero_ABP_C::OnNotifyBegin_D0E2AA7A43FF94C946DDED97889E22B1(struct FName* bpp__NotifyName__pf, int* bpp__MontageInstanceID__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnNotifyBegin_D0E2AA7A43FF94C946DDED97889E22B1");

	UPCM_Hero_ABP_C_OnNotifyBegin_D0E2AA7A43FF94C946DDED97889E22B1_Params params;
	params.bpp__NotifyName__pf = bpp__NotifyName__pf;
	params.bpp__MontageInstanceID__pf = bpp__MontageInstanceID__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnNotifyBegin_D02C034A4EB0D0E596D903B8DBD4801B
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FName*                  bpp__NotifyName__pf            (Parm, ZeroConstructor, IsPlainOldData)
// int*                           bpp__MontageInstanceID__pf     (Parm, ZeroConstructor, IsPlainOldData)

void UPCM_Hero_ABP_C::OnNotifyBegin_D02C034A4EB0D0E596D903B8DBD4801B(struct FName* bpp__NotifyName__pf, int* bpp__MontageInstanceID__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnNotifyBegin_D02C034A4EB0D0E596D903B8DBD4801B");

	UPCM_Hero_ABP_C_OnNotifyBegin_D02C034A4EB0D0E596D903B8DBD4801B_Params params;
	params.bpp__NotifyName__pf = bpp__NotifyName__pf;
	params.bpp__MontageInstanceID__pf = bpp__MontageInstanceID__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnNotifyBegin_C78BE1F74ADCCB255C1BCD9E6240104B
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FName*                  bpp__NotifyName__pf            (Parm, ZeroConstructor, IsPlainOldData)
// int*                           bpp__MontageInstanceID__pf     (Parm, ZeroConstructor, IsPlainOldData)

void UPCM_Hero_ABP_C::OnNotifyBegin_C78BE1F74ADCCB255C1BCD9E6240104B(struct FName* bpp__NotifyName__pf, int* bpp__MontageInstanceID__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnNotifyBegin_C78BE1F74ADCCB255C1BCD9E6240104B");

	UPCM_Hero_ABP_C_OnNotifyBegin_C78BE1F74ADCCB255C1BCD9E6240104B_Params params;
	params.bpp__NotifyName__pf = bpp__NotifyName__pf;
	params.bpp__MontageInstanceID__pf = bpp__MontageInstanceID__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnNotifyBegin_B5B16ACD4F176963194D6B8527E16FBB
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FName*                  bpp__NotifyName__pf            (Parm, ZeroConstructor, IsPlainOldData)
// int*                           bpp__MontageInstanceID__pf     (Parm, ZeroConstructor, IsPlainOldData)

void UPCM_Hero_ABP_C::OnNotifyBegin_B5B16ACD4F176963194D6B8527E16FBB(struct FName* bpp__NotifyName__pf, int* bpp__MontageInstanceID__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnNotifyBegin_B5B16ACD4F176963194D6B8527E16FBB");

	UPCM_Hero_ABP_C_OnNotifyBegin_B5B16ACD4F176963194D6B8527E16FBB_Params params;
	params.bpp__NotifyName__pf = bpp__NotifyName__pf;
	params.bpp__MontageInstanceID__pf = bpp__MontageInstanceID__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnNotifyBegin_9E6BC1B74A4D30EF4551EDBB637F89EE
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FName*                  bpp__NotifyName__pf            (Parm, ZeroConstructor, IsPlainOldData)
// int*                           bpp__MontageInstanceID__pf     (Parm, ZeroConstructor, IsPlainOldData)

void UPCM_Hero_ABP_C::OnNotifyBegin_9E6BC1B74A4D30EF4551EDBB637F89EE(struct FName* bpp__NotifyName__pf, int* bpp__MontageInstanceID__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnNotifyBegin_9E6BC1B74A4D30EF4551EDBB637F89EE");

	UPCM_Hero_ABP_C_OnNotifyBegin_9E6BC1B74A4D30EF4551EDBB637F89EE_Params params;
	params.bpp__NotifyName__pf = bpp__NotifyName__pf;
	params.bpp__MontageInstanceID__pf = bpp__MontageInstanceID__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnNotifyBegin_68DE575241BD5D31439A859E850392A2
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FName*                  bpp__NotifyName__pf            (Parm, ZeroConstructor, IsPlainOldData)
// int*                           bpp__MontageInstanceID__pf     (Parm, ZeroConstructor, IsPlainOldData)

void UPCM_Hero_ABP_C::OnNotifyBegin_68DE575241BD5D31439A859E850392A2(struct FName* bpp__NotifyName__pf, int* bpp__MontageInstanceID__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnNotifyBegin_68DE575241BD5D31439A859E850392A2");

	UPCM_Hero_ABP_C_OnNotifyBegin_68DE575241BD5D31439A859E850392A2_Params params;
	params.bpp__NotifyName__pf = bpp__NotifyName__pf;
	params.bpp__MontageInstanceID__pf = bpp__MontageInstanceID__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnNotifyBegin_4DE3C6AE469BE13DC02A7AB80E924B7B
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FName*                  bpp__NotifyName__pf            (Parm, ZeroConstructor, IsPlainOldData)
// int*                           bpp__MontageInstanceID__pf     (Parm, ZeroConstructor, IsPlainOldData)

void UPCM_Hero_ABP_C::OnNotifyBegin_4DE3C6AE469BE13DC02A7AB80E924B7B(struct FName* bpp__NotifyName__pf, int* bpp__MontageInstanceID__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnNotifyBegin_4DE3C6AE469BE13DC02A7AB80E924B7B");

	UPCM_Hero_ABP_C_OnNotifyBegin_4DE3C6AE469BE13DC02A7AB80E924B7B_Params params;
	params.bpp__NotifyName__pf = bpp__NotifyName__pf;
	params.bpp__MontageInstanceID__pf = bpp__MontageInstanceID__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnNotifyBegin_1BE19CEA4A7E760561F3419034A02FE3
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FName*                  bpp__NotifyName__pf            (Parm, ZeroConstructor, IsPlainOldData)
// int*                           bpp__MontageInstanceID__pf     (Parm, ZeroConstructor, IsPlainOldData)

void UPCM_Hero_ABP_C::OnNotifyBegin_1BE19CEA4A7E760561F3419034A02FE3(struct FName* bpp__NotifyName__pf, int* bpp__MontageInstanceID__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnNotifyBegin_1BE19CEA4A7E760561F3419034A02FE3");

	UPCM_Hero_ABP_C_OnNotifyBegin_1BE19CEA4A7E760561F3419034A02FE3_Params params;
	params.bpp__NotifyName__pf = bpp__NotifyName__pf;
	params.bpp__MontageInstanceID__pf = bpp__MontageInstanceID__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnNotifyBegin_143632A9488E9A82D17492B8710C0540
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FName*                  bpp__NotifyName__pf            (Parm, ZeroConstructor, IsPlainOldData)
// int*                           bpp__MontageInstanceID__pf     (Parm, ZeroConstructor, IsPlainOldData)

void UPCM_Hero_ABP_C::OnNotifyBegin_143632A9488E9A82D17492B8710C0540(struct FName* bpp__NotifyName__pf, int* bpp__MontageInstanceID__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnNotifyBegin_143632A9488E9A82D17492B8710C0540");

	UPCM_Hero_ABP_C_OnNotifyBegin_143632A9488E9A82D17492B8710C0540_Params params;
	params.bpp__NotifyName__pf = bpp__NotifyName__pf;
	params.bpp__MontageInstanceID__pf = bpp__MontageInstanceID__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnInterrupted_F55321C648B813A33A06BF926330EB4F
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FName*                  bpp__NotifyName__pf            (Parm, ZeroConstructor, IsPlainOldData)
// int*                           bpp__MontageInstanceID__pf     (Parm, ZeroConstructor, IsPlainOldData)

void UPCM_Hero_ABP_C::OnInterrupted_F55321C648B813A33A06BF926330EB4F(struct FName* bpp__NotifyName__pf, int* bpp__MontageInstanceID__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnInterrupted_F55321C648B813A33A06BF926330EB4F");

	UPCM_Hero_ABP_C_OnInterrupted_F55321C648B813A33A06BF926330EB4F_Params params;
	params.bpp__NotifyName__pf = bpp__NotifyName__pf;
	params.bpp__MontageInstanceID__pf = bpp__MontageInstanceID__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnInterrupted_D0E2AA7A43FF94C946DDED97889E22B1
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FName*                  bpp__NotifyName__pf            (Parm, ZeroConstructor, IsPlainOldData)
// int*                           bpp__MontageInstanceID__pf     (Parm, ZeroConstructor, IsPlainOldData)

void UPCM_Hero_ABP_C::OnInterrupted_D0E2AA7A43FF94C946DDED97889E22B1(struct FName* bpp__NotifyName__pf, int* bpp__MontageInstanceID__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnInterrupted_D0E2AA7A43FF94C946DDED97889E22B1");

	UPCM_Hero_ABP_C_OnInterrupted_D0E2AA7A43FF94C946DDED97889E22B1_Params params;
	params.bpp__NotifyName__pf = bpp__NotifyName__pf;
	params.bpp__MontageInstanceID__pf = bpp__MontageInstanceID__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnInterrupted_D02C034A4EB0D0E596D903B8DBD4801B
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FName*                  bpp__NotifyName__pf            (Parm, ZeroConstructor, IsPlainOldData)
// int*                           bpp__MontageInstanceID__pf     (Parm, ZeroConstructor, IsPlainOldData)

void UPCM_Hero_ABP_C::OnInterrupted_D02C034A4EB0D0E596D903B8DBD4801B(struct FName* bpp__NotifyName__pf, int* bpp__MontageInstanceID__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnInterrupted_D02C034A4EB0D0E596D903B8DBD4801B");

	UPCM_Hero_ABP_C_OnInterrupted_D02C034A4EB0D0E596D903B8DBD4801B_Params params;
	params.bpp__NotifyName__pf = bpp__NotifyName__pf;
	params.bpp__MontageInstanceID__pf = bpp__MontageInstanceID__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnInterrupted_C78BE1F74ADCCB255C1BCD9E6240104B
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FName*                  bpp__NotifyName__pf            (Parm, ZeroConstructor, IsPlainOldData)
// int*                           bpp__MontageInstanceID__pf     (Parm, ZeroConstructor, IsPlainOldData)

void UPCM_Hero_ABP_C::OnInterrupted_C78BE1F74ADCCB255C1BCD9E6240104B(struct FName* bpp__NotifyName__pf, int* bpp__MontageInstanceID__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnInterrupted_C78BE1F74ADCCB255C1BCD9E6240104B");

	UPCM_Hero_ABP_C_OnInterrupted_C78BE1F74ADCCB255C1BCD9E6240104B_Params params;
	params.bpp__NotifyName__pf = bpp__NotifyName__pf;
	params.bpp__MontageInstanceID__pf = bpp__MontageInstanceID__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnInterrupted_B5B16ACD4F176963194D6B8527E16FBB
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FName*                  bpp__NotifyName__pf            (Parm, ZeroConstructor, IsPlainOldData)
// int*                           bpp__MontageInstanceID__pf     (Parm, ZeroConstructor, IsPlainOldData)

void UPCM_Hero_ABP_C::OnInterrupted_B5B16ACD4F176963194D6B8527E16FBB(struct FName* bpp__NotifyName__pf, int* bpp__MontageInstanceID__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnInterrupted_B5B16ACD4F176963194D6B8527E16FBB");

	UPCM_Hero_ABP_C_OnInterrupted_B5B16ACD4F176963194D6B8527E16FBB_Params params;
	params.bpp__NotifyName__pf = bpp__NotifyName__pf;
	params.bpp__MontageInstanceID__pf = bpp__MontageInstanceID__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnInterrupted_9E6BC1B74A4D30EF4551EDBB637F89EE
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FName*                  bpp__NotifyName__pf            (Parm, ZeroConstructor, IsPlainOldData)
// int*                           bpp__MontageInstanceID__pf     (Parm, ZeroConstructor, IsPlainOldData)

void UPCM_Hero_ABP_C::OnInterrupted_9E6BC1B74A4D30EF4551EDBB637F89EE(struct FName* bpp__NotifyName__pf, int* bpp__MontageInstanceID__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnInterrupted_9E6BC1B74A4D30EF4551EDBB637F89EE");

	UPCM_Hero_ABP_C_OnInterrupted_9E6BC1B74A4D30EF4551EDBB637F89EE_Params params;
	params.bpp__NotifyName__pf = bpp__NotifyName__pf;
	params.bpp__MontageInstanceID__pf = bpp__MontageInstanceID__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnInterrupted_68DE575241BD5D31439A859E850392A2
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FName*                  bpp__NotifyName__pf            (Parm, ZeroConstructor, IsPlainOldData)
// int*                           bpp__MontageInstanceID__pf     (Parm, ZeroConstructor, IsPlainOldData)

void UPCM_Hero_ABP_C::OnInterrupted_68DE575241BD5D31439A859E850392A2(struct FName* bpp__NotifyName__pf, int* bpp__MontageInstanceID__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnInterrupted_68DE575241BD5D31439A859E850392A2");

	UPCM_Hero_ABP_C_OnInterrupted_68DE575241BD5D31439A859E850392A2_Params params;
	params.bpp__NotifyName__pf = bpp__NotifyName__pf;
	params.bpp__MontageInstanceID__pf = bpp__MontageInstanceID__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnInterrupted_4DE3C6AE469BE13DC02A7AB80E924B7B
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FName*                  bpp__NotifyName__pf            (Parm, ZeroConstructor, IsPlainOldData)
// int*                           bpp__MontageInstanceID__pf     (Parm, ZeroConstructor, IsPlainOldData)

void UPCM_Hero_ABP_C::OnInterrupted_4DE3C6AE469BE13DC02A7AB80E924B7B(struct FName* bpp__NotifyName__pf, int* bpp__MontageInstanceID__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnInterrupted_4DE3C6AE469BE13DC02A7AB80E924B7B");

	UPCM_Hero_ABP_C_OnInterrupted_4DE3C6AE469BE13DC02A7AB80E924B7B_Params params;
	params.bpp__NotifyName__pf = bpp__NotifyName__pf;
	params.bpp__MontageInstanceID__pf = bpp__MontageInstanceID__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnInterrupted_1BE19CEA4A7E760561F3419034A02FE3
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FName*                  bpp__NotifyName__pf            (Parm, ZeroConstructor, IsPlainOldData)
// int*                           bpp__MontageInstanceID__pf     (Parm, ZeroConstructor, IsPlainOldData)

void UPCM_Hero_ABP_C::OnInterrupted_1BE19CEA4A7E760561F3419034A02FE3(struct FName* bpp__NotifyName__pf, int* bpp__MontageInstanceID__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnInterrupted_1BE19CEA4A7E760561F3419034A02FE3");

	UPCM_Hero_ABP_C_OnInterrupted_1BE19CEA4A7E760561F3419034A02FE3_Params params;
	params.bpp__NotifyName__pf = bpp__NotifyName__pf;
	params.bpp__MontageInstanceID__pf = bpp__MontageInstanceID__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnInterrupted_143632A9488E9A82D17492B8710C0540
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FName*                  bpp__NotifyName__pf            (Parm, ZeroConstructor, IsPlainOldData)
// int*                           bpp__MontageInstanceID__pf     (Parm, ZeroConstructor, IsPlainOldData)

void UPCM_Hero_ABP_C::OnInterrupted_143632A9488E9A82D17492B8710C0540(struct FName* bpp__NotifyName__pf, int* bpp__MontageInstanceID__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnInterrupted_143632A9488E9A82D17492B8710C0540");

	UPCM_Hero_ABP_C_OnInterrupted_143632A9488E9A82D17492B8710C0540_Params params;
	params.bpp__NotifyName__pf = bpp__NotifyName__pf;
	params.bpp__MontageInstanceID__pf = bpp__MontageInstanceID__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnCompleted_F55321C648B813A33A06BF926330EB4F
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FName*                  bpp__NotifyName__pf            (Parm, ZeroConstructor, IsPlainOldData)
// int*                           bpp__MontageInstanceID__pf     (Parm, ZeroConstructor, IsPlainOldData)

void UPCM_Hero_ABP_C::OnCompleted_F55321C648B813A33A06BF926330EB4F(struct FName* bpp__NotifyName__pf, int* bpp__MontageInstanceID__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnCompleted_F55321C648B813A33A06BF926330EB4F");

	UPCM_Hero_ABP_C_OnCompleted_F55321C648B813A33A06BF926330EB4F_Params params;
	params.bpp__NotifyName__pf = bpp__NotifyName__pf;
	params.bpp__MontageInstanceID__pf = bpp__MontageInstanceID__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnCompleted_D0E2AA7A43FF94C946DDED97889E22B1
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FName*                  bpp__NotifyName__pf            (Parm, ZeroConstructor, IsPlainOldData)
// int*                           bpp__MontageInstanceID__pf     (Parm, ZeroConstructor, IsPlainOldData)

void UPCM_Hero_ABP_C::OnCompleted_D0E2AA7A43FF94C946DDED97889E22B1(struct FName* bpp__NotifyName__pf, int* bpp__MontageInstanceID__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnCompleted_D0E2AA7A43FF94C946DDED97889E22B1");

	UPCM_Hero_ABP_C_OnCompleted_D0E2AA7A43FF94C946DDED97889E22B1_Params params;
	params.bpp__NotifyName__pf = bpp__NotifyName__pf;
	params.bpp__MontageInstanceID__pf = bpp__MontageInstanceID__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnCompleted_D02C034A4EB0D0E596D903B8DBD4801B
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FName*                  bpp__NotifyName__pf            (Parm, ZeroConstructor, IsPlainOldData)
// int*                           bpp__MontageInstanceID__pf     (Parm, ZeroConstructor, IsPlainOldData)

void UPCM_Hero_ABP_C::OnCompleted_D02C034A4EB0D0E596D903B8DBD4801B(struct FName* bpp__NotifyName__pf, int* bpp__MontageInstanceID__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnCompleted_D02C034A4EB0D0E596D903B8DBD4801B");

	UPCM_Hero_ABP_C_OnCompleted_D02C034A4EB0D0E596D903B8DBD4801B_Params params;
	params.bpp__NotifyName__pf = bpp__NotifyName__pf;
	params.bpp__MontageInstanceID__pf = bpp__MontageInstanceID__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnCompleted_C78BE1F74ADCCB255C1BCD9E6240104B
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FName*                  bpp__NotifyName__pf            (Parm, ZeroConstructor, IsPlainOldData)
// int*                           bpp__MontageInstanceID__pf     (Parm, ZeroConstructor, IsPlainOldData)

void UPCM_Hero_ABP_C::OnCompleted_C78BE1F74ADCCB255C1BCD9E6240104B(struct FName* bpp__NotifyName__pf, int* bpp__MontageInstanceID__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnCompleted_C78BE1F74ADCCB255C1BCD9E6240104B");

	UPCM_Hero_ABP_C_OnCompleted_C78BE1F74ADCCB255C1BCD9E6240104B_Params params;
	params.bpp__NotifyName__pf = bpp__NotifyName__pf;
	params.bpp__MontageInstanceID__pf = bpp__MontageInstanceID__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnCompleted_B5B16ACD4F176963194D6B8527E16FBB
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FName*                  bpp__NotifyName__pf            (Parm, ZeroConstructor, IsPlainOldData)
// int*                           bpp__MontageInstanceID__pf     (Parm, ZeroConstructor, IsPlainOldData)

void UPCM_Hero_ABP_C::OnCompleted_B5B16ACD4F176963194D6B8527E16FBB(struct FName* bpp__NotifyName__pf, int* bpp__MontageInstanceID__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnCompleted_B5B16ACD4F176963194D6B8527E16FBB");

	UPCM_Hero_ABP_C_OnCompleted_B5B16ACD4F176963194D6B8527E16FBB_Params params;
	params.bpp__NotifyName__pf = bpp__NotifyName__pf;
	params.bpp__MontageInstanceID__pf = bpp__MontageInstanceID__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnCompleted_9E6BC1B74A4D30EF4551EDBB637F89EE
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FName*                  bpp__NotifyName__pf            (Parm, ZeroConstructor, IsPlainOldData)
// int*                           bpp__MontageInstanceID__pf     (Parm, ZeroConstructor, IsPlainOldData)

void UPCM_Hero_ABP_C::OnCompleted_9E6BC1B74A4D30EF4551EDBB637F89EE(struct FName* bpp__NotifyName__pf, int* bpp__MontageInstanceID__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnCompleted_9E6BC1B74A4D30EF4551EDBB637F89EE");

	UPCM_Hero_ABP_C_OnCompleted_9E6BC1B74A4D30EF4551EDBB637F89EE_Params params;
	params.bpp__NotifyName__pf = bpp__NotifyName__pf;
	params.bpp__MontageInstanceID__pf = bpp__MontageInstanceID__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnCompleted_68DE575241BD5D31439A859E850392A2
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FName*                  bpp__NotifyName__pf            (Parm, ZeroConstructor, IsPlainOldData)
// int*                           bpp__MontageInstanceID__pf     (Parm, ZeroConstructor, IsPlainOldData)

void UPCM_Hero_ABP_C::OnCompleted_68DE575241BD5D31439A859E850392A2(struct FName* bpp__NotifyName__pf, int* bpp__MontageInstanceID__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnCompleted_68DE575241BD5D31439A859E850392A2");

	UPCM_Hero_ABP_C_OnCompleted_68DE575241BD5D31439A859E850392A2_Params params;
	params.bpp__NotifyName__pf = bpp__NotifyName__pf;
	params.bpp__MontageInstanceID__pf = bpp__MontageInstanceID__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnCompleted_4DE3C6AE469BE13DC02A7AB80E924B7B
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FName*                  bpp__NotifyName__pf            (Parm, ZeroConstructor, IsPlainOldData)
// int*                           bpp__MontageInstanceID__pf     (Parm, ZeroConstructor, IsPlainOldData)

void UPCM_Hero_ABP_C::OnCompleted_4DE3C6AE469BE13DC02A7AB80E924B7B(struct FName* bpp__NotifyName__pf, int* bpp__MontageInstanceID__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnCompleted_4DE3C6AE469BE13DC02A7AB80E924B7B");

	UPCM_Hero_ABP_C_OnCompleted_4DE3C6AE469BE13DC02A7AB80E924B7B_Params params;
	params.bpp__NotifyName__pf = bpp__NotifyName__pf;
	params.bpp__MontageInstanceID__pf = bpp__MontageInstanceID__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnCompleted_1BE19CEA4A7E760561F3419034A02FE3
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FName*                  bpp__NotifyName__pf            (Parm, ZeroConstructor, IsPlainOldData)
// int*                           bpp__MontageInstanceID__pf     (Parm, ZeroConstructor, IsPlainOldData)

void UPCM_Hero_ABP_C::OnCompleted_1BE19CEA4A7E760561F3419034A02FE3(struct FName* bpp__NotifyName__pf, int* bpp__MontageInstanceID__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnCompleted_1BE19CEA4A7E760561F3419034A02FE3");

	UPCM_Hero_ABP_C_OnCompleted_1BE19CEA4A7E760561F3419034A02FE3_Params params;
	params.bpp__NotifyName__pf = bpp__NotifyName__pf;
	params.bpp__MontageInstanceID__pf = bpp__MontageInstanceID__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnCompleted_143632A9488E9A82D17492B8710C0540
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FName*                  bpp__NotifyName__pf            (Parm, ZeroConstructor, IsPlainOldData)
// int*                           bpp__MontageInstanceID__pf     (Parm, ZeroConstructor, IsPlainOldData)

void UPCM_Hero_ABP_C::OnCompleted_143632A9488E9A82D17492B8710C0540(struct FName* bpp__NotifyName__pf, int* bpp__MontageInstanceID__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnCompleted_143632A9488E9A82D17492B8710C0540");

	UPCM_Hero_ABP_C_OnCompleted_143632A9488E9A82D17492B8710C0540_Params params;
	params.bpp__NotifyName__pf = bpp__NotifyName__pf;
	params.bpp__MontageInstanceID__pf = bpp__MontageInstanceID__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnBlendOut_F55321C648B813A33A06BF926330EB4F
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FName*                  bpp__NotifyName__pf            (Parm, ZeroConstructor, IsPlainOldData)
// int*                           bpp__MontageInstanceID__pf     (Parm, ZeroConstructor, IsPlainOldData)

void UPCM_Hero_ABP_C::OnBlendOut_F55321C648B813A33A06BF926330EB4F(struct FName* bpp__NotifyName__pf, int* bpp__MontageInstanceID__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnBlendOut_F55321C648B813A33A06BF926330EB4F");

	UPCM_Hero_ABP_C_OnBlendOut_F55321C648B813A33A06BF926330EB4F_Params params;
	params.bpp__NotifyName__pf = bpp__NotifyName__pf;
	params.bpp__MontageInstanceID__pf = bpp__MontageInstanceID__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnBlendOut_D0E2AA7A43FF94C946DDED97889E22B1
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FName*                  bpp__NotifyName__pf            (Parm, ZeroConstructor, IsPlainOldData)
// int*                           bpp__MontageInstanceID__pf     (Parm, ZeroConstructor, IsPlainOldData)

void UPCM_Hero_ABP_C::OnBlendOut_D0E2AA7A43FF94C946DDED97889E22B1(struct FName* bpp__NotifyName__pf, int* bpp__MontageInstanceID__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnBlendOut_D0E2AA7A43FF94C946DDED97889E22B1");

	UPCM_Hero_ABP_C_OnBlendOut_D0E2AA7A43FF94C946DDED97889E22B1_Params params;
	params.bpp__NotifyName__pf = bpp__NotifyName__pf;
	params.bpp__MontageInstanceID__pf = bpp__MontageInstanceID__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnBlendOut_D02C034A4EB0D0E596D903B8DBD4801B
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FName*                  bpp__NotifyName__pf            (Parm, ZeroConstructor, IsPlainOldData)
// int*                           bpp__MontageInstanceID__pf     (Parm, ZeroConstructor, IsPlainOldData)

void UPCM_Hero_ABP_C::OnBlendOut_D02C034A4EB0D0E596D903B8DBD4801B(struct FName* bpp__NotifyName__pf, int* bpp__MontageInstanceID__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnBlendOut_D02C034A4EB0D0E596D903B8DBD4801B");

	UPCM_Hero_ABP_C_OnBlendOut_D02C034A4EB0D0E596D903B8DBD4801B_Params params;
	params.bpp__NotifyName__pf = bpp__NotifyName__pf;
	params.bpp__MontageInstanceID__pf = bpp__MontageInstanceID__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnBlendOut_C78BE1F74ADCCB255C1BCD9E6240104B
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FName*                  bpp__NotifyName__pf            (Parm, ZeroConstructor, IsPlainOldData)
// int*                           bpp__MontageInstanceID__pf     (Parm, ZeroConstructor, IsPlainOldData)

void UPCM_Hero_ABP_C::OnBlendOut_C78BE1F74ADCCB255C1BCD9E6240104B(struct FName* bpp__NotifyName__pf, int* bpp__MontageInstanceID__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnBlendOut_C78BE1F74ADCCB255C1BCD9E6240104B");

	UPCM_Hero_ABP_C_OnBlendOut_C78BE1F74ADCCB255C1BCD9E6240104B_Params params;
	params.bpp__NotifyName__pf = bpp__NotifyName__pf;
	params.bpp__MontageInstanceID__pf = bpp__MontageInstanceID__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnBlendOut_B5B16ACD4F176963194D6B8527E16FBB
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FName*                  bpp__NotifyName__pf            (Parm, ZeroConstructor, IsPlainOldData)
// int*                           bpp__MontageInstanceID__pf     (Parm, ZeroConstructor, IsPlainOldData)

void UPCM_Hero_ABP_C::OnBlendOut_B5B16ACD4F176963194D6B8527E16FBB(struct FName* bpp__NotifyName__pf, int* bpp__MontageInstanceID__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnBlendOut_B5B16ACD4F176963194D6B8527E16FBB");

	UPCM_Hero_ABP_C_OnBlendOut_B5B16ACD4F176963194D6B8527E16FBB_Params params;
	params.bpp__NotifyName__pf = bpp__NotifyName__pf;
	params.bpp__MontageInstanceID__pf = bpp__MontageInstanceID__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnBlendOut_9E6BC1B74A4D30EF4551EDBB637F89EE
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FName*                  bpp__NotifyName__pf            (Parm, ZeroConstructor, IsPlainOldData)
// int*                           bpp__MontageInstanceID__pf     (Parm, ZeroConstructor, IsPlainOldData)

void UPCM_Hero_ABP_C::OnBlendOut_9E6BC1B74A4D30EF4551EDBB637F89EE(struct FName* bpp__NotifyName__pf, int* bpp__MontageInstanceID__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnBlendOut_9E6BC1B74A4D30EF4551EDBB637F89EE");

	UPCM_Hero_ABP_C_OnBlendOut_9E6BC1B74A4D30EF4551EDBB637F89EE_Params params;
	params.bpp__NotifyName__pf = bpp__NotifyName__pf;
	params.bpp__MontageInstanceID__pf = bpp__MontageInstanceID__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnBlendOut_68DE575241BD5D31439A859E850392A2
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FName*                  bpp__NotifyName__pf            (Parm, ZeroConstructor, IsPlainOldData)
// int*                           bpp__MontageInstanceID__pf     (Parm, ZeroConstructor, IsPlainOldData)

void UPCM_Hero_ABP_C::OnBlendOut_68DE575241BD5D31439A859E850392A2(struct FName* bpp__NotifyName__pf, int* bpp__MontageInstanceID__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnBlendOut_68DE575241BD5D31439A859E850392A2");

	UPCM_Hero_ABP_C_OnBlendOut_68DE575241BD5D31439A859E850392A2_Params params;
	params.bpp__NotifyName__pf = bpp__NotifyName__pf;
	params.bpp__MontageInstanceID__pf = bpp__MontageInstanceID__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnBlendOut_4DE3C6AE469BE13DC02A7AB80E924B7B
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FName*                  bpp__NotifyName__pf            (Parm, ZeroConstructor, IsPlainOldData)
// int*                           bpp__MontageInstanceID__pf     (Parm, ZeroConstructor, IsPlainOldData)

void UPCM_Hero_ABP_C::OnBlendOut_4DE3C6AE469BE13DC02A7AB80E924B7B(struct FName* bpp__NotifyName__pf, int* bpp__MontageInstanceID__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnBlendOut_4DE3C6AE469BE13DC02A7AB80E924B7B");

	UPCM_Hero_ABP_C_OnBlendOut_4DE3C6AE469BE13DC02A7AB80E924B7B_Params params;
	params.bpp__NotifyName__pf = bpp__NotifyName__pf;
	params.bpp__MontageInstanceID__pf = bpp__MontageInstanceID__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnBlendOut_1BE19CEA4A7E760561F3419034A02FE3
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FName*                  bpp__NotifyName__pf            (Parm, ZeroConstructor, IsPlainOldData)
// int*                           bpp__MontageInstanceID__pf     (Parm, ZeroConstructor, IsPlainOldData)

void UPCM_Hero_ABP_C::OnBlendOut_1BE19CEA4A7E760561F3419034A02FE3(struct FName* bpp__NotifyName__pf, int* bpp__MontageInstanceID__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnBlendOut_1BE19CEA4A7E760561F3419034A02FE3");

	UPCM_Hero_ABP_C_OnBlendOut_1BE19CEA4A7E760561F3419034A02FE3_Params params;
	params.bpp__NotifyName__pf = bpp__NotifyName__pf;
	params.bpp__MontageInstanceID__pf = bpp__MontageInstanceID__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnBlendOut_143632A9488E9A82D17492B8710C0540
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FName*                  bpp__NotifyName__pf            (Parm, ZeroConstructor, IsPlainOldData)
// int*                           bpp__MontageInstanceID__pf     (Parm, ZeroConstructor, IsPlainOldData)

void UPCM_Hero_ABP_C::OnBlendOut_143632A9488E9A82D17492B8710C0540(struct FName* bpp__NotifyName__pf, int* bpp__MontageInstanceID__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnBlendOut_143632A9488E9A82D17492B8710C0540");

	UPCM_Hero_ABP_C_OnBlendOut_143632A9488E9A82D17492B8710C0540_Params params;
	params.bpp__NotifyName__pf = bpp__NotifyName__pf;
	params.bpp__MontageInstanceID__pf = bpp__MontageInstanceID__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.LocomotionStop
// (Native, Event, Public, HasDefaults)
// Parameters:
// struct FVector*                bpp__StopLocation__pf          (Parm, ZeroConstructor, IsPlainOldData)

void UPCM_Hero_ABP_C::LocomotionStop(struct FVector* bpp__StopLocation__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.LocomotionStop");

	UPCM_Hero_ABP_C_LocomotionStop_Params params;
	params.bpp__StopLocation__pf = bpp__StopLocation__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.LocomotionStart
// (Native, Event, Public, HasDefaults)
// Parameters:
// struct FVector*                bpp__StartLocation__pf         (Parm, ZeroConstructor, IsPlainOldData)

void UPCM_Hero_ABP_C::LocomotionStart(struct FVector* bpp__StartLocation__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.LocomotionStart");

	UPCM_Hero_ABP_C_LocomotionStart_Params params;
	params.bpp__StartLocation__pf = bpp__StartLocation__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.LocomotionPrePivot
// (Native, Event, Public)

void UPCM_Hero_ABP_C::LocomotionPrePivot()
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.LocomotionPrePivot");

	UPCM_Hero_ABP_C_LocomotionPrePivot_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.LocomotionPivotCheckpoint
// (Native, Event, Public)

void UPCM_Hero_ABP_C::LocomotionPivotCheckpoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.LocomotionPivotCheckpoint");

	UPCM_Hero_ABP_C_LocomotionPivotCheckpoint_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.LocomotionPivot
// (Native, Event, Public, HasDefaults)
// Parameters:
// struct FVector*                bpp__PivotLocation__pf         (Parm, ZeroConstructor, IsPlainOldData)

void UPCM_Hero_ABP_C::LocomotionPivot(struct FVector* bpp__PivotLocation__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.LocomotionPivot");

	UPCM_Hero_ABP_C_LocomotionPivot_Params params;
	params.bpp__PivotLocation__pf = bpp__PivotLocation__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.LocalAccelerationToMovementDirection
// (Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector*                bpp__LocalxAcceleration__pfT   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bpp__GetOppositeDirection__pf  (Parm, ZeroConstructor, IsPlainOldData)
// EKSMovementDirection           bpp__AccelerationDirection__pf (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPCM_Hero_ABP_C::LocalAccelerationToMovementDirection(struct FVector* bpp__LocalxAcceleration__pfT, bool* bpp__GetOppositeDirection__pf, EKSMovementDirection* bpp__AccelerationDirection__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.LocalAccelerationToMovementDirection");

	UPCM_Hero_ABP_C_LocalAccelerationToMovementDirection_Params params;
	params.bpp__LocalxAcceleration__pfT = bpp__LocalxAcceleration__pfT;
	params.bpp__GetOppositeDirection__pf = bpp__GetOppositeDirection__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bpp__AccelerationDirection__pf != nullptr)
		*bpp__AccelerationDirection__pf = params.bpp__AccelerationDirection__pf;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.IsPlayerRagdoll
// (Native, Public, BlueprintCallable)

void UPCM_Hero_ABP_C::IsPlayerRagdoll()
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.IsPlayerRagdoll");

	UPCM_Hero_ABP_C_IsPlayerRagdoll_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.Hit React Event New
// (Native, Public, BlueprintCallable)
// Parameters:
// class AKSCharacter**           bpp__Character__pf             (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEffect*          bpp__Response__pf              (Parm)

void UPCM_Hero_ABP_C::Hit_React_Event_New(class AKSCharacter** bpp__Character__pf, struct FDamageEffect* bpp__Response__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.Hit React Event New");

	UPCM_Hero_ABP_C_Hit_React_Event_New_Params params;
	params.bpp__Character__pf = bpp__Character__pf;
	params.bpp__Response__pf = bpp__Response__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.HideMag
// (Native, Event, Public, BlueprintCallable)

void UPCM_Hero_ABP_C::HideMag()
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.HideMag");

	UPCM_Hero_ABP_C_HideMag_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.Get Roll Directions
// (Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D*              bpp__RollDirectionInput__pf    (Parm, ZeroConstructor, IsPlainOldData)

void UPCM_Hero_ABP_C::Get_Roll_Directions(struct FVector2D* bpp__RollDirectionInput__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.Get Roll Directions");

	UPCM_Hero_ABP_C_Get_Roll_Directions_Params params;
	params.bpp__RollDirectionInput__pf = bpp__RollDirectionInput__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.Get Footstep SFX Material
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName*                  bpp__BoneName__pf              (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   bpp__MaterialxReturn__pfT      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class AActor*                  bpp__ActorxReturn__pfT         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPCM_Hero_ABP_C::Get_Footstep_SFX_Material(struct FName* bpp__BoneName__pf, struct FName* bpp__MaterialxReturn__pfT, class AActor** bpp__ActorxReturn__pfT)
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.Get Footstep SFX Material");

	UPCM_Hero_ABP_C_Get_Footstep_SFX_Material_Params params;
	params.bpp__BoneName__pf = bpp__BoneName__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bpp__MaterialxReturn__pfT != nullptr)
		*bpp__MaterialxReturn__pfT = params.bpp__MaterialxReturn__pfT;
	if (bpp__ActorxReturn__pfT != nullptr)
		*bpp__ActorxReturn__pfT = params.bpp__ActorxReturn__pfT;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.ExecuteUbergraph_PCM_Hero_ABP_8
// (Final, Native, Public)
// Parameters:
// int*                           bpp__EntryPoint__pf            (Parm, ZeroConstructor, IsPlainOldData)

void UPCM_Hero_ABP_C::ExecuteUbergraph_PCM_Hero_ABP_8(int* bpp__EntryPoint__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.ExecuteUbergraph_PCM_Hero_ABP_8");

	UPCM_Hero_ABP_C_ExecuteUbergraph_PCM_Hero_ABP_8_Params params;
	params.bpp__EntryPoint__pf = bpp__EntryPoint__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.ExecuteUbergraph_PCM_Hero_ABP_65
// (Final, Native, Public)
// Parameters:
// int*                           bpp__EntryPoint__pf            (Parm, ZeroConstructor, IsPlainOldData)

void UPCM_Hero_ABP_C::ExecuteUbergraph_PCM_Hero_ABP_65(int* bpp__EntryPoint__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.ExecuteUbergraph_PCM_Hero_ABP_65");

	UPCM_Hero_ABP_C_ExecuteUbergraph_PCM_Hero_ABP_65_Params params;
	params.bpp__EntryPoint__pf = bpp__EntryPoint__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.ExecuteUbergraph_PCM_Hero_ABP_36
// (Final, Native, Public)
// Parameters:
// int*                           bpp__EntryPoint__pf            (Parm, ZeroConstructor, IsPlainOldData)

void UPCM_Hero_ABP_C::ExecuteUbergraph_PCM_Hero_ABP_36(int* bpp__EntryPoint__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.ExecuteUbergraph_PCM_Hero_ABP_36");

	UPCM_Hero_ABP_C_ExecuteUbergraph_PCM_Hero_ABP_36_Params params;
	params.bpp__EntryPoint__pf = bpp__EntryPoint__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.ExecuteUbergraph_PCM_Hero_ABP_31
// (Final, Native, Public)
// Parameters:
// int*                           bpp__EntryPoint__pf            (Parm, ZeroConstructor, IsPlainOldData)

void UPCM_Hero_ABP_C::ExecuteUbergraph_PCM_Hero_ABP_31(int* bpp__EntryPoint__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.ExecuteUbergraph_PCM_Hero_ABP_31");

	UPCM_Hero_ABP_C_ExecuteUbergraph_PCM_Hero_ABP_31_Params params;
	params.bpp__EntryPoint__pf = bpp__EntryPoint__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.ExecuteUbergraph_PCM_Hero_ABP_30
// (Final, Native, Public)
// Parameters:
// int*                           bpp__EntryPoint__pf            (Parm, ZeroConstructor, IsPlainOldData)

void UPCM_Hero_ABP_C::ExecuteUbergraph_PCM_Hero_ABP_30(int* bpp__EntryPoint__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.ExecuteUbergraph_PCM_Hero_ABP_30");

	UPCM_Hero_ABP_C_ExecuteUbergraph_PCM_Hero_ABP_30_Params params;
	params.bpp__EntryPoint__pf = bpp__EntryPoint__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.ExecuteUbergraph_PCM_Hero_ABP_3
// (Final, Native, Public)
// Parameters:
// int*                           bpp__EntryPoint__pf            (Parm, ZeroConstructor, IsPlainOldData)

void UPCM_Hero_ABP_C::ExecuteUbergraph_PCM_Hero_ABP_3(int* bpp__EntryPoint__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.ExecuteUbergraph_PCM_Hero_ABP_3");

	UPCM_Hero_ABP_C_ExecuteUbergraph_PCM_Hero_ABP_3_Params params;
	params.bpp__EntryPoint__pf = bpp__EntryPoint__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.ExecuteUbergraph_PCM_Hero_ABP_15
// (Final, Native, Public)
// Parameters:
// int*                           bpp__EntryPoint__pf            (Parm, ZeroConstructor, IsPlainOldData)

void UPCM_Hero_ABP_C::ExecuteUbergraph_PCM_Hero_ABP_15(int* bpp__EntryPoint__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.ExecuteUbergraph_PCM_Hero_ABP_15");

	UPCM_Hero_ABP_C_ExecuteUbergraph_PCM_Hero_ABP_15_Params params;
	params.bpp__EntryPoint__pf = bpp__EntryPoint__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.ExecuteUbergraph_PCM_Hero_ABP_14
// (Final, Native, Public)
// Parameters:
// int*                           bpp__EntryPoint__pf            (Parm, ZeroConstructor, IsPlainOldData)

void UPCM_Hero_ABP_C::ExecuteUbergraph_PCM_Hero_ABP_14(int* bpp__EntryPoint__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.ExecuteUbergraph_PCM_Hero_ABP_14");

	UPCM_Hero_ABP_C_ExecuteUbergraph_PCM_Hero_ABP_14_Params params;
	params.bpp__EntryPoint__pf = bpp__EntryPoint__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.ExecuteUbergraph_PCM_Hero_ABP_1
// (Final, Native, Public)
// Parameters:
// int*                           bpp__EntryPoint__pf            (Parm, ZeroConstructor, IsPlainOldData)

void UPCM_Hero_ABP_C::ExecuteUbergraph_PCM_Hero_ABP_1(int* bpp__EntryPoint__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.ExecuteUbergraph_PCM_Hero_ABP_1");

	UPCM_Hero_ABP_C_ExecuteUbergraph_PCM_Hero_ABP_1_Params params;
	params.bpp__EntryPoint__pf = bpp__EntryPoint__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EventStopSwimming
// (Native, Event, Public)

void UPCM_Hero_ABP_C::EventStopSwimming()
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.EventStopSwimming");

	UPCM_Hero_ABP_C_EventStopSwimming_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EventStopSubmerge
// (Native, Event, Public)

void UPCM_Hero_ABP_C::EventStopSubmerge()
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.EventStopSubmerge");

	UPCM_Hero_ABP_C_EventStopSubmerge_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EventStartSwimming
// (Native, Event, Public)

void UPCM_Hero_ABP_C::EventStartSwimming()
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.EventStartSwimming");

	UPCM_Hero_ABP_C_EventStartSwimming_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EventStartSubmerge
// (Native, Event, Public)

void UPCM_Hero_ABP_C::EventStartSubmerge()
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.EventStartSubmerge");

	UPCM_Hero_ABP_C_EventStartSubmerge_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EventStartInteraction
// (Native, Event, Public)
// Parameters:
// struct FName*                  bpp__NewInteractState__pf      (Parm, ZeroConstructor, IsPlainOldData)
// float*                         bpp__NewInteractHeight__pf     (Parm, ZeroConstructor, IsPlainOldData)
// float*                         bpp__NewInteractTime__pf       (Parm, ZeroConstructor, IsPlainOldData)

void UPCM_Hero_ABP_C::EventStartInteraction(struct FName* bpp__NewInteractState__pf, float* bpp__NewInteractHeight__pf, float* bpp__NewInteractTime__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.EventStartInteraction");

	UPCM_Hero_ABP_C_EventStartInteraction_Params params;
	params.bpp__NewInteractState__pf = bpp__NewInteractState__pf;
	params.bpp__NewInteractHeight__pf = bpp__NewInteractHeight__pf;
	params.bpp__NewInteractTime__pf = bpp__NewInteractTime__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EventEndZipLine
// (Native, Event, Public)

void UPCM_Hero_ABP_C::EventEndZipLine()
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.EventEndZipLine");

	UPCM_Hero_ABP_C_EventEndZipLine_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EventEndVault
// (Native, Event, Public)

void UPCM_Hero_ABP_C::EventEndVault()
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.EventEndVault");

	UPCM_Hero_ABP_C_EventEndVault_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EventEndPowerSlide
// (Native, Event, Public)
// Parameters:
// EKSPowerSlideEndReason*        bpp__EndReason__pf             (Parm, ZeroConstructor, IsPlainOldData)

void UPCM_Hero_ABP_C::EventEndPowerSlide(EKSPowerSlideEndReason* bpp__EndReason__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.EventEndPowerSlide");

	UPCM_Hero_ABP_C_EventEndPowerSlide_Params params;
	params.bpp__EndReason__pf = bpp__EndReason__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EventEndInteraction
// (Native, Event, Public)
// Parameters:
// struct FName*                  bpp__OldInteractState__pf      (Parm, ZeroConstructor, IsPlainOldData)

void UPCM_Hero_ABP_C::EventEndInteraction(struct FName* bpp__OldInteractState__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.EventEndInteraction");

	UPCM_Hero_ABP_C_EventEndInteraction_Params params;
	params.bpp__OldInteractState__pf = bpp__OldInteractState__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EventEndAbilityMovement
// (Native, Event, Public)

void UPCM_Hero_ABP_C::EventEndAbilityMovement()
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.EventEndAbilityMovement");

	UPCM_Hero_ABP_C_EventEndAbilityMovement_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EventDoZipLine
// (Native, Event, Public)

void UPCM_Hero_ABP_C::EventDoZipLine()
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.EventDoZipLine");

	UPCM_Hero_ABP_C_EventDoZipLine_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EventDoVault
// (Native, Event, Public, HasOutParms)
// Parameters:
// float*                         bpp__InMantleHeight__pf        (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bpp__bInVault__pf              (Parm, ZeroConstructor, IsPlainOldData)
// float*                         bpp__InVaultDrop__pf           (Parm, ZeroConstructor, IsPlainOldData)
// float*                         bpp__InUpDuration__pf          (Parm, ZeroConstructor, IsPlainOldData)
// float*                         bpp__InAcrossDuration__pf      (Parm, ZeroConstructor, IsPlainOldData)
// float*                         bpp__InDownDuration__pf        (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  bpp__InMantleName__pf__const   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UPCM_Hero_ABP_C::EventDoVault(float* bpp__InMantleHeight__pf, bool* bpp__bInVault__pf, float* bpp__InVaultDrop__pf, float* bpp__InUpDuration__pf, float* bpp__InAcrossDuration__pf, float* bpp__InDownDuration__pf, struct FName* bpp__InMantleName__pf__const)
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.EventDoVault");

	UPCM_Hero_ABP_C_EventDoVault_Params params;
	params.bpp__InMantleHeight__pf = bpp__InMantleHeight__pf;
	params.bpp__bInVault__pf = bpp__bInVault__pf;
	params.bpp__InVaultDrop__pf = bpp__InVaultDrop__pf;
	params.bpp__InUpDuration__pf = bpp__InUpDuration__pf;
	params.bpp__InAcrossDuration__pf = bpp__InAcrossDuration__pf;
	params.bpp__InDownDuration__pf = bpp__InDownDuration__pf;
	params.bpp__InMantleName__pf__const = bpp__InMantleName__pf__const;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EventDoStun
// (Native, Event, Public)

void UPCM_Hero_ABP_C::EventDoStun()
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.EventDoStun");

	UPCM_Hero_ABP_C_EventDoStun_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EventDoPowerSlide
// (Native, Event, Public)

void UPCM_Hero_ABP_C::EventDoPowerSlide()
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.EventDoPowerSlide");

	UPCM_Hero_ABP_C_EventDoPowerSlide_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EventDoGoDown
// (Native, Event, Public)

void UPCM_Hero_ABP_C::EventDoGoDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.EventDoGoDown");

	UPCM_Hero_ABP_C_EventDoGoDown_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EventDoDodgeRoll
// (Native, Event, Public, HasDefaults)
// Parameters:
// float*                         bpp__Duration__pf              (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D*              bpp__Direction__pf             (Parm, ZeroConstructor, IsPlainOldData)

void UPCM_Hero_ABP_C::EventDoDodgeRoll(float* bpp__Duration__pf, struct FVector2D* bpp__Direction__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.EventDoDodgeRoll");

	UPCM_Hero_ABP_C_EventDoDodgeRoll_Params params;
	params.bpp__Duration__pf = bpp__Duration__pf;
	params.bpp__Direction__pf = bpp__Direction__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EventDoAbilityMovement
// (Native, Event, Public)

void UPCM_Hero_ABP_C::EventDoAbilityMovement()
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.EventDoAbilityMovement");

	UPCM_Hero_ABP_C_EventDoAbilityMovement_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_KSAnimGraphNode_OrientationWarp_172323EF48DCF7241EF95098F2D8AD87
// (Native, Public)

void UPCM_Hero_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_KSAnimGraphNode_OrientationWarp_172323EF48DCF7241EF95098F2D8AD87()
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_KSAnimGraphNode_OrientationWarp_172323EF48DCF7241EF95098F2D8AD87");

	UPCM_Hero_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_KSAnimGraphNode_OrientationWarp_172323EF48DCF7241EF95098F2D8AD87_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_KSAnimGraphNode_OrientationWarp_131E912946E5081C735EBFAFB1693C8A
// (Native, Public)

void UPCM_Hero_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_KSAnimGraphNode_OrientationWarp_131E912946E5081C735EBFAFB1693C8A()
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_KSAnimGraphNode_OrientationWarp_131E912946E5081C735EBFAFB1693C8A");

	UPCM_Hero_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_KSAnimGraphNode_OrientationWarp_131E912946E5081C735EBFAFB1693C8A_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TwoWayBlend_C14F007F4907BBAD8DC842954DC08D71
// (Native, Public)

void UPCM_Hero_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TwoWayBlend_C14F007F4907BBAD8DC842954DC08D71()
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TwoWayBlend_C14F007F4907BBAD8DC842954DC08D71");

	UPCM_Hero_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TwoWayBlend_C14F007F4907BBAD8DC842954DC08D71_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_FB952A3747B8EBAA8E56269CBB6E9766
// (Native, Public)

void UPCM_Hero_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_FB952A3747B8EBAA8E56269CBB6E9766()
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_FB952A3747B8EBAA8E56269CBB6E9766");

	UPCM_Hero_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_FB952A3747B8EBAA8E56269CBB6E9766_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_EF9DE76E43DA1FFA5323C29FE06381CE
// (Native, Public)

void UPCM_Hero_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_EF9DE76E43DA1FFA5323C29FE06381CE()
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_EF9DE76E43DA1FFA5323C29FE06381CE");

	UPCM_Hero_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_EF9DE76E43DA1FFA5323C29FE06381CE_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_E8F5864A4FBC518801ABE9B4B8E01DB2
// (Native, Public)

void UPCM_Hero_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_E8F5864A4FBC518801ABE9B4B8E01DB2()
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_E8F5864A4FBC518801ABE9B4B8E01DB2");

	UPCM_Hero_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_E8F5864A4FBC518801ABE9B4B8E01DB2_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_E471C2EA41D54CD0DBC13F89A50DBDD9
// (Native, Public)

void UPCM_Hero_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_E471C2EA41D54CD0DBC13F89A50DBDD9()
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_E471C2EA41D54CD0DBC13F89A50DBDD9");

	UPCM_Hero_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_E471C2EA41D54CD0DBC13F89A50DBDD9_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_B60DB0C2476CE26BC38E85978156C863
// (Native, Public)

void UPCM_Hero_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_B60DB0C2476CE26BC38E85978156C863()
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_B60DB0C2476CE26BC38E85978156C863");

	UPCM_Hero_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_B60DB0C2476CE26BC38E85978156C863_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_A71A137D45979E49935FD59C46E68895
// (Native, Public)

void UPCM_Hero_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_A71A137D45979E49935FD59C46E68895()
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_A71A137D45979E49935FD59C46E68895");

	UPCM_Hero_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_A71A137D45979E49935FD59C46E68895_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_9EC4576B4419196162338EB146564905
// (Native, Public)

void UPCM_Hero_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_9EC4576B4419196162338EB146564905()
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_9EC4576B4419196162338EB146564905");

	UPCM_Hero_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_9EC4576B4419196162338EB146564905_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_928BF07A47B3335F07F0FEBDA1AEEA49
// (Native, Public)

void UPCM_Hero_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_928BF07A47B3335F07F0FEBDA1AEEA49()
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_928BF07A47B3335F07F0FEBDA1AEEA49");

	UPCM_Hero_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_928BF07A47B3335F07F0FEBDA1AEEA49_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_897086894750D35614505B985BA4FA44
// (Native, Public)

void UPCM_Hero_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_897086894750D35614505B985BA4FA44()
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_897086894750D35614505B985BA4FA44");

	UPCM_Hero_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_897086894750D35614505B985BA4FA44_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_7EE32840456D5D28C484B38772C5014A
// (Native, Public)

void UPCM_Hero_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_7EE32840456D5D28C484B38772C5014A()
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_7EE32840456D5D28C484B38772C5014A");

	UPCM_Hero_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_7EE32840456D5D28C484B38772C5014A_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_792988884C48FF32578DF1A60C1F730A
// (Native, Public)

void UPCM_Hero_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_792988884C48FF32578DF1A60C1F730A()
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_792988884C48FF32578DF1A60C1F730A");

	UPCM_Hero_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_792988884C48FF32578DF1A60C1F730A_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_7768F70149EF6298739C1C9FEDCCBB0C
// (Native, Public)

void UPCM_Hero_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_7768F70149EF6298739C1C9FEDCCBB0C()
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_7768F70149EF6298739C1C9FEDCCBB0C");

	UPCM_Hero_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_7768F70149EF6298739C1C9FEDCCBB0C_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_73D785DB4ABE1311BEF5A69B1EE3D871
// (Native, Public)

void UPCM_Hero_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_73D785DB4ABE1311BEF5A69B1EE3D871()
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_73D785DB4ABE1311BEF5A69B1EE3D871");

	UPCM_Hero_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_73D785DB4ABE1311BEF5A69B1EE3D871_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_6C07F39748AE158DE081A1A83BB697E8
// (Native, Public)

void UPCM_Hero_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_6C07F39748AE158DE081A1A83BB697E8()
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_6C07F39748AE158DE081A1A83BB697E8");

	UPCM_Hero_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_6C07F39748AE158DE081A1A83BB697E8_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_5F88837142168D1B73A6A1B2A0AD3830
// (Native, Public)

void UPCM_Hero_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_5F88837142168D1B73A6A1B2A0AD3830()
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_5F88837142168D1B73A6A1B2A0AD3830");

	UPCM_Hero_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_5F88837142168D1B73A6A1B2A0AD3830_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_3B9ACF614D7FA965A4FAE0ADBEB82AD5
// (Native, Public)

void UPCM_Hero_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_3B9ACF614D7FA965A4FAE0ADBEB82AD5()
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_3B9ACF614D7FA965A4FAE0ADBEB82AD5");

	UPCM_Hero_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_3B9ACF614D7FA965A4FAE0ADBEB82AD5_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_33E027DF46DCE517828E04A253364A0F
// (Native, Public)

void UPCM_Hero_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_33E027DF46DCE517828E04A253364A0F()
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_33E027DF46DCE517828E04A253364A0F");

	UPCM_Hero_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_33E027DF46DCE517828E04A253364A0F_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_233C356842DB534CD453E29390007BA8
// (Native, Public)

void UPCM_Hero_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_233C356842DB534CD453E29390007BA8()
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_233C356842DB534CD453E29390007BA8");

	UPCM_Hero_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_233C356842DB534CD453E29390007BA8_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_223977B248EAF97F0D1CF197C85E2617
// (Native, Public)

void UPCM_Hero_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_223977B248EAF97F0D1CF197C85E2617()
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_223977B248EAF97F0D1CF197C85E2617");

	UPCM_Hero_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_223977B248EAF97F0D1CF197C85E2617_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_RotationOffsetBlendSpace_D107525D4933CE74C8899D9BD3CC2AA0
// (Native, Public)

void UPCM_Hero_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_RotationOffsetBlendSpace_D107525D4933CE74C8899D9BD3CC2AA0()
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_RotationOffsetBlendSpace_D107525D4933CE74C8899D9BD3CC2AA0");

	UPCM_Hero_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_RotationOffsetBlendSpace_D107525D4933CE74C8899D9BD3CC2AA0_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_EFBF9A054BC7B28D4BFC5FB791063D37
// (Native, Public)

void UPCM_Hero_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_EFBF9A054BC7B28D4BFC5FB791063D37()
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_EFBF9A054BC7B28D4BFC5FB791063D37");

	UPCM_Hero_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_EFBF9A054BC7B28D4BFC5FB791063D37_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_E028EF2646CAABBA4677D6BE2F6ACEB8
// (Native, Public)

void UPCM_Hero_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_E028EF2646CAABBA4677D6BE2F6ACEB8()
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_E028EF2646CAABBA4677D6BE2F6ACEB8");

	UPCM_Hero_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_E028EF2646CAABBA4677D6BE2F6ACEB8_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_BAE9A17D40662CAF9E691E83B4482E5D
// (Native, Public)

void UPCM_Hero_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_BAE9A17D40662CAF9E691E83B4482E5D()
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_BAE9A17D40662CAF9E691E83B4482E5D");

	UPCM_Hero_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_BAE9A17D40662CAF9E691E83B4482E5D_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_BA1929D54B3B09856192B4B7A4D3B8A5
// (Native, Public)

void UPCM_Hero_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_BA1929D54B3B09856192B4B7A4D3B8A5()
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_BA1929D54B3B09856192B4B7A4D3B8A5");

	UPCM_Hero_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_BA1929D54B3B09856192B4B7A4D3B8A5_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_B8C63AC244919E63F441999AF88ED3E2
// (Native, Public)

void UPCM_Hero_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_B8C63AC244919E63F441999AF88ED3E2()
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_B8C63AC244919E63F441999AF88ED3E2");

	UPCM_Hero_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_B8C63AC244919E63F441999AF88ED3E2_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_B37F5A5044B9338ED291FF9598922B35
// (Native, Public)

void UPCM_Hero_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_B37F5A5044B9338ED291FF9598922B35()
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_B37F5A5044B9338ED291FF9598922B35");

	UPCM_Hero_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_B37F5A5044B9338ED291FF9598922B35_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_A84676B74AFF6C9E33195FB08136D345
// (Native, Public)

void UPCM_Hero_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_A84676B74AFF6C9E33195FB08136D345()
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_A84676B74AFF6C9E33195FB08136D345");

	UPCM_Hero_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_A84676B74AFF6C9E33195FB08136D345_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_933D26B8456AE00A739D7C98D974D374
// (Native, Public)

void UPCM_Hero_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_933D26B8456AE00A739D7C98D974D374()
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_933D26B8456AE00A739D7C98D974D374");

	UPCM_Hero_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_933D26B8456AE00A739D7C98D974D374_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_8E46CD0F459017238E79DC91DFAD4E63
// (Native, Public)

void UPCM_Hero_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_8E46CD0F459017238E79DC91DFAD4E63()
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_8E46CD0F459017238E79DC91DFAD4E63");

	UPCM_Hero_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_8E46CD0F459017238E79DC91DFAD4E63_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_8B2E22BB4C78E301E11713A2FA2A31A9
// (Native, Public)

void UPCM_Hero_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_8B2E22BB4C78E301E11713A2FA2A31A9()
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_8B2E22BB4C78E301E11713A2FA2A31A9");

	UPCM_Hero_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_8B2E22BB4C78E301E11713A2FA2A31A9_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_8746FEEA43980FC2F65C9DA47BD6C683
// (Native, Public)

void UPCM_Hero_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_8746FEEA43980FC2F65C9DA47BD6C683()
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_8746FEEA43980FC2F65C9DA47BD6C683");

	UPCM_Hero_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_8746FEEA43980FC2F65C9DA47BD6C683_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_8550E2144C50DB8698BDCBBD4ED6D425
// (Native, Public)

void UPCM_Hero_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_8550E2144C50DB8698BDCBBD4ED6D425()
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_8550E2144C50DB8698BDCBBD4ED6D425");

	UPCM_Hero_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_8550E2144C50DB8698BDCBBD4ED6D425_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_81898CD14A88E1C843BD08BA90B663DC
// (Native, Public)

void UPCM_Hero_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_81898CD14A88E1C843BD08BA90B663DC()
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_81898CD14A88E1C843BD08BA90B663DC");

	UPCM_Hero_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_81898CD14A88E1C843BD08BA90B663DC_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_815C9F154477C4703D8C4C88F2D59040
// (Native, Public)

void UPCM_Hero_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_815C9F154477C4703D8C4C88F2D59040()
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_815C9F154477C4703D8C4C88F2D59040");

	UPCM_Hero_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_815C9F154477C4703D8C4C88F2D59040_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_72640BAF4E1BA30E6914C3B9C3DE123A
// (Native, Public)

void UPCM_Hero_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_72640BAF4E1BA30E6914C3B9C3DE123A()
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_72640BAF4E1BA30E6914C3B9C3DE123A");

	UPCM_Hero_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_72640BAF4E1BA30E6914C3B9C3DE123A_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_37906F5F492BB9398CB5C894999E8B65
// (Native, Public)

void UPCM_Hero_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_37906F5F492BB9398CB5C894999E8B65()
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_37906F5F492BB9398CB5C894999E8B65");

	UPCM_Hero_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_37906F5F492BB9398CB5C894999E8B65_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_299A235045F7CAFDDC18FFBABC71DFF6
// (Native, Public)

void UPCM_Hero_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_299A235045F7CAFDDC18FFBABC71DFF6()
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_299A235045F7CAFDDC18FFBABC71DFF6");

	UPCM_Hero_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_299A235045F7CAFDDC18FFBABC71DFF6_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_23DB87334A5B7D99A2FB028091C7E25A
// (Native, Public)

void UPCM_Hero_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_23DB87334A5B7D99A2FB028091C7E25A()
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_23DB87334A5B7D99A2FB028091C7E25A");

	UPCM_Hero_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_23DB87334A5B7D99A2FB028091C7E25A_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_1CDEF52142A60BC67A453693093D4120
// (Native, Public)

void UPCM_Hero_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_1CDEF52142A60BC67A453693093D4120()
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_1CDEF52142A60BC67A453693093D4120");

	UPCM_Hero_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_1CDEF52142A60BC67A453693093D4120_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_1888317840C6DA4D8814B18BC7223E23
// (Native, Public)

void UPCM_Hero_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_1888317840C6DA4D8814B18BC7223E23()
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_1888317840C6DA4D8814B18BC7223E23");

	UPCM_Hero_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_1888317840C6DA4D8814B18BC7223E23_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_0B8FD2D64DEA37A39BF510A97F6DDAB2
// (Native, Public)

void UPCM_Hero_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_0B8FD2D64DEA37A39BF510A97F6DDAB2()
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_0B8FD2D64DEA37A39BF510A97F6DDAB2");

	UPCM_Hero_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_0B8FD2D64DEA37A39BF510A97F6DDAB2_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_AimOffsetSkinned_A82298444B1E8F93A73095B20F5AAD80
// (Native, Public)

void UPCM_Hero_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_AimOffsetSkinned_A82298444B1E8F93A73095B20F5AAD80()
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_AimOffsetSkinned_A82298444B1E8F93A73095B20F5AAD80");

	UPCM_Hero_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_AimOffsetSkinned_A82298444B1E8F93A73095B20F5AAD80_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_AimOffsetSkinned_10BC24364F921197A28983919050AD47
// (Native, Public)

void UPCM_Hero_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_AimOffsetSkinned_10BC24364F921197A28983919050AD47()
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_AimOffsetSkinned_10BC24364F921197A28983919050AD47");

	UPCM_Hero_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_AimOffsetSkinned_10BC24364F921197A28983919050AD47_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EndRevivee
// (Native, Event, Public)

void UPCM_Hero_ABP_C::EndRevivee()
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.EndRevivee");

	UPCM_Hero_ABP_C_EndRevivee_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EmoteMontageLostAllGlobalWeight
// (Native, Event, Public)

void UPCM_Hero_ABP_C::EmoteMontageLostAllGlobalWeight()
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.EmoteMontageLostAllGlobalWeight");

	UPCM_Hero_ABP_C_EmoteMontageLostAllGlobalWeight_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.Do Bind Hit React Event New
// (Native, Public, BlueprintCallable)
// Parameters:
// class AKSCharacter**           bpp__InxCharacter__pfT         (Parm, ZeroConstructor, IsPlainOldData)

void UPCM_Hero_ABP_C::Do_Bind_Hit_React_Event_New(class AKSCharacter** bpp__InxCharacter__pfT)
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.Do Bind Hit React Event New");

	UPCM_Hero_ABP_C_Do_Bind_Hit_React_Event_New_Params params;
	params.bpp__InxCharacter__pfT = bpp__InxCharacter__pfT;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.DetermineAutoEquip
// (Native, Public, BlueprintCallable)

void UPCM_Hero_ABP_C::DetermineAutoEquip()
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.DetermineAutoEquip");

	UPCM_Hero_ABP_C_DetermineAutoEquip_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.Check for Skin Dependant Variables
// (Native, Public, BlueprintCallable)

void UPCM_Hero_ABP_C::Check_for_Skin_Dependant_Variables()
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.Check for Skin Dependant Variables");

	UPCM_Hero_ABP_C_Check_for_Skin_Dependant_Variables_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.CancelDownedCosmetic
// (Native, Event, Public, BlueprintCallable)

void UPCM_Hero_ABP_C::CancelDownedCosmetic()
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.CancelDownedCosmetic");

	UPCM_Hero_ABP_C_CancelDownedCosmetic_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.CacheRootRagdollState
// (Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector*                bpp__RootLocation__pf          (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator*               bpp__RootRotation__pf          (Parm, ZeroConstructor, IsPlainOldData)

void UPCM_Hero_ABP_C::CacheRootRagdollState(struct FVector* bpp__RootLocation__pf, struct FRotator* bpp__RootRotation__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.CacheRootRagdollState");

	UPCM_Hero_ABP_C_CacheRootRagdollState_Params params;
	params.bpp__RootLocation__pf = bpp__RootLocation__pf;
	params.bpp__RootRotation__pf = bpp__RootRotation__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.BlueprintUpdateAnimation
// (Native, Event, Public)
// Parameters:
// float*                         bpp__DeltaTimeX__pf            (Parm, ZeroConstructor, IsPlainOldData)

void UPCM_Hero_ABP_C::BlueprintUpdateAnimation(float* bpp__DeltaTimeX__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.BlueprintUpdateAnimation");

	UPCM_Hero_ABP_C_BlueprintUpdateAnimation_Params params;
	params.bpp__DeltaTimeX__pf = bpp__DeltaTimeX__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.BlueprintInitializeAnimation
// (Native, Event, Public)

void UPCM_Hero_ABP_C::BlueprintInitializeAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.BlueprintInitializeAnimation");

	UPCM_Hero_ABP_C_BlueprintInitializeAnimation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.AnimNotify_UpdateCrouchTransition1P
// (Native, Public, BlueprintCallable)

void UPCM_Hero_ABP_C::AnimNotify_UpdateCrouchTransition1P()
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.AnimNotify_UpdateCrouchTransition1P");

	UPCM_Hero_ABP_C_AnimNotify_UpdateCrouchTransition1P_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.AnimNotify_Unplant Right Hand
// (Native, Public, BlueprintCallable)

void UPCM_Hero_ABP_C::AnimNotify_Unplant_Right_Hand()
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.AnimNotify_Unplant Right Hand");

	UPCM_Hero_ABP_C_AnimNotify_Unplant_Right_Hand_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.AnimNotify_Unplant Left Hand
// (Native, Public, BlueprintCallable)

void UPCM_Hero_ABP_C::AnimNotify_Unplant_Left_Hand()
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.AnimNotify_Unplant Left Hand");

	UPCM_Hero_ABP_C_AnimNotify_Unplant_Left_Hand_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.AnimNotify_UnHide Weapon
// (Native, Public, BlueprintCallable)

void UPCM_Hero_ABP_C::AnimNotify_UnHide_Weapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.AnimNotify_UnHide Weapon");

	UPCM_Hero_ABP_C_AnimNotify_UnHide_Weapon_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.AnimNotify_UnHide Tablet
// (Native, Public, BlueprintCallable)

void UPCM_Hero_ABP_C::AnimNotify_UnHide_Tablet()
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.AnimNotify_UnHide Tablet");

	UPCM_Hero_ABP_C_AnimNotify_UnHide_Tablet_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.AnimNotify_Unhide Mag
// (Native, Public, BlueprintCallable)

void UPCM_Hero_ABP_C::AnimNotify_Unhide_Mag()
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.AnimNotify_Unhide Mag");

	UPCM_Hero_ABP_C_AnimNotify_Unhide_Mag_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.AnimNotify_UnHide Gadget
// (Native, Public, BlueprintCallable)

void UPCM_Hero_ABP_C::AnimNotify_UnHide_Gadget()
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.AnimNotify_UnHide Gadget");

	UPCM_Hero_ABP_C_AnimNotify_UnHide_Gadget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.AnimNotify_RetrieveEnd
// (Native, Public, BlueprintCallable)

void UPCM_Hero_ABP_C::AnimNotify_RetrieveEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.AnimNotify_RetrieveEnd");

	UPCM_Hero_ABP_C_AnimNotify_RetrieveEnd_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.AnimNotify_RetrieveBegin
// (Native, Public, BlueprintCallable)

void UPCM_Hero_ABP_C::AnimNotify_RetrieveBegin()
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.AnimNotify_RetrieveBegin");

	UPCM_Hero_ABP_C_AnimNotify_RetrieveBegin_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.AnimNotify_Plant Right Hand
// (Native, Public, BlueprintCallable)

void UPCM_Hero_ABP_C::AnimNotify_Plant_Right_Hand()
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.AnimNotify_Plant Right Hand");

	UPCM_Hero_ABP_C_AnimNotify_Plant_Right_Hand_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.AnimNotify_Plant Left Hand
// (Native, Public, BlueprintCallable)

void UPCM_Hero_ABP_C::AnimNotify_Plant_Left_Hand()
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.AnimNotify_Plant Left Hand");

	UPCM_Hero_ABP_C_AnimNotify_Plant_Left_Hand_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.AnimNotify_MagThrow
// (Native, Public, BlueprintCallable)

void UPCM_Hero_ABP_C::AnimNotify_MagThrow()
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.AnimNotify_MagThrow");

	UPCM_Hero_ABP_C_AnimNotify_MagThrow_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.AnimNotify_InterruptStopExit
// (Native, Public, BlueprintCallable)

void UPCM_Hero_ABP_C::AnimNotify_InterruptStopExit()
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.AnimNotify_InterruptStopExit");

	UPCM_Hero_ABP_C_AnimNotify_InterruptStopExit_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.AnimNotify_InterruptStartExit
// (Native, Public, BlueprintCallable)

void UPCM_Hero_ABP_C::AnimNotify_InterruptStartExit()
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.AnimNotify_InterruptStartExit");

	UPCM_Hero_ABP_C_AnimNotify_InterruptStartExit_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.AnimNotify_Hide Weapon
// (Native, Public, BlueprintCallable)

void UPCM_Hero_ABP_C::AnimNotify_Hide_Weapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.AnimNotify_Hide Weapon");

	UPCM_Hero_ABP_C_AnimNotify_Hide_Weapon_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.AnimNotify_Hide Tablet
// (Native, Public, BlueprintCallable)

void UPCM_Hero_ABP_C::AnimNotify_Hide_Tablet()
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.AnimNotify_Hide Tablet");

	UPCM_Hero_ABP_C_AnimNotify_Hide_Tablet_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.AnimNotify_Hide Mag
// (Native, Public, BlueprintCallable)

void UPCM_Hero_ABP_C::AnimNotify_Hide_Mag()
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.AnimNotify_Hide Mag");

	UPCM_Hero_ABP_C_AnimNotify_Hide_Mag_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.AnimNotify_Hide Gadget
// (Native, Public, BlueprintCallable)

void UPCM_Hero_ABP_C::AnimNotify_Hide_Gadget()
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.AnimNotify_Hide Gadget");

	UPCM_Hero_ABP_C_AnimNotify_Hide_Gadget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.AnimNotify_HackingEnd
// (Native, Public, BlueprintCallable)

void UPCM_Hero_ABP_C::AnimNotify_HackingEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.AnimNotify_HackingEnd");

	UPCM_Hero_ABP_C_AnimNotify_HackingEnd_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.AnimNotify_HackingBegin
// (Native, Public, BlueprintCallable)

void UPCM_Hero_ABP_C::AnimNotify_HackingBegin()
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.AnimNotify_HackingBegin");

	UPCM_Hero_ABP_C_AnimNotify_HackingBegin_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.AnimNotify_Fire End
// (Native, Public, BlueprintCallable)

void UPCM_Hero_ABP_C::AnimNotify_Fire_End()
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.AnimNotify_Fire End");

	UPCM_Hero_ABP_C_AnimNotify_Fire_End_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.AnimNotify_ExitCustomPivot
// (Native, Public, BlueprintCallable)

void UPCM_Hero_ABP_C::AnimNotify_ExitCustomPivot()
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.AnimNotify_ExitCustomPivot");

	UPCM_Hero_ABP_C_AnimNotify_ExitCustomPivot_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.AnimNotify_EndLocomotionStartExit
// (Native, Public, BlueprintCallable)

void UPCM_Hero_ABP_C::AnimNotify_EndLocomotionStartExit()
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.AnimNotify_EndLocomotionStartExit");

	UPCM_Hero_ABP_C_AnimNotify_EndLocomotionStartExit_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.AnimNotify_EndLocomotionStartEnter
// (Native, Public, BlueprintCallable)

void UPCM_Hero_ABP_C::AnimNotify_EndLocomotionStartEnter()
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.AnimNotify_EndLocomotionStartEnter");

	UPCM_Hero_ABP_C_AnimNotify_EndLocomotionStartEnter_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.AnimNotify_EnableAims
// (Native, Public, BlueprintCallable)

void UPCM_Hero_ABP_C::AnimNotify_EnableAims()
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.AnimNotify_EnableAims");

	UPCM_Hero_ABP_C_AnimNotify_EnableAims_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.AnimNotify_DisableAims
// (Native, Public, BlueprintCallable)

void UPCM_Hero_ABP_C::AnimNotify_DisableAims()
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.AnimNotify_DisableAims");

	UPCM_Hero_ABP_C_AnimNotify_DisableAims_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.AnimNotify_CanStand
// (Native, Public, BlueprintCallable)

void UPCM_Hero_ABP_C::AnimNotify_CanStand()
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.AnimNotify_CanStand");

	UPCM_Hero_ABP_C_AnimNotify_CanStand_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.AnimNotify_BeginLocomotionStartExit
// (Native, Public, BlueprintCallable)

void UPCM_Hero_ABP_C::AnimNotify_BeginLocomotionStartExit()
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.AnimNotify_BeginLocomotionStartExit");

	UPCM_Hero_ABP_C_AnimNotify_BeginLocomotionStartExit_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.AnimNotify_BeginLocomotionStartEnter
// (Native, Public, BlueprintCallable)

void UPCM_Hero_ABP_C::AnimNotify_BeginLocomotionStartEnter()
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.AnimNotify_BeginLocomotionStartEnter");

	UPCM_Hero_ABP_C_AnimNotify_BeginLocomotionStartEnter_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.AnimMIrrorDelayEnd
// (Native, Public, BlueprintCallable)

void UPCM_Hero_ABP_C::AnimMIrrorDelayEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.AnimMIrrorDelayEnd");

	UPCM_Hero_ABP_C_AnimMIrrorDelayEnd_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.AnimGraph
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FPoseLink               bpp__AnimGraph__pf             (Parm, OutParm)

void UPCM_Hero_ABP_C::AnimGraph(struct FPoseLink* bpp__AnimGraph__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.AnimGraph");

	UPCM_Hero_ABP_C_AnimGraph_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bpp__AnimGraph__pf != nullptr)
		*bpp__AnimGraph__pf = params.bpp__AnimGraph__pf;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.AfterInteraction
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FName*                  bpp__NewxInteractxState__pfTT  (Parm, ZeroConstructor, IsPlainOldData)

void UPCM_Hero_ABP_C::AfterInteraction(struct FName* bpp__NewxInteractxState__pfTT)
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.AfterInteraction");

	UPCM_Hero_ABP_C_AfterInteraction_Params params;
	params.bpp__NewxInteractxState__pfTT = bpp__NewxInteractxState__pfTT;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.ADS Bump Stop Reset
// (Native, Public, BlueprintCallable)

void UPCM_Hero_ABP_C::ADS_Bump_Stop_Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.ADS Bump Stop Reset");

	UPCM_Hero_ABP_C_ADS_Bump_Stop_Reset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.ADS Bump Start Reset
// (Native, Public, BlueprintCallable)

void UPCM_Hero_ABP_C::ADS_Bump_Start_Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.ADS Bump Start Reset");

	UPCM_Hero_ABP_C_ADS_Bump_Start_Reset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.ADSResetBumpnRollValues
// (Native, Public, BlueprintCallable)

void UPCM_Hero_ABP_C::ADSResetBumpnRollValues()
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.ADSResetBumpnRollValues");

	UPCM_Hero_ABP_C_ADSResetBumpnRollValues_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCM_Hero_ABP.PCM_Hero_ABP_C.ADSBumpnRollEvaluation
// (Native, Public, BlueprintCallable)
// Parameters:
// float*                         bpp__Tick__pf                  (Parm, ZeroConstructor, IsPlainOldData)

void UPCM_Hero_ABP_C::ADSBumpnRollEvaluation(float* bpp__Tick__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function PCM_Hero_ABP.PCM_Hero_ABP_C.ADSBumpnRollEvaluation");

	UPCM_Hero_ABP_C_ADSBumpnRollEvaluation_Params params;
	params.bpp__Tick__pf = bpp__Tick__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction PCM_Hero_ABP.PCM_Hero_ABP_C.OnSprintChanged__DelegateSignature
// (Public, Delegate)
// Parameters:
// bool*                          bpp__IsSprinting__pf           (Parm, ZeroConstructor, IsPlainOldData)

void UPCM_Hero_ABP_C::OnSprintChanged__DelegateSignature(bool* bpp__IsSprinting__pf)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction PCM_Hero_ABP.PCM_Hero_ABP_C.OnSprintChanged__DelegateSignature");

	UPCM_Hero_ABP_C_OnSprintChanged__DelegateSignature_Params params;
	params.bpp__IsSprinting__pf = bpp__IsSprinting__pf;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction PCM_Hero_ABP.PCM_Hero_ABP_C.OnPlayHitFromPointDamage__DelegateSignature
// (Public, Delegate)
// Parameters:
// class AKSCharacter**           bpp__Character__pf             (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEffect*          bpp__Response__pf              (Parm)

void UPCM_Hero_ABP_C::OnPlayHitFromPointDamage__DelegateSignature(class AKSCharacter** bpp__Character__pf, struct FDamageEffect* bpp__Response__pf)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction PCM_Hero_ABP.PCM_Hero_ABP_C.OnPlayHitFromPointDamage__DelegateSignature");

	UPCM_Hero_ABP_C_OnPlayHitFromPointDamage__DelegateSignature_Params params;
	params.bpp__Character__pf = bpp__Character__pf;
	params.bpp__Response__pf = bpp__Response__pf;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction PCM_Hero_ABP.PCM_Hero_ABP_C.OnMontagePlayDelegate__DelegateSignature
// (Public, Delegate)
// Parameters:
// struct FName*                  bpp__NotifyName__pf            (Parm, ZeroConstructor, IsPlainOldData)
// int*                           bpp__MontageInstanceID__pf     (Parm, ZeroConstructor, IsPlainOldData)

void UPCM_Hero_ABP_C::OnMontagePlayDelegate__DelegateSignature(struct FName* bpp__NotifyName__pf, int* bpp__MontageInstanceID__pf)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction PCM_Hero_ABP.PCM_Hero_ABP_C.OnMontagePlayDelegate__DelegateSignature");

	UPCM_Hero_ABP_C_OnMontagePlayDelegate__DelegateSignature_Params params;
	params.bpp__NotifyName__pf = bpp__NotifyName__pf;
	params.bpp__MontageInstanceID__pf = bpp__MontageInstanceID__pf;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction PCM_Hero_ABP.PCM_Hero_ABP_C.OnFinishedAllPendingLoadsKeywords__DelegateSignature
// (Public, Delegate, HasOutParms)

void UPCM_Hero_ABP_C::OnFinishedAllPendingLoadsKeywords__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction PCM_Hero_ABP.PCM_Hero_ABP_C.OnFinishedAllPendingLoadsKeywords__DelegateSignature");

	UPCM_Hero_ABP_C_OnFinishedAllPendingLoadsKeywords__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// DelegateFunction Master_WeaponComponent.Master_WeaponComponent_C.OnSetScopeScaleAlpha__DelegateSignature
// (Public, Delegate)
// Parameters:
// float*                         bpp__NewxAlpha__pfT            (Parm, ZeroConstructor, IsPlainOldData)

void UMaster_WeaponComponent_C::OnSetScopeScaleAlpha__DelegateSignature(float* bpp__NewxAlpha__pfT)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction Master_WeaponComponent.Master_WeaponComponent_C.OnSetScopeScaleAlpha__DelegateSignature");

	UMaster_WeaponComponent_C_OnSetScopeScaleAlpha__DelegateSignature_Params params;
	params.bpp__NewxAlpha__pfT = bpp__NewxAlpha__pfT;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction Master_WeaponComponent.Master_WeaponComponent_C.OnSetRevolverChamberRotate__DelegateSignature
// (Public, Delegate, HasDefaults)
// Parameters:
// struct FRotator*               bpp__NewxRevolverxChamberxRotator__pfTTT (Parm, ZeroConstructor, IsPlainOldData)

void UMaster_WeaponComponent_C::OnSetRevolverChamberRotate__DelegateSignature(struct FRotator* bpp__NewxRevolverxChamberxRotator__pfTTT)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction Master_WeaponComponent.Master_WeaponComponent_C.OnSetRevolverChamberRotate__DelegateSignature");

	UMaster_WeaponComponent_C_OnSetRevolverChamberRotate__DelegateSignature_Params params;
	params.bpp__NewxRevolverxChamberxRotator__pfTTT = bpp__NewxRevolverxChamberxRotator__pfTTT;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction Master_WeaponComponent.Master_WeaponComponent_C.OnSetLobbyState__DelegateSignature
// (Public, Delegate)
// Parameters:
// bool*                          bpp__LobbyxState__pfT          (Parm, ZeroConstructor, IsPlainOldData)

void UMaster_WeaponComponent_C::OnSetLobbyState__DelegateSignature(bool* bpp__LobbyxState__pfT)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction Master_WeaponComponent.Master_WeaponComponent_C.OnSetLobbyState__DelegateSignature");

	UMaster_WeaponComponent_C_OnSetLobbyState__DelegateSignature_Params params;
	params.bpp__LobbyxState__pfT = bpp__LobbyxState__pfT;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Update Tracer Start Point
// (Native, Public, BlueprintCallable)

void UMaster_WeaponComponent_C::Update_Tracer_Start_Point()
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Update Tracer Start Point");

	UMaster_WeaponComponent_C_Update_Tracer_Start_Point_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Update Combat State
// (Native, Public, BlueprintCallable)
// Parameters:
// ECombatState*                  bpp__NewState__pf              (Parm, ZeroConstructor, IsPlainOldData)

void UMaster_WeaponComponent_C::Update_Combat_State(ECombatState* bpp__NewState__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Update Combat State");

	UMaster_WeaponComponent_C_Update_Combat_State_Params params;
	params.bpp__NewState__pf = bpp__NewState__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.UpdateMagDropBoneVelocity
// (Native, Public, BlueprintCallable)
// Parameters:
// float*                         bpp__DeltaTime__pf             (Parm, ZeroConstructor, IsPlainOldData)
// int*                           bpp__Index__pf                 (Parm, ZeroConstructor, IsPlainOldData)

void UMaster_WeaponComponent_C::UpdateMagDropBoneVelocity(float* bpp__DeltaTime__pf, int* bpp__Index__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.UpdateMagDropBoneVelocity");

	UMaster_WeaponComponent_C_UpdateMagDropBoneVelocity_Params params;
	params.bpp__DeltaTime__pf = bpp__DeltaTime__pf;
	params.bpp__Index__pf = bpp__Index__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.UpdateAimDownSightsBlurValues
// (Native, Event, Public, BlueprintCallable)

void UMaster_WeaponComponent_C::UpdateAimDownSightsBlurValues()
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.UpdateAimDownSightsBlurValues");

	UMaster_WeaponComponent_C_UpdateAimDownSightsBlurValues_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.TryDisableCameraModifier
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UClass**                 bpp__CameraxModifier__pfT      (Parm, ZeroConstructor, IsPlainOldData)
// int*                           bpp__PlayerxIndex__pfT         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bpp__Found__pf                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMaster_WeaponComponent_C::TryDisableCameraModifier(class UClass** bpp__CameraxModifier__pfT, int* bpp__PlayerxIndex__pfT, bool* bpp__Found__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.TryDisableCameraModifier");

	UMaster_WeaponComponent_C_TryDisableCameraModifier_Params params;
	params.bpp__CameraxModifier__pfT = bpp__CameraxModifier__pfT;
	params.bpp__PlayerxIndex__pfT = bpp__PlayerxIndex__pfT;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bpp__Found__pf != nullptr)
		*bpp__Found__pf = params.bpp__Found__pf;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.SyncComputeCosmeticHits
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FFullFireRepData*       bpp__FireData__pf              (Parm)
// TArray<struct FHitResult>      bpp__Hits__pf                  (Parm, OutParm, ZeroConstructor)

void UMaster_WeaponComponent_C::SyncComputeCosmeticHits(struct FFullFireRepData* bpp__FireData__pf, TArray<struct FHitResult>* bpp__Hits__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.SyncComputeCosmeticHits");

	UMaster_WeaponComponent_C_SyncComputeCosmeticHits_Params params;
	params.bpp__FireData__pf = bpp__FireData__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bpp__Hits__pf != nullptr)
		*bpp__Hits__pf = params.bpp__Hits__pf;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Spawn Tracers Simple
// (Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// TArray<struct FHitResult>      bpp__Hits__pf                  (Parm, OutParm, ZeroConstructor)
// struct FVector*                bpp__TracexEnd__pfT            (Parm, ZeroConstructor, IsPlainOldData)

void UMaster_WeaponComponent_C::Spawn_Tracers_Simple(struct FVector* bpp__TracexEnd__pfT, TArray<struct FHitResult>* bpp__Hits__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Spawn Tracers Simple");

	UMaster_WeaponComponent_C_Spawn_Tracers_Simple_Params params;
	params.bpp__TracexEnd__pfT = bpp__TracexEnd__pfT;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bpp__Hits__pf != nullptr)
		*bpp__Hits__pf = params.bpp__Hits__pf;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Spawn Tracer
// (Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector*                bpp__EndPoint__pf              (Parm, ZeroConstructor, IsPlainOldData)

void UMaster_WeaponComponent_C::Spawn_Tracer(struct FVector* bpp__EndPoint__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Spawn Tracer");

	UMaster_WeaponComponent_C_Spawn_Tracer_Params params;
	params.bpp__EndPoint__pf = bpp__EndPoint__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Spawn Spangs and Decals
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FFullFireRepData*       bpp__Data__pf__const           (ConstParm, Parm, OutParm, ReferenceParm)
// TArray<struct FHitResult>      bpp__Hits__pf                  (Parm, OutParm, ZeroConstructor)
// struct FFullFireRepData        bpp__OutxData__pfT             (Parm, OutParm)

void UMaster_WeaponComponent_C::Spawn_Spangs_and_Decals(struct FFullFireRepData* bpp__Data__pf__const, TArray<struct FHitResult>* bpp__Hits__pf, struct FFullFireRepData* bpp__OutxData__pfT)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Spawn Spangs and Decals");

	UMaster_WeaponComponent_C_Spawn_Spangs_and_Decals_Params params;
	params.bpp__Data__pf__const = bpp__Data__pf__const;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bpp__Hits__pf != nullptr)
		*bpp__Hits__pf = params.bpp__Hits__pf;
	if (bpp__OutxData__pfT != nullptr)
		*bpp__OutxData__pfT = params.bpp__OutxData__pfT;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.SpawnTracers
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FHitResult>      bpp__Hits__pf                  (Parm, OutParm, ZeroConstructor)
// TArray<struct FFullFireRepData> bpp__AimData__pf               (Parm, OutParm, ZeroConstructor)

void UMaster_WeaponComponent_C::SpawnTracers(TArray<struct FHitResult>* bpp__Hits__pf, TArray<struct FFullFireRepData>* bpp__AimData__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.SpawnTracers");

	UMaster_WeaponComponent_C_SpawnTracers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bpp__Hits__pf != nullptr)
		*bpp__Hits__pf = params.bpp__Hits__pf;
	if (bpp__AimData__pf != nullptr)
		*bpp__AimData__pf = params.bpp__AimData__pf;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.SpawnSpangs
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FHitResult>      bpp__Hits__pf                  (Parm, OutParm, ZeroConstructor)

void UMaster_WeaponComponent_C::SpawnSpangs(TArray<struct FHitResult>* bpp__Hits__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.SpawnSpangs");

	UMaster_WeaponComponent_C_SpawnSpangs_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bpp__Hits__pf != nullptr)
		*bpp__Hits__pf = params.bpp__Hits__pf;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.SpawnDecals
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FHitResult>      bpp__Hits__pf                  (Parm, OutParm, ZeroConstructor)

void UMaster_WeaponComponent_C::SpawnDecals(TArray<struct FHitResult>* bpp__Hits__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.SpawnDecals");

	UMaster_WeaponComponent_C_SpawnDecals_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bpp__Hits__pf != nullptr)
		*bpp__Hits__pf = params.bpp__Hits__pf;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.ShouldPlayFireAnim1P
// (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           bpp__Playx1PxFire__pfTT        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMaster_WeaponComponent_C::ShouldPlayFireAnim1P(bool* bpp__Playx1PxFire__pfTT)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.ShouldPlayFireAnim1P");

	UMaster_WeaponComponent_C_ShouldPlayFireAnim1P_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bpp__Playx1PxFire__pfTT != nullptr)
		*bpp__Playx1PxFire__pfTT = params.bpp__Playx1PxFire__pfTT;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Set Scope Scale Alpha
// (Native, Public, BlueprintCallable)
// Parameters:
// float*                         bpp__NewxAlpha__pfT            (Parm, ZeroConstructor, IsPlainOldData)

void UMaster_WeaponComponent_C::Set_Scope_Scale_Alpha(float* bpp__NewxAlpha__pfT)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Set Scope Scale Alpha");

	UMaster_WeaponComponent_C_Set_Scope_Scale_Alpha_Params params;
	params.bpp__NewxAlpha__pfT = bpp__NewxAlpha__pfT;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Set Revolver Chamber Rotate
// (Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRotator*               bpp__TargetxRotator__pfT       (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bpp__ResetxRotation__pfT       (Parm, ZeroConstructor, IsPlainOldData)

void UMaster_WeaponComponent_C::Set_Revolver_Chamber_Rotate(struct FRotator* bpp__TargetxRotator__pfT, bool* bpp__ResetxRotation__pfT)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Set Revolver Chamber Rotate");

	UMaster_WeaponComponent_C_Set_Revolver_Chamber_Rotate_Params params;
	params.bpp__TargetxRotator__pfT = bpp__TargetxRotator__pfT;
	params.bpp__ResetxRotation__pfT = bpp__ResetxRotation__pfT;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Set Muzzle Flash Emitter and Offset
// (Native, Public, BlueprintCallable)

void UMaster_WeaponComponent_C::Set_Muzzle_Flash_Emitter_and_Offset()
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Set Muzzle Flash Emitter and Offset");

	UMaster_WeaponComponent_C_Set_Muzzle_Flash_Emitter_and_Offset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Setup Character Anim Init Callback
// (Native, Public, BlueprintCallable)

void UMaster_WeaponComponent_C::Setup_Character_Anim_Init_Callback()
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Setup Character Anim Init Callback");

	UMaster_WeaponComponent_C_Setup_Character_Anim_Init_Callback_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Select Weapon Reload Montage
// (Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bpp__IsxQuickxReload__pfTT     (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimMontage*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAnimMontage* UMaster_WeaponComponent_C::Select_Weapon_Reload_Montage(bool* bpp__IsxQuickxReload__pfTT)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Select Weapon Reload Montage");

	UMaster_WeaponComponent_C_Select_Weapon_Reload_Montage_Params params;
	params.bpp__IsxQuickxReload__pfTT = bpp__IsxQuickxReload__pfTT;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Select Reload Montage
// (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class UAnimMontage*            bpp__ReloadMontage__pf         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UAnimMontage*            bpp__QuickReloadMontage__pf    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMaster_WeaponComponent_C::Select_Reload_Montage(class UAnimMontage** bpp__ReloadMontage__pf, class UAnimMontage** bpp__QuickReloadMontage__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Select Reload Montage");

	UMaster_WeaponComponent_C_Select_Reload_Montage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bpp__ReloadMontage__pf != nullptr)
		*bpp__ReloadMontage__pf = params.bpp__ReloadMontage__pf;
	if (bpp__QuickReloadMontage__pf != nullptr)
		*bpp__QuickReloadMontage__pf = params.bpp__QuickReloadMontage__pf;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Retrieve Weapon
// (Native, Public, BlueprintCallable)

void UMaster_WeaponComponent_C::Retrieve_Weapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Retrieve Weapon");

	UMaster_WeaponComponent_C_Retrieve_Weapon_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Reticle Rotate
// (Native, Public, BlueprintCallable)

void UMaster_WeaponComponent_C::Reticle_Rotate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Reticle Rotate");

	UMaster_WeaponComponent_C_Reticle_Rotate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Reset Variables at Start of Firing Instance
// (Native, Public, BlueprintCallable)

void UMaster_WeaponComponent_C::Reset_Variables_at_Start_of_Firing_Instance()
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Reset Variables at Start of Firing Instance");

	UMaster_WeaponComponent_C_Reset_Variables_at_Start_of_Firing_Instance_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Reload Weapon
// (Native, Public, BlueprintCallable)

void UMaster_WeaponComponent_C::Reload_Weapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Reload Weapon");

	UMaster_WeaponComponent_C_Reload_Weapon_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Reload Cooldown Weapon
// (Native, Public, BlueprintCallable)

void UMaster_WeaponComponent_C::Reload_Cooldown_Weapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Reload Cooldown Weapon");

	UMaster_WeaponComponent_C_Reload_Cooldown_Weapon_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.ReceiveTick
// (Native, Event, Public)
// Parameters:
// float*                         bpp__DeltaSeconds__pf          (Parm, ZeroConstructor, IsPlainOldData)

void UMaster_WeaponComponent_C::ReceiveTick(float* bpp__DeltaSeconds__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.ReceiveTick");

	UMaster_WeaponComponent_C_ReceiveTick_Params params;
	params.bpp__DeltaSeconds__pf = bpp__DeltaSeconds__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.ReceiveEndPlay
// (Native, Event, Public)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   bpp__EndPlayReason__pf         (Parm, ZeroConstructor, IsPlainOldData)

void UMaster_WeaponComponent_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* bpp__EndPlayReason__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.ReceiveEndPlay");

	UMaster_WeaponComponent_C_ReceiveEndPlay_Params params;
	params.bpp__EndPlayReason__pf = bpp__EndPlayReason__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.ReceiveBeginPlay
// (Native, Event, Public)

void UMaster_WeaponComponent_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.ReceiveBeginPlay");

	UMaster_WeaponComponent_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Pre Fire Weapon
// (Native, Public, BlueprintCallable)

void UMaster_WeaponComponent_C::Pre_Fire_Weapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Pre Fire Weapon");

	UMaster_WeaponComponent_C_Pre_Fire_Weapon_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Prepare Next Tracer Spawn
// (Native, Public, BlueprintCallable)

void UMaster_WeaponComponent_C::Prepare_Next_Tracer_Spawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Prepare Next Tracer Spawn");

	UMaster_WeaponComponent_C_Prepare_Next_Tracer_Spawn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Post Fire Weapon
// (Native, Public, BlueprintCallable)

void UMaster_WeaponComponent_C::Post_Fire_Weapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Post Fire Weapon");

	UMaster_WeaponComponent_C_Post_Fire_Weapon_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Play Weapon Reload animation
// (Native, Public, BlueprintCallable)
// Parameters:
// float*                         bpp__PlayRate__pf              (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bpp__IsxQuickxReload__pfTT     (Parm, ZeroConstructor, IsPlainOldData)

void UMaster_WeaponComponent_C::Play_Weapon_Reload_animation(float* bpp__PlayRate__pf, bool* bpp__IsxQuickxReload__pfTT)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Play Weapon Reload animation");

	UMaster_WeaponComponent_C_Play_Weapon_Reload_animation_Params params;
	params.bpp__PlayRate__pf = bpp__PlayRate__pf;
	params.bpp__IsxQuickxReload__pfTT = bpp__IsxQuickxReload__pfTT;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Play Reload MultiStage
// (Native, Public, BlueprintCallable)
// Parameters:
// float*                         bpp__PlayxRate__pfT            (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimMontage**           bpp__SelectedxMontage__pfT     (Parm, ZeroConstructor, IsPlainOldData)

void UMaster_WeaponComponent_C::Play_Reload_MultiStage(float* bpp__PlayxRate__pfT, class UAnimMontage** bpp__SelectedxMontage__pfT)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Play Reload MultiStage");

	UMaster_WeaponComponent_C_Play_Reload_MultiStage_Params params;
	params.bpp__PlayxRate__pfT = bpp__PlayxRate__pfT;
	params.bpp__SelectedxMontage__pfT = bpp__SelectedxMontage__pfT;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Play Reload Logic
// (Native, Public, BlueprintCallable)
// Parameters:
// class UAnimMontage**           bpp__ReloadxMontage__pfT       (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimMontage**           bpp__QuickReloadxMontage__pfT  (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bpp__IsxMultixStagexReloadx__pfTTTzy (Parm, ZeroConstructor, IsPlainOldData)

void UMaster_WeaponComponent_C::Play_Reload_Logic(class UAnimMontage** bpp__ReloadxMontage__pfT, class UAnimMontage** bpp__QuickReloadxMontage__pfT, bool* bpp__IsxMultixStagexReloadx__pfTTTzy)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Play Reload Logic");

	UMaster_WeaponComponent_C_Play_Reload_Logic_Params params;
	params.bpp__ReloadxMontage__pfT = bpp__ReloadxMontage__pfT;
	params.bpp__QuickReloadxMontage__pfT = bpp__QuickReloadxMontage__pfT;
	params.bpp__IsxMultixStagexReloadx__pfTTTzy = bpp__IsxMultixStagexReloadx__pfTTTzy;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Play Reload Base
// (Native, Public, BlueprintCallable)
// Parameters:
// float*                         bpp__PlayxRate__pfT            (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimMontage**           bpp__SelectedxMontage__pfT     (Parm, ZeroConstructor, IsPlainOldData)

void UMaster_WeaponComponent_C::Play_Reload_Base(float* bpp__PlayxRate__pfT, class UAnimMontage** bpp__SelectedxMontage__pfT)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Play Reload Base");

	UMaster_WeaponComponent_C_Play_Reload_Base_Params params;
	params.bpp__PlayxRate__pfT = bpp__PlayxRate__pfT;
	params.bpp__SelectedxMontage__pfT = bpp__SelectedxMontage__pfT;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Play Post Reload
// (Native, Public, BlueprintCallable)

void UMaster_WeaponComponent_C::Play_Post_Reload()
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Play Post Reload");

	UMaster_WeaponComponent_C_Play_Post_Reload_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Play Fire Tail Sound
// (Native, Public, BlueprintCallable)
// Parameters:
// EAkCallbackType*               bpp__CallbackxType__pfT        (Parm, ZeroConstructor, IsPlainOldData)
// class UAkCallbackInfo**        bpp__CallbackxInfo__pfT        (Parm, ZeroConstructor, IsPlainOldData)

void UMaster_WeaponComponent_C::Play_Fire_Tail_Sound(EAkCallbackType* bpp__CallbackxType__pfT, class UAkCallbackInfo** bpp__CallbackxInfo__pfT)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Play Fire Tail Sound");

	UMaster_WeaponComponent_C_Play_Fire_Tail_Sound_Params params;
	params.bpp__CallbackxType__pfT = bpp__CallbackxType__pfT;
	params.bpp__CallbackxInfo__pfT = bpp__CallbackxInfo__pfT;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Play Fire Camera Shakes
// (Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bpp__LocalOnly__pf             (Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 bpp__PrimaryxShake__pfT        (Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 bpp__HiFreqxShake__pfT         (Parm, ZeroConstructor, IsPlainOldData)

void UMaster_WeaponComponent_C::Play_Fire_Camera_Shakes(bool* bpp__LocalOnly__pf, class UClass** bpp__PrimaryxShake__pfT, class UClass** bpp__HiFreqxShake__pfT)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Play Fire Camera Shakes");

	UMaster_WeaponComponent_C_Play_Fire_Camera_Shakes_Params params;
	params.bpp__LocalOnly__pf = bpp__LocalOnly__pf;
	params.bpp__PrimaryxShake__pfT = bpp__PrimaryxShake__pfT;
	params.bpp__HiFreqxShake__pfT = bpp__HiFreqxShake__pfT;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Play Casing Sound
// (Native, Public, BlueprintCallable)

void UMaster_WeaponComponent_C::Play_Casing_Sound()
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Play Casing Sound");

	UMaster_WeaponComponent_C_Play_Casing_Sound_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Play Bullet Impact SFX
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FHitResult*             bpp__HitResult__pf             (Parm, IsPlainOldData)

void UMaster_WeaponComponent_C::Play_Bullet_Impact_SFX(struct FHitResult* bpp__HitResult__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Play Bullet Impact SFX");

	UMaster_WeaponComponent_C_Play_Bullet_Impact_SFX_Params params;
	params.bpp__HitResult__pf = bpp__HitResult__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.PlayInvalidFireSound
// (Native, Public, BlueprintCallable)

void UMaster_WeaponComponent_C::PlayInvalidFireSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.PlayInvalidFireSound");

	UMaster_WeaponComponent_C_PlayInvalidFireSound_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.PlayFireSound
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FAimData*               bpp__InputPin__pf__const       (ConstParm, Parm, OutParm, ReferenceParm)

void UMaster_WeaponComponent_C::PlayFireSound(struct FAimData* bpp__InputPin__pf__const)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.PlayFireSound");

	UMaster_WeaponComponent_C_PlayFireSound_Params params;
	params.bpp__InputPin__pf__const = bpp__InputPin__pf__const;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.PlayEmptyFireAudio
// (Native, Public, BlueprintCallable)

void UMaster_WeaponComponent_C::PlayEmptyFireAudio()
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.PlayEmptyFireAudio");

	UMaster_WeaponComponent_C_PlayEmptyFireAudio_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.PlayBulletNearMissSound
// (Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector*                bpp__InxTracexStart__pfTT      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                bpp__InxTracexEnd__pfTT        (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FHitResult>      bpp__Hits__pf                  (Parm, OutParm, ZeroConstructor)

void UMaster_WeaponComponent_C::PlayBulletNearMissSound(struct FVector* bpp__InxTracexStart__pfTT, struct FVector* bpp__InxTracexEnd__pfTT, TArray<struct FHitResult>* bpp__Hits__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.PlayBulletNearMissSound");

	UMaster_WeaponComponent_C_PlayBulletNearMissSound_Params params;
	params.bpp__InxTracexStart__pfTT = bpp__InxTracexStart__pfTT;
	params.bpp__InxTracexEnd__pfTT = bpp__InxTracexEnd__pfTT;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bpp__Hits__pf != nullptr)
		*bpp__Hits__pf = params.bpp__Hits__pf;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.On Cosmetic Trace Complete Internal
// (Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// bool*                          bpp__BlockingxHit__pfT__const  (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FHitResult>      bpp__OutxHits__pfT             (Parm, OutParm, ZeroConstructor)
// struct FVector*                bpp__Start__pf__const          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                bpp__End__pf__const            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bpp__AllowxSpangs__pfT         (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bpp__AllowxTracers__pfT        (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bpp__AllowxDecals__pfT         (Parm, ZeroConstructor, IsPlainOldData)

void UMaster_WeaponComponent_C::On_Cosmetic_Trace_Complete_Internal(bool* bpp__BlockingxHit__pfT__const, struct FVector* bpp__Start__pf__const, struct FVector* bpp__End__pf__const, bool* bpp__AllowxSpangs__pfT, bool* bpp__AllowxTracers__pfT, bool* bpp__AllowxDecals__pfT, TArray<struct FHitResult>* bpp__OutxHits__pfT)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.On Cosmetic Trace Complete Internal");

	UMaster_WeaponComponent_C_On_Cosmetic_Trace_Complete_Internal_Params params;
	params.bpp__BlockingxHit__pfT__const = bpp__BlockingxHit__pfT__const;
	params.bpp__Start__pf__const = bpp__Start__pf__const;
	params.bpp__End__pf__const = bpp__End__pf__const;
	params.bpp__AllowxSpangs__pfT = bpp__AllowxSpangs__pfT;
	params.bpp__AllowxTracers__pfT = bpp__AllowxTracers__pfT;
	params.bpp__AllowxDecals__pfT = bpp__AllowxDecals__pfT;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bpp__OutxHits__pfT != nullptr)
		*bpp__OutxHits__pfT = params.bpp__OutxHits__pfT;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.On Comestic Trace Complete
// (Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// bool*                          bpp__bBlockingHit__pf          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FHitResult>*     bpp__OutHits__pf__const        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FVector*                bpp__Start__pf__const          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector*                bpp__End__pf__const            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UMaster_WeaponComponent_C::On_Comestic_Trace_Complete(bool* bpp__bBlockingHit__pf, TArray<struct FHitResult>* bpp__OutHits__pf__const, struct FVector* bpp__Start__pf__const, struct FVector* bpp__End__pf__const)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.On Comestic Trace Complete");

	UMaster_WeaponComponent_C_On_Comestic_Trace_Complete_Params params;
	params.bpp__bBlockingHit__pf = bpp__bBlockingHit__pf;
	params.bpp__OutHits__pf__const = bpp__OutHits__pf__const;
	params.bpp__Start__pf__const = bpp__Start__pf__const;
	params.bpp__End__pf__const = bpp__End__pf__const;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.On Character Anim Initialized
// (Native, Public, BlueprintCallable)

void UMaster_WeaponComponent_C::On_Character_Anim_Initialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.On Character Anim Initialized");

	UMaster_WeaponComponent_C_On_Character_Anim_Initialized_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.OnPossessedBy_Event_1
// (Native, Public, BlueprintCallable)
// Parameters:
// class AController**            bpp__NewController__pf         (Parm, ZeroConstructor, IsPlainOldData)

void UMaster_WeaponComponent_C::OnPossessedBy_Event_1(class AController** bpp__NewController__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.OnPossessedBy_Event_1");

	UMaster_WeaponComponent_C_OnPossessedBy_Event_1_Params params;
	params.bpp__NewController__pf = bpp__NewController__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.OnKilled_Event_1
// (Native, Public, BlueprintCallable)
// Parameters:
// class AKSCharacterBase**       bpp__KillerCharacter__pf__const (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AKSCharacterBase**       bpp__KilledCharacter__pf__const (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UMaster_WeaponComponent_C::OnKilled_Event_1(class AKSCharacterBase** bpp__KillerCharacter__pf__const, class AKSCharacterBase** bpp__KilledCharacter__pf__const)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.OnKilled_Event_1");

	UMaster_WeaponComponent_C_OnKilled_Event_1_Params params;
	params.bpp__KillerCharacter__pf__const = bpp__KillerCharacter__pf__const;
	params.bpp__KilledCharacter__pf__const = bpp__KilledCharacter__pf__const;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.NotifyStopFireReceived
// (BlueprintCosmetic, Native, Event, Public)

void UMaster_WeaponComponent_C::NotifyStopFireReceived()
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.NotifyStopFireReceived");

	UMaster_WeaponComponent_C_NotifyStopFireReceived_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.IsDropMeshValid
// (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int*                           bpp__Index__pf                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMaster_WeaponComponent_C::IsDropMeshValid(int* bpp__Index__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.IsDropMeshValid");

	UMaster_WeaponComponent_C_IsDropMeshValid_Params params;
	params.bpp__Index__pf = bpp__Index__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.IdleWeapon
// (Native, Public, BlueprintCallable)
// Parameters:
// EWeaponStateNew*               bpp__OldState__pf              (Parm, ZeroConstructor, IsPlainOldData)

void UMaster_WeaponComponent_C::IdleWeapon(EWeaponStateNew* bpp__OldState__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.IdleWeapon");

	UMaster_WeaponComponent_C_IdleWeapon_Params params;
	params.bpp__OldState__pf = bpp__OldState__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Holster Weapon
// (Native, Public, BlueprintCallable)

void UMaster_WeaponComponent_C::Holster_Weapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Holster Weapon");

	UMaster_WeaponComponent_C_Holster_Weapon_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Hide Magazine
// (Native, Public, BlueprintCallable)

void UMaster_WeaponComponent_C::Hide_Magazine()
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Hide Magazine");

	UMaster_WeaponComponent_C_Hide_Magazine_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.HandleWeaponFiringClientEffects
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FFullFireRepData*       bpp__Data__pf                  (Parm)

void UMaster_WeaponComponent_C::HandleWeaponFiringClientEffects(struct FFullFireRepData* bpp__Data__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.HandleWeaponFiringClientEffects");

	UMaster_WeaponComponent_C_HandleWeaponFiringClientEffects_Params params;
	params.bpp__Data__pf = bpp__Data__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Get Tracer Offset
// (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          bpp__Offset__pf                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMaster_WeaponComponent_C::Get_Tracer_Offset(float* bpp__Offset__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Get Tracer Offset");

	UMaster_WeaponComponent_C_Get_Tracer_Offset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bpp__Offset__pf != nullptr)
		*bpp__Offset__pf = params.bpp__Offset__pf;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Get Spang Particle System
// (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FHitResult*             bpp__Hit__pf                   (Parm, IsPlainOldData)
// class UParticleSystem*         bpp__SpangxToxUse__pfTT        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bpp__PlayOnHitCharacter__pf    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMaster_WeaponComponent_C::Get_Spang_Particle_System(struct FHitResult* bpp__Hit__pf, class UParticleSystem** bpp__SpangxToxUse__pfTT, bool* bpp__PlayOnHitCharacter__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Get Spang Particle System");

	UMaster_WeaponComponent_C_Get_Spang_Particle_System_Params params;
	params.bpp__Hit__pf = bpp__Hit__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bpp__SpangxToxUse__pfTT != nullptr)
		*bpp__SpangxToxUse__pfTT = params.bpp__SpangxToxUse__pfTT;
	if (bpp__PlayOnHitCharacter__pf != nullptr)
		*bpp__PlayOnHitCharacter__pf = params.bpp__PlayOnHitCharacter__pf;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Get Scaled Reload Playrate
// (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class UAnimMontage**           bpp__AnimxMontage__pfT         (Parm, ZeroConstructor, IsPlainOldData)
// float                          bpp__ScaledxPlayrate__pfT      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMaster_WeaponComponent_C::Get_Scaled_Reload_Playrate(class UAnimMontage** bpp__AnimxMontage__pfT, float* bpp__ScaledxPlayrate__pfT)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Get Scaled Reload Playrate");

	UMaster_WeaponComponent_C_Get_Scaled_Reload_Playrate_Params params;
	params.bpp__AnimxMontage__pfT = bpp__AnimxMontage__pfT;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bpp__ScaledxPlayrate__pfT != nullptr)
		*bpp__ScaledxPlayrate__pfT = params.bpp__ScaledxPlayrate__pfT;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Get Scaled Post Reload Playrate
// (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class UAnimMontage**           bpp__AnimxMontage__pfT         (Parm, ZeroConstructor, IsPlainOldData)
// float                          bpp__ScaledxPlayrate__pfT      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMaster_WeaponComponent_C::Get_Scaled_Post_Reload_Playrate(class UAnimMontage** bpp__AnimxMontage__pfT, float* bpp__ScaledxPlayrate__pfT)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Get Scaled Post Reload Playrate");

	UMaster_WeaponComponent_C_Get_Scaled_Post_Reload_Playrate_Params params;
	params.bpp__AnimxMontage__pfT = bpp__AnimxMontage__pfT;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bpp__ScaledxPlayrate__pfT != nullptr)
		*bpp__ScaledxPlayrate__pfT = params.bpp__ScaledxPlayrate__pfT;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Get Scaled Multistage Reload Playrate
// (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class UAnimMontage**           bpp__AnimxMontage__pfT         (Parm, ZeroConstructor, IsPlainOldData)
// float                          bpp__ScaledxPlayrate__pfT      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMaster_WeaponComponent_C::Get_Scaled_Multistage_Reload_Playrate(class UAnimMontage** bpp__AnimxMontage__pfT, float* bpp__ScaledxPlayrate__pfT)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Get Scaled Multistage Reload Playrate");

	UMaster_WeaponComponent_C_Get_Scaled_Multistage_Reload_Playrate_Params params;
	params.bpp__AnimxMontage__pfT = bpp__AnimxMontage__pfT;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bpp__ScaledxPlayrate__pfT != nullptr)
		*bpp__ScaledxPlayrate__pfT = params.bpp__ScaledxPlayrate__pfT;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Get Reticle Material
// (Native, Public, BlueprintCallable)

void UMaster_WeaponComponent_C::Get_Reticle_Material()
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Get Reticle Material");

	UMaster_WeaponComponent_C_Get_Reticle_Material_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Get Post Reload Weapon Section Time
// (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class UAnimMontage**           bpp__AnimxMontage__pfT         (Parm, ZeroConstructor, IsPlainOldData)
// float                          bpp__PostxReloadxPosition__pfTT (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMaster_WeaponComponent_C::Get_Post_Reload_Weapon_Section_Time(class UAnimMontage** bpp__AnimxMontage__pfT, float* bpp__PostxReloadxPosition__pfTT)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Get Post Reload Weapon Section Time");

	UMaster_WeaponComponent_C_Get_Post_Reload_Weapon_Section_Time_Params params;
	params.bpp__AnimxMontage__pfT = bpp__AnimxMontage__pfT;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bpp__PostxReloadxPosition__pfTT != nullptr)
		*bpp__PostxReloadxPosition__pfTT = params.bpp__PostxReloadxPosition__pfTT;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Get Player 3P Lunge Montage
// (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class UAnimMontage*            bpp__Montage__pf               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMaster_WeaponComponent_C::Get_Player_3P_Lunge_Montage(class UAnimMontage** bpp__Montage__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Get Player 3P Lunge Montage");

	UMaster_WeaponComponent_C_Get_Player_3P_Lunge_Montage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bpp__Montage__pf != nullptr)
		*bpp__Montage__pf = params.bpp__Montage__pf;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Get Player 3P Fire Montage
// (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class UAnimMontage*            bpp__Montage__pf               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMaster_WeaponComponent_C::Get_Player_3P_Fire_Montage(class UAnimMontage** bpp__Montage__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Get Player 3P Fire Montage");

	UMaster_WeaponComponent_C_Get_Player_3P_Fire_Montage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bpp__Montage__pf != nullptr)
		*bpp__Montage__pf = params.bpp__Montage__pf;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Get Player 1P Fire Montage
// (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class UAnimMontage*            bpp__Montage__pf               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMaster_WeaponComponent_C::Get_Player_1P_Fire_Montage(class UAnimMontage** bpp__Montage__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Get Player 1P Fire Montage");

	UMaster_WeaponComponent_C_Get_Player_1P_Fire_Montage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bpp__Montage__pf != nullptr)
		*bpp__Montage__pf = params.bpp__Montage__pf;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Get Expected Aim Data
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FAimData                bpp__AimData__pf               (Parm, OutParm)

void UMaster_WeaponComponent_C::Get_Expected_Aim_Data(struct FAimData* bpp__AimData__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Get Expected Aim Data");

	UMaster_WeaponComponent_C_Get_Expected_Aim_Data_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bpp__AimData__pf != nullptr)
		*bpp__AimData__pf = params.bpp__AimData__pf;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Get Decal Material
// (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FHitResult*             bpp__Hit__pf                   (Parm, IsPlainOldData)
// struct FHitDecalInfo           bpp__DecalxInfo__pfT           (Parm, OutParm)

void UMaster_WeaponComponent_C::Get_Decal_Material(struct FHitResult* bpp__Hit__pf, struct FHitDecalInfo* bpp__DecalxInfo__pfT)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Get Decal Material");

	UMaster_WeaponComponent_C_Get_Decal_Material_Params params;
	params.bpp__Hit__pf = bpp__Hit__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bpp__DecalxInfo__pfT != nullptr)
		*bpp__DecalxInfo__pfT = params.bpp__DecalxInfo__pfT;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Get Character Anim Instance
// (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class UKSCharacterAnimInst*    bpp__AnimxInst__pfT            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMaster_WeaponComponent_C::Get_Character_Anim_Instance(class UKSCharacterAnimInst** bpp__AnimxInst__pfT)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Get Character Anim Instance");

	UMaster_WeaponComponent_C_Get_Character_Anim_Instance_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bpp__AnimxInst__pfT != nullptr)
		*bpp__AnimxInst__pfT = params.bpp__AnimxInst__pfT;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Get Character 3p Fire Section
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   bpp__3pxFirexSection__pfTT     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMaster_WeaponComponent_C::Get_Character_3p_Fire_Section(struct FName* bpp__3pxFirexSection__pfTT)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Get Character 3p Fire Section");

	UMaster_WeaponComponent_C_Get_Character_3p_Fire_Section_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bpp__3pxFirexSection__pfTT != nullptr)
		*bpp__3pxFirexSection__pfTT = params.bpp__3pxFirexSection__pfTT;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Get Character 1p Fire Section
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   bpp__1pxFirexSection__pfTT     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMaster_WeaponComponent_C::Get_Character_1p_Fire_Section(struct FName* bpp__1pxFirexSection__pfTT)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Get Character 1p Fire Section");

	UMaster_WeaponComponent_C_Get_Character_1p_Fire_Section_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bpp__1pxFirexSection__pfTT != nullptr)
		*bpp__1pxFirexSection__pfTT = params.bpp__1pxFirexSection__pfTT;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.GetTracerStartPoint
// (Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 bpp__TracerStartLocation__pf   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMaster_WeaponComponent_C::GetTracerStartPoint(struct FVector* bpp__TracerStartLocation__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.GetTracerStartPoint");

	UMaster_WeaponComponent_C_GetTracerStartPoint_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bpp__TracerStartLocation__pf != nullptr)
		*bpp__TracerStartLocation__pf = params.bpp__TracerStartLocation__pf;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.GetTableRowNameForHit
// (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FHitResult*             bpp__Hit__pf                   (Parm, IsPlainOldData)
// struct FName*                  bpp__RowNamePrefix__pf         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   bpp__RowName__pf               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMaster_WeaponComponent_C::GetTableRowNameForHit(struct FHitResult* bpp__Hit__pf, struct FName* bpp__RowNamePrefix__pf, struct FName* bpp__RowName__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.GetTableRowNameForHit");

	UMaster_WeaponComponent_C_GetTableRowNameForHit_Params params;
	params.bpp__Hit__pf = bpp__Hit__pf;
	params.bpp__RowNamePrefix__pf = bpp__RowNamePrefix__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bpp__RowName__pf != nullptr)
		*bpp__RowName__pf = params.bpp__RowName__pf;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.GetPercentRemainingAmmo
// (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          bpp__Percent__pf               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMaster_WeaponComponent_C::GetPercentRemainingAmmo(float* bpp__Percent__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.GetPercentRemainingAmmo");

	UMaster_WeaponComponent_C_GetPercentRemainingAmmo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bpp__Percent__pf != nullptr)
		*bpp__Percent__pf = params.bpp__Percent__pf;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.GetMagDropBoneRotation
// (Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// int*                           bpp__Index__pf                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                bpp__WorldRotation__pf         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMaster_WeaponComponent_C::GetMagDropBoneRotation(int* bpp__Index__pf, struct FRotator* bpp__WorldRotation__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.GetMagDropBoneRotation");

	UMaster_WeaponComponent_C_GetMagDropBoneRotation_Params params;
	params.bpp__Index__pf = bpp__Index__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bpp__WorldRotation__pf != nullptr)
		*bpp__WorldRotation__pf = params.bpp__WorldRotation__pf;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.GetMagDropBoneLocation
// (Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// int*                           bpp__Index__pf                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 bpp__WorldLocation__pf         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMaster_WeaponComponent_C::GetMagDropBoneLocation(int* bpp__Index__pf, struct FVector* bpp__WorldLocation__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.GetMagDropBoneLocation");

	UMaster_WeaponComponent_C_GetMagDropBoneLocation_Params params;
	params.bpp__Index__pf = bpp__Index__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bpp__WorldLocation__pf != nullptr)
		*bpp__WorldLocation__pf = params.bpp__WorldLocation__pf;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.GetDropVelocity
// (Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// int*                           bpp__Index__pf                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 bpp__WorldVelocity__pf         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMaster_WeaponComponent_C::GetDropVelocity(int* bpp__Index__pf, struct FVector* bpp__WorldVelocity__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.GetDropVelocity");

	UMaster_WeaponComponent_C_GetDropVelocity_Params params;
	params.bpp__Index__pf = bpp__Index__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bpp__WorldVelocity__pf != nullptr)
		*bpp__WorldVelocity__pf = params.bpp__WorldVelocity__pf;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.GetDropMesh
// (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// int*                           bpp__Index__pf                 (Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMesh*           bpp__SkelMesh__pf              (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UStaticMesh*             bpp__StaticMesh__pf            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMaster_WeaponComponent_C::GetDropMesh(int* bpp__Index__pf, class USkeletalMesh** bpp__SkelMesh__pf, class UStaticMesh** bpp__StaticMesh__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.GetDropMesh");

	UMaster_WeaponComponent_C_GetDropMesh_Params params;
	params.bpp__Index__pf = bpp__Index__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bpp__SkelMesh__pf != nullptr)
		*bpp__SkelMesh__pf = params.bpp__SkelMesh__pf;
	if (bpp__StaticMesh__pf != nullptr)
		*bpp__StaticMesh__pf = params.bpp__StaticMesh__pf;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Force Exit ADS Pose
// (Native, Public, BlueprintCallable)

void UMaster_WeaponComponent_C::Force_Exit_ADS_Pose()
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Force Exit ADS Pose");

	UMaster_WeaponComponent_C_Force_Exit_ADS_Pose_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Force ADS Scope
// (Native, Public, BlueprintCallable)

void UMaster_WeaponComponent_C::Force_ADS_Scope()
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Force ADS Scope");

	UMaster_WeaponComponent_C_Force_ADS_Scope_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.ForceRetrieveWeapon
// (Native, Event, Public, BlueprintCallable)

void UMaster_WeaponComponent_C::ForceRetrieveWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.ForceRetrieveWeapon");

	UMaster_WeaponComponent_C_ForceRetrieveWeapon_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.ForceHolsterWeapon
// (Native, Event, Public, BlueprintCallable)

void UMaster_WeaponComponent_C::ForceHolsterWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.ForceHolsterWeapon");

	UMaster_WeaponComponent_C_ForceHolsterWeapon_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Fixup Laser Sight
// (Native, Public, BlueprintCallable)
// Parameters:
// class USkinnableSkeletalMeshComponent** bpp__MeshComponent__pf         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UMaster_WeaponComponent_C::Fixup_Laser_Sight(class USkinnableSkeletalMeshComponent** bpp__MeshComponent__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Fixup Laser Sight");

	UMaster_WeaponComponent_C_Fixup_Laser_Sight_Params params;
	params.bpp__MeshComponent__pf = bpp__MeshComponent__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Fixup Attach Point
// (Native, Public, BlueprintCallable)

void UMaster_WeaponComponent_C::Fixup_Attach_Point()
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Fixup Attach Point");

	UMaster_WeaponComponent_C_Fixup_Attach_Point_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Fire Weapon
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FFullFireRepData*       bpp__Data__pf                  (Parm)
// bool*                          bpp__PlayNoChainFireMontage__pf (Parm, ZeroConstructor, IsPlainOldData)

void UMaster_WeaponComponent_C::Fire_Weapon(struct FFullFireRepData* bpp__Data__pf, bool* bpp__PlayNoChainFireMontage__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Fire Weapon");

	UMaster_WeaponComponent_C_Fire_Weapon_Params params;
	params.bpp__Data__pf = bpp__Data__pf;
	params.bpp__PlayNoChainFireMontage__pf = bpp__PlayNoChainFireMontage__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Fire Montage Jump To Section
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FString*                bpp__Section__pf__const        (Parm, ZeroConstructor)

void UMaster_WeaponComponent_C::Fire_Montage_Jump_To_Section(struct FString* bpp__Section__pf__const)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Fire Montage Jump To Section");

	UMaster_WeaponComponent_C_Fire_Montage_Jump_To_Section_Params params;
	params.bpp__Section__pf__const = bpp__Section__pf__const;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Filter Cosmetic Hit Results
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FHitResult>      bpp__TracexHitxResults__pfTT   (Parm, OutParm, ZeroConstructor)
// TArray<struct FHitResult>      bpp__FilteredxHitxResults__pfTT (Parm, OutParm, ZeroConstructor)

void UMaster_WeaponComponent_C::Filter_Cosmetic_Hit_Results(TArray<struct FHitResult>* bpp__TracexHitxResults__pfTT, TArray<struct FHitResult>* bpp__FilteredxHitxResults__pfTT)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Filter Cosmetic Hit Results");

	UMaster_WeaponComponent_C_Filter_Cosmetic_Hit_Results_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bpp__TracexHitxResults__pfTT != nullptr)
		*bpp__TracexHitxResults__pfTT = params.bpp__TracexHitxResults__pfTT;
	if (bpp__FilteredxHitxResults__pfTT != nullptr)
		*bpp__FilteredxHitxResults__pfTT = params.bpp__FilteredxHitxResults__pfTT;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.ExecuteUbergraph_Master_WeaponComponent_10
// (Final, Native, Public)
// Parameters:
// int*                           bpp__EntryPoint__pf            (Parm, ZeroConstructor, IsPlainOldData)

void UMaster_WeaponComponent_C::ExecuteUbergraph_Master_WeaponComponent_10(int* bpp__EntryPoint__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.ExecuteUbergraph_Master_WeaponComponent_10");

	UMaster_WeaponComponent_C_ExecuteUbergraph_Master_WeaponComponent_10_Params params;
	params.bpp__EntryPoint__pf = bpp__EntryPoint__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.ExecuteUbergraph_Master_WeaponComponent_7
// (Final, Native, Public)
// Parameters:
// int*                           bpp__EntryPoint__pf            (Parm, ZeroConstructor, IsPlainOldData)

void UMaster_WeaponComponent_C::ExecuteUbergraph_Master_WeaponComponent_7(int* bpp__EntryPoint__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.ExecuteUbergraph_Master_WeaponComponent_7");

	UMaster_WeaponComponent_C_ExecuteUbergraph_Master_WeaponComponent_7_Params params;
	params.bpp__EntryPoint__pf = bpp__EntryPoint__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.ExecuteUbergraph_Master_WeaponComponent_36
// (Final, Native, Public)
// Parameters:
// int*                           bpp__EntryPoint__pf            (Parm, ZeroConstructor, IsPlainOldData)

void UMaster_WeaponComponent_C::ExecuteUbergraph_Master_WeaponComponent_36(int* bpp__EntryPoint__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.ExecuteUbergraph_Master_WeaponComponent_36");

	UMaster_WeaponComponent_C_ExecuteUbergraph_Master_WeaponComponent_36_Params params;
	params.bpp__EntryPoint__pf = bpp__EntryPoint__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.ExecuteUbergraph_Master_WeaponComponent_35
// (Final, Native, Public)
// Parameters:
// int*                           bpp__EntryPoint__pf            (Parm, ZeroConstructor, IsPlainOldData)

void UMaster_WeaponComponent_C::ExecuteUbergraph_Master_WeaponComponent_35(int* bpp__EntryPoint__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.ExecuteUbergraph_Master_WeaponComponent_35");

	UMaster_WeaponComponent_C_ExecuteUbergraph_Master_WeaponComponent_35_Params params;
	params.bpp__EntryPoint__pf = bpp__EntryPoint__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.ExecuteUbergraph_Master_WeaponComponent_34
// (Final, Native, Public)
// Parameters:
// int*                           bpp__EntryPoint__pf            (Parm, ZeroConstructor, IsPlainOldData)

void UMaster_WeaponComponent_C::ExecuteUbergraph_Master_WeaponComponent_34(int* bpp__EntryPoint__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.ExecuteUbergraph_Master_WeaponComponent_34");

	UMaster_WeaponComponent_C_ExecuteUbergraph_Master_WeaponComponent_34_Params params;
	params.bpp__EntryPoint__pf = bpp__EntryPoint__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.ExecuteUbergraph_Master_WeaponComponent_30
// (Final, Native, Public)
// Parameters:
// int*                           bpp__EntryPoint__pf            (Parm, ZeroConstructor, IsPlainOldData)

void UMaster_WeaponComponent_C::ExecuteUbergraph_Master_WeaponComponent_30(int* bpp__EntryPoint__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.ExecuteUbergraph_Master_WeaponComponent_30");

	UMaster_WeaponComponent_C_ExecuteUbergraph_Master_WeaponComponent_30_Params params;
	params.bpp__EntryPoint__pf = bpp__EntryPoint__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Evaluate Revolver Chamber Rotate
// (Native, Public, BlueprintCallable)

void UMaster_WeaponComponent_C::Evaluate_Revolver_Chamber_Rotate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Evaluate Revolver Chamber Rotate");

	UMaster_WeaponComponent_C_Evaluate_Revolver_Chamber_Rotate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.End Reload Weapon
// (Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bpp__AbortxReloadxAnimation__pfTT (Parm, ZeroConstructor, IsPlainOldData)

void UMaster_WeaponComponent_C::End_Reload_Weapon(bool* bpp__AbortxReloadxAnimation__pfTT)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.End Reload Weapon");

	UMaster_WeaponComponent_C_End_Reload_Weapon_Params params;
	params.bpp__AbortxReloadxAnimation__pfTT = bpp__AbortxReloadxAnimation__pfTT;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.EnableOrAddCameraModifier
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UClass**                 bpp__Modifier__pf              (Parm, ZeroConstructor, IsPlainOldData)
// int*                           bpp__PlayerIndex__pf           (Parm, ZeroConstructor, IsPlainOldData)
// class UCameraModifier*         bpp__ModifierxObject__pfT      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMaster_WeaponComponent_C::EnableOrAddCameraModifier(class UClass** bpp__Modifier__pf, int* bpp__PlayerIndex__pf, class UCameraModifier** bpp__ModifierxObject__pfT)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.EnableOrAddCameraModifier");

	UMaster_WeaponComponent_C_EnableOrAddCameraModifier_Params params;
	params.bpp__Modifier__pf = bpp__Modifier__pf;
	params.bpp__PlayerIndex__pf = bpp__PlayerIndex__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bpp__ModifierxObject__pfT != nullptr)
		*bpp__ModifierxObject__pfT = params.bpp__ModifierxObject__pfT;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.DropMagInternal
// (Native, Public, BlueprintCallable)
// Parameters:
// int*                           bpp__Index__pf                 (Parm, ZeroConstructor, IsPlainOldData)

void UMaster_WeaponComponent_C::DropMagInternal(int* bpp__Index__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.DropMagInternal");

	UMaster_WeaponComponent_C_DropMagInternal_Params params;
	params.bpp__Index__pf = bpp__Index__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.DropMagazine
// (Native, Event, Public, BlueprintCallable)

void UMaster_WeaponComponent_C::DropMagazine()
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.DropMagazine");

	UMaster_WeaponComponent_C_DropMagazine_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.DetermineMagSize
// (Native, Public, BlueprintCallable)

void UMaster_WeaponComponent_C::DetermineMagSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.DetermineMagSize");

	UMaster_WeaponComponent_C_DetermineMagSize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Delay Spawn Tracers
// (Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// TArray<struct FHitResult>*     bpp__Hits__pf__const           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FVector*                bpp__TracexEnd__pfT__const     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UMaster_WeaponComponent_C::Delay_Spawn_Tracers(TArray<struct FHitResult>* bpp__Hits__pf__const, struct FVector* bpp__TracexEnd__pfT__const)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Delay Spawn Tracers");

	UMaster_WeaponComponent_C_Delay_Spawn_Tracers_Params params;
	params.bpp__Hits__pf__const = bpp__Hits__pf__const;
	params.bpp__TracexEnd__pfT__const = bpp__TracexEnd__pfT__const;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Delay Spawn Spangs
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FHitResult>      bpp__Hits__pf                  (Parm, OutParm, ZeroConstructor)

void UMaster_WeaponComponent_C::Delay_Spawn_Spangs(TArray<struct FHitResult>* bpp__Hits__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Delay Spawn Spangs");

	UMaster_WeaponComponent_C_Delay_Spawn_Spangs_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bpp__Hits__pf != nullptr)
		*bpp__Hits__pf = params.bpp__Hits__pf;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Delay Spawn Decals
// (Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// TArray<struct FHitResult>*     bpp__Hits__pf__const           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FVector*                bpp__Start__pf                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                bpp__End__pf                   (Parm, ZeroConstructor, IsPlainOldData)

void UMaster_WeaponComponent_C::Delay_Spawn_Decals(TArray<struct FHitResult>* bpp__Hits__pf__const, struct FVector* bpp__Start__pf, struct FVector* bpp__End__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Delay Spawn Decals");

	UMaster_WeaponComponent_C_Delay_Spawn_Decals_Params params;
	params.bpp__Hits__pf__const = bpp__Hits__pf__const;
	params.bpp__Start__pf = bpp__Start__pf;
	params.bpp__End__pf = bpp__End__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.CheckKillCamScope
// (Native, Public, BlueprintCallable)
// Parameters:
// class APawn**                  bpp__ViewPawn__pf              (Parm, ZeroConstructor, IsPlainOldData)

void UMaster_WeaponComponent_C::CheckKillCamScope(class APawn** bpp__ViewPawn__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.CheckKillCamScope");

	UMaster_WeaponComponent_C_CheckKillCamScope_Params params;
	params.bpp__ViewPawn__pf = bpp__ViewPawn__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Character Combat State Changed
// (Native, Public, BlueprintCallable)
// Parameters:
// ECombatState*                  bpp__OldCombatState__pf        (Parm, ZeroConstructor, IsPlainOldData)
// ECombatState*                  bpp__NewCombatState__pf        (Parm, ZeroConstructor, IsPlainOldData)

void UMaster_WeaponComponent_C::Character_Combat_State_Changed(ECombatState* bpp__OldCombatState__pf, ECombatState* bpp__NewCombatState__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Character Combat State Changed");

	UMaster_WeaponComponent_C_Character_Combat_State_Changed_Params params;
	params.bpp__OldCombatState__pf = bpp__OldCombatState__pf;
	params.bpp__NewCombatState__pf = bpp__NewCombatState__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Can Spawn Tracer Now
// (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           bpp__CanxSpawnxxTracer__pfTTT  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMaster_WeaponComponent_C::Can_Spawn_Tracer_Now(bool* bpp__CanxSpawnxxTracer__pfTTT)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Can Spawn Tracer Now");

	UMaster_WeaponComponent_C_Can_Spawn_Tracer_Now_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bpp__CanxSpawnxxTracer__pfTTT != nullptr)
		*bpp__CanxSpawnxxTracer__pfTTT = params.bpp__CanxSpawnxxTracer__pfTTT;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.CancelReloadCosmetic
// (BlueprintCosmetic, Native, Event, Public, BlueprintCallable)

void UMaster_WeaponComponent_C::CancelReloadCosmetic()
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.CancelReloadCosmetic");

	UMaster_WeaponComponent_C_CancelReloadCosmetic_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Calculate Reload Time
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UAnimMontage**           bpp__ReloadxMontage__pfT       (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimMontage**           bpp__QuickxReloadxMontage__pfTT (Parm, ZeroConstructor, IsPlainOldData)
// float                          bpp__PlayRate__pf              (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UAnimMontage*            bpp__SelectedxMontage__pfT     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bpp__IsxQuickReload__pfT       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMaster_WeaponComponent_C::Calculate_Reload_Time(class UAnimMontage** bpp__ReloadxMontage__pfT, class UAnimMontage** bpp__QuickxReloadxMontage__pfTT, float* bpp__PlayRate__pf, class UAnimMontage** bpp__SelectedxMontage__pfT, bool* bpp__IsxQuickReload__pfT)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Calculate Reload Time");

	UMaster_WeaponComponent_C_Calculate_Reload_Time_Params params;
	params.bpp__ReloadxMontage__pfT = bpp__ReloadxMontage__pfT;
	params.bpp__QuickxReloadxMontage__pfTT = bpp__QuickxReloadxMontage__pfTT;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bpp__PlayRate__pf != nullptr)
		*bpp__PlayRate__pf = params.bpp__PlayRate__pf;
	if (bpp__SelectedxMontage__pfT != nullptr)
		*bpp__SelectedxMontage__pfT = params.bpp__SelectedxMontage__pfT;
	if (bpp__IsxQuickReload__pfT != nullptr)
		*bpp__IsxQuickReload__pfT = params.bpp__IsxQuickReload__pfT;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Calculate Multistage Reload Time
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UAnimMontage**           bpp__ReloadxMontage__pfT       (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimMontage**           bpp__QuickxReloadxMontage__pfTT (Parm, ZeroConstructor, IsPlainOldData)
// float                          bpp__PlayRate__pf              (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UAnimMontage*            bpp__SelectedxMontage__pfT     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bpp__IsxQuickReload__pfT       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMaster_WeaponComponent_C::Calculate_Multistage_Reload_Time(class UAnimMontage** bpp__ReloadxMontage__pfT, class UAnimMontage** bpp__QuickxReloadxMontage__pfTT, float* bpp__PlayRate__pf, class UAnimMontage** bpp__SelectedxMontage__pfT, bool* bpp__IsxQuickReload__pfT)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Calculate Multistage Reload Time");

	UMaster_WeaponComponent_C_Calculate_Multistage_Reload_Time_Params params;
	params.bpp__ReloadxMontage__pfT = bpp__ReloadxMontage__pfT;
	params.bpp__QuickxReloadxMontage__pfTT = bpp__QuickxReloadxMontage__pfTT;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bpp__PlayRate__pf != nullptr)
		*bpp__PlayRate__pf = params.bpp__PlayRate__pf;
	if (bpp__SelectedxMontage__pfT != nullptr)
		*bpp__SelectedxMontage__pfT = params.bpp__SelectedxMontage__pfT;
	if (bpp__IsxQuickReload__pfT != nullptr)
		*bpp__IsxQuickReload__pfT = params.bpp__IsxQuickReload__pfT;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.BuildupWeapon
// (Native, Public, BlueprintCallable)

void UMaster_WeaponComponent_C::BuildupWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.BuildupWeapon");

	UMaster_WeaponComponent_C_BuildupWeapon_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.BlueprintPrepareKillCamPlayback
// (Native, Event, Public)

void UMaster_WeaponComponent_C::BlueprintPrepareKillCamPlayback()
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.BlueprintPrepareKillCamPlayback");

	UMaster_WeaponComponent_C_BlueprintPrepareKillCamPlayback_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.BlueprintPersistentCosmeticsUpdate
// (Native, Event, Public)

void UMaster_WeaponComponent_C::BlueprintPersistentCosmeticsUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.BlueprintPersistentCosmeticsUpdate");

	UMaster_WeaponComponent_C_BlueprintPersistentCosmeticsUpdate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.AudioOnCooldown
// (Native, Public, BlueprintCallable)

void UMaster_WeaponComponent_C::AudioOnCooldown()
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.AudioOnCooldown");

	UMaster_WeaponComponent_C_AudioOnCooldown_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Attach Weapon To Active Socket
// (Native, Public, BlueprintCallable)

void UMaster_WeaponComponent_C::Attach_Weapon_To_Active_Socket()
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Attach Weapon To Active Socket");

	UMaster_WeaponComponent_C_Attach_Weapon_To_Active_Socket_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Attach Weapon Holster Socket
// (Native, Public, BlueprintCallable)

void UMaster_WeaponComponent_C::Attach_Weapon_Holster_Socket()
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Attach Weapon Holster Socket");

	UMaster_WeaponComponent_C_Attach_Weapon_Holster_Socket_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.AsyncComputeCosmeticHitsAndPlay
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FFullFireRepData*       bpp__FirexData__pfT__const     (ConstParm, Parm)

void UMaster_WeaponComponent_C::AsyncComputeCosmeticHitsAndPlay(struct FFullFireRepData* bpp__FirexData__pfT__const)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.AsyncComputeCosmeticHitsAndPlay");

	UMaster_WeaponComponent_C_AsyncComputeCosmeticHitsAndPlay_Params params;
	params.bpp__FirexData__pfT__const = bpp__FirexData__pfT__const;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Apply Spang From Hit Result
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FHitResult*             bpp__Hit__pf                   (Parm, IsPlainOldData)

void UMaster_WeaponComponent_C::Apply_Spang_From_Hit_Result(struct FHitResult* bpp__Hit__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Apply Spang From Hit Result");

	UMaster_WeaponComponent_C_Apply_Spang_From_Hit_Result_Params params;
	params.bpp__Hit__pf = bpp__Hit__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.ApplyDecalFromHit
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FHitResult*             bpp__Hit__pf                   (Parm, IsPlainOldData)

void UMaster_WeaponComponent_C::ApplyDecalFromHit(struct FHitResult* bpp__Hit__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.ApplyDecalFromHit");

	UMaster_WeaponComponent_C_ApplyDecalFromHit_Params params;
	params.bpp__Hit__pf = bpp__Hit__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Anim Init On Weapon Mesh
// (Native, Public, BlueprintCallable)
// Parameters:
// class USkinnableSkeletalMeshComponent** bpp__SkelComp__pf              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UAnimInstance**          bpp__AnimInstance__pf          (Parm, ZeroConstructor, IsPlainOldData)

void UMaster_WeaponComponent_C::Anim_Init_On_Weapon_Mesh(class USkinnableSkeletalMeshComponent** bpp__SkelComp__pf, class UAnimInstance** bpp__AnimInstance__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Anim Init On Weapon Mesh");

	UMaster_WeaponComponent_C_Anim_Init_On_Weapon_Mesh_Params params;
	params.bpp__SkelComp__pf = bpp__SkelComp__pf;
	params.bpp__AnimInstance__pf = bpp__AnimInstance__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Ancillary Mesh Scale Set
// (Native, Public, BlueprintCallable)

void UMaster_WeaponComponent_C::Ancillary_Mesh_Scale_Set()
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Ancillary Mesh Scale Set");

	UMaster_WeaponComponent_C_Ancillary_Mesh_Scale_Set_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.After Spawn Tracers Delay
// (Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// bool*                          bpp__bBlockingHit__pf          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FHitResult>*     bpp__OutHits__pf__const        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FVector*                bpp__Start__pf__const          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector*                bpp__End__pf__const            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UMaster_WeaponComponent_C::After_Spawn_Tracers_Delay(bool* bpp__bBlockingHit__pf, TArray<struct FHitResult>* bpp__OutHits__pf__const, struct FVector* bpp__Start__pf__const, struct FVector* bpp__End__pf__const)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.After Spawn Tracers Delay");

	UMaster_WeaponComponent_C_After_Spawn_Tracers_Delay_Params params;
	params.bpp__bBlockingHit__pf = bpp__bBlockingHit__pf;
	params.bpp__OutHits__pf__const = bpp__OutHits__pf__const;
	params.bpp__Start__pf__const = bpp__Start__pf__const;
	params.bpp__End__pf__const = bpp__End__pf__const;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.After Spawn Spangs Delay
// (Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// bool*                          bpp__bBlockingHit__pf          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FHitResult>*     bpp__OutHits__pf__const        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FVector*                bpp__Start__pf__const          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector*                bpp__End__pf__const            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UMaster_WeaponComponent_C::After_Spawn_Spangs_Delay(bool* bpp__bBlockingHit__pf, TArray<struct FHitResult>* bpp__OutHits__pf__const, struct FVector* bpp__Start__pf__const, struct FVector* bpp__End__pf__const)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.After Spawn Spangs Delay");

	UMaster_WeaponComponent_C_After_Spawn_Spangs_Delay_Params params;
	params.bpp__bBlockingHit__pf = bpp__bBlockingHit__pf;
	params.bpp__OutHits__pf__const = bpp__OutHits__pf__const;
	params.bpp__Start__pf__const = bpp__Start__pf__const;
	params.bpp__End__pf__const = bpp__End__pf__const;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.After Spawn Decals Delay
// (Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// bool*                          bpp__bBlockingHit__pf          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FHitResult>*     bpp__OutHits__pf__const        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FVector*                bpp__Start__pf__const          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector*                bpp__End__pf__const            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UMaster_WeaponComponent_C::After_Spawn_Decals_Delay(bool* bpp__bBlockingHit__pf, TArray<struct FHitResult>* bpp__OutHits__pf__const, struct FVector* bpp__Start__pf__const, struct FVector* bpp__End__pf__const)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.After Spawn Decals Delay");

	UMaster_WeaponComponent_C_After_Spawn_Decals_Delay_Params params;
	params.bpp__bBlockingHit__pf = bpp__bBlockingHit__pf;
	params.bpp__OutHits__pf__const = bpp__OutHits__pf__const;
	params.bpp__Start__pf__const = bpp__Start__pf__const;
	params.bpp__End__pf__const = bpp__End__pf__const;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction Master_WeaponComponent.Master_WeaponComponent_C.OnWeaponComponentStateChanged__DelegateSignature
// (Public, Delegate)
// Parameters:
// class UKSWeaponComponent**     bpp__WeaponComponent__pf       (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// EWeaponStateNew*               bpp__OldState__pf              (Parm, ZeroConstructor, IsPlainOldData)
// EWeaponStateNew*               bpp__NewState__pf              (Parm, ZeroConstructor, IsPlainOldData)

void UMaster_WeaponComponent_C::OnWeaponComponentStateChanged__DelegateSignature(class UKSWeaponComponent** bpp__WeaponComponent__pf, EWeaponStateNew* bpp__OldState__pf, EWeaponStateNew* bpp__NewState__pf)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction Master_WeaponComponent.Master_WeaponComponent_C.OnWeaponComponentStateChanged__DelegateSignature");

	UMaster_WeaponComponent_C_OnWeaponComponentStateChanged__DelegateSignature_Params params;
	params.bpp__WeaponComponent__pf = bpp__WeaponComponent__pf;
	params.bpp__OldState__pf = bpp__OldState__pf;
	params.bpp__NewState__pf = bpp__NewState__pf;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction Master_WeaponComponent.Master_WeaponComponent_C.OnPossessedBy__DelegateSignature
// (Public, Delegate)
// Parameters:
// class AController**            bpp__NewController__pf         (Parm, ZeroConstructor, IsPlainOldData)

void UMaster_WeaponComponent_C::OnPossessedBy__DelegateSignature(class AController** bpp__NewController__pf)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction Master_WeaponComponent.Master_WeaponComponent_C.OnPossessedBy__DelegateSignature");

	UMaster_WeaponComponent_C_OnPossessedBy__DelegateSignature_Params params;
	params.bpp__NewController__pf = bpp__NewController__pf;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction Master_WeaponComponent.Master_WeaponComponent_C.OnKilled__DelegateSignature
// (Public, Delegate)
// Parameters:
// class AKSCharacterBase**       bpp__KillerCharacter__pf       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AKSCharacterBase**       bpp__KilledCharacter__pf       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UMaster_WeaponComponent_C::OnKilled__DelegateSignature(class AKSCharacterBase** bpp__KillerCharacter__pf, class AKSCharacterBase** bpp__KilledCharacter__pf)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction Master_WeaponComponent.Master_WeaponComponent_C.OnKilled__DelegateSignature");

	UMaster_WeaponComponent_C_OnKilled__DelegateSignature_Params params;
	params.bpp__KillerCharacter__pf = bpp__KillerCharacter__pf;
	params.bpp__KilledCharacter__pf = bpp__KilledCharacter__pf;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction Master_WeaponComponent.Master_WeaponComponent_C.OnCombatStateChanged__DelegateSignature
// (Public, Delegate)
// Parameters:
// ECombatState*                  bpp__OldCombatState__pf        (Parm, ZeroConstructor, IsPlainOldData)
// ECombatState*                  bpp__NewCombatState__pf        (Parm, ZeroConstructor, IsPlainOldData)

void UMaster_WeaponComponent_C::OnCombatStateChanged__DelegateSignature(ECombatState* bpp__OldCombatState__pf, ECombatState* bpp__NewCombatState__pf)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction Master_WeaponComponent.Master_WeaponComponent_C.OnCombatStateChanged__DelegateSignature");

	UMaster_WeaponComponent_C_OnCombatStateChanged__DelegateSignature_Params params;
	params.bpp__OldCombatState__pf = bpp__OldCombatState__pf;
	params.bpp__NewCombatState__pf = bpp__NewCombatState__pf;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction Master_WeaponComponent.Master_WeaponComponent_C.OnAnimInitializedOnSkinnableMesh__DelegateSignature
// (Public, Delegate)
// Parameters:
// class USkinnableSkeletalMeshComponent** bpp__SkinnableSkelComp__pf     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UAnimInstance**          bpp__AnimInstance__pf          (Parm, ZeroConstructor, IsPlainOldData)

void UMaster_WeaponComponent_C::OnAnimInitializedOnSkinnableMesh__DelegateSignature(class USkinnableSkeletalMeshComponent** bpp__SkinnableSkelComp__pf, class UAnimInstance** bpp__AnimInstance__pf)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction Master_WeaponComponent.Master_WeaponComponent_C.OnAnimInitializedOnSkinnableMesh__DelegateSignature");

	UMaster_WeaponComponent_C_OnAnimInitializedOnSkinnableMesh__DelegateSignature_Params params;
	params.bpp__SkinnableSkelComp__pf = bpp__SkinnableSkelComp__pf;
	params.bpp__AnimInstance__pf = bpp__AnimInstance__pf;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction Master_WeaponComponent.Master_WeaponComponent_C.OnAnimInitialized__DelegateSignature
// (Public, Delegate)

void UMaster_WeaponComponent_C::OnAnimInitialized__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction Master_WeaponComponent.Master_WeaponComponent_C.OnAnimInitialized__DelegateSignature");

	UMaster_WeaponComponent_C_OnAnimInitialized__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

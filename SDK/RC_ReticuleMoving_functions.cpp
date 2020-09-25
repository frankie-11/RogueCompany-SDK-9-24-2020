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

// Function ReticuleMoving.ReticuleMoving_C.ResetADS
// (Public, BlueprintCallable, BlueprintEvent)

void UReticuleMoving_C::ResetADS()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReticuleMoving.ReticuleMoving_C.ResetADS");

	UReticuleMoving_C_ResetADS_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReticuleMoving.ReticuleMoving_C.UpdateBlockedShotDisplay
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsVisible                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D*              Translation                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D*              IconScale                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UReticuleMoving_C::UpdateBlockedShotDisplay(bool* IsVisible, struct FVector2D* Translation, struct FVector2D* IconScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReticuleMoving.ReticuleMoving_C.UpdateBlockedShotDisplay");

	UReticuleMoving_C_UpdateBlockedShotDisplay_Params params;
	params.IsVisible = IsVisible;
	params.Translation = Translation;
	params.IconScale = IconScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReticuleMoving.ReticuleMoving_C.UpdateVisibility
// (Public, BlueprintCallable, BlueprintEvent)

void UReticuleMoving_C::UpdateVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReticuleMoving.ReticuleMoving_C.UpdateVisibility");

	UReticuleMoving_C_UpdateVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReticuleMoving.ReticuleMoving_C.UnBindReticleAmmoGauge
// (Public, BlueprintCallable, BlueprintEvent)

void UReticuleMoving_C::UnBindReticleAmmoGauge()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReticuleMoving.ReticuleMoving_C.UnBindReticleAmmoGauge");

	UReticuleMoving_C_UnBindReticleAmmoGauge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReticuleMoving.ReticuleMoving_C.HandleShotgunElimination
// (Public, BlueprintCallable, BlueprintEvent)

void UReticuleMoving_C::HandleShotgunElimination()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReticuleMoving.ReticuleMoving_C.HandleShotgunElimination");

	UReticuleMoving_C_HandleShotgunElimination_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReticuleMoving.ReticuleMoving_C.ProcessShotgunHitDisplay
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FShotgunHitData*        InShotgunHitData               (BlueprintVisible, BlueprintReadOnly, Parm)

void UReticuleMoving_C::ProcessShotgunHitDisplay(struct FShotgunHitData* InShotgunHitData)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReticuleMoving.ReticuleMoving_C.ProcessShotgunHitDisplay");

	UReticuleMoving_C_ProcessShotgunHitDisplay_Params params;
	params.InShotgunHitData = InShotgunHitData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReticuleMoving.ReticuleMoving_C.UnbindShotgunNotify
// (Public, BlueprintCallable, BlueprintEvent)

void UReticuleMoving_C::UnbindShotgunNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReticuleMoving.ReticuleMoving_C.UnbindShotgunNotify");

	UReticuleMoving_C_UnbindShotgunNotify_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReticuleMoving.ReticuleMoving_C.BindToShotgunNotify
// (Public, BlueprintCallable, BlueprintEvent)

void UReticuleMoving_C::BindToShotgunNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReticuleMoving.ReticuleMoving_C.BindToShotgunNotify");

	UReticuleMoving_C_BindToShotgunNotify_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReticuleMoving.ReticuleMoving_C.IsShotgunReticleType
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UReticleBase_C*          Reticle                        (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UReticuleMoving_C::IsShotgunReticleType(bool* Return, class UReticleBase_C** Reticle)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReticuleMoving.ReticuleMoving_C.IsShotgunReticleType");

	UReticuleMoving_C_IsShotgunReticleType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;
	if (Reticle != nullptr)
		*Reticle = params.Reticle;
}


// Function ReticuleMoving.ReticuleMoving_C.BindReticleAmmoGauge
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UReticuleMoving_C::BindReticleAmmoGauge()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReticuleMoving.ReticuleMoving_C.BindReticleAmmoGauge");

	UReticuleMoving_C_BindReticleAmmoGauge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReticuleMoving.ReticuleMoving_C.CheckShotgunReload
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsShotgunReload                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UReticuleMoving_C::CheckShotgunReload(bool* IsShotgunReload)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReticuleMoving.ReticuleMoving_C.CheckShotgunReload");

	UReticuleMoving_C_CheckShotgunReload_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsShotgunReload != nullptr)
		*IsShotgunReload = params.IsShotgunReload;
}


// Function ReticuleMoving.ReticuleMoving_C.GetActiveReticle
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UReticleBase_C*          Reticle                        (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UReticuleMoving_C::GetActiveReticle(class UReticleBase_C** Reticle)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReticuleMoving.ReticuleMoving_C.GetActiveReticle");

	UReticuleMoving_C_GetActiveReticle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Reticle != nullptr)
		*Reticle = params.Reticle;
}


// Function ReticuleMoving.ReticuleMoving_C.SetActiveReticle
// (Public, BlueprintCallable, BlueprintEvent)

void UReticuleMoving_C::SetActiveReticle()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReticuleMoving.ReticuleMoving_C.SetActiveReticle");

	UReticuleMoving_C_SetActiveReticle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReticuleMoving.ReticuleMoving_C.InitializeTickAnimations
// (Event, Protected, BlueprintEvent)

void UReticuleMoving_C::InitializeTickAnimations()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReticuleMoving.ReticuleMoving_C.InitializeTickAnimations");

	UReticuleMoving_C_InitializeTickAnimations_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReticuleMoving.ReticuleMoving_C.HandleBlockedShotLerpUpdate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         ElapsedTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         ElapsedAlpha                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UReticuleMoving_C::HandleBlockedShotLerpUpdate(float* ElapsedTime, float* ElapsedAlpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReticuleMoving.ReticuleMoving_C.HandleBlockedShotLerpUpdate");

	UReticuleMoving_C_HandleBlockedShotLerpUpdate_Params params;
	params.ElapsedTime = ElapsedTime;
	params.ElapsedAlpha = ElapsedAlpha;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReticuleMoving.ReticuleMoving_C.HandleBlockedShotLerpFinished
// (BlueprintCallable, BlueprintEvent)

void UReticuleMoving_C::HandleBlockedShotLerpFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReticuleMoving.ReticuleMoving_C.HandleBlockedShotLerpFinished");

	UReticuleMoving_C_HandleBlockedShotLerpFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReticuleMoving.ReticuleMoving_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UReticuleMoving_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReticuleMoving.ReticuleMoving_C.Construct");

	UReticuleMoving_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReticuleMoving.ReticuleMoving_C.AimStateChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EKSCharacterAimMode*           NewAimMode                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UReticuleMoving_C::AimStateChange(EKSCharacterAimMode* NewAimMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReticuleMoving.ReticuleMoving_C.AimStateChange");

	UReticuleMoving_C_AimStateChange_Params params;
	params.NewAimMode = NewAimMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReticuleMoving.ReticuleMoving_C.Kill
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCombatEventInfo*       Victim                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UReticuleMoving_C::Kill(struct FCombatEventInfo* Victim)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReticuleMoving.ReticuleMoving_C.Kill");

	UReticuleMoving_C_Kill_Params params;
	params.Victim = Victim;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReticuleMoving.ReticuleMoving_C.OnInstigatedDamage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         DamageAmount                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsHeadshot                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsDown                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsLethal                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 DamageTypeClass                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Damage_Resisted                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UReticuleMoving_C::OnInstigatedDamage(float* DamageAmount, bool* IsHeadshot, bool* IsDown, bool* IsLethal, class UClass** DamageTypeClass, class AActor** Target, class AActor** DamageCauser, bool* Damage_Resisted)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReticuleMoving.ReticuleMoving_C.OnInstigatedDamage");

	UReticuleMoving_C_OnInstigatedDamage_Params params;
	params.DamageAmount = DamageAmount;
	params.IsHeadshot = IsHeadshot;
	params.IsDown = IsDown;
	params.IsLethal = IsLethal;
	params.DamageTypeClass = DamageTypeClass;
	params.Target = Target;
	params.DamageCauser = DamageCauser;
	params.Damage_Resisted = Damage_Resisted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReticuleMoving.ReticuleMoving_C.UpdateReticleOffset
// (Event, Protected, BlueprintEvent)
// Parameters:
// float*                         OffsetFromCenterScreen         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UReticuleMoving_C::UpdateReticleOffset(float* OffsetFromCenterScreen)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReticuleMoving.ReticuleMoving_C.UpdateReticleOffset");

	UReticuleMoving_C_UpdateReticleOffset_Params params;
	params.OffsetFromCenterScreen = OffsetFromCenterScreen;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReticuleMoving.ReticuleMoving_C.UpdateBlockedShotIcon
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          IconVisible                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D*              Translation                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D*              IconScale                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UReticuleMoving_C::UpdateBlockedShotIcon(bool* IconVisible, struct FVector2D* Translation, struct FVector2D* IconScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReticuleMoving.ReticuleMoving_C.UpdateBlockedShotIcon");

	UReticuleMoving_C_UpdateBlockedShotIcon_Params params;
	params.IconVisible = IconVisible;
	params.Translation = Translation;
	params.IconScale = IconScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReticuleMoving.ReticuleMoving_C.PostSetActiveWeaponComponent
// (Event, Protected, BlueprintEvent)

void UReticuleMoving_C::PostSetActiveWeaponComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReticuleMoving.ReticuleMoving_C.PostSetActiveWeaponComponent");

	UReticuleMoving_C_PostSetActiveWeaponComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReticuleMoving.ReticuleMoving_C.PreClearActiveWeaponComponent
// (Event, Protected, BlueprintEvent)

void UReticuleMoving_C::PreClearActiveWeaponComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReticuleMoving.ReticuleMoving_C.PreClearActiveWeaponComponent");

	UReticuleMoving_C_PreClearActiveWeaponComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReticuleMoving.ReticuleMoving_C.HandleOnKillCamViewProjectile
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSProjectile**          ViewProjectile                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UReticuleMoving_C::HandleOnKillCamViewProjectile(class AKSProjectile** ViewProjectile)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReticuleMoving.ReticuleMoving_C.HandleOnKillCamViewProjectile");

	UReticuleMoving_C_HandleOnKillCamViewProjectile_Params params;
	params.ViewProjectile = ViewProjectile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReticuleMoving.ReticuleMoving_C.HandleKillCamEnabled
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bEnabled                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UReticuleMoving_C::HandleKillCamEnabled(bool* bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReticuleMoving.ReticuleMoving_C.HandleKillCamEnabled");

	UReticuleMoving_C_HandleKillCamEnabled_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReticuleMoving.ReticuleMoving_C.PreClearPawn
// (Event, Protected, BlueprintEvent)

void UReticuleMoving_C::PreClearPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReticuleMoving.ReticuleMoving_C.PreClearPawn");

	UReticuleMoving_C_PreClearPawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReticuleMoving.ReticuleMoving_C.ViewedPawnInstigatedDamageNotify
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FCombatEventInfo*       DamageInfo                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UReticuleMoving_C::ViewedPawnInstigatedDamageNotify(struct FCombatEventInfo* DamageInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReticuleMoving.ReticuleMoving_C.ViewedPawnInstigatedDamageNotify");

	UReticuleMoving_C_ViewedPawnInstigatedDamageNotify_Params params;
	params.DamageInfo = DamageInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReticuleMoving.ReticuleMoving_C.OnPlayerKilled
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSCharacterBase**       KillerCharacter                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AKSCharacterBase**       KilledCharacter                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UReticuleMoving_C::OnPlayerKilled(class AKSCharacterBase** KillerCharacter, class AKSCharacterBase** KilledCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReticuleMoving.ReticuleMoving_C.OnPlayerKilled");

	UReticuleMoving_C_OnPlayerKilled_Params params;
	params.KillerCharacter = KillerCharacter;
	params.KilledCharacter = KilledCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReticuleMoving.ReticuleMoving_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UReticuleMoving_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReticuleMoving.ReticuleMoving_C.Tick");

	UReticuleMoving_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReticuleMoving.ReticuleMoving_C.HandleReload (New)
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UKSWeaponComponent**     WeaponComponent                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// EWeaponStateNew*               OldState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EWeaponStateNew*               NewState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UReticuleMoving_C::HandleReload__New_(class UKSWeaponComponent** WeaponComponent, EWeaponStateNew* OldState, EWeaponStateNew* NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReticuleMoving.ReticuleMoving_C.HandleReload (New)");

	UReticuleMoving_C_HandleReload__New__Params params;
	params.WeaponComponent = WeaponComponent;
	params.OldState = OldState;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReticuleMoving.ReticuleMoving_C.GrenadeStateChange (New)
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UKSWeaponComponent**     Weapon                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// EWeaponStateNew*               Old_State                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EWeaponStateNew*               New_State                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UReticuleMoving_C::GrenadeStateChange__New_(class UKSWeaponComponent** Weapon, EWeaponStateNew* Old_State, EWeaponStateNew* New_State)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReticuleMoving.ReticuleMoving_C.GrenadeStateChange (New)");

	UReticuleMoving_C_GrenadeStateChange__New__Params params;
	params.Weapon = Weapon;
	params.Old_State = Old_State;
	params.New_State = New_State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReticuleMoving.ReticuleMoving_C.HandleShotgunNotify
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSCharacter**           KSCharacter                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FShotgunHitData*        InShotgunHitData               (BlueprintVisible, BlueprintReadOnly, Parm)

void UReticuleMoving_C::HandleShotgunNotify(class AKSCharacter** KSCharacter, struct FShotgunHitData* InShotgunHitData)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReticuleMoving.ReticuleMoving_C.HandleShotgunNotify");

	UReticuleMoving_C_HandleShotgunNotify_Params params;
	params.KSCharacter = KSCharacter;
	params.InShotgunHitData = InShotgunHitData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReticuleMoving.ReticuleMoving_C.PostSetPawn
// (Event, Protected, BlueprintEvent)

void UReticuleMoving_C::PostSetPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReticuleMoving.ReticuleMoving_C.PostSetPawn");

	UReticuleMoving_C_PostSetPawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReticuleMoving.ReticuleMoving_C.PostSetPlayerState
// (Event, Protected, BlueprintEvent)

void UReticuleMoving_C::PostSetPlayerState()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReticuleMoving.ReticuleMoving_C.PostSetPlayerState");

	UReticuleMoving_C_PostSetPlayerState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReticuleMoving.ReticuleMoving_C.PreClearPlayerState
// (Event, Protected, BlueprintEvent)

void UReticuleMoving_C::PreClearPlayerState()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReticuleMoving.ReticuleMoving_C.PreClearPlayerState");

	UReticuleMoving_C_PreClearPlayerState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReticuleMoving.ReticuleMoving_C.Handle Player Down or Elim Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSPlayerState**         PlayerState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UReticuleMoving_C::Handle_Player_Down_or_Elim_Changed(class AKSPlayerState** PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReticuleMoving.ReticuleMoving_C.Handle Player Down or Elim Changed");

	UReticuleMoving_C_Handle_Player_Down_or_Elim_Changed_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReticuleMoving.ReticuleMoving_C.HandleEmoteStoppedPlaying
// (BlueprintCallable, BlueprintEvent)

void UReticuleMoving_C::HandleEmoteStoppedPlaying()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReticuleMoving.ReticuleMoving_C.HandleEmoteStoppedPlaying");

	UReticuleMoving_C_HandleEmoteStoppedPlaying_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReticuleMoving.ReticuleMoving_C.HandleOnEmoteStartedPlaying
// (BlueprintCallable, BlueprintEvent)

void UReticuleMoving_C::HandleOnEmoteStartedPlaying()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReticuleMoving.ReticuleMoving_C.HandleOnEmoteStartedPlaying");

	UReticuleMoving_C_HandleOnEmoteStartedPlaying_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReticuleMoving.ReticuleMoving_C.HandleDeathStateChange
// (BlueprintCallable, BlueprintEvent)

void UReticuleMoving_C::HandleDeathStateChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReticuleMoving.ReticuleMoving_C.HandleDeathStateChange");

	UReticuleMoving_C_HandleDeathStateChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReticuleMoving.ReticuleMoving_C.HandleCrosshairHidden
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSCharacter**           Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Hidden                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UReticuleMoving_C::HandleCrosshairHidden(class AKSCharacter** Character, bool* Hidden)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReticuleMoving.ReticuleMoving_C.HandleCrosshairHidden");

	UReticuleMoving_C_HandleCrosshairHidden_Params params;
	params.Character = Character;
	params.Hidden = Hidden;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReticuleMoving.ReticuleMoving_C.Handle Out Of Bounds End
// (BlueprintCallable, BlueprintEvent)

void UReticuleMoving_C::Handle_Out_Of_Bounds_End()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReticuleMoving.ReticuleMoving_C.Handle Out Of Bounds End");

	UReticuleMoving_C_Handle_Out_Of_Bounds_End_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReticuleMoving.ReticuleMoving_C.Handle Out Of Bounds Begin
// (BlueprintCallable, BlueprintEvent)

void UReticuleMoving_C::Handle_Out_Of_Bounds_Begin()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReticuleMoving.ReticuleMoving_C.Handle Out Of Bounds Begin");

	UReticuleMoving_C_Handle_Out_Of_Bounds_Begin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReticuleMoving.ReticuleMoving_C.ExecuteUbergraph_ReticuleMoving
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UReticuleMoving_C::ExecuteUbergraph_ReticuleMoving(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReticuleMoving.ReticuleMoving_C.ExecuteUbergraph_ReticuleMoving");

	UReticuleMoving_C_ExecuteUbergraph_ReticuleMoving_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

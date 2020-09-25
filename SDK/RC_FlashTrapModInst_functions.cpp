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

// Function FlashTrapModInst.FlashTrapModInst_C.CanActivateNow
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// EKSAbilityUsageFailureType     OutAbilityFailureType          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UFlashTrapModInst_C::CanActivateNow(EKSAbilityUsageFailureType* OutAbilityFailureType)
{
	static auto fn = UObject::FindObject<UFunction>("Function FlashTrapModInst.FlashTrapModInst_C.CanActivateNow");

	UFlashTrapModInst_C_CanActivateNow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutAbilityFailureType != nullptr)
		*OutAbilityFailureType = params.OutAbilityFailureType;

	return params.ReturnValue;
}


// Function FlashTrapModInst.FlashTrapModInst_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UFlashTrapModInst_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function FlashTrapModInst.FlashTrapModInst_C.ReceiveBeginPlay");

	UFlashTrapModInst_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FlashTrapModInst.FlashTrapModInst_C.OnNewGivenItem
// (Event, Protected, BlueprintEvent)

void UFlashTrapModInst_C::OnNewGivenItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function FlashTrapModInst.FlashTrapModInst_C.OnNewGivenItem");

	UFlashTrapModInst_C_OnNewGivenItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FlashTrapModInst.FlashTrapModInst_C.OnWeaponStateChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AKSWeapon**              Weapon                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EWeaponStateNew*               OldState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EWeaponStateNew*               NewState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFlashTrapModInst_C::OnWeaponStateChanged(class AKSWeapon** Weapon, EWeaponStateNew* OldState, EWeaponStateNew* NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function FlashTrapModInst.FlashTrapModInst_C.OnWeaponStateChanged");

	UFlashTrapModInst_C_OnWeaponStateChanged_Params params;
	params.Weapon = Weapon;
	params.OldState = OldState;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FlashTrapModInst.FlashTrapModInst_C.BeginActivation
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UFlashTrapModInst_C::BeginActivation()
{
	static auto fn = UObject::FindObject<UFunction>("Function FlashTrapModInst.FlashTrapModInst_C.BeginActivation");

	UFlashTrapModInst_C_BeginActivation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FlashTrapModInst.FlashTrapModInst_C.OnGrenadeSpawned
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSProjectile_Grenade**  Grenade                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFlashTrapModInst_C::OnGrenadeSpawned(class AKSProjectile_Grenade** Grenade)
{
	static auto fn = UObject::FindObject<UFunction>("Function FlashTrapModInst.FlashTrapModInst_C.OnGrenadeSpawned");

	UFlashTrapModInst_C_OnGrenadeSpawned_Params params;
	params.Grenade = Grenade;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FlashTrapModInst.FlashTrapModInst_C.OnGrenadeDestroyed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 DestroyedActor                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFlashTrapModInst_C::OnGrenadeDestroyed(class AActor** DestroyedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function FlashTrapModInst.FlashTrapModInst_C.OnGrenadeDestroyed");

	UFlashTrapModInst_C_OnGrenadeDestroyed_Params params;
	params.DestroyedActor = DestroyedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FlashTrapModInst.FlashTrapModInst_C.Init_RemoteThrow
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSWeapon_RemoteThrow**  RemoteThrow                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFlashTrapModInst_C::Init_RemoteThrow(class AKSWeapon_RemoteThrow** RemoteThrow)
{
	static auto fn = UObject::FindObject<UFunction>("Function FlashTrapModInst.FlashTrapModInst_C.Init_RemoteThrow");

	UFlashTrapModInst_C_Init_RemoteThrow_Params params;
	params.RemoteThrow = RemoteThrow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FlashTrapModInst.FlashTrapModInst_C.Init_Detonator
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSWeapon_RemoteTrigger** Detonator                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFlashTrapModInst_C::Init_Detonator(class AKSWeapon_RemoteTrigger** Detonator)
{
	static auto fn = UObject::FindObject<UFunction>("Function FlashTrapModInst.FlashTrapModInst_C.Init_Detonator");

	UFlashTrapModInst_C_Init_Detonator_Params params;
	params.Detonator = Detonator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FlashTrapModInst.FlashTrapModInst_C.On Detonator Spawned
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSWeapon_RemoteTrigger** Detonator                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFlashTrapModInst_C::On_Detonator_Spawned(class AKSWeapon_RemoteTrigger** Detonator)
{
	static auto fn = UObject::FindObject<UFunction>("Function FlashTrapModInst.FlashTrapModInst_C.On Detonator Spawned");

	UFlashTrapModInst_C_On_Detonator_Spawned_Params params;
	params.Detonator = Detonator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FlashTrapModInst.FlashTrapModInst_C.On Remote Throw Spawned
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSWeapon_RemoteThrow**  RemoteThrow                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFlashTrapModInst_C::On_Remote_Throw_Spawned(class AKSWeapon_RemoteThrow** RemoteThrow)
{
	static auto fn = UObject::FindObject<UFunction>("Function FlashTrapModInst.FlashTrapModInst_C.On Remote Throw Spawned");

	UFlashTrapModInst_C_On_Remote_Throw_Spawned_Params params;
	params.RemoteThrow = RemoteThrow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FlashTrapModInst.FlashTrapModInst_C.FiredOnAuthority
// (BlueprintCallable, BlueprintEvent)

void UFlashTrapModInst_C::FiredOnAuthority()
{
	static auto fn = UObject::FindObject<UFunction>("Function FlashTrapModInst.FlashTrapModInst_C.FiredOnAuthority");

	UFlashTrapModInst_C_FiredOnAuthority_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FlashTrapModInst.FlashTrapModInst_C.On Reclaimed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSProjectile**          Reclaimed                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFlashTrapModInst_C::On_Reclaimed(class AKSProjectile** Reclaimed)
{
	static auto fn = UObject::FindObject<UFunction>("Function FlashTrapModInst.FlashTrapModInst_C.On Reclaimed");

	UFlashTrapModInst_C_On_Reclaimed_Params params;
	params.Reclaimed = Reclaimed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FlashTrapModInst.FlashTrapModInst_C.OnAbilityReleased
// (Event, Public, BlueprintEvent)

void UFlashTrapModInst_C::OnAbilityReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function FlashTrapModInst.FlashTrapModInst_C.OnAbilityReleased");

	UFlashTrapModInst_C_OnAbilityReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FlashTrapModInst.FlashTrapModInst_C.OnNewCharacter
// (Event, Public, BlueprintEvent)

void UFlashTrapModInst_C::OnNewCharacter()
{
	static auto fn = UObject::FindObject<UFunction>("Function FlashTrapModInst.FlashTrapModInst_C.OnNewCharacter");

	UFlashTrapModInst_C_OnNewCharacter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FlashTrapModInst.FlashTrapModInst_C.On Character Died
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSCharacterBase**       KillerCharacter                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AKSCharacterBase**       KilledCharacter                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFlashTrapModInst_C::On_Character_Died(class AKSCharacterBase** KillerCharacter, class AKSCharacterBase** KilledCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function FlashTrapModInst.FlashTrapModInst_C.On Character Died");

	UFlashTrapModInst_C_On_Character_Died_Params params;
	params.KillerCharacter = KillerCharacter;
	params.KilledCharacter = KilledCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FlashTrapModInst.FlashTrapModInst_C.ExecuteUbergraph_FlashTrapModInst
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFlashTrapModInst_C::ExecuteUbergraph_FlashTrapModInst(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FlashTrapModInst.FlashTrapModInst_C.ExecuteUbergraph_FlashTrapModInst");

	UFlashTrapModInst_C_ExecuteUbergraph_FlashTrapModInst_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

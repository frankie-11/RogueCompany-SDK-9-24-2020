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

// Function GrenadeMarker.GrenadeMarker_C.ShouldUpdate
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGrenadeMarker_C::ShouldUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function GrenadeMarker.GrenadeMarker_C.ShouldUpdate");

	UGrenadeMarker_C_ShouldUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GrenadeMarker.GrenadeMarker_C.Get Weapon Asset or Secondary
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UKSWeaponAsset*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UKSWeaponAsset* UGrenadeMarker_C::Get_Weapon_Asset_or_Secondary()
{
	static auto fn = UObject::FindObject<UFunction>("Function GrenadeMarker.GrenadeMarker_C.Get Weapon Asset or Secondary");

	UGrenadeMarker_C_Get_Weapon_Asset_or_Secondary_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GrenadeMarker.GrenadeMarker_C.Update
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UGrenadeMarker_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function GrenadeMarker.GrenadeMarker_C.Update");

	UGrenadeMarker_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GrenadeMarker.GrenadeMarker_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGrenadeMarker_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function GrenadeMarker.GrenadeMarker_C.Tick");

	UGrenadeMarker_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrenadeMarker.GrenadeMarker_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGrenadeMarker_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function GrenadeMarker.GrenadeMarker_C.PreConstruct");

	UGrenadeMarker_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrenadeMarker.GrenadeMarker_C.OnWeaponAssetSet
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSProjectile**          Projectile                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UKSWeaponAsset**         WeaponAsset                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGrenadeMarker_C::OnWeaponAssetSet(class AKSProjectile** Projectile, class UKSWeaponAsset** WeaponAsset)
{
	static auto fn = UObject::FindObject<UFunction>("Function GrenadeMarker.GrenadeMarker_C.OnWeaponAssetSet");

	UGrenadeMarker_C_OnWeaponAssetSet_Params params;
	params.Projectile = Projectile;
	params.WeaponAsset = WeaponAsset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrenadeMarker.GrenadeMarker_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UGrenadeMarker_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function GrenadeMarker.GrenadeMarker_C.Construct");

	UGrenadeMarker_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrenadeMarker.GrenadeMarker_C.ExecuteUbergraph_GrenadeMarker
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGrenadeMarker_C::ExecuteUbergraph_GrenadeMarker(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GrenadeMarker.GrenadeMarker_C.ExecuteUbergraph_GrenadeMarker");

	UGrenadeMarker_C_ExecuteUbergraph_GrenadeMarker_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

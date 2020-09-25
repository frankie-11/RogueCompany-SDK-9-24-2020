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

// Function WeaponMenuManager.WeaponMenuManager_C.IsFocusEnabled
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWeaponMenuManager_C::IsFocusEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponMenuManager.WeaponMenuManager_C.IsFocusEnabled");

	UWeaponMenuManager_C_IsFocusEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeaponMenuManager.WeaponMenuManager_C.Close All
// (Public, BlueprintCallable, BlueprintEvent)

void UWeaponMenuManager_C::Close_All()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponMenuManager.WeaponMenuManager_C.Close All");

	UWeaponMenuManager_C_Close_All_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponMenuManager.WeaponMenuManager_C.PostSetWeapon
// (Event, Protected, BlueprintEvent)

void UWeaponMenuManager_C::PostSetWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponMenuManager.WeaponMenuManager_C.PostSetWeapon");

	UWeaponMenuManager_C_PostSetWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponMenuManager.WeaponMenuManager_C.OtherWeaponUpdate
// (Event, Protected, BlueprintEvent)

void UWeaponMenuManager_C::OtherWeaponUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponMenuManager.WeaponMenuManager_C.OtherWeaponUpdate");

	UWeaponMenuManager_C_OtherWeaponUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponMenuManager.WeaponMenuManager_C.PreClearWeapon
// (Event, Protected, BlueprintEvent)

void UWeaponMenuManager_C::PreClearWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponMenuManager.WeaponMenuManager_C.PreClearWeapon");

	UWeaponMenuManager_C_PreClearWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponMenuManager.WeaponMenuManager_C.InventoryChange
// (BlueprintCallable, BlueprintEvent)

void UWeaponMenuManager_C::InventoryChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponMenuManager.WeaponMenuManager_C.InventoryChange");

	UWeaponMenuManager_C_InventoryChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponMenuManager.WeaponMenuManager_C.Display Target List
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSWeapon_Targeted**     TargetingWeapon                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AActor*>*         PotentialTargets               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UWeaponMenuManager_C::Display_Target_List(class AKSWeapon_Targeted** TargetingWeapon, TArray<class AActor*>* PotentialTargets)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponMenuManager.WeaponMenuManager_C.Display Target List");

	UWeaponMenuManager_C_Display_Target_List_Params params;
	params.TargetingWeapon = TargetingWeapon;
	params.PotentialTargets = PotentialTargets;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponMenuManager.WeaponMenuManager_C.ExecuteUbergraph_WeaponMenuManager
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWeaponMenuManager_C::ExecuteUbergraph_WeaponMenuManager(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponMenuManager.WeaponMenuManager_C.ExecuteUbergraph_WeaponMenuManager");

	UWeaponMenuManager_C_ExecuteUbergraph_WeaponMenuManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

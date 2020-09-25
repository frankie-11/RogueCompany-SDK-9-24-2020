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

// Function WBP_InventoryFullWarning.WBP_InventoryFullWarning_C.PostSetPawn
// (Event, Protected, BlueprintEvent)

void UWBP_InventoryFullWarning_C::PostSetPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InventoryFullWarning.WBP_InventoryFullWarning_C.PostSetPawn");

	UWBP_InventoryFullWarning_C_PostSetPawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InventoryFullWarning.WBP_InventoryFullWarning_C.Handle Inventory Full
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSWeaponAssetDrop**     WeaponAssetDrop                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_InventoryFullWarning_C::Handle_Inventory_Full(class AKSWeaponAssetDrop** WeaponAssetDrop)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InventoryFullWarning.WBP_InventoryFullWarning_C.Handle Inventory Full");

	UWBP_InventoryFullWarning_C_Handle_Inventory_Full_Params params;
	params.WeaponAssetDrop = WeaponAssetDrop;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InventoryFullWarning.WBP_InventoryFullWarning_C.ExecuteUbergraph_WBP_InventoryFullWarning
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_InventoryFullWarning_C::ExecuteUbergraph_WBP_InventoryFullWarning(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InventoryFullWarning.WBP_InventoryFullWarning_C.ExecuteUbergraph_WBP_InventoryFullWarning");

	UWBP_InventoryFullWarning_C_ExecuteUbergraph_WBP_InventoryFullWarning_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

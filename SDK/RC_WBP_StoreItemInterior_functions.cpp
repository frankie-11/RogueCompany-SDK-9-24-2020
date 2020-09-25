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

// Function WBP_StoreItemInterior.WBP_StoreItemInterior_C.GetStoreIconForSize
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UPlatformInventoryItem** InventoryItem                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_StoreItemInterior_C::GetStoreIconForSize(class UPlatformInventoryItem** InventoryItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreItemInterior.WBP_StoreItemInterior_C.GetStoreIconForSize");

	UWBP_StoreItemInterior_C_GetStoreIconForSize_Params params;
	params.InventoryItem = InventoryItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StoreItemInterior.WBP_StoreItemInterior_C.SetRarityDisplay
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPlatformInventoryItem** InventoryItem                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_StoreItemInterior_C::SetRarityDisplay(class UPlatformInventoryItem** InventoryItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreItemInterior.WBP_StoreItemInterior_C.SetRarityDisplay");

	UWBP_StoreItemInterior_C_SetRarityDisplay_Params params;
	params.InventoryItem = InventoryItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StoreItemInterior.WBP_StoreItemInterior_C.SetStoreItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPUMG_StoreItem**        StoreItem                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_StoreItemInterior_C::SetStoreItem(class UPUMG_StoreItem** StoreItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreItemInterior.WBP_StoreItemInterior_C.SetStoreItem");

	UWBP_StoreItemInterior_C_SetStoreItem_Params params;
	params.StoreItem = StoreItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StoreItemInterior.WBP_StoreItemInterior_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_StoreItemInterior_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreItemInterior.WBP_StoreItemInterior_C.PreConstruct");

	UWBP_StoreItemInterior_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StoreItemInterior.WBP_StoreItemInterior_C.OnParentHovered
// (BlueprintCallable, BlueprintEvent)

void UWBP_StoreItemInterior_C::OnParentHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreItemInterior.WBP_StoreItemInterior_C.OnParentHovered");

	UWBP_StoreItemInterior_C_OnParentHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StoreItemInterior.WBP_StoreItemInterior_C.OnParentUnhovered
// (BlueprintCallable, BlueprintEvent)

void UWBP_StoreItemInterior_C::OnParentUnhovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreItemInterior.WBP_StoreItemInterior_C.OnParentUnhovered");

	UWBP_StoreItemInterior_C_OnParentUnhovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StoreItemInterior.WBP_StoreItemInterior_C.ExecuteUbergraph_WBP_StoreItemInterior
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_StoreItemInterior_C::ExecuteUbergraph_WBP_StoreItemInterior(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreItemInterior.WBP_StoreItemInterior_C.ExecuteUbergraph_WBP_StoreItemInterior");

	UWBP_StoreItemInterior_C_ExecuteUbergraph_WBP_StoreItemInterior_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function WBP_ItemInfoContainer.WBP_ItemInfoContainer_C.SetAlignment
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_ItemInfoContainer_C::SetAlignment()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ItemInfoContainer.WBP_ItemInfoContainer_C.SetAlignment");

	UWBP_ItemInfoContainer_C_SetAlignment_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ItemInfoContainer.WBP_ItemInfoContainer_C.SetItemRarityInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPlatformInventoryItem** CosmeticItem                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_ItemInfoContainer_C::SetItemRarityInfo(class UPlatformInventoryItem** CosmeticItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ItemInfoContainer.WBP_ItemInfoContainer_C.SetItemRarityInfo");

	UWBP_ItemInfoContainer_C_SetItemRarityInfo_Params params;
	params.CosmeticItem = CosmeticItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ItemInfoContainer.WBP_ItemInfoContainer_C.SetInfoFieldData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPlatformInventoryItem** CosmeticItem                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_ItemInfoContainer_C::SetInfoFieldData(class UPlatformInventoryItem** CosmeticItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ItemInfoContainer.WBP_ItemInfoContainer_C.SetInfoFieldData");

	UWBP_ItemInfoContainer_C_SetInfoFieldData_Params params;
	params.CosmeticItem = CosmeticItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ItemInfoContainer.WBP_ItemInfoContainer_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_ItemInfoContainer_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ItemInfoContainer.WBP_ItemInfoContainer_C.PreConstruct");

	UWBP_ItemInfoContainer_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ItemInfoContainer.WBP_ItemInfoContainer_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_ItemInfoContainer_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ItemInfoContainer.WBP_ItemInfoContainer_C.Construct");

	UWBP_ItemInfoContainer_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ItemInfoContainer.WBP_ItemInfoContainer_C.ExecuteUbergraph_WBP_ItemInfoContainer
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_ItemInfoContainer_C::ExecuteUbergraph_WBP_ItemInfoContainer(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ItemInfoContainer.WBP_ItemInfoContainer_C.ExecuteUbergraph_WBP_ItemInfoContainer");

	UWBP_ItemInfoContainer_C_ExecuteUbergraph_WBP_ItemInfoContainer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

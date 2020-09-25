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

// Function WBP_ItemInfoContainer_Centered.WBP_ItemInfoContainer_Centered_C.Refresh Rarity Text
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_ItemInfoContainer_Centered_C::Refresh_Rarity_Text()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ItemInfoContainer_Centered.WBP_ItemInfoContainer_Centered_C.Refresh Rarity Text");

	UWBP_ItemInfoContainer_Centered_C_Refresh_Rarity_Text_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ItemInfoContainer_Centered.WBP_ItemInfoContainer_Centered_C.SetItemRarityInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPlatformInventoryItem** CosmeticItem                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_ItemInfoContainer_Centered_C::SetItemRarityInfo(class UPlatformInventoryItem** CosmeticItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ItemInfoContainer_Centered.WBP_ItemInfoContainer_Centered_C.SetItemRarityInfo");

	UWBP_ItemInfoContainer_Centered_C_SetItemRarityInfo_Params params;
	params.CosmeticItem = CosmeticItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ItemInfoContainer_Centered.WBP_ItemInfoContainer_Centered_C.SetInfoFieldData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPUMG_StoreItem**        StoreItem                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_ItemInfoContainer_Centered_C::SetInfoFieldData(class UPUMG_StoreItem** StoreItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ItemInfoContainer_Centered.WBP_ItemInfoContainer_Centered_C.SetInfoFieldData");

	UWBP_ItemInfoContainer_Centered_C_SetInfoFieldData_Params params;
	params.StoreItem = StoreItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ItemInfoContainer_Centered.WBP_ItemInfoContainer_Centered_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_ItemInfoContainer_Centered_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ItemInfoContainer_Centered.WBP_ItemInfoContainer_Centered_C.PreConstruct");

	UWBP_ItemInfoContainer_Centered_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ItemInfoContainer_Centered.WBP_ItemInfoContainer_Centered_C.ExecuteUbergraph_WBP_ItemInfoContainer_Centered
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_ItemInfoContainer_Centered_C::ExecuteUbergraph_WBP_ItemInfoContainer_Centered(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ItemInfoContainer_Centered.WBP_ItemInfoContainer_Centered_C.ExecuteUbergraph_WBP_ItemInfoContainer_Centered");

	UWBP_ItemInfoContainer_Centered_C_ExecuteUbergraph_WBP_ItemInfoContainer_Centered_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

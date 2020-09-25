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

// Function WBP_ItemDescSlot.WBP_ItemDescSlot_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_ItemDescSlot_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ItemDescSlot.WBP_ItemDescSlot_C.Construct");

	UWBP_ItemDescSlot_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ItemDescSlot.WBP_ItemDescSlot_C.PopulateItemDescSlot
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UKSItem**                KSItem                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_ItemDescSlot_C::PopulateItemDescSlot(class UKSItem** KSItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ItemDescSlot.WBP_ItemDescSlot_C.PopulateItemDescSlot");

	UWBP_ItemDescSlot_C_PopulateItemDescSlot_Params params;
	params.KSItem = KSItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ItemDescSlot.WBP_ItemDescSlot_C.SetTextColors
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor*           HeaderColor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor*           HeadingColor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor*           TextColor                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_ItemDescSlot_C::SetTextColors(struct FLinearColor* HeaderColor, struct FLinearColor* HeadingColor, struct FLinearColor* TextColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ItemDescSlot.WBP_ItemDescSlot_C.SetTextColors");

	UWBP_ItemDescSlot_C_SetTextColors_Params params;
	params.HeaderColor = HeaderColor;
	params.HeadingColor = HeadingColor;
	params.TextColor = TextColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ItemDescSlot.WBP_ItemDescSlot_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_ItemDescSlot_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ItemDescSlot.WBP_ItemDescSlot_C.PreConstruct");

	UWBP_ItemDescSlot_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ItemDescSlot.WBP_ItemDescSlot_C.ExecuteUbergraph_WBP_ItemDescSlot
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_ItemDescSlot_C::ExecuteUbergraph_WBP_ItemDescSlot(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ItemDescSlot.WBP_ItemDescSlot_C.ExecuteUbergraph_WBP_ItemDescSlot");

	UWBP_ItemDescSlot_C_ExecuteUbergraph_WBP_ItemDescSlot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

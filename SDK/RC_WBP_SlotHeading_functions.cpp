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

// Function WBP_SlotHeading.WBP_SlotHeading_C.SetText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  newText                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_SlotHeading_C::SetText(struct FText* newText)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SlotHeading.WBP_SlotHeading_C.SetText");

	UWBP_SlotHeading_C_SetText_Params params;
	params.newText = newText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SlotHeading.WBP_SlotHeading_C.SetUnderlineColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor*           NewColor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_SlotHeading_C::SetUnderlineColor(struct FLinearColor* NewColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SlotHeading.WBP_SlotHeading_C.SetUnderlineColor");

	UWBP_SlotHeading_C_SetUnderlineColor_Params params;
	params.NewColor = NewColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SlotHeading.WBP_SlotHeading_C.SetTextColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateColor*            NewColor                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_SlotHeading_C::SetTextColor(struct FSlateColor* NewColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SlotHeading.WBP_SlotHeading_C.SetTextColor");

	UWBP_SlotHeading_C_SetTextColor_Params params;
	params.NewColor = NewColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SlotHeading.WBP_SlotHeading_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_SlotHeading_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SlotHeading.WBP_SlotHeading_C.PreConstruct");

	UWBP_SlotHeading_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SlotHeading.WBP_SlotHeading_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_SlotHeading_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SlotHeading.WBP_SlotHeading_C.Construct");

	UWBP_SlotHeading_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SlotHeading.WBP_SlotHeading_C.SetSlotHeading
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  Text                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_SlotHeading_C::SetSlotHeading(struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SlotHeading.WBP_SlotHeading_C.SetSlotHeading");

	UWBP_SlotHeading_C_SetSlotHeading_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SlotHeading.WBP_SlotHeading_C.ExecuteUbergraph_WBP_SlotHeading
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_SlotHeading_C::ExecuteUbergraph_WBP_SlotHeading(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SlotHeading.WBP_SlotHeading_C.ExecuteUbergraph_WBP_SlotHeading");

	UWBP_SlotHeading_C_ExecuteUbergraph_WBP_SlotHeading_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

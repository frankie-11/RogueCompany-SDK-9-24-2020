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

// Function WBP_PanelDefault.WBP_PanelDefault_C.SetContentPadding
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMargin*                ContentPadding                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PanelDefault_C::SetContentPadding(struct FMargin* ContentPadding)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PanelDefault.WBP_PanelDefault_C.SetContentPadding");

	UWBP_PanelDefault_C_SetContentPadding_Params params;
	params.ContentPadding = ContentPadding;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PanelDefault.WBP_PanelDefault_C.SetPanelColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor*           PanelColor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PanelDefault_C::SetPanelColor(struct FLinearColor* PanelColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PanelDefault.WBP_PanelDefault_C.SetPanelColor");

	UWBP_PanelDefault_C_SetPanelColor_Params params;
	params.PanelColor = PanelColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PanelDefault.WBP_PanelDefault_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PanelDefault_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PanelDefault.WBP_PanelDefault_C.PreConstruct");

	UWBP_PanelDefault_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PanelDefault.WBP_PanelDefault_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_PanelDefault_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PanelDefault.WBP_PanelDefault_C.Construct");

	UWBP_PanelDefault_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PanelDefault.WBP_PanelDefault_C.ExecuteUbergraph_WBP_PanelDefault
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PanelDefault_C::ExecuteUbergraph_WBP_PanelDefault(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PanelDefault.WBP_PanelDefault_C.ExecuteUbergraph_WBP_PanelDefault");

	UWBP_PanelDefault_C_ExecuteUbergraph_WBP_PanelDefault_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

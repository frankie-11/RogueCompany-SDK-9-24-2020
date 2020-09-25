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

// Function WBP_Challenge_Panel.WBP_Challenge_Panel_C.DisplayRerollPrompt
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Show                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Challenge_Panel_C::DisplayRerollPrompt(bool* Show)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Challenge_Panel.WBP_Challenge_Panel_C.DisplayRerollPrompt");

	UWBP_Challenge_Panel_C_DisplayRerollPrompt_Params params;
	params.Show = Show;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Challenge_Panel.WBP_Challenge_Panel_C.GetNavigationWidgets
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UPUMG_Widget*>    Widgets                        (Parm, OutParm, ZeroConstructor)

void UWBP_Challenge_Panel_C::GetNavigationWidgets(TArray<class UPUMG_Widget*>* Widgets)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Challenge_Panel.WBP_Challenge_Panel_C.GetNavigationWidgets");

	UWBP_Challenge_Panel_C_GetNavigationWidgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Widgets != nullptr)
		*Widgets = params.Widgets;
}


// Function WBP_Challenge_Panel.WBP_Challenge_Panel_C.PopulateChallenges
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_Challenge_Panel_C::PopulateChallenges()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Challenge_Panel.WBP_Challenge_Panel_C.PopulateChallenges");

	UWBP_Challenge_Panel_C_PopulateChallenges_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Challenge_Panel.WBP_Challenge_Panel_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Challenge_Panel_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Challenge_Panel.WBP_Challenge_Panel_C.PreConstruct");

	UWBP_Challenge_Panel_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Challenge_Panel.WBP_Challenge_Panel_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APUMG_HUD**              HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Challenge_Panel_C::InitializeWidget(class APUMG_HUD** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Challenge_Panel.WBP_Challenge_Panel_C.InitializeWidget");

	UWBP_Challenge_Panel_C_InitializeWidget_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Challenge_Panel.WBP_Challenge_Panel_C.ExecuteUbergraph_WBP_Challenge_Panel
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Challenge_Panel_C::ExecuteUbergraph_WBP_Challenge_Panel(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Challenge_Panel.WBP_Challenge_Panel_C.ExecuteUbergraph_WBP_Challenge_Panel");

	UWBP_Challenge_Panel_C_ExecuteUbergraph_WBP_Challenge_Panel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

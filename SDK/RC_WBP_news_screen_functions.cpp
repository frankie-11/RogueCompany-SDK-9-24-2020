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

// Function WBP_news_screen.WBP_news_screen_C.GoBack
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_news_screen_C::GoBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_news_screen.WBP_news_screen_C.GoBack");

	UWBP_news_screen_C_GoBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_news_screen.WBP_news_screen_C.HandleInputModeChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EPGAME_INPUT_STATE>* Input_Mode                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_news_screen_C::HandleInputModeChanged(TEnumAsByte<EPGAME_INPUT_STATE>* Input_Mode)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_news_screen.WBP_news_screen_C.HandleInputModeChanged");

	UWBP_news_screen_C_HandleInputModeChanged_Params params;
	params.Input_Mode = Input_Mode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_news_screen.WBP_news_screen_C.PopulateNewsCards
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_news_screen_C::PopulateNewsCards()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_news_screen.WBP_news_screen_C.PopulateNewsCards");

	UWBP_news_screen_C_PopulateNewsCards_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_news_screen.WBP_news_screen_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_news_screen_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_news_screen.WBP_news_screen_C.PreConstruct");

	UWBP_news_screen_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_news_screen.WBP_news_screen_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APUMG_HUD**              HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_news_screen_C::InitializeWidget(class APUMG_HUD** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_news_screen.WBP_news_screen_C.InitializeWidget");

	UWBP_news_screen_C_InitializeWidget_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_news_screen.WBP_news_screen_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_news_screen_C::BndEvt__CloseButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_news_screen.WBP_news_screen_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UWBP_news_screen_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_news_screen.WBP_news_screen_C.HandleCloseHovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_news_screen_C::HandleCloseHovered(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_news_screen.WBP_news_screen_C.HandleCloseHovered");

	UWBP_news_screen_C_HandleCloseHovered_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_news_screen.WBP_news_screen_C.HandleCLoseUnhovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_news_screen_C::HandleCLoseUnhovered(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_news_screen.WBP_news_screen_C.HandleCLoseUnhovered");

	UWBP_news_screen_C_HandleCLoseUnhovered_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_news_screen.WBP_news_screen_C.InitializeWidgetNavigation
// (Event, Public, BlueprintEvent)

void UWBP_news_screen_C::InitializeWidgetNavigation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_news_screen.WBP_news_screen_C.InitializeWidgetNavigation");

	UWBP_news_screen_C_InitializeWidgetNavigation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_news_screen.WBP_news_screen_C.OnJsonChanged
// (Event, Protected, BlueprintEvent)

void UWBP_news_screen_C::OnJsonChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_news_screen.WBP_news_screen_C.OnJsonChanged");

	UWBP_news_screen_C_OnJsonChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_news_screen.WBP_news_screen_C.HandleLoginStateChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EPUMG_LoginState*              NewLoginState                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_news_screen_C::HandleLoginStateChange(EPUMG_LoginState* NewLoginState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_news_screen.WBP_news_screen_C.HandleLoginStateChange");

	UWBP_news_screen_C_HandleLoginStateChange_Params params;
	params.NewLoginState = NewLoginState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_news_screen.WBP_news_screen_C.OnShown
// (Event, Public, BlueprintEvent)

void UWBP_news_screen_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_news_screen.WBP_news_screen_C.OnShown");

	UWBP_news_screen_C_OnShown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_news_screen.WBP_news_screen_C.OnHide
// (Event, Public, BlueprintEvent)

void UWBP_news_screen_C::OnHide()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_news_screen.WBP_news_screen_C.OnHide");

	UWBP_news_screen_C_OnHide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_news_screen.WBP_news_screen_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_news_screen_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_news_screen.WBP_news_screen_C.Destruct");

	UWBP_news_screen_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_news_screen.WBP_news_screen_C.ExecuteUbergraph_WBP_news_screen
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_news_screen_C::ExecuteUbergraph_WBP_news_screen(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_news_screen.WBP_news_screen_C.ExecuteUbergraph_WBP_news_screen");

	UWBP_news_screen_C_ExecuteUbergraph_WBP_news_screen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

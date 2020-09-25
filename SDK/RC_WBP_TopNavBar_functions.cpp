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

// Function WBP_TopNavBar.WBP_TopNavBar_C.OnHasNewStoreItems
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          HasNew                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_TopNavBar_C::OnHasNewStoreItems(bool* HasNew)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TopNavBar.WBP_TopNavBar_C.OnHasNewStoreItems");

	UWBP_TopNavBar_C_OnHasNewStoreItems_Params params;
	params.HasNew = HasNew;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_TopNavBar.WBP_TopNavBar_C.HandleViewRouteChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  CurrentRoute                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  NextRoute                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EViewManagerLayer*             Layer                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_TopNavBar_C::HandleViewRouteChanged(struct FName* CurrentRoute, struct FName* NextRoute, EViewManagerLayer* Layer)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TopNavBar.WBP_TopNavBar_C.HandleViewRouteChanged");

	UWBP_TopNavBar_C_HandleViewRouteChanged_Params params;
	params.CurrentRoute = CurrentRoute;
	params.NextRoute = NextRoute;
	params.Layer = Layer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_TopNavBar.WBP_TopNavBar_C.HandleInputStateChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EPGAME_INPUT_STATE>* InputState                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_TopNavBar_C::HandleInputStateChanged(TEnumAsByte<EPGAME_INPUT_STATE>* InputState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TopNavBar.WBP_TopNavBar_C.HandleInputStateChanged");

	UWBP_TopNavBar_C_HandleInputStateChanged_Params params;
	params.InputState = InputState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_TopNavBar.WBP_TopNavBar_C.HandleNavRight
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_TopNavBar_C::HandleNavRight()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TopNavBar.WBP_TopNavBar_C.HandleNavRight");

	UWBP_TopNavBar_C_HandleNavRight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_TopNavBar.WBP_TopNavBar_C.HandleNavLeft
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_TopNavBar_C::HandleNavLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TopNavBar.WBP_TopNavBar_C.HandleNavLeft");

	UWBP_TopNavBar_C_HandleNavLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_TopNavBar.WBP_TopNavBar_C.InitializeNavButtons
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_TopNavBar_C::InitializeNavButtons()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TopNavBar.WBP_TopNavBar_C.InitializeNavButtons");

	UWBP_TopNavBar_C_InitializeNavButtons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_TopNavBar.WBP_TopNavBar_C.SetupGamepadIcon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_TopNavBar_C::SetupGamepadIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TopNavBar.WBP_TopNavBar_C.SetupGamepadIcon");

	UWBP_TopNavBar_C_SetupGamepadIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_TopNavBar.WBP_TopNavBar_C.SetupGamepadCallout
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_TopNavBar_C::SetupGamepadCallout()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TopNavBar.WBP_TopNavBar_C.SetupGamepadCallout");

	UWBP_TopNavBar_C_SetupGamepadCallout_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_TopNavBar.WBP_TopNavBar_C.InitializeTickAnimations
// (Event, Protected, BlueprintEvent)

void UWBP_TopNavBar_C::InitializeTickAnimations()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TopNavBar.WBP_TopNavBar_C.InitializeTickAnimations");

	UWBP_TopNavBar_C_InitializeTickAnimations_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_TopNavBar.WBP_TopNavBar_C.ShowTopBarFinished
// (BlueprintCallable, BlueprintEvent)

void UWBP_TopNavBar_C::ShowTopBarFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TopNavBar.WBP_TopNavBar_C.ShowTopBarFinished");

	UWBP_TopNavBar_C_ShowTopBarFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_TopNavBar.WBP_TopNavBar_C.ShowTopBarAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         ElapsedTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         ElapsedAlpha                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_TopNavBar_C::ShowTopBarAnim(float* ElapsedTime, float* ElapsedAlpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TopNavBar.WBP_TopNavBar_C.ShowTopBarAnim");

	UWBP_TopNavBar_C_ShowTopBarAnim_Params params;
	params.ElapsedTime = ElapsedTime;
	params.ElapsedAlpha = ElapsedAlpha;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_TopNavBar.WBP_TopNavBar_C.InitHideAnimation
// (BlueprintCallable, BlueprintEvent)

void UWBP_TopNavBar_C::InitHideAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TopNavBar.WBP_TopNavBar_C.InitHideAnimation");

	UWBP_TopNavBar_C_InitHideAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_TopNavBar.WBP_TopNavBar_C.HideTopBarFinished
// (BlueprintCallable, BlueprintEvent)

void UWBP_TopNavBar_C::HideTopBarFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TopNavBar.WBP_TopNavBar_C.HideTopBarFinished");

	UWBP_TopNavBar_C_HideTopBarFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_TopNavBar.WBP_TopNavBar_C.HideTopBarAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         ElapsedTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         ElapsedAlpha                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_TopNavBar_C::HideTopBarAnim(float* ElapsedTime, float* ElapsedAlpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TopNavBar.WBP_TopNavBar_C.HideTopBarAnim");

	UWBP_TopNavBar_C_HideTopBarAnim_Params params;
	params.ElapsedTime = ElapsedTime;
	params.ElapsedAlpha = ElapsedAlpha;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_TopNavBar.WBP_TopNavBar_C.StartHideAnim
// (BlueprintCallable, BlueprintEvent)

void UWBP_TopNavBar_C::StartHideAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TopNavBar.WBP_TopNavBar_C.StartHideAnim");

	UWBP_TopNavBar_C_StartHideAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_TopNavBar.WBP_TopNavBar_C.StartShowAnim
// (BlueprintCallable, BlueprintEvent)

void UWBP_TopNavBar_C::StartShowAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TopNavBar.WBP_TopNavBar_C.StartShowAnim");

	UWBP_TopNavBar_C_StartShowAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_TopNavBar.WBP_TopNavBar_C.DisableTopBar
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsDisable                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_TopNavBar_C::DisableTopBar(bool* IsDisable)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TopNavBar.WBP_TopNavBar_C.DisableTopBar");

	UWBP_TopNavBar_C_DisableTopBar_Params params;
	params.IsDisable = IsDisable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_TopNavBar.WBP_TopNavBar_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APUMG_HUD**              HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_TopNavBar_C::InitializeWidget(class APUMG_HUD** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TopNavBar.WBP_TopNavBar_C.InitializeWidget");

	UWBP_TopNavBar_C_InitializeWidget_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_TopNavBar.WBP_TopNavBar_C.InitializeWidgetButtonListeners
// (Event, Public, BlueprintEvent)

void UWBP_TopNavBar_C::InitializeWidgetButtonListeners()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TopNavBar.WBP_TopNavBar_C.InitializeWidgetButtonListeners");

	UWBP_TopNavBar_C_InitializeWidgetButtonListeners_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_TopNavBar.WBP_TopNavBar_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_TopNavBar_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TopNavBar.WBP_TopNavBar_C.Construct");

	UWBP_TopNavBar_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_TopNavBar.WBP_TopNavBar_C.InitializeWidgetNavigation
// (Event, Public, BlueprintEvent)

void UWBP_TopNavBar_C::InitializeWidgetNavigation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TopNavBar.WBP_TopNavBar_C.InitializeWidgetNavigation");

	UWBP_TopNavBar_C_InitializeWidgetNavigation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_TopNavBar.WBP_TopNavBar_C.StartShowSequence
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FName*                  FromRoute                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  ToRoute                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_TopNavBar_C::StartShowSequence(struct FName* FromRoute, struct FName* ToRoute)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TopNavBar.WBP_TopNavBar_C.StartShowSequence");

	UWBP_TopNavBar_C_StartShowSequence_Params params;
	params.FromRoute = FromRoute;
	params.ToRoute = ToRoute;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_TopNavBar.WBP_TopNavBar_C.StartHideSequence
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FName*                  FromRoute                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  ToRoute                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_TopNavBar_C::StartHideSequence(struct FName* FromRoute, struct FName* ToRoute)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TopNavBar.WBP_TopNavBar_C.StartHideSequence");

	UWBP_TopNavBar_C_StartHideSequence_Params params;
	params.FromRoute = FromRoute;
	params.ToRoute = ToRoute;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_TopNavBar.WBP_TopNavBar_C.ExecuteUbergraph_WBP_TopNavBar
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_TopNavBar_C::ExecuteUbergraph_WBP_TopNavBar(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TopNavBar.WBP_TopNavBar_C.ExecuteUbergraph_WBP_TopNavBar");

	UWBP_TopNavBar_C_ExecuteUbergraph_WBP_TopNavBar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function NewMenuMain.NewMenuMain_C.SetupGamepadCallout
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UNewMenuMain_C::SetupGamepadCallout()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewMenuMain.NewMenuMain_C.SetupGamepadCallout");

	UNewMenuMain_C_SetupGamepadCallout_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewMenuMain.NewMenuMain_C.HandleInputStateChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EPGAME_INPUT_STATE>* InputState                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNewMenuMain_C::HandleInputStateChanged(TEnumAsByte<EPGAME_INPUT_STATE>* InputState)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewMenuMain.NewMenuMain_C.HandleInputStateChanged");

	UNewMenuMain_C_HandleInputStateChanged_Params params;
	params.InputState = InputState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewMenuMain.NewMenuMain_C.HideMenuButtonFinished
// (BlueprintCallable, BlueprintEvent)

void UNewMenuMain_C::HideMenuButtonFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewMenuMain.NewMenuMain_C.HideMenuButtonFinished");

	UNewMenuMain_C_HideMenuButtonFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewMenuMain.NewMenuMain_C.HideMenuButtonAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         ElapsedTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         ElapsedAlpha                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNewMenuMain_C::HideMenuButtonAnim(float* ElapsedTime, float* ElapsedAlpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewMenuMain.NewMenuMain_C.HideMenuButtonAnim");

	UNewMenuMain_C_HideMenuButtonAnim_Params params;
	params.ElapsedTime = ElapsedTime;
	params.ElapsedAlpha = ElapsedAlpha;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewMenuMain.NewMenuMain_C.InitHideAnimation
// (BlueprintCallable, BlueprintEvent)

void UNewMenuMain_C::InitHideAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewMenuMain.NewMenuMain_C.InitHideAnimation");

	UNewMenuMain_C_InitHideAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewMenuMain.NewMenuMain_C.InitializeTickAnimations
// (Event, Protected, BlueprintEvent)

void UNewMenuMain_C::InitializeTickAnimations()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewMenuMain.NewMenuMain_C.InitializeTickAnimations");

	UNewMenuMain_C_InitializeTickAnimations_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewMenuMain.NewMenuMain_C.ShowMenuButtonFinished
// (BlueprintCallable, BlueprintEvent)

void UNewMenuMain_C::ShowMenuButtonFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewMenuMain.NewMenuMain_C.ShowMenuButtonFinished");

	UNewMenuMain_C_ShowMenuButtonFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewMenuMain.NewMenuMain_C.StartShowAnim
// (BlueprintCallable, BlueprintEvent)

void UNewMenuMain_C::StartShowAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewMenuMain.NewMenuMain_C.StartShowAnim");

	UNewMenuMain_C_StartShowAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewMenuMain.NewMenuMain_C.StartHideAnim
// (BlueprintCallable, BlueprintEvent)

void UNewMenuMain_C::StartHideAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewMenuMain.NewMenuMain_C.StartHideAnim");

	UNewMenuMain_C_StartHideAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewMenuMain.NewMenuMain_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APUMG_HUD**              HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNewMenuMain_C::InitializeWidget(class APUMG_HUD** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewMenuMain.NewMenuMain_C.InitializeWidget");

	UNewMenuMain_C_InitializeWidget_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewMenuMain.NewMenuMain_C.InitializeWidgetNavigation
// (Event, Public, BlueprintEvent)

void UNewMenuMain_C::InitializeWidgetNavigation()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewMenuMain.NewMenuMain_C.InitializeWidgetNavigation");

	UNewMenuMain_C_InitializeWidgetNavigation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewMenuMain.NewMenuMain_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UNewMenuMain_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewMenuMain.NewMenuMain_C.Construct");

	UNewMenuMain_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewMenuMain.NewMenuMain_C.ShowMenuButtonAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         ElapsedTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         ElapsedAlpha                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNewMenuMain_C::ShowMenuButtonAnim(float* ElapsedTime, float* ElapsedAlpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewMenuMain.NewMenuMain_C.ShowMenuButtonAnim");

	UNewMenuMain_C_ShowMenuButtonAnim_Params params;
	params.ElapsedTime = ElapsedTime;
	params.ElapsedAlpha = ElapsedAlpha;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewMenuMain.NewMenuMain_C.OpenStartMenu
// (BlueprintCallable, BlueprintEvent)

void UNewMenuMain_C::OpenStartMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewMenuMain.NewMenuMain_C.OpenStartMenu");

	UNewMenuMain_C_OpenStartMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewMenuMain.NewMenuMain_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UNewMenuMain_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewMenuMain.NewMenuMain_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UNewMenuMain_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewMenuMain.NewMenuMain_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UNewMenuMain_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewMenuMain.NewMenuMain_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UNewMenuMain_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewMenuMain.NewMenuMain_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UNewMenuMain_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewMenuMain.NewMenuMain_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");

	UNewMenuMain_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewMenuMain.NewMenuMain_C.ExecuteUbergraph_NewMenuMain
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNewMenuMain_C::ExecuteUbergraph_NewMenuMain(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewMenuMain.NewMenuMain_C.ExecuteUbergraph_NewMenuMain");

	UNewMenuMain_C_ExecuteUbergraph_NewMenuMain_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

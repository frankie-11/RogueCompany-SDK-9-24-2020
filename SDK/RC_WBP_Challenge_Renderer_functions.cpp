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

// Function WBP_Challenge_Renderer.WBP_Challenge_Renderer_C.NavigateConfirmPressed
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWBP_Challenge_Renderer_C::NavigateConfirmPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Challenge_Renderer.WBP_Challenge_Renderer_C.NavigateConfirmPressed");

	UWBP_Challenge_Renderer_C_NavigateConfirmPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_Challenge_Renderer.WBP_Challenge_Renderer_C.SetRewardDisplay
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FActivityTier*          ActivityTier                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_Challenge_Renderer_C::SetRewardDisplay(struct FActivityTier* ActivityTier)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Challenge_Renderer.WBP_Challenge_Renderer_C.SetRewardDisplay");

	UWBP_Challenge_Renderer_C_SetRewardDisplay_Params params;
	params.ActivityTier = ActivityTier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Challenge_Renderer.WBP_Challenge_Renderer_C.SetChallengeInformation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UKSChallengeActivityInstance** ChallengeActivity              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Challenge_Renderer_C::SetChallengeInformation(class UKSChallengeActivityInstance** ChallengeActivity)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Challenge_Renderer.WBP_Challenge_Renderer_C.SetChallengeInformation");

	UWBP_Challenge_Renderer_C_SetChallengeInformation_Params params;
	params.ChallengeActivity = ChallengeActivity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Challenge_Renderer.WBP_Challenge_Renderer_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Challenge_Renderer_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Challenge_Renderer.WBP_Challenge_Renderer_C.PreConstruct");

	UWBP_Challenge_Renderer_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Challenge_Renderer.WBP_Challenge_Renderer_C.BndEvt__RerollButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_Challenge_Renderer_C::BndEvt__RerollButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Challenge_Renderer.WBP_Challenge_Renderer_C.BndEvt__RerollButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UWBP_Challenge_Renderer_C_BndEvt__RerollButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Challenge_Renderer.WBP_Challenge_Renderer_C.BndEvt__RerollButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_Challenge_Renderer_C::BndEvt__RerollButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Challenge_Renderer.WBP_Challenge_Renderer_C.BndEvt__RerollButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");

	UWBP_Challenge_Renderer_C_BndEvt__RerollButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Challenge_Renderer.WBP_Challenge_Renderer_C.BndEvt__RerollButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_Challenge_Renderer_C::BndEvt__RerollButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Challenge_Renderer.WBP_Challenge_Renderer_C.BndEvt__RerollButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");

	UWBP_Challenge_Renderer_C_BndEvt__RerollButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Challenge_Renderer.WBP_Challenge_Renderer_C.BndEvt__HoverButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_Challenge_Renderer_C::BndEvt__HoverButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Challenge_Renderer.WBP_Challenge_Renderer_C.BndEvt__HoverButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature");

	UWBP_Challenge_Renderer_C_BndEvt__HoverButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Challenge_Renderer.WBP_Challenge_Renderer_C.GamepadHover
// (Event, Public, BlueprintEvent)

void UWBP_Challenge_Renderer_C::GamepadHover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Challenge_Renderer.WBP_Challenge_Renderer_C.GamepadHover");

	UWBP_Challenge_Renderer_C_GamepadHover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Challenge_Renderer.WBP_Challenge_Renderer_C.GamepadUnhover
// (Event, Public, BlueprintEvent)

void UWBP_Challenge_Renderer_C::GamepadUnhover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Challenge_Renderer.WBP_Challenge_Renderer_C.GamepadUnhover");

	UWBP_Challenge_Renderer_C_GamepadUnhover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Challenge_Renderer.WBP_Challenge_Renderer_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APUMG_HUD**              HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Challenge_Renderer_C::InitializeWidget(class APUMG_HUD** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Challenge_Renderer.WBP_Challenge_Renderer_C.InitializeWidget");

	UWBP_Challenge_Renderer_C_InitializeWidget_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Challenge_Renderer.WBP_Challenge_Renderer_C.BndEvt__HoverButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_Challenge_Renderer_C::BndEvt__HoverButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Challenge_Renderer.WBP_Challenge_Renderer_C.BndEvt__HoverButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UWBP_Challenge_Renderer_C_BndEvt__HoverButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Challenge_Renderer.WBP_Challenge_Renderer_C.BndEvt__HoverButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_Challenge_Renderer_C::BndEvt__HoverButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Challenge_Renderer.WBP_Challenge_Renderer_C.BndEvt__HoverButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UWBP_Challenge_Renderer_C_BndEvt__HoverButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Challenge_Renderer.WBP_Challenge_Renderer_C.ExecuteUbergraph_WBP_Challenge_Renderer
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Challenge_Renderer_C::ExecuteUbergraph_WBP_Challenge_Renderer(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Challenge_Renderer.WBP_Challenge_Renderer_C.ExecuteUbergraph_WBP_Challenge_Renderer");

	UWBP_Challenge_Renderer_C_ExecuteUbergraph_WBP_Challenge_Renderer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Challenge_Renderer.WBP_Challenge_Renderer_C.DisplayRerollPrompt__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Show                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Challenge_Renderer_C::DisplayRerollPrompt__DelegateSignature(bool* Show)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Challenge_Renderer.WBP_Challenge_Renderer_C.DisplayRerollPrompt__DelegateSignature");

	UWBP_Challenge_Renderer_C_DisplayRerollPrompt__DelegateSignature_Params params;
	params.Show = Show;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function PopupButton.PopupButton_C.NavigateBack
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPopupButton_C::NavigateBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function PopupButton.PopupButton_C.NavigateBack");

	UPopupButton_C_NavigateBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PopupButton.PopupButton_C.ToggleGamepadCallout
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Show                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPopupButton_C::ToggleGamepadCallout(bool* Show)
{
	static auto fn = UObject::FindObject<UFunction>("Function PopupButton.PopupButton_C.ToggleGamepadCallout");

	UPopupButton_C_ToggleGamepadCallout_Params params;
	params.Show = Show;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PopupButton.PopupButton_C.SetDisplayText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  InText                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UPopupButton_C::SetDisplayText(struct FText* InText)
{
	static auto fn = UObject::FindObject<UFunction>("Function PopupButton.PopupButton_C.SetDisplayText");

	UPopupButton_C_SetDisplayText_Params params;
	params.InText = InText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PopupButton.PopupButton_C.SetButtonCalloutImage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  InActionName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPopupButton_C::SetButtonCalloutImage(struct FName* InActionName)
{
	static auto fn = UObject::FindObject<UFunction>("Function PopupButton.PopupButton_C.SetButtonCalloutImage");

	UPopupButton_C_SetButtonCalloutImage_Params params;
	params.InActionName = InActionName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PopupButton.PopupButton_C.SetFontSize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           In_Font_Size                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPopupButton_C::SetFontSize(int* In_Font_Size)
{
	static auto fn = UObject::FindObject<UFunction>("Function PopupButton.PopupButton_C.SetFontSize");

	UPopupButton_C_SetFontSize_Params params;
	params.In_Font_Size = In_Font_Size;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PopupButton.PopupButton_C.NavigateConfirm
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPopupButton_C::NavigateConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function PopupButton.PopupButton_C.NavigateConfirm");

	UPopupButton_C_NavigateConfirm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PopupButton.PopupButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPopupButton_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function PopupButton.PopupButton_C.PreConstruct");

	UPopupButton_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PopupButton.PopupButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UPopupButton_C::BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PopupButton.PopupButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UPopupButton_C_BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PopupButton.PopupButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UPopupButton_C::BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PopupButton.PopupButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UPopupButton_C_BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PopupButton.PopupButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UPopupButton_C::BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PopupButton.PopupButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UPopupButton_C_BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PopupButton.PopupButton_C.GamepadHover
// (Event, Public, BlueprintEvent)

void UPopupButton_C::GamepadHover()
{
	static auto fn = UObject::FindObject<UFunction>("Function PopupButton.PopupButton_C.GamepadHover");

	UPopupButton_C_GamepadHover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PopupButton.PopupButton_C.GamepadUnhover
// (Event, Public, BlueprintEvent)

void UPopupButton_C::GamepadUnhover()
{
	static auto fn = UObject::FindObject<UFunction>("Function PopupButton.PopupButton_C.GamepadUnhover");

	UPopupButton_C_GamepadUnhover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PopupButton.PopupButton_C.GamepadPress
// (BlueprintCallable, BlueprintEvent)

void UPopupButton_C::GamepadPress()
{
	static auto fn = UObject::FindObject<UFunction>("Function PopupButton.PopupButton_C.GamepadPress");

	UPopupButton_C_GamepadPress_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PopupButton.PopupButton_C.OnNavBack
// (BlueprintCallable, BlueprintEvent)

void UPopupButton_C::OnNavBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function PopupButton.PopupButton_C.OnNavBack");

	UPopupButton_C_OnNavBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PopupButton.PopupButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPopupButton_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function PopupButton.PopupButton_C.Construct");

	UPopupButton_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PopupButton.PopupButton_C.ExecuteUbergraph_PopupButton
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPopupButton_C::ExecuteUbergraph_PopupButton(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PopupButton.PopupButton_C.ExecuteUbergraph_PopupButton");

	UPopupButton_C_ExecuteUbergraph_PopupButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PopupButton.PopupButton_C.OnNavigateBackAction__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UPopupButton_C::OnNavigateBackAction__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PopupButton.PopupButton_C.OnNavigateBackAction__DelegateSignature");

	UPopupButton_C_OnNavigateBackAction__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PopupButton.PopupButton_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPopupButton_C::OnClicked__DelegateSignature(int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function PopupButton.PopupButton_C.OnClicked__DelegateSignature");

	UPopupButton_C_OnClicked__DelegateSignature_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

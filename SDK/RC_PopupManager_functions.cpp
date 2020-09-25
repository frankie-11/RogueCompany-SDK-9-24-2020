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

// Function PopupManager.PopupManager_C.OnKeyUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UPopupManager_C::OnKeyUp(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function PopupManager.PopupManager_C.OnKeyUp");

	UPopupManager_C_OnKeyUp_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PopupManager.PopupManager_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UPopupManager_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function PopupManager.PopupManager_C.OnKeyDown");

	UPopupManager_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PopupManager.PopupManager_C.SetupSubHeaderText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  NewSubHeaderText               (BlueprintVisible, BlueprintReadOnly, Parm)

void UPopupManager_C::SetupSubHeaderText(struct FText* NewSubHeaderText)
{
	static auto fn = UObject::FindObject<UFunction>("Function PopupManager.PopupManager_C.SetupSubHeaderText");

	UPopupManager_C_SetupSubHeaderText_Params params;
	params.NewSubHeaderText = NewSubHeaderText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PopupManager.PopupManager_C.SetupButtons
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FPUMG_PopupButtonConfig> ButtonInfo                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UPopupManager_C::SetupButtons(TArray<struct FPUMG_PopupButtonConfig>* ButtonInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function PopupManager.PopupManager_C.SetupButtons");

	UPopupManager_C_SetupButtons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ButtonInfo != nullptr)
		*ButtonInfo = params.ButtonInfo;
}


// Function PopupManager.PopupManager_C.SetupTextEntry
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          HasTextEntry                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText*                  DefaultEntryText               (BlueprintVisible, BlueprintReadOnly, Parm)

void UPopupManager_C::SetupTextEntry(bool* HasTextEntry, struct FText* DefaultEntryText)
{
	static auto fn = UObject::FindObject<UFunction>("Function PopupManager.PopupManager_C.SetupTextEntry");

	UPopupManager_C_SetupTextEntry_Params params;
	params.HasTextEntry = HasTextEntry;
	params.DefaultEntryText = DefaultEntryText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PopupManager.PopupManager_C.SetupWarningText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  NewWarningText                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UPopupManager_C::SetupWarningText(struct FText* NewWarningText)
{
	static auto fn = UObject::FindObject<UFunction>("Function PopupManager.PopupManager_C.SetupWarningText");

	UPopupManager_C_SetupWarningText_Params params;
	params.NewWarningText = NewWarningText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PopupManager.PopupManager_C.SetupDescription
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  NewDescText                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UPopupManager_C::SetupDescription(struct FText* NewDescText)
{
	static auto fn = UObject::FindObject<UFunction>("Function PopupManager.PopupManager_C.SetupDescription");

	UPopupManager_C_SetupDescription_Params params;
	params.NewDescText = NewDescText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PopupManager.PopupManager_C.SetupHeader
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  NewHeaderText                  (BlueprintVisible, BlueprintReadOnly, Parm)

void UPopupManager_C::SetupHeader(struct FText* NewHeaderText)
{
	static auto fn = UObject::FindObject<UFunction>("Function PopupManager.PopupManager_C.SetupHeader");

	UPopupManager_C_SetupHeader_Params params;
	params.NewHeaderText = NewHeaderText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PopupManager.PopupManager_C.NavigateBack
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPopupManager_C::NavigateBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function PopupManager.PopupManager_C.NavigateBack");

	UPopupManager_C_NavigateBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PopupManager.PopupManager_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPopupManager_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function PopupManager.PopupManager_C.Construct");

	UPopupManager_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PopupManager.PopupManager_C.ShowPopup
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPUMG_PopupConfig*      popupData                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UPopupManager_C::ShowPopup(struct FPUMG_PopupConfig* popupData)
{
	static auto fn = UObject::FindObject<UFunction>("Function PopupManager.PopupManager_C.ShowPopup");

	UPopupManager_C_ShowPopup_Params params;
	params.popupData = popupData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PopupManager.PopupManager_C.HidePopup
// (Event, Protected, BlueprintEvent)

void UPopupManager_C::HidePopup()
{
	static auto fn = UObject::FindObject<UFunction>("Function PopupManager.PopupManager_C.HidePopup");

	UPopupManager_C_HidePopup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PopupManager.PopupManager_C.ButtonPressed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget**                Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UPopupManager_C::ButtonPressed(class UWidget** Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function PopupManager.PopupManager_C.ButtonPressed");

	UPopupManager_C_ButtonPressed_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PopupManager.PopupManager_C.InitializeWidgetNavigation
// (Event, Public, BlueprintEvent)

void UPopupManager_C::InitializeWidgetNavigation()
{
	static auto fn = UObject::FindObject<UFunction>("Function PopupManager.PopupManager_C.InitializeWidgetNavigation");

	UPopupManager_C_InitializeWidgetNavigation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PopupManager.PopupManager_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APUMG_HUD**              HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPopupManager_C::InitializeWidget(class APUMG_HUD** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function PopupManager.PopupManager_C.InitializeWidget");

	UPopupManager_C_InitializeWidget_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PopupManager.PopupManager_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UPopupManager_C::BndEvt__CancelButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function PopupManager.PopupManager_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UPopupManager_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PopupManager.PopupManager_C.HandleCancelButtonClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget**                InIndex                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UPopupManager_C::HandleCancelButtonClicked(class UWidget** InIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function PopupManager.PopupManager_C.HandleCancelButtonClicked");

	UPopupManager_C_HandleCancelButtonClicked_Params params;
	params.InIndex = InIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PopupManager.PopupManager_C.OnShown
// (Event, Public, BlueprintEvent)

void UPopupManager_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function PopupManager.PopupManager_C.OnShown");

	UPopupManager_C_OnShown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PopupManager.PopupManager_C.OnHide
// (Event, Public, BlueprintEvent)

void UPopupManager_C::OnHide()
{
	static auto fn = UObject::FindObject<UFunction>("Function PopupManager.PopupManager_C.OnHide");

	UPopupManager_C_OnHide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PopupManager.PopupManager_C.OnBackButton
// (BlueprintCallable, BlueprintEvent)

void UPopupManager_C::OnBackButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function PopupManager.PopupManager_C.OnBackButton");

	UPopupManager_C_OnBackButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PopupManager.PopupManager_C.ExecuteUbergraph_PopupManager
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPopupManager_C::ExecuteUbergraph_PopupManager(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PopupManager.PopupManager_C.ExecuteUbergraph_PopupManager");

	UPopupManager_C_ExecuteUbergraph_PopupManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

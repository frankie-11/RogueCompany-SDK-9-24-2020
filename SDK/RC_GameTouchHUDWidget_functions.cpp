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

// Function GameTouchHUDWidget.GameTouchHUDWidget_C.TriggerInputAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  InActionName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EInputEvent>*      InInputEvent                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameTouchHUDWidget_C::TriggerInputAction(struct FName* InActionName, TEnumAsByte<EInputEvent>* InInputEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTouchHUDWidget.GameTouchHUDWidget_C.TriggerInputAction");

	UGameTouchHUDWidget_C_TriggerInputAction_Params params;
	params.InActionName = InActionName;
	params.InInputEvent = InInputEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameTouchHUDWidget.GameTouchHUDWidget_C.GetWidgetBounds
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector2D               TopLeft                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               BottomRight                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGameTouchHUDWidget_C::GetWidgetBounds(class UWidget** Widget, struct FVector2D* TopLeft, struct FVector2D* BottomRight)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTouchHUDWidget.GameTouchHUDWidget_C.GetWidgetBounds");

	UGameTouchHUDWidget_C_GetWidgetBounds_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TopLeft != nullptr)
		*TopLeft = params.TopLeft;
	if (BottomRight != nullptr)
		*BottomRight = params.BottomRight;
}


// Function GameTouchHUDWidget.GameTouchHUDWidget_C.IsPointOverWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D*              ScreenPoint                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           IsPointOverWidget              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGameTouchHUDWidget_C::IsPointOverWidget(struct FVector2D* ScreenPoint, class UWidget** Widget, bool* IsPointOverWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTouchHUDWidget.GameTouchHUDWidget_C.IsPointOverWidget");

	UGameTouchHUDWidget_C_IsPointOverWidget_Params params;
	params.ScreenPoint = ScreenPoint;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsPointOverWidget != nullptr)
		*IsPointOverWidget = params.IsPointOverWidget;
}


// Function GameTouchHUDWidget.GameTouchHUDWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UGameTouchHUDWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTouchHUDWidget.GameTouchHUDWidget_C.Construct");

	UGameTouchHUDWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameTouchHUDWidget.GameTouchHUDWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameTouchHUDWidget_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTouchHUDWidget.GameTouchHUDWidget_C.Tick");

	UGameTouchHUDWidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameTouchHUDWidget.GameTouchHUDWidget_C.BndEvt__BtnAbility_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UGameTouchHUDWidget_C::BndEvt__BtnAbility_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTouchHUDWidget.GameTouchHUDWidget_C.BndEvt__BtnAbility_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature");

	UGameTouchHUDWidget_C_BndEvt__BtnAbility_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameTouchHUDWidget.GameTouchHUDWidget_C.BndEvt__BtnAbility_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UGameTouchHUDWidget_C::BndEvt__BtnAbility_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTouchHUDWidget.GameTouchHUDWidget_C.BndEvt__BtnAbility_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature");

	UGameTouchHUDWidget_C_BndEvt__BtnAbility_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameTouchHUDWidget.GameTouchHUDWidget_C.BndEvt__BtnWeaponSwap_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UGameTouchHUDWidget_C::BndEvt__BtnWeaponSwap_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTouchHUDWidget.GameTouchHUDWidget_C.BndEvt__BtnWeaponSwap_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature");

	UGameTouchHUDWidget_C_BndEvt__BtnWeaponSwap_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameTouchHUDWidget.GameTouchHUDWidget_C.BndEvt__BtnWeaponSwap_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UGameTouchHUDWidget_C::BndEvt__BtnWeaponSwap_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTouchHUDWidget.GameTouchHUDWidget_C.BndEvt__BtnWeaponSwap_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature");

	UGameTouchHUDWidget_C_BndEvt__BtnWeaponSwap_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameTouchHUDWidget.GameTouchHUDWidget_C.BndEvt__BtnStore_K2Node_ComponentBoundEvent_12_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UGameTouchHUDWidget_C::BndEvt__BtnStore_K2Node_ComponentBoundEvent_12_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTouchHUDWidget.GameTouchHUDWidget_C.BndEvt__BtnStore_K2Node_ComponentBoundEvent_12_OnButtonPressedEvent__DelegateSignature");

	UGameTouchHUDWidget_C_BndEvt__BtnStore_K2Node_ComponentBoundEvent_12_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameTouchHUDWidget.GameTouchHUDWidget_C.BndEvt__BtnStore_K2Node_ComponentBoundEvent_13_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UGameTouchHUDWidget_C::BndEvt__BtnStore_K2Node_ComponentBoundEvent_13_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTouchHUDWidget.GameTouchHUDWidget_C.BndEvt__BtnStore_K2Node_ComponentBoundEvent_13_OnButtonReleasedEvent__DelegateSignature");

	UGameTouchHUDWidget_C_BndEvt__BtnStore_K2Node_ComponentBoundEvent_13_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameTouchHUDWidget.GameTouchHUDWidget_C.BndEvt__BtnScoreboard_K2Node_ComponentBoundEvent_14_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UGameTouchHUDWidget_C::BndEvt__BtnScoreboard_K2Node_ComponentBoundEvent_14_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTouchHUDWidget.GameTouchHUDWidget_C.BndEvt__BtnScoreboard_K2Node_ComponentBoundEvent_14_OnButtonPressedEvent__DelegateSignature");

	UGameTouchHUDWidget_C_BndEvt__BtnScoreboard_K2Node_ComponentBoundEvent_14_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameTouchHUDWidget.GameTouchHUDWidget_C.BndEvt__BtnMenu_K2Node_ComponentBoundEvent_16_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UGameTouchHUDWidget_C::BndEvt__BtnMenu_K2Node_ComponentBoundEvent_16_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTouchHUDWidget.GameTouchHUDWidget_C.BndEvt__BtnMenu_K2Node_ComponentBoundEvent_16_OnButtonPressedEvent__DelegateSignature");

	UGameTouchHUDWidget_C_BndEvt__BtnMenu_K2Node_ComponentBoundEvent_16_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameTouchHUDWidget.GameTouchHUDWidget_C.BndEvt__BtnMenu_K2Node_ComponentBoundEvent_17_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UGameTouchHUDWidget_C::BndEvt__BtnMenu_K2Node_ComponentBoundEvent_17_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTouchHUDWidget.GameTouchHUDWidget_C.BndEvt__BtnMenu_K2Node_ComponentBoundEvent_17_OnButtonReleasedEvent__DelegateSignature");

	UGameTouchHUDWidget_C_BndEvt__BtnMenu_K2Node_ComponentBoundEvent_17_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameTouchHUDWidget.GameTouchHUDWidget_C.OnHoveredInteractableChanged_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 HoverTarget                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameTouchHUDWidget_C::OnHoveredInteractableChanged_Event_1(class AActor** HoverTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTouchHUDWidget.GameTouchHUDWidget_C.OnHoveredInteractableChanged_Event_1");

	UGameTouchHUDWidget_C_OnHoveredInteractableChanged_Event_1_Params params;
	params.HoverTarget = HoverTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameTouchHUDWidget.GameTouchHUDWidget_C.BndEvt__BtnInteract_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UGameTouchHUDWidget_C::BndEvt__BtnInteract_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTouchHUDWidget.GameTouchHUDWidget_C.BndEvt__BtnInteract_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature");

	UGameTouchHUDWidget_C_BndEvt__BtnInteract_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameTouchHUDWidget.GameTouchHUDWidget_C.BndEvt__BtnInteract_K2Node_ComponentBoundEvent_7_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UGameTouchHUDWidget_C::BndEvt__BtnInteract_K2Node_ComponentBoundEvent_7_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTouchHUDWidget.GameTouchHUDWidget_C.BndEvt__BtnInteract_K2Node_ComponentBoundEvent_7_OnButtonReleasedEvent__DelegateSignature");

	UGameTouchHUDWidget_C_BndEvt__BtnInteract_K2Node_ComponentBoundEvent_7_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameTouchHUDWidget.GameTouchHUDWidget_C.OnInputStateChanged_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EPGAME_INPUT_STATE>* InputState                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameTouchHUDWidget_C::OnInputStateChanged_Event_1(TEnumAsByte<EPGAME_INPUT_STATE>* InputState)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTouchHUDWidget.GameTouchHUDWidget_C.OnInputStateChanged_Event_1");

	UGameTouchHUDWidget_C_OnInputStateChanged_Event_1_Params params;
	params.InputState = InputState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameTouchHUDWidget.GameTouchHUDWidget_C.BndEvt__OpenMapButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UGameTouchHUDWidget_C::BndEvt__OpenMapButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTouchHUDWidget.GameTouchHUDWidget_C.BndEvt__OpenMapButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature");

	UGameTouchHUDWidget_C_BndEvt__OpenMapButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameTouchHUDWidget.GameTouchHUDWidget_C.ExecuteUbergraph_GameTouchHUDWidget
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameTouchHUDWidget_C::ExecuteUbergraph_GameTouchHUDWidget(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTouchHUDWidget.GameTouchHUDWidget_C.ExecuteUbergraph_GameTouchHUDWidget");

	UGameTouchHUDWidget_C_ExecuteUbergraph_GameTouchHUDWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

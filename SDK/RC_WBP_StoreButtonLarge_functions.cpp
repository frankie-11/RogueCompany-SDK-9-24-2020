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

// Function WBP_StoreButtonLarge.WBP_StoreButtonLarge_C.OnRotationTimerTick
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_StoreButtonLarge_C::OnRotationTimerTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreButtonLarge.WBP_StoreButtonLarge_C.OnRotationTimerTick");

	UWBP_StoreButtonLarge_C_OnRotationTimerTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StoreButtonLarge.WBP_StoreButtonLarge_C.OnInputStateChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EPGAME_INPUT_STATE>* InputState                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_StoreButtonLarge_C::OnInputStateChanged(TEnumAsByte<EPGAME_INPUT_STATE>* InputState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreButtonLarge.WBP_StoreButtonLarge_C.OnInputStateChanged");

	UWBP_StoreButtonLarge_C_OnInputStateChanged_Params params;
	params.InputState = InputState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StoreButtonLarge.WBP_StoreButtonLarge_C.NavigateConfirm
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWBP_StoreButtonLarge_C::NavigateConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreButtonLarge.WBP_StoreButtonLarge_C.NavigateConfirm");

	UWBP_StoreButtonLarge_C_NavigateConfirm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_StoreButtonLarge.WBP_StoreButtonLarge_C.DisplayStoreItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPUMG_StoreItem**        StoreItem                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Animate                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_StoreButtonLarge_C::DisplayStoreItem(class UPUMG_StoreItem** StoreItem, bool* Animate)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreButtonLarge.WBP_StoreButtonLarge_C.DisplayStoreItem");

	UWBP_StoreButtonLarge_C_DisplayStoreItem_Params params;
	params.StoreItem = StoreItem;
	params.Animate = Animate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StoreButtonLarge.WBP_StoreButtonLarge_C.SetStoreItems
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UKSStoreSectionItem**    StoreSection                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_StoreButtonLarge_C::SetStoreItems(class UKSStoreSectionItem** StoreSection)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreButtonLarge.WBP_StoreButtonLarge_C.SetStoreItems");

	UWBP_StoreButtonLarge_C_SetStoreItems_Params params;
	params.StoreSection = StoreSection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StoreButtonLarge.WBP_StoreButtonLarge_C.GamepadUnhover
// (Event, Public, BlueprintEvent)

void UWBP_StoreButtonLarge_C::GamepadUnhover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreButtonLarge.WBP_StoreButtonLarge_C.GamepadUnhover");

	UWBP_StoreButtonLarge_C_GamepadUnhover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StoreButtonLarge.WBP_StoreButtonLarge_C.OnGamepadConfirm
// (BlueprintCallable, BlueprintEvent)

void UWBP_StoreButtonLarge_C::OnGamepadConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreButtonLarge.WBP_StoreButtonLarge_C.OnGamepadConfirm");

	UWBP_StoreButtonLarge_C_OnGamepadConfirm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StoreButtonLarge.WBP_StoreButtonLarge_C.BndEvt__WBP_StorePanelButton_K2Node_ComponentBoundEvent_3_OnBtnClicked__DelegateSignature
// (BlueprintEvent)

void UWBP_StoreButtonLarge_C::BndEvt__WBP_StorePanelButton_K2Node_ComponentBoundEvent_3_OnBtnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreButtonLarge.WBP_StoreButtonLarge_C.BndEvt__WBP_StorePanelButton_K2Node_ComponentBoundEvent_3_OnBtnClicked__DelegateSignature");

	UWBP_StoreButtonLarge_C_BndEvt__WBP_StorePanelButton_K2Node_ComponentBoundEvent_3_OnBtnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StoreButtonLarge.WBP_StoreButtonLarge_C.BndEvt__WBP_StorePanelButton_K2Node_ComponentBoundEvent_4_OnBtnHovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool*                          IsGamepad                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_StoreButtonLarge_C::BndEvt__WBP_StorePanelButton_K2Node_ComponentBoundEvent_4_OnBtnHovered__DelegateSignature(bool* IsGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreButtonLarge.WBP_StoreButtonLarge_C.BndEvt__WBP_StorePanelButton_K2Node_ComponentBoundEvent_4_OnBtnHovered__DelegateSignature");

	UWBP_StoreButtonLarge_C_BndEvt__WBP_StorePanelButton_K2Node_ComponentBoundEvent_4_OnBtnHovered__DelegateSignature_Params params;
	params.IsGamepad = IsGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StoreButtonLarge.WBP_StoreButtonLarge_C.BndEvt__WBP_StorePanelButton_K2Node_ComponentBoundEvent_5_OnBtnUnhovered__DelegateSignature
// (BlueprintEvent)

void UWBP_StoreButtonLarge_C::BndEvt__WBP_StorePanelButton_K2Node_ComponentBoundEvent_5_OnBtnUnhovered__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreButtonLarge.WBP_StoreButtonLarge_C.BndEvt__WBP_StorePanelButton_K2Node_ComponentBoundEvent_5_OnBtnUnhovered__DelegateSignature");

	UWBP_StoreButtonLarge_C_BndEvt__WBP_StorePanelButton_K2Node_ComponentBoundEvent_5_OnBtnUnhovered__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StoreButtonLarge.WBP_StoreButtonLarge_C.OnComparePressed
// (BlueprintCallable, BlueprintEvent)

void UWBP_StoreButtonLarge_C::OnComparePressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreButtonLarge.WBP_StoreButtonLarge_C.OnComparePressed");

	UWBP_StoreButtonLarge_C_OnComparePressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StoreButtonLarge.WBP_StoreButtonLarge_C.BndEvt__CompareButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_StoreButtonLarge_C::BndEvt__CompareButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreButtonLarge.WBP_StoreButtonLarge_C.BndEvt__CompareButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UWBP_StoreButtonLarge_C_BndEvt__CompareButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StoreButtonLarge.WBP_StoreButtonLarge_C.BndEvt__CompareButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_StoreButtonLarge_C::BndEvt__CompareButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreButtonLarge.WBP_StoreButtonLarge_C.BndEvt__CompareButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UWBP_StoreButtonLarge_C_BndEvt__CompareButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StoreButtonLarge.WBP_StoreButtonLarge_C.BndEvt__CompareButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_StoreButtonLarge_C::BndEvt__CompareButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreButtonLarge.WBP_StoreButtonLarge_C.BndEvt__CompareButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UWBP_StoreButtonLarge_C_BndEvt__CompareButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StoreButtonLarge.WBP_StoreButtonLarge_C.GamepadHover
// (Event, Public, BlueprintEvent)

void UWBP_StoreButtonLarge_C::GamepadHover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreButtonLarge.WBP_StoreButtonLarge_C.GamepadHover");

	UWBP_StoreButtonLarge_C_GamepadHover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StoreButtonLarge.WBP_StoreButtonLarge_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_StoreButtonLarge_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreButtonLarge.WBP_StoreButtonLarge_C.Construct");

	UWBP_StoreButtonLarge_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StoreButtonLarge.WBP_StoreButtonLarge_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_StoreButtonLarge_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreButtonLarge.WBP_StoreButtonLarge_C.Tick");

	UWBP_StoreButtonLarge_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StoreButtonLarge.WBP_StoreButtonLarge_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APUMG_HUD**              HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_StoreButtonLarge_C::InitializeWidget(class APUMG_HUD** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreButtonLarge.WBP_StoreButtonLarge_C.InitializeWidget");

	UWBP_StoreButtonLarge_C_InitializeWidget_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StoreButtonLarge.WBP_StoreButtonLarge_C.ExecuteUbergraph_WBP_StoreButtonLarge
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_StoreButtonLarge_C::ExecuteUbergraph_WBP_StoreButtonLarge(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreButtonLarge.WBP_StoreButtonLarge_C.ExecuteUbergraph_WBP_StoreButtonLarge");

	UWBP_StoreButtonLarge_C_ExecuteUbergraph_WBP_StoreButtonLarge_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

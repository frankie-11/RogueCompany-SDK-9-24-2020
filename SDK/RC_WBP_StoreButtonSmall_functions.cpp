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

// Function WBP_StoreButtonSmall.WBP_StoreButtonSmall_C.OnRotationTimerTick
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_StoreButtonSmall_C::OnRotationTimerTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreButtonSmall.WBP_StoreButtonSmall_C.OnRotationTimerTick");

	UWBP_StoreButtonSmall_C_OnRotationTimerTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StoreButtonSmall.WBP_StoreButtonSmall_C.NavigateConfirm
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWBP_StoreButtonSmall_C::NavigateConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreButtonSmall.WBP_StoreButtonSmall_C.NavigateConfirm");

	UWBP_StoreButtonSmall_C_NavigateConfirm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_StoreButtonSmall.WBP_StoreButtonSmall_C.DisplayStoreItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPUMG_StoreItem**        StoreItem                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Animate                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_StoreButtonSmall_C::DisplayStoreItem(class UPUMG_StoreItem** StoreItem, bool* Animate)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreButtonSmall.WBP_StoreButtonSmall_C.DisplayStoreItem");

	UWBP_StoreButtonSmall_C_DisplayStoreItem_Params params;
	params.StoreItem = StoreItem;
	params.Animate = Animate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StoreButtonSmall.WBP_StoreButtonSmall_C.SetStoreItems
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UKSStoreSectionItem**    StoreItem                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_StoreButtonSmall_C::SetStoreItems(class UKSStoreSectionItem** StoreItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreButtonSmall.WBP_StoreButtonSmall_C.SetStoreItems");

	UWBP_StoreButtonSmall_C_SetStoreItems_Params params;
	params.StoreItem = StoreItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StoreButtonSmall.WBP_StoreButtonSmall_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_StoreButtonSmall_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreButtonSmall.WBP_StoreButtonSmall_C.Construct");

	UWBP_StoreButtonSmall_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StoreButtonSmall.WBP_StoreButtonSmall_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_StoreButtonSmall_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreButtonSmall.WBP_StoreButtonSmall_C.Tick");

	UWBP_StoreButtonSmall_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StoreButtonSmall.WBP_StoreButtonSmall_C.GamepadHover
// (Event, Public, BlueprintEvent)

void UWBP_StoreButtonSmall_C::GamepadHover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreButtonSmall.WBP_StoreButtonSmall_C.GamepadHover");

	UWBP_StoreButtonSmall_C_GamepadHover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StoreButtonSmall.WBP_StoreButtonSmall_C.GamepadUnhover
// (Event, Public, BlueprintEvent)

void UWBP_StoreButtonSmall_C::GamepadUnhover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreButtonSmall.WBP_StoreButtonSmall_C.GamepadUnhover");

	UWBP_StoreButtonSmall_C_GamepadUnhover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StoreButtonSmall.WBP_StoreButtonSmall_C.OnGamepadConfirm
// (BlueprintCallable, BlueprintEvent)

void UWBP_StoreButtonSmall_C::OnGamepadConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreButtonSmall.WBP_StoreButtonSmall_C.OnGamepadConfirm");

	UWBP_StoreButtonSmall_C_OnGamepadConfirm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StoreButtonSmall.WBP_StoreButtonSmall_C.BndEvt__WBP_StorePanelButton_K2Node_ComponentBoundEvent_3_OnBtnClicked__DelegateSignature
// (BlueprintEvent)

void UWBP_StoreButtonSmall_C::BndEvt__WBP_StorePanelButton_K2Node_ComponentBoundEvent_3_OnBtnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreButtonSmall.WBP_StoreButtonSmall_C.BndEvt__WBP_StorePanelButton_K2Node_ComponentBoundEvent_3_OnBtnClicked__DelegateSignature");

	UWBP_StoreButtonSmall_C_BndEvt__WBP_StorePanelButton_K2Node_ComponentBoundEvent_3_OnBtnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StoreButtonSmall.WBP_StoreButtonSmall_C.BndEvt__WBP_StorePanelButton_K2Node_ComponentBoundEvent_4_OnBtnHovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool*                          IsGamepad                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_StoreButtonSmall_C::BndEvt__WBP_StorePanelButton_K2Node_ComponentBoundEvent_4_OnBtnHovered__DelegateSignature(bool* IsGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreButtonSmall.WBP_StoreButtonSmall_C.BndEvt__WBP_StorePanelButton_K2Node_ComponentBoundEvent_4_OnBtnHovered__DelegateSignature");

	UWBP_StoreButtonSmall_C_BndEvt__WBP_StorePanelButton_K2Node_ComponentBoundEvent_4_OnBtnHovered__DelegateSignature_Params params;
	params.IsGamepad = IsGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StoreButtonSmall.WBP_StoreButtonSmall_C.BndEvt__WBP_StorePanelButton_K2Node_ComponentBoundEvent_5_OnBtnUnhovered__DelegateSignature
// (BlueprintEvent)

void UWBP_StoreButtonSmall_C::BndEvt__WBP_StorePanelButton_K2Node_ComponentBoundEvent_5_OnBtnUnhovered__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreButtonSmall.WBP_StoreButtonSmall_C.BndEvt__WBP_StorePanelButton_K2Node_ComponentBoundEvent_5_OnBtnUnhovered__DelegateSignature");

	UWBP_StoreButtonSmall_C_BndEvt__WBP_StorePanelButton_K2Node_ComponentBoundEvent_5_OnBtnUnhovered__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StoreButtonSmall.WBP_StoreButtonSmall_C.ExecuteUbergraph_WBP_StoreButtonSmall
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_StoreButtonSmall_C::ExecuteUbergraph_WBP_StoreButtonSmall(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreButtonSmall.WBP_StoreButtonSmall_C.ExecuteUbergraph_WBP_StoreButtonSmall");

	UWBP_StoreButtonSmall_C_ExecuteUbergraph_WBP_StoreButtonSmall_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

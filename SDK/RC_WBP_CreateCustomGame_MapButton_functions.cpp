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

// Function WBP_CreateCustomGame_MapButton.WBP_CreateCustomGame_MapButton_C.NavigateConfirm
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWBP_CreateCustomGame_MapButton_C::NavigateConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CreateCustomGame_MapButton.WBP_CreateCustomGame_MapButton_C.NavigateConfirm");

	UWBP_CreateCustomGame_MapButton_C_NavigateConfirm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_CreateCustomGame_MapButton.WBP_CreateCustomGame_MapButton_C.SetMap
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           mapId                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FUIMapInfo*             MapInfo                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_CreateCustomGame_MapButton_C::SetMap(int* mapId, struct FUIMapInfo* MapInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CreateCustomGame_MapButton.WBP_CreateCustomGame_MapButton_C.SetMap");

	UWBP_CreateCustomGame_MapButton_C_SetMap_Params params;
	params.mapId = mapId;
	params.MapInfo = MapInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CreateCustomGame_MapButton.WBP_CreateCustomGame_MapButton_C.BndEvt__Button_195_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_CreateCustomGame_MapButton_C::BndEvt__Button_195_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CreateCustomGame_MapButton.WBP_CreateCustomGame_MapButton_C.BndEvt__Button_195_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UWBP_CreateCustomGame_MapButton_C_BndEvt__Button_195_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CreateCustomGame_MapButton.WBP_CreateCustomGame_MapButton_C.BndEvt__Button_195_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_CreateCustomGame_MapButton_C::BndEvt__Button_195_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CreateCustomGame_MapButton.WBP_CreateCustomGame_MapButton_C.BndEvt__Button_195_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UWBP_CreateCustomGame_MapButton_C_BndEvt__Button_195_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CreateCustomGame_MapButton.WBP_CreateCustomGame_MapButton_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APUMG_HUD**              HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_CreateCustomGame_MapButton_C::InitializeWidget(class APUMG_HUD** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CreateCustomGame_MapButton.WBP_CreateCustomGame_MapButton_C.InitializeWidget");

	UWBP_CreateCustomGame_MapButton_C_InitializeWidget_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CreateCustomGame_MapButton.WBP_CreateCustomGame_MapButton_C.GamepadHover
// (Event, Public, BlueprintEvent)

void UWBP_CreateCustomGame_MapButton_C::GamepadHover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CreateCustomGame_MapButton.WBP_CreateCustomGame_MapButton_C.GamepadHover");

	UWBP_CreateCustomGame_MapButton_C_GamepadHover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CreateCustomGame_MapButton.WBP_CreateCustomGame_MapButton_C.GamepadUnhover
// (Event, Public, BlueprintEvent)

void UWBP_CreateCustomGame_MapButton_C::GamepadUnhover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CreateCustomGame_MapButton.WBP_CreateCustomGame_MapButton_C.GamepadUnhover");

	UWBP_CreateCustomGame_MapButton_C_GamepadUnhover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CreateCustomGame_MapButton.WBP_CreateCustomGame_MapButton_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_CreateCustomGame_MapButton_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CreateCustomGame_MapButton.WBP_CreateCustomGame_MapButton_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UWBP_CreateCustomGame_MapButton_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CreateCustomGame_MapButton.WBP_CreateCustomGame_MapButton_C.OnGamepadConfirm
// (BlueprintCallable, BlueprintEvent)

void UWBP_CreateCustomGame_MapButton_C::OnGamepadConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CreateCustomGame_MapButton.WBP_CreateCustomGame_MapButton_C.OnGamepadConfirm");

	UWBP_CreateCustomGame_MapButton_C_OnGamepadConfirm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CreateCustomGame_MapButton.WBP_CreateCustomGame_MapButton_C.ExecuteUbergraph_WBP_CreateCustomGame_MapButton
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_CreateCustomGame_MapButton_C::ExecuteUbergraph_WBP_CreateCustomGame_MapButton(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CreateCustomGame_MapButton.WBP_CreateCustomGame_MapButton_C.ExecuteUbergraph_WBP_CreateCustomGame_MapButton");

	UWBP_CreateCustomGame_MapButton_C_ExecuteUbergraph_WBP_CreateCustomGame_MapButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CreateCustomGame_MapButton.WBP_CreateCustomGame_MapButton_C.OnMapSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           mapId                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_CreateCustomGame_MapButton_C::OnMapSelected__DelegateSignature(int* mapId)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CreateCustomGame_MapButton.WBP_CreateCustomGame_MapButton_C.OnMapSelected__DelegateSignature");

	UWBP_CreateCustomGame_MapButton_C_OnMapSelected__DelegateSignature_Params params;
	params.mapId = mapId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

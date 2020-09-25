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

// Function WBP_PartyModuleCardSlot.WBP_PartyModuleCardSlot_C.NavigateConfirm
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWBP_PartyModuleCardSlot_C::NavigateConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PartyModuleCardSlot.WBP_PartyModuleCardSlot_C.NavigateConfirm");

	UWBP_PartyModuleCardSlot_C_NavigateConfirm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_PartyModuleCardSlot.WBP_PartyModuleCardSlot_C.SetPlayerView
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPUMG_PlayerInfo**       Player_Info                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PartyModuleCardSlot_C::SetPlayerView(class UPUMG_PlayerInfo** Player_Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PartyModuleCardSlot.WBP_PartyModuleCardSlot_C.SetPlayerView");

	UWBP_PartyModuleCardSlot_C_SetPlayerView_Params params;
	params.Player_Info = Player_Info;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PartyModuleCardSlot.WBP_PartyModuleCardSlot_C.SetEmptyView
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_PartyModuleCardSlot_C::SetEmptyView()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PartyModuleCardSlot.WBP_PartyModuleCardSlot_C.SetEmptyView");

	UWBP_PartyModuleCardSlot_C_SetEmptyView_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PartyModuleCardSlot.WBP_PartyModuleCardSlot_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APUMG_HUD**              HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PartyModuleCardSlot_C::InitializeWidget(class APUMG_HUD** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PartyModuleCardSlot.WBP_PartyModuleCardSlot_C.InitializeWidget");

	UWBP_PartyModuleCardSlot_C_InitializeWidget_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PartyModuleCardSlot.WBP_PartyModuleCardSlot_C.BndEvt__EmptySlotGroup_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_PartyModuleCardSlot_C::BndEvt__EmptySlotGroup_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PartyModuleCardSlot.WBP_PartyModuleCardSlot_C.BndEvt__EmptySlotGroup_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UWBP_PartyModuleCardSlot_C_BndEvt__EmptySlotGroup_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PartyModuleCardSlot.WBP_PartyModuleCardSlot_C.BndEvt__EmptySlotGroup_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_PartyModuleCardSlot_C::BndEvt__EmptySlotGroup_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PartyModuleCardSlot.WBP_PartyModuleCardSlot_C.BndEvt__EmptySlotGroup_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UWBP_PartyModuleCardSlot_C_BndEvt__EmptySlotGroup_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PartyModuleCardSlot.WBP_PartyModuleCardSlot_C.BndEvt__EmptySlotGroup_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_PartyModuleCardSlot_C::BndEvt__EmptySlotGroup_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PartyModuleCardSlot.WBP_PartyModuleCardSlot_C.BndEvt__EmptySlotGroup_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UWBP_PartyModuleCardSlot_C_BndEvt__EmptySlotGroup_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PartyModuleCardSlot.WBP_PartyModuleCardSlot_C.GamepadHover
// (Event, Public, BlueprintEvent)

void UWBP_PartyModuleCardSlot_C::GamepadHover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PartyModuleCardSlot.WBP_PartyModuleCardSlot_C.GamepadHover");

	UWBP_PartyModuleCardSlot_C_GamepadHover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PartyModuleCardSlot.WBP_PartyModuleCardSlot_C.GamepadUnhover
// (Event, Public, BlueprintEvent)

void UWBP_PartyModuleCardSlot_C::GamepadUnhover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PartyModuleCardSlot.WBP_PartyModuleCardSlot_C.GamepadUnhover");

	UWBP_PartyModuleCardSlot_C_GamepadUnhover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PartyModuleCardSlot.WBP_PartyModuleCardSlot_C.Add Party Member Selected
// (BlueprintCallable, BlueprintEvent)

void UWBP_PartyModuleCardSlot_C::Add_Party_Member_Selected()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PartyModuleCardSlot.WBP_PartyModuleCardSlot_C.Add Party Member Selected");

	UWBP_PartyModuleCardSlot_C_Add_Party_Member_Selected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PartyModuleCardSlot.WBP_PartyModuleCardSlot_C.Add Party Member Hovered
// (BlueprintCallable, BlueprintEvent)

void UWBP_PartyModuleCardSlot_C::Add_Party_Member_Hovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PartyModuleCardSlot.WBP_PartyModuleCardSlot_C.Add Party Member Hovered");

	UWBP_PartyModuleCardSlot_C_Add_Party_Member_Hovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PartyModuleCardSlot.WBP_PartyModuleCardSlot_C.Add Party Member Unhovered
// (BlueprintCallable, BlueprintEvent)

void UWBP_PartyModuleCardSlot_C::Add_Party_Member_Unhovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PartyModuleCardSlot.WBP_PartyModuleCardSlot_C.Add Party Member Unhovered");

	UWBP_PartyModuleCardSlot_C_Add_Party_Member_Unhovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PartyModuleCardSlot.WBP_PartyModuleCardSlot_C.ExecuteUbergraph_WBP_PartyModuleCardSlot
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PartyModuleCardSlot_C::ExecuteUbergraph_WBP_PartyModuleCardSlot(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PartyModuleCardSlot.WBP_PartyModuleCardSlot_C.ExecuteUbergraph_WBP_PartyModuleCardSlot");

	UWBP_PartyModuleCardSlot_C_ExecuteUbergraph_WBP_PartyModuleCardSlot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

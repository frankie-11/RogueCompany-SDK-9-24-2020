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

// Function WBP_PlayerCustomizeScreen.WBP_PlayerCustomizeScreen_C.BndEvt__KeyboardBackButton_K2Node_ComponentBoundEvent_2_OnBackButtonClicked__DelegateSignature
// (BlueprintEvent)

void UWBP_PlayerCustomizeScreen_C::BndEvt__KeyboardBackButton_K2Node_ComponentBoundEvent_2_OnBackButtonClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerCustomizeScreen.WBP_PlayerCustomizeScreen_C.BndEvt__KeyboardBackButton_K2Node_ComponentBoundEvent_2_OnBackButtonClicked__DelegateSignature");

	UWBP_PlayerCustomizeScreen_C_BndEvt__KeyboardBackButton_K2Node_ComponentBoundEvent_2_OnBackButtonClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerCustomizeScreen.WBP_PlayerCustomizeScreen_C.ExecuteUbergraph_WBP_PlayerCustomizeScreen
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PlayerCustomizeScreen_C::ExecuteUbergraph_WBP_PlayerCustomizeScreen(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerCustomizeScreen.WBP_PlayerCustomizeScreen_C.ExecuteUbergraph_WBP_PlayerCustomizeScreen");

	UWBP_PlayerCustomizeScreen_C_ExecuteUbergraph_WBP_PlayerCustomizeScreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function WBP_NewsRotatorButton.WBP_NewsRotatorButton_C.SetActiveButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsActive                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_NewsRotatorButton_C::SetActiveButton(bool* IsActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_NewsRotatorButton.WBP_NewsRotatorButton_C.SetActiveButton");

	UWBP_NewsRotatorButton_C_SetActiveButton_Params params;
	params.IsActive = IsActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_NewsRotatorButton.WBP_NewsRotatorButton_C.BndEvt__PipButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_NewsRotatorButton_C::BndEvt__PipButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_NewsRotatorButton.WBP_NewsRotatorButton_C.BndEvt__PipButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	UWBP_NewsRotatorButton_C_BndEvt__PipButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_NewsRotatorButton.WBP_NewsRotatorButton_C.BndEvt__PipButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_NewsRotatorButton_C::BndEvt__PipButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_NewsRotatorButton.WBP_NewsRotatorButton_C.BndEvt__PipButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UWBP_NewsRotatorButton_C_BndEvt__PipButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_NewsRotatorButton.WBP_NewsRotatorButton_C.BndEvt__PipButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_NewsRotatorButton_C::BndEvt__PipButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_NewsRotatorButton.WBP_NewsRotatorButton_C.BndEvt__PipButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UWBP_NewsRotatorButton_C_BndEvt__PipButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_NewsRotatorButton.WBP_NewsRotatorButton_C.BndEvt__PipButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_NewsRotatorButton_C::BndEvt__PipButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_NewsRotatorButton.WBP_NewsRotatorButton_C.BndEvt__PipButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature");

	UWBP_NewsRotatorButton_C_BndEvt__PipButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_NewsRotatorButton.WBP_NewsRotatorButton_C.ExecuteUbergraph_WBP_NewsRotatorButton
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_NewsRotatorButton_C::ExecuteUbergraph_WBP_NewsRotatorButton(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_NewsRotatorButton.WBP_NewsRotatorButton_C.ExecuteUbergraph_WBP_NewsRotatorButton");

	UWBP_NewsRotatorButton_C_ExecuteUbergraph_WBP_NewsRotatorButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_NewsRotatorButton.WBP_NewsRotatorButton_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           ButtonIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_NewsRotatorButton_C::OnClicked__DelegateSignature(int* ButtonIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_NewsRotatorButton.WBP_NewsRotatorButton_C.OnClicked__DelegateSignature");

	UWBP_NewsRotatorButton_C_OnClicked__DelegateSignature_Params params;
	params.ButtonIndex = ButtonIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

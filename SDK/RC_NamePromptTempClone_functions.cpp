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

// Function NamePromptTempClone.NamePromptTempClone_C.BndEvt__PlayerName_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText*                  Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TEnumAsByte<ETextCommit>*      CommitMethod                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNamePromptTempClone_C::BndEvt__PlayerName_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature(struct FText* Text, TEnumAsByte<ETextCommit>* CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function NamePromptTempClone.NamePromptTempClone_C.BndEvt__PlayerName_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature");

	UNamePromptTempClone_C_BndEvt__PlayerName_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NamePromptTempClone.NamePromptTempClone_C.BndEvt__PopupButton_C_370_K2Node_ComponentBoundEvent_25_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNamePromptTempClone_C::BndEvt__PopupButton_C_370_K2Node_ComponentBoundEvent_25_OnClicked__DelegateSignature(int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function NamePromptTempClone.NamePromptTempClone_C.BndEvt__PopupButton_C_370_K2Node_ComponentBoundEvent_25_OnClicked__DelegateSignature");

	UNamePromptTempClone_C_BndEvt__PopupButton_C_370_K2Node_ComponentBoundEvent_25_OnClicked__DelegateSignature_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NamePromptTempClone.NamePromptTempClone_C.HandleErrorMessage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  MessageText                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UNamePromptTempClone_C::HandleErrorMessage(struct FText* MessageText)
{
	static auto fn = UObject::FindObject<UFunction>("Function NamePromptTempClone.NamePromptTempClone_C.HandleErrorMessage");

	UNamePromptTempClone_C_HandleErrorMessage_Params params;
	params.MessageText = MessageText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NamePromptTempClone.NamePromptTempClone_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APUMG_HUD**              HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNamePromptTempClone_C::InitializeWidget(class APUMG_HUD** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function NamePromptTempClone.NamePromptTempClone_C.InitializeWidget");

	UNamePromptTempClone_C_InitializeWidget_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NamePromptTempClone.NamePromptTempClone_C.ExecuteUbergraph_NamePromptTempClone
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNamePromptTempClone_C::ExecuteUbergraph_NamePromptTempClone(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function NamePromptTempClone.NamePromptTempClone_C.ExecuteUbergraph_NamePromptTempClone");

	UNamePromptTempClone_C_ExecuteUbergraph_NamePromptTempClone_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function LoginTwoFactor.LoginTwoFactor_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APUMG_HUD**              HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULoginTwoFactor_C::InitializeWidget(class APUMG_HUD** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginTwoFactor.LoginTwoFactor_C.InitializeWidget");

	ULoginTwoFactor_C_InitializeWidget_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginTwoFactor.LoginTwoFactor_C.Handle Text Committed
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TEnumAsByte<ETextCommit>*      CommitMethod                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULoginTwoFactor_C::Handle_Text_Committed(struct FText* Text, TEnumAsByte<ETextCommit>* CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginTwoFactor.LoginTwoFactor_C.Handle Text Committed");

	ULoginTwoFactor_C_Handle_Text_Committed_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginTwoFactor.LoginTwoFactor_C.BndEvt__NextButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ULoginTwoFactor_C::BndEvt__NextButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginTwoFactor.LoginTwoFactor_C.BndEvt__NextButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature");

	ULoginTwoFactor_C_BndEvt__NextButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginTwoFactor.LoginTwoFactor_C.Handle Text Changed
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ULoginTwoFactor_C::Handle_Text_Changed(struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginTwoFactor.LoginTwoFactor_C.Handle Text Changed");

	ULoginTwoFactor_C_Handle_Text_Changed_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginTwoFactor.LoginTwoFactor_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_26_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ULoginTwoFactor_C::BndEvt__BackButton_K2Node_ComponentBoundEvent_26_OnClicked__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginTwoFactor.LoginTwoFactor_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_26_OnClicked__DelegateSignature");

	ULoginTwoFactor_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_26_OnClicked__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginTwoFactor.LoginTwoFactor_C.Submit Code
// (BlueprintCallable, BlueprintEvent)

void ULoginTwoFactor_C::Submit_Code()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginTwoFactor.LoginTwoFactor_C.Submit Code");

	ULoginTwoFactor_C_Submit_Code_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginTwoFactor.LoginTwoFactor_C.InitializeWidgetNavigation
// (Event, Public, BlueprintEvent)

void ULoginTwoFactor_C::InitializeWidgetNavigation()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginTwoFactor.LoginTwoFactor_C.InitializeWidgetNavigation");

	ULoginTwoFactor_C_InitializeWidgetNavigation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginTwoFactor.LoginTwoFactor_C.Handle CodeField Gamepad Confirm
// (BlueprintCallable, BlueprintEvent)

void ULoginTwoFactor_C::Handle_CodeField_Gamepad_Confirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginTwoFactor.LoginTwoFactor_C.Handle CodeField Gamepad Confirm");

	ULoginTwoFactor_C_Handle_CodeField_Gamepad_Confirm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginTwoFactor.LoginTwoFactor_C.Handle Login Error
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  MessageText                    (BlueprintVisible, BlueprintReadOnly, Parm)

void ULoginTwoFactor_C::Handle_Login_Error(struct FText* MessageText)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginTwoFactor.LoginTwoFactor_C.Handle Login Error");

	ULoginTwoFactor_C_Handle_Login_Error_Params params;
	params.MessageText = MessageText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginTwoFactor.LoginTwoFactor_C.ExecuteUbergraph_LoginTwoFactor
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULoginTwoFactor_C::ExecuteUbergraph_LoginTwoFactor(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginTwoFactor.LoginTwoFactor_C.ExecuteUbergraph_LoginTwoFactor");

	ULoginTwoFactor_C_ExecuteUbergraph_LoginTwoFactor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

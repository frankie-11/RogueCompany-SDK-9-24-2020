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

// Function LoginCreateAccount.LoginCreateAccount_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APUMG_HUD**              HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULoginCreateAccount_C::InitializeWidget(class APUMG_HUD** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginCreateAccount.LoginCreateAccount_C.InitializeWidget");

	ULoginCreateAccount_C_InitializeWidget_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginCreateAccount.LoginCreateAccount_C.Handle Text Committed
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TEnumAsByte<ETextCommit>*      CommitMethod                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULoginCreateAccount_C::Handle_Text_Committed(struct FText* Text, TEnumAsByte<ETextCommit>* CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginCreateAccount.LoginCreateAccount_C.Handle Text Committed");

	ULoginCreateAccount_C_Handle_Text_Committed_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginCreateAccount.LoginCreateAccount_C.BndEvt__NextButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ULoginCreateAccount_C::BndEvt__NextButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginCreateAccount.LoginCreateAccount_C.BndEvt__NextButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature");

	ULoginCreateAccount_C_BndEvt__NextButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginCreateAccount.LoginCreateAccount_C.Handle Text Changed
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ULoginCreateAccount_C::Handle_Text_Changed(struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginCreateAccount.LoginCreateAccount_C.Handle Text Changed");

	ULoginCreateAccount_C_Handle_Text_Changed_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginCreateAccount.LoginCreateAccount_C.InitializeWidgetNavigation
// (Event, Public, BlueprintEvent)

void ULoginCreateAccount_C::InitializeWidgetNavigation()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginCreateAccount.LoginCreateAccount_C.InitializeWidgetNavigation");

	ULoginCreateAccount_C_InitializeWidgetNavigation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginCreateAccount.LoginCreateAccount_C.Handle Login Error
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  MessageText                    (BlueprintVisible, BlueprintReadOnly, Parm)

void ULoginCreateAccount_C::Handle_Login_Error(struct FText* MessageText)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginCreateAccount.LoginCreateAccount_C.Handle Login Error");

	ULoginCreateAccount_C_Handle_Login_Error_Params params;
	params.MessageText = MessageText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginCreateAccount.LoginCreateAccount_C.Submit New Account
// (BlueprintCallable, BlueprintEvent)

void ULoginCreateAccount_C::Submit_New_Account()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginCreateAccount.LoginCreateAccount_C.Submit New Account");

	ULoginCreateAccount_C_Submit_New_Account_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginCreateAccount.LoginCreateAccount_C.Handle Checkbox Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Checked                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULoginCreateAccount_C::Handle_Checkbox_Changed(bool* Checked)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginCreateAccount.LoginCreateAccount_C.Handle Checkbox Changed");

	ULoginCreateAccount_C_Handle_Checkbox_Changed_Params params;
	params.Checked = Checked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginCreateAccount.LoginCreateAccount_C.OnShown
// (Event, Public, BlueprintEvent)

void ULoginCreateAccount_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginCreateAccount.LoginCreateAccount_C.OnShown");

	ULoginCreateAccount_C_OnShown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginCreateAccount.LoginCreateAccount_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULoginCreateAccount_C::BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginCreateAccount.LoginCreateAccount_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	ULoginCreateAccount_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginCreateAccount.LoginCreateAccount_C.Gamepad Select Email
// (BlueprintCallable, BlueprintEvent)

void ULoginCreateAccount_C::Gamepad_Select_Email()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginCreateAccount.LoginCreateAccount_C.Gamepad Select Email");

	ULoginCreateAccount_C_Gamepad_Select_Email_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginCreateAccount.LoginCreateAccount_C.Gamepad Select Repeat Password
// (BlueprintCallable, BlueprintEvent)

void ULoginCreateAccount_C::Gamepad_Select_Repeat_Password()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginCreateAccount.LoginCreateAccount_C.Gamepad Select Repeat Password");

	ULoginCreateAccount_C_Gamepad_Select_Repeat_Password_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginCreateAccount.LoginCreateAccount_C.Gamepad Select Password
// (BlueprintCallable, BlueprintEvent)

void ULoginCreateAccount_C::Gamepad_Select_Password()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginCreateAccount.LoginCreateAccount_C.Gamepad Select Password");

	ULoginCreateAccount_C_Gamepad_Select_Password_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginCreateAccount.LoginCreateAccount_C.Gamepad Select Username
// (BlueprintCallable, BlueprintEvent)

void ULoginCreateAccount_C::Gamepad_Select_Username()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginCreateAccount.LoginCreateAccount_C.Gamepad Select Username");

	ULoginCreateAccount_C_Gamepad_Select_Username_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginCreateAccount.LoginCreateAccount_C.ExecuteUbergraph_LoginCreateAccount
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULoginCreateAccount_C::ExecuteUbergraph_LoginCreateAccount(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginCreateAccount.LoginCreateAccount_C.ExecuteUbergraph_LoginCreateAccount");

	ULoginCreateAccount_C_ExecuteUbergraph_LoginCreateAccount_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

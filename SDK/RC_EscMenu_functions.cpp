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

// Function EscMenu.EscMenu_C.ToggleGameHUDLayers
// (Public, BlueprintCallable, BlueprintEvent)

void UEscMenu_C::ToggleGameHUDLayers()
{
	static auto fn = UObject::FindObject<UFunction>("Function EscMenu.EscMenu_C.ToggleGameHUDLayers");

	UEscMenu_C_ToggleGameHUDLayers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EscMenu.EscMenu_C.NavigateBack
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEscMenu_C::NavigateBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function EscMenu.EscMenu_C.NavigateBack");

	UEscMenu_C_NavigateBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EscMenu.EscMenu_C.BndEvt__QuitButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UEscMenu_C::BndEvt__QuitButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function EscMenu.EscMenu_C.BndEvt__QuitButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UEscMenu_C_BndEvt__QuitButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EscMenu.EscMenu_C.BndEvt__OptionsButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UEscMenu_C::BndEvt__OptionsButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function EscMenu.EscMenu_C.BndEvt__OptionsButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	UEscMenu_C_BndEvt__OptionsButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EscMenu.EscMenu_C.BndEvt__ResumeButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UEscMenu_C::BndEvt__ResumeButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function EscMenu.EscMenu_C.BndEvt__ResumeButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");

	UEscMenu_C_BndEvt__ResumeButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EscMenu.EscMenu_C.InitializeWidgetNavigation
// (Event, Public, BlueprintEvent)

void UEscMenu_C::InitializeWidgetNavigation()
{
	static auto fn = UObject::FindObject<UFunction>("Function EscMenu.EscMenu_C.InitializeWidgetNavigation");

	UEscMenu_C_InitializeWidgetNavigation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EscMenu.EscMenu_C.BndEvt__ReturnButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UEscMenu_C::BndEvt__ReturnButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function EscMenu.EscMenu_C.BndEvt__ReturnButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UEscMenu_C_BndEvt__ReturnButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EscMenu.EscMenu_C.InitializeWidgetButtonListeners
// (Event, Public, BlueprintEvent)

void UEscMenu_C::InitializeWidgetButtonListeners()
{
	static auto fn = UObject::FindObject<UFunction>("Function EscMenu.EscMenu_C.InitializeWidgetButtonListeners");

	UEscMenu_C_InitializeWidgetButtonListeners_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EscMenu.EscMenu_C.Handle Menu
// (BlueprintCallable, BlueprintEvent)

void UEscMenu_C::Handle_Menu()
{
	static auto fn = UObject::FindObject<UFunction>("Function EscMenu.EscMenu_C.Handle Menu");

	UEscMenu_C_Handle_Menu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EscMenu.EscMenu_C.BndEvt__ToggleHUDLayers_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UEscMenu_C::BndEvt__ToggleHUDLayers_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature(int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function EscMenu.EscMenu_C.BndEvt__ToggleHUDLayers_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature");

	UEscMenu_C_BndEvt__ToggleHUDLayers_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EscMenu.EscMenu_C.OpenTextChatGamepad
// (BlueprintCallable, BlueprintEvent)

void UEscMenu_C::OpenTextChatGamepad()
{
	static auto fn = UObject::FindObject<UFunction>("Function EscMenu.EscMenu_C.OpenTextChatGamepad");

	UEscMenu_C_OpenTextChatGamepad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EscMenu.EscMenu_C.OpenTextChatForCommand
// (BlueprintCallable, BlueprintEvent)

void UEscMenu_C::OpenTextChatForCommand()
{
	static auto fn = UObject::FindObject<UFunction>("Function EscMenu.EscMenu_C.OpenTextChatForCommand");

	UEscMenu_C_OpenTextChatForCommand_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EscMenu.EscMenu_C.OpenTextChat
// (BlueprintCallable, BlueprintEvent)

void UEscMenu_C::OpenTextChat()
{
	static auto fn = UObject::FindObject<UFunction>("Function EscMenu.EscMenu_C.OpenTextChat");

	UEscMenu_C_OpenTextChat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EscMenu.EscMenu_C.OnShown
// (Event, Public, BlueprintEvent)

void UEscMenu_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function EscMenu.EscMenu_C.OnShown");

	UEscMenu_C_OnShown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EscMenu.EscMenu_C.RefreshLeaveOptions
// (BlueprintCallable, BlueprintEvent)

void UEscMenu_C::RefreshLeaveOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function EscMenu.EscMenu_C.RefreshLeaveOptions");

	UEscMenu_C_RefreshLeaveOptions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EscMenu.EscMenu_C.BndEvt__SurrenderButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UEscMenu_C::BndEvt__SurrenderButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature(int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function EscMenu.EscMenu_C.BndEvt__SurrenderButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature");

	UEscMenu_C_BndEvt__SurrenderButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EscMenu.EscMenu_C.SetupSurrernderButton
// (BlueprintCallable, BlueprintEvent)

void UEscMenu_C::SetupSurrernderButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function EscMenu.EscMenu_C.SetupSurrernderButton");

	UEscMenu_C_SetupSurrernderButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EscMenu.EscMenu_C.Change Surrender Button
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bCanTeamSurrender              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UEscMenu_C::Change_Surrender_Button(bool* bCanTeamSurrender)
{
	static auto fn = UObject::FindObject<UFunction>("Function EscMenu.EscMenu_C.Change Surrender Button");

	UEscMenu_C_Change_Surrender_Button_Params params;
	params.bCanTeamSurrender = bCanTeamSurrender;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EscMenu.EscMenu_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APUMG_HUD**              HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UEscMenu_C::InitializeWidget(class APUMG_HUD** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function EscMenu.EscMenu_C.InitializeWidget");

	UEscMenu_C_InitializeWidget_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EscMenu.EscMenu_C.ExecuteUbergraph_EscMenu
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UEscMenu_C::ExecuteUbergraph_EscMenu(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EscMenu.EscMenu_C.ExecuteUbergraph_EscMenu");

	UEscMenu_C_ExecuteUbergraph_EscMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

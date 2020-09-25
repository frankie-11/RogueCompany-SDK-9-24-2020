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

// Function DebugMenu.DebugMenu_C.GetParamTypeForSubCommand
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString*                BaseCommandString              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// EConsoleCommandParamType       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EConsoleCommandParamType UDebugMenu_C::GetParamTypeForSubCommand(struct FString* BaseCommandString)
{
	static auto fn = UObject::FindObject<UFunction>("Function DebugMenu.DebugMenu_C.GetParamTypeForSubCommand");

	UDebugMenu_C_GetParamTypeForSubCommand_Params params;
	params.BaseCommandString = BaseCommandString;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DebugMenu.DebugMenu_C.AddBaseCommandHeader
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString*                BaseCommand                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UDebugMenu_C::AddBaseCommandHeader(struct FString* BaseCommand)
{
	static auto fn = UObject::FindObject<UFunction>("Function DebugMenu.DebugMenu_C.AddBaseCommandHeader");

	UDebugMenu_C_AddBaseCommandHeader_Params params;
	params.BaseCommand = BaseCommand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DebugMenu.DebugMenu_C.NavigateBack
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDebugMenu_C::NavigateBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function DebugMenu.DebugMenu_C.NavigateBack");

	UDebugMenu_C_NavigateBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DebugMenu.DebugMenu_C.CommandSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDebugMenuCommandInfo*  Command                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UDebugMenu_C::CommandSelected(struct FDebugMenuCommandInfo* Command)
{
	static auto fn = UObject::FindObject<UFunction>("Function DebugMenu.DebugMenu_C.CommandSelected");

	UDebugMenu_C_CommandSelected_Params params;
	params.Command = Command;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DebugMenu.DebugMenu_C.MakeBoolSubmenu
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FDebugMenuCommandInfo> Array                          (Parm, OutParm, ZeroConstructor)

void UDebugMenu_C::MakeBoolSubmenu(TArray<struct FDebugMenuCommandInfo>* Array)
{
	static auto fn = UObject::FindObject<UFunction>("Function DebugMenu.DebugMenu_C.MakeBoolSubmenu");

	UDebugMenu_C_MakeBoolSubmenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;
}


// Function DebugMenu.DebugMenu_C.InternalPopulate
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FDebugMenuCommandInfo> Commands                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UDebugMenu_C::InternalPopulate(TArray<struct FDebugMenuCommandInfo>* Commands)
{
	static auto fn = UObject::FindObject<UFunction>("Function DebugMenu.DebugMenu_C.InternalPopulate");

	UDebugMenu_C_InternalPopulate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Commands != nullptr)
		*Commands = params.Commands;
}


// Function DebugMenu.DebugMenu_C.PopulateList
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Depth                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDebugMenu_C::PopulateList(int* Depth)
{
	static auto fn = UObject::FindObject<UFunction>("Function DebugMenu.DebugMenu_C.PopulateList");

	UDebugMenu_C_PopulateList_Params params;
	params.Depth = Depth;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DebugMenu.DebugMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UDebugMenu_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function DebugMenu.DebugMenu_C.Construct");

	UDebugMenu_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DebugMenu.DebugMenu_C.OnShown
// (Event, Public, BlueprintEvent)

void UDebugMenu_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function DebugMenu.DebugMenu_C.OnShown");

	UDebugMenu_C_OnShown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DebugMenu.DebugMenu_C.OnHide
// (Event, Public, BlueprintEvent)

void UDebugMenu_C::OnHide()
{
	static auto fn = UObject::FindObject<UFunction>("Function DebugMenu.DebugMenu_C.OnHide");

	UDebugMenu_C_OnHide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DebugMenu.DebugMenu_C.InitializeWidgetNavigation
// (Event, Public, BlueprintEvent)

void UDebugMenu_C::InitializeWidgetNavigation()
{
	static auto fn = UObject::FindObject<UFunction>("Function DebugMenu.DebugMenu_C.InitializeWidgetNavigation");

	UDebugMenu_C_InitializeWidgetNavigation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DebugMenu.DebugMenu_C.ExecuteUbergraph_DebugMenu
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDebugMenu_C::ExecuteUbergraph_DebugMenu(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DebugMenu.DebugMenu_C.ExecuteUbergraph_DebugMenu");

	UDebugMenu_C_ExecuteUbergraph_DebugMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

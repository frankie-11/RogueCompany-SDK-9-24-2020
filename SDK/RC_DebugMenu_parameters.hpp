#pragma once

// RogueCompany (4.24) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DebugMenu.DebugMenu_C.GetParamTypeForSubCommand
struct UDebugMenu_C_GetParamTypeForSubCommand_Params
{
	struct FString*                                    BaseCommandString;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	EConsoleCommandParamType                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DebugMenu.DebugMenu_C.AddBaseCommandHeader
struct UDebugMenu_C_AddBaseCommandHeader_Params
{
	struct FString*                                    BaseCommand;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function DebugMenu.DebugMenu_C.NavigateBack
struct UDebugMenu_C_NavigateBack_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DebugMenu.DebugMenu_C.CommandSelected
struct UDebugMenu_C_CommandSelected_Params
{
	struct FDebugMenuCommandInfo*                      Command;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function DebugMenu.DebugMenu_C.MakeBoolSubmenu
struct UDebugMenu_C_MakeBoolSubmenu_Params
{
	TArray<struct FDebugMenuCommandInfo>               Array;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function DebugMenu.DebugMenu_C.InternalPopulate
struct UDebugMenu_C_InternalPopulate_Params
{
	TArray<struct FDebugMenuCommandInfo>               Commands;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function DebugMenu.DebugMenu_C.PopulateList
struct UDebugMenu_C_PopulateList_Params
{
	int*                                               Depth;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DebugMenu.DebugMenu_C.Construct
struct UDebugMenu_C_Construct_Params
{
};

// Function DebugMenu.DebugMenu_C.OnShown
struct UDebugMenu_C_OnShown_Params
{
};

// Function DebugMenu.DebugMenu_C.OnHide
struct UDebugMenu_C_OnHide_Params
{
};

// Function DebugMenu.DebugMenu_C.InitializeWidgetNavigation
struct UDebugMenu_C_InitializeWidgetNavigation_Params
{
};

// Function DebugMenu.DebugMenu_C.ExecuteUbergraph_DebugMenu
struct UDebugMenu_C_ExecuteUbergraph_DebugMenu_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

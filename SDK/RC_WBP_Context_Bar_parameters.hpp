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

// Function WBP_Context_Bar.WBP_Context_Bar_C.RefreshContextButtons
struct UWBP_Context_Bar_C_RefreshContextButtons_Params
{
	TArray<class UContextActionData*>                  ContextActions;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool*                                              AlwaysShow;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_Context_Bar.WBP_Context_Bar_C.HandleInputStateChange
struct UWBP_Context_Bar_C_HandleInputStateChange_Params
{
	TEnumAsByte<EPGAME_INPUT_STATE>*                   CurrentInputState;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_Context_Bar.WBP_Context_Bar_C.CanCloseOnLogout
struct UWBP_Context_Bar_C_CanCloseOnLogout_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_Context_Bar.WBP_Context_Bar_C.InitializeWidget
struct UWBP_Context_Bar_C_InitializeWidget_Params
{
	class APUMG_HUD**                                  HUD;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_Context_Bar.WBP_Context_Bar_C.UpdateContextActions
struct UWBP_Context_Bar_C_UpdateContextActions_Params
{
	TArray<class UContextActionData*>*                 ContextActions;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FName*                                      CurrentRoute;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_Context_Bar.WBP_Context_Bar_C.ExecuteUbergraph_WBP_Context_Bar
struct UWBP_Context_Bar_C_ExecuteUbergraph_WBP_Context_Bar_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

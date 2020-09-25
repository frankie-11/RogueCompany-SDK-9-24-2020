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

// Function WBP_AttackerDefenderScreen.WBP_AttackerDefenderScreen_C.SetRounds
struct UWBP_AttackerDefenderScreen_C_SetRounds_Params
{
};

// Function WBP_AttackerDefenderScreen.WBP_AttackerDefenderScreen_C.ResetPreRoundScreen
struct UWBP_AttackerDefenderScreen_C_ResetPreRoundScreen_Params
{
};

// Function WBP_AttackerDefenderScreen.WBP_AttackerDefenderScreen_C.Get Pre Round Text
struct UWBP_AttackerDefenderScreen_C_Get_Pre_Round_Text_Params
{
	struct FText                                       PreRoundText;                                             // (Parm, OutParm)
};

// Function WBP_AttackerDefenderScreen.WBP_AttackerDefenderScreen_C.IsAttackerRole
struct UWBP_AttackerDefenderScreen_C_IsAttackerRole_Params
{
	bool                                               IsAttacker;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_AttackerDefenderScreen.WBP_AttackerDefenderScreen_C.HandlePhaseChanged
struct UWBP_AttackerDefenderScreen_C_HandlePhaseChanged_Params
{
	struct FName*                                      NewPhaseName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      PreviousPhaseName;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_AttackerDefenderScreen.WBP_AttackerDefenderScreen_C.PreRoundAnimComplete
struct UWBP_AttackerDefenderScreen_C_PreRoundAnimComplete_Params
{
};

// Function WBP_AttackerDefenderScreen.WBP_AttackerDefenderScreen_C.InitializeWidget
struct UWBP_AttackerDefenderScreen_C_InitializeWidget_Params
{
	class APUMG_HUD**                                  HUD;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_AttackerDefenderScreen.WBP_AttackerDefenderScreen_C.ExecuteUbergraph_WBP_AttackerDefenderScreen
struct UWBP_AttackerDefenderScreen_C_ExecuteUbergraph_WBP_AttackerDefenderScreen_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

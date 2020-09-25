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

// Function ResultScreen.ResultScreen_C.ResetAndHandleEndOfMatch
struct UResultScreen_C_ResetAndHandleEndOfMatch_Params
{
};

// Function ResultScreen.ResultScreen_C.SetColors
struct UResultScreen_C_SetColors_Params
{
	struct FRoundResultAnnoucement*                    RoundResult;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ResultScreen.ResultScreen_C.ResetAnims
struct UResultScreen_C_ResetAnims_Params
{
};

// Function ResultScreen.ResultScreen_C.OnRoundCycle
struct UResultScreen_C_OnRoundCycle_Params
{
	struct FRoundInitState*                            RoundInitState;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function ResultScreen.ResultScreen_C.ShowScreen
struct UResultScreen_C_ShowScreen_Params
{
	float*                                             DelayAmount;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ResultScreen.ResultScreen_C.Auto Return To Lobby
struct UResultScreen_C_Auto_Return_To_Lobby_Params
{
};

// Function ResultScreen.ResultScreen_C.Construct
struct UResultScreen_C_Construct_Params
{
};

// Function ResultScreen.ResultScreen_C.ShowKillCamHUD
struct UResultScreen_C_ShowKillCamHUD_Params
{
	bool*                                              bEnabled;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ResultScreen.ResultScreen_C.ShowScoreAnim
struct UResultScreen_C_ShowScoreAnim_Params
{
};

// Function ResultScreen.ResultScreen_C.FailSafeReturnToLobby
struct UResultScreen_C_FailSafeReturnToLobby_Params
{
};

// Function ResultScreen.ResultScreen_C.OnInitRoundSetup
struct UResultScreen_C_OnInitRoundSetup_Params
{
};

// Function ResultScreen.ResultScreen_C.HandlePhaseChanged
struct UResultScreen_C_HandlePhaseChanged_Params
{
	struct FName*                                      NewPhaseName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      PreviousPhaseName;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ResultScreen.ResultScreen_C.HandleRoundInfoChanged
struct UResultScreen_C_HandleRoundInfoChanged_Params
{
};

// Function ResultScreen.ResultScreen_C.HandleResultReceived
struct UResultScreen_C_HandleResultReceived_Params
{
	struct FRoundResultAnnoucement*                    ResultAnnoucement;                                        // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ResultScreen.ResultScreen_C.ShowSurrenderUI
struct UResultScreen_C_ShowSurrenderUI_Params
{
};

// Function ResultScreen.ResultScreen_C.ExecuteUbergraph_ResultScreen
struct UResultScreen_C_ExecuteUbergraph_ResultScreen_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ResultScreen.ResultScreen_C.ToggleTopBar__DelegateSignature
struct UResultScreen_C_ToggleTopBar__DelegateSignature_Params
{
	bool*                                              ShouldShow;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ResultScreen.ResultScreen_C.HideHUD__DelegateSignature
struct UResultScreen_C_HideHUD__DelegateSignature_Params
{
};

// Function ResultScreen.ResultScreen_C.ShowHUD__DelegateSignature
struct UResultScreen_C_ShowHUD__DelegateSignature_Params
{
};

// Function ResultScreen.ResultScreen_C.ReturnToHome__DelegateSignature
struct UResultScreen_C_ReturnToHome__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

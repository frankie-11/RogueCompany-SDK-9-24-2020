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

// Function ExpDisplay.ExpDisplay_C.Make Cash Message
struct UExpDisplay_C_Make_Cash_Message_Params
{
	struct FKSScoreChangeEvent*                        Event;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ExpDisplay.ExpDisplay_C.MakePopup
struct UExpDisplay_C_MakePopup_Params
{
	struct FExpDisplayInfo*                            ExpInfo;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ExpDisplay.ExpDisplay_C.Construct
struct UExpDisplay_C_Construct_Params
{
};

// Function ExpDisplay.ExpDisplay_C.OnScoreChanged
struct UExpDisplay_C_OnScoreChanged_Params
{
	struct FKSScoreChangeEvent*                        ScoreChangeEvent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ExpDisplay.ExpDisplay_C.OnUIRelevantPlayerStateChanged
struct UExpDisplay_C_OnUIRelevantPlayerStateChanged_Params
{
	class AKSPlayerState**                             PlayerState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ExpDisplay.ExpDisplay_C.DisplayExpInfo
struct UExpDisplay_C_DisplayExpInfo_Params
{
};

// Function ExpDisplay.ExpDisplay_C.ShowNextQueue
struct UExpDisplay_C_ShowNextQueue_Params
{
};

// Function ExpDisplay.ExpDisplay_C.PreConstruct
struct UExpDisplay_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ExpDisplay.ExpDisplay_C.OnCashChange
struct UExpDisplay_C_OnCashChange_Params
{
	struct FKSScoreChangeEvent*                        Score_Change;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ExpDisplay.ExpDisplay_C.ExecuteUbergraph_ExpDisplay
struct UExpDisplay_C_ExecuteUbergraph_ExpDisplay_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function EscapeTeammatesStatus.EscapeTeammatesStatus_C.Refresh
struct UEscapeTeammatesStatus_C_Refresh_Params
{
};

// Function EscapeTeammatesStatus.EscapeTeammatesStatus_C.Handle Player Downed Changed
struct UEscapeTeammatesStatus_C_Handle_Player_Downed_Changed_Params
{
	class AKSPlayerState**                             PlayerState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EscapeTeammatesStatus.EscapeTeammatesStatus_C.Handle Player Death
struct UEscapeTeammatesStatus_C_Handle_Player_Death_Params
{
	struct FCombatEventInfo*                           EventInfo;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function EscapeTeammatesStatus.EscapeTeammatesStatus_C.Handle Escape Point Changed
struct UEscapeTeammatesStatus_C_Handle_Escape_Point_Changed_Params
{
	TArray<class AKSPlayerState*>*                     ContainedPlayers;                                         // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function EscapeTeammatesStatus.EscapeTeammatesStatus_C.InitializeWidget
struct UEscapeTeammatesStatus_C_InitializeWidget_Params
{
	class APUMG_HUD**                                  HUD;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EscapeTeammatesStatus.EscapeTeammatesStatus_C.Handle Round Start
struct UEscapeTeammatesStatus_C_Handle_Round_Start_Params
{
	struct FRoundInitState*                            RoundInitState;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function EscapeTeammatesStatus.EscapeTeammatesStatus_C.ExecuteUbergraph_EscapeTeammatesStatus
struct UEscapeTeammatesStatus_C_ExecuteUbergraph_EscapeTeammatesStatus_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

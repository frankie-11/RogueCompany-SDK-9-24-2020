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

// Function KillCam.KillCam_C.PostSetPlayerState
struct UKillCam_C_PostSetPlayerState_Params
{
};

// Function KillCam.KillCam_C.SetPlayerStateUIRelevanceChanged
struct UKillCam_C_SetPlayerStateUIRelevanceChanged_Params
{
};

// Function KillCam.KillCam_C.ExecuteUbergraph_KillCam
struct UKillCam_C_ExecuteUbergraph_KillCam_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function WBP_TeamMessage.WBP_TeamMessage_C.AbortCurrentAnnouncement
struct UWBP_TeamMessage_C_AbortCurrentAnnouncement_Params
{
};

// Function WBP_TeamMessage.WBP_TeamMessage_C.ShowAnnouncement
struct UWBP_TeamMessage_C_ShowAnnouncement_Params
{
	struct FAnnouncementData*                          Announcement;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_TeamMessage.WBP_TeamMessage_C.HandleOnAnnouncement
struct UWBP_TeamMessage_C_HandleOnAnnouncement_Params
{
	struct FAnnouncementData*                          Announcement;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_TeamMessage.WBP_TeamMessage_C.CheckShouldShow
struct UWBP_TeamMessage_C_CheckShouldShow_Params
{
	struct FAnnouncementData*                          AnnouncementData;                                         // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               Return;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_TeamMessage.WBP_TeamMessage_C.Construct
struct UWBP_TeamMessage_C_Construct_Params
{
};

// Function WBP_TeamMessage.WBP_TeamMessage_C.OnAnnouncementFinished
struct UWBP_TeamMessage_C_OnAnnouncementFinished_Params
{
};

// Function WBP_TeamMessage.WBP_TeamMessage_C.OnKillCamEnabled
struct UWBP_TeamMessage_C_OnKillCamEnabled_Params
{
	bool*                                              bEnabled;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_TeamMessage.WBP_TeamMessage_C.HandleRoundSetup
struct UWBP_TeamMessage_C_HandleRoundSetup_Params
{
	struct FRoundInitState*                            RoundInitState;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WBP_TeamMessage.WBP_TeamMessage_C.HandleQueuedAnnoucements
struct UWBP_TeamMessage_C_HandleQueuedAnnoucements_Params
{
};

// Function WBP_TeamMessage.WBP_TeamMessage_C.ExecuteUbergraph_WBP_TeamMessage
struct UWBP_TeamMessage_C_ExecuteUbergraph_WBP_TeamMessage_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function WBP_GameModeInfoPanel.WBP_GameModeInfoPanel_C.GetQueueImageById
struct UWBP_GameModeInfoPanel_C_GetQueueImageById_Params
{
	int*                                               QueueId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  QueueImage;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_GameModeInfoPanel.WBP_GameModeInfoPanel_C.SetDisplayInfo
struct UWBP_GameModeInfoPanel_C_SetDisplayInfo_Params
{
	struct FText*                                      Title;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText*                                      Description;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool*                                              UseMapImage;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FUIMapInfo*                                 MapInfo;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_GameModeInfoPanel.WBP_GameModeInfoPanel_C.SetQueueInfo
struct UWBP_GameModeInfoPanel_C_SetQueueInfo_Params
{
	struct FClientQueueInfo*                           QueueInfo;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool*                                              UseMapImage;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FUIMapInfo*                                 MapInfo;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_GameModeInfoPanel.WBP_GameModeInfoPanel_C.ExecuteUbergraph_WBP_GameModeInfoPanel
struct UWBP_GameModeInfoPanel_C_ExecuteUbergraph_WBP_GameModeInfoPanel_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

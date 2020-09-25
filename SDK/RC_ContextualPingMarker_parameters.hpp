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

// Function ContextualPingMarker.ContextualPingMarker_C.MovePing
struct UContextualPingMarker_C_MovePing_Params
{
	EPingType*                                         PingType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EPingMessage*                                      PingMessage;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ContextualPingMarker.ContextualPingMarker_C.Construct
struct UContextualPingMarker_C_Construct_Params
{
};

// Function ContextualPingMarker.ContextualPingMarker_C.HandlePingRemoved
struct UContextualPingMarker_C_HandlePingRemoved_Params
{
};

// Function ContextualPingMarker.ContextualPingMarker_C.SetScreenRegion
struct UContextualPingMarker_C_SetScreenRegion_Params
{
	EIconMarkerScreenRegion*                           ScreenRegion;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ContextualPingMarker.ContextualPingMarker_C.SetArrowAngle
struct UContextualPingMarker_C_SetArrowAngle_Params
{
	float*                                             Angle;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ContextualPingMarker.ContextualPingMarker_C.SetupPingOnReady
struct UContextualPingMarker_C_SetupPingOnReady_Params
{
};

// Function ContextualPingMarker.ContextualPingMarker_C.PlayActivationAnim
struct UContextualPingMarker_C_PlayActivationAnim_Params
{
	bool*                                              bPlayActiveAnim;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ContextualPingMarker.ContextualPingMarker_C.PlayActiveStateAnim
struct UContextualPingMarker_C_PlayActiveStateAnim_Params
{
};

// Function ContextualPingMarker.ContextualPingMarker_C.UpdateMetersAway
struct UContextualPingMarker_C_UpdateMetersAway_Params
{
	int*                                               Meters;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ContextualPingMarker.ContextualPingMarker_C.HandlePingChanged
struct UContextualPingMarker_C_HandlePingChanged_Params
{
};

// Function ContextualPingMarker.ContextualPingMarker_C.ExecuteUbergraph_ContextualPingMarker
struct UContextualPingMarker_C_ExecuteUbergraph_ContextualPingMarker_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

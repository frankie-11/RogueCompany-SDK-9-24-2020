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

// Function MarkerDisplay.MarkerDisplay_C.CreateNewIconWidget
struct UMarkerDisplay_C_CreateNewIconWidget_Params
{
	class UClass**                                     WidgetClass;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               UniqueId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AKSPlayerState**                             CreatingPlayer;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EDisplayType*                                      ParentMapDisplayType;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     AssociatedActor;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    AssociatedObject;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    DefaultLocation;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Lifespan;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UKSMapIconWidgetBase*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function MarkerDisplay.MarkerDisplay_C.Receive Loot Inspect Off From Marker
struct UMarkerDisplay_C_Receive_Loot_Inspect_Off_From_Marker_Params
{
	class ULootSiteMarker_v2_C**                       Marker;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function MarkerDisplay.MarkerDisplay_C.Receive Loot Inspect Request From Marker
struct UMarkerDisplay_C_Receive_Loot_Inspect_Request_From_Marker_Params
{
	class AKSLootSiteBase**                            Loot_Site;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ULootSiteMarker_v2_C**                       Marker;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function MarkerDisplay.MarkerDisplay_C.InitializeTickAnimations
struct UMarkerDisplay_C_InitializeTickAnimations_Params
{
};

// Function MarkerDisplay.MarkerDisplay_C.Inspect Anim Update
struct UMarkerDisplay_C_Inspect_Anim_Update_Params
{
	float*                                             ElapsedTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             ElapsedAlpha;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MarkerDisplay.MarkerDisplay_C.Inspect Anim Finished
struct UMarkerDisplay_C_Inspect_Anim_Finished_Params
{
};

// Function MarkerDisplay.MarkerDisplay_C.InitializeWidget
struct UMarkerDisplay_C_InitializeWidget_Params
{
	class APUMG_HUD**                                  HUD;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MarkerDisplay.MarkerDisplay_C.OnScrambleStateChanged
struct UMarkerDisplay_C_OnScrambleStateChanged_Params
{
	bool*                                              Scrambled;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MarkerDisplay.MarkerDisplay_C.Handle Loot Site State Changed
struct UMarkerDisplay_C_Handle_Loot_Site_State_Changed_Params
{
	struct FLootSiteState*                             Loot_Site_State;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MarkerDisplay.MarkerDisplay_C.Tick
struct UMarkerDisplay_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MarkerDisplay.MarkerDisplay_C.ExecuteUbergraph_MarkerDisplay
struct UMarkerDisplay_C_ExecuteUbergraph_MarkerDisplay_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

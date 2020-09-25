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

// Function LootSiteMarker_v2.LootSiteMarker_v2_C.Get Visibility State For Distance
struct ULootSiteMarker_v2_C_Get_Visibility_State_For_Distance_Params
{
	ESlateVisibility                                   NewParam;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LootSiteMarker_v2.LootSiteMarker_v2_C.IsHovering
struct ULootSiteMarker_v2_C_IsHovering_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LootSiteMarker_v2.LootSiteMarker_v2_C.ShouldUpdateHover
struct ULootSiteMarker_v2_C_ShouldUpdateHover_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LootSiteMarker_v2.LootSiteMarker_v2_C.Get Default Icon Visibility
struct ULootSiteMarker_v2_C_Get_Default_Icon_Visibility_Params
{
	ESlateVisibility                                   NewParam;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LootSiteMarker_v2.LootSiteMarker_v2_C.Get Icon Scale
struct ULootSiteMarker_v2_C_Get_Icon_Scale_Params
{
	float                                              Icon_Scale;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LootSiteMarker_v2.LootSiteMarker_v2_C.GetLootTexture
struct ULootSiteMarker_v2_C_GetLootTexture_Params
{
	class UTexture2D*                                  Texture2D;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LootSiteMarker_v2.LootSiteMarker_v2_C.GetPinTexture
struct ULootSiteMarker_v2_C_GetPinTexture_Params
{
	class UTexture2D*                                  Texture;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LootSiteMarker_v2.LootSiteMarker_v2_C.Get Pin Height
struct ULootSiteMarker_v2_C_Get_Pin_Height_Params
{
	float                                              Pin_Height;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LootSiteMarker_v2.LootSiteMarker_v2_C.Get Render Opacity
struct ULootSiteMarker_v2_C_Get_Render_Opacity_Params
{
	float                                              Render_Opacity;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LootSiteMarker_v2.LootSiteMarker_v2_C.Is Still In Initial Render Position
struct ULootSiteMarker_v2_C_Is_Still_In_Initial_Render_Position_Params
{
	bool                                               Still_In_Initial_Render_Position;                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LootSiteMarker_v2.LootSiteMarker_v2_C.GetHitboxMultiplierByDistance
struct ULootSiteMarker_v2_C_GetHitboxMultiplierByDistance_Params
{
	float                                              HitboxMultiplier;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LootSiteMarker_v2.LootSiteMarker_v2_C.Update
struct ULootSiteMarker_v2_C_Update_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LootSiteMarker_v2.LootSiteMarker_v2_C.Construct
struct ULootSiteMarker_v2_C_Construct_Params
{
};

// Function LootSiteMarker_v2.LootSiteMarker_v2_C.UpdateMetersAway
struct ULootSiteMarker_v2_C_UpdateMetersAway_Params
{
	int*                                               Meters;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LootSiteMarker_v2.LootSiteMarker_v2_C.OnHoverStateChanged
struct ULootSiteMarker_v2_C_OnHoverStateChanged_Params
{
	EIconHoverState*                                   NewHoverState;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LootSiteMarker_v2.LootSiteMarker_v2_C.HandleLootSiteRarityChanged
struct ULootSiteMarker_v2_C_HandleLootSiteRarityChanged_Params
{
	ELootSiteRarity*                                   CurrentRarity;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LootSiteMarker_v2.LootSiteMarker_v2_C.SetScreenRegion
struct ULootSiteMarker_v2_C_SetScreenRegion_Params
{
	EIconMarkerScreenRegion*                           ScreenRegion;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LootSiteMarker_v2.LootSiteMarker_v2_C.SetArrowAngle
struct ULootSiteMarker_v2_C_SetArrowAngle_Params
{
	float*                                             Angle;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LootSiteMarker_v2.LootSiteMarker_v2_C.ExecuteUbergraph_LootSiteMarker_v2
struct ULootSiteMarker_v2_C_ExecuteUbergraph_LootSiteMarker_v2_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

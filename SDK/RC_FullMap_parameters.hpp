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

// Function FullMap.FullMap_C.CreateNewIconWidget
struct UFullMap_C_CreateNewIconWidget_Params
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

// Function FullMap.FullMap_C.IsOnMap
struct UFullMap_C_IsOnMap_Params
{
	struct FVector2D*                                  MapCoords;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FullMap.FullMap_C.ToIconRenderAngle
struct UFullMap_C_ToIconRenderAngle_Params
{
	float*                                             PlayerAngle;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FullMap.FullMap_C.ToIconRenderCoords
struct UFullMap_C_ToIconRenderCoords_Params
{
	struct FVector2D*                                  MapCoords;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FullMap.FullMap_C.NavigateBack
struct UFullMap_C_NavigateBack_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FullMap.FullMap_C.ApplyZoom
struct UFullMap_C_ApplyZoom_Params
{
	float*                                             ZoomInput;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FullMap.FullMap_C.ConstrainMapScreenPosition
struct UFullMap_C_ConstrainMapScreenPosition_Params
{
	struct FVector2D*                                  ProposedPosition;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ConstrainedPosition;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function FullMap.FullMap_C.OnMouseMove
struct UFullMap_C_OnMouseMove_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function FullMap.FullMap_C.OnMouseButtonUp
struct UFullMap_C_OnMouseButtonUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function FullMap.FullMap_C.OnMouseButtonDown
struct UFullMap_C_OnMouseButtonDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function FullMap.FullMap_C.OnMouseWheel
struct UFullMap_C_OnMouseWheel_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function FullMap.FullMap_C.Construct
struct UFullMap_C_Construct_Params
{
};

// Function FullMap.FullMap_C.FindMinimapRenderer
struct UFullMap_C_FindMinimapRenderer_Params
{
};

// Function FullMap.FullMap_C.GetMapTexture
struct UFullMap_C_GetMapTexture_Params
{
};

// Function FullMap.FullMap_C.OnShown
struct UFullMap_C_OnShown_Params
{
};

// Function FullMap.FullMap_C.InitializeWidget
struct UFullMap_C_InitializeWidget_Params
{
	class APUMG_HUD**                                  HUD;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FullMap.FullMap_C.InitializeWidgetNavigation
struct UFullMap_C_InitializeWidgetNavigation_Params
{
};

// Function FullMap.FullMap_C.InitializeWidgetButtonListeners
struct UFullMap_C_InitializeWidgetButtonListeners_Params
{
};

// Function FullMap.FullMap_C.MapButtonClose
struct UFullMap_C_MapButtonClose_Params
{
};

// Function FullMap.FullMap_C.Tick
struct UFullMap_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FullMap.FullMap_C.Handle Zone Wait
struct UFullMap_C_Handle_Zone_Wait_Params
{
	float*                                             TimeUntilShrink;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FullMap.FullMap_C.OnScrambleStateChanged
struct UFullMap_C_OnScrambleStateChanged_Params
{
	bool*                                              Scrambled;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FullMap.FullMap_C.RemoveSelf
struct UFullMap_C_RemoveSelf_Params
{
};

// Function FullMap.FullMap_C.ExecuteUbergraph_FullMap
struct UFullMap_C_ExecuteUbergraph_FullMap_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

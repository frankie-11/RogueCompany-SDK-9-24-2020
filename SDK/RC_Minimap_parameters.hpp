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

// Function Minimap.Minimap_C.TickVisibility
struct UMinimap_C_TickVisibility_Params
{
	float*                                             bpp__DeltaTime__pf;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Minimap.Minimap_C.Tick
struct UMinimap_C_Tick_Params
{
	struct FGeometry*                                  bpp__MyGeometry__pf;                                      // (Parm, IsPlainOldData)
	float*                                             bpp__InDeltaTime__pf;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Minimap.Minimap_C.SetScrambleTexture
struct UMinimap_C_SetScrambleTexture_Params
{
};

// Function Minimap.Minimap_C.SetRoyaleMode
struct UMinimap_C_SetRoyaleMode_Params
{
	bool*                                              bpp__IsRoyaleMode__pf;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Minimap.Minimap_C.OnScrambleStateChanged
struct UMinimap_C_OnScrambleStateChanged_Params
{
	bool*                                              bpp__Scrambled__pf;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Minimap.Minimap_C.OnLoaded_DB612B4F430AF7AB8BD23B968AE6C16E
struct UMinimap_C_OnLoaded_DB612B4F430AF7AB8BD23B968AE6C16E_Params
{
	class UObject**                                    bpp__Loaded__pf;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Minimap.Minimap_C.Handle Royale Zone Wait
struct UMinimap_C_Handle_Royale_Zone_Wait_Params
{
	float*                                             bpp__TimeUntilShrink__pf;                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Minimap.Minimap_C.GetTransformInfo
struct UMinimap_C_GetTransformInfo_Params
{
	float                                              bpp__NormalizedX__pf;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              bpp__NormalizedY__pf;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              bpp__Rotation__pf;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              bpp__Scale__pf;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Minimap.Minimap_C.GetMapTexture
struct UMinimap_C_GetMapTexture_Params
{
};

// Function Minimap.Minimap_C.FindMinimapRenderer
struct UMinimap_C_FindMinimapRenderer_Params
{
};

// Function Minimap.Minimap_C.ExecuteUbergraph_Minimap_2
struct UMinimap_C_ExecuteUbergraph_Minimap_2_Params
{
	int*                                               bpp__EntryPoint__pf;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Minimap.Minimap_C.EvaluateRelativeHeight
struct UMinimap_C_EvaluateRelativeHeight_Params
{
	struct FVector*                                    bpp__SubjectxLocation__pfT;                               // (Parm, ZeroConstructor, IsPlainOldData)
	EMiniMapRelativeHeight                             bpp__RelativeHeight__pf;                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Minimap.Minimap_C.EvaluateIconPosition
struct UMinimap_C_EvaluateIconPosition_Params
{
	struct FVector*                                    bpp__SubjectLocation__pf;                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UUserWidget**                                bpp__Icon__pf;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Minimap.Minimap_C.CreateNewIconWidget
struct UMinimap_C_CreateNewIconWidget_Params
{
	class UClass**                                     bpp__WidgetClass__pf;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               bpp__UniqueId__pf;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class AKSPlayerState**                             bpp__CreatingPlayer__pf;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	EDisplayType*                                      bpp__ParentMapDisplayType__pf;                            // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     bpp__AssociatedActor__pf;                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    bpp__AssociatedObject__pf;                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    bpp__DefaultLocation__pf;                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             bpp__Lifespan__pf;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class UKSMapIconWidgetBase*                        ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Minimap.Minimap_C.Construct
struct UMinimap_C_Construct_Params
{
};

// Function Minimap.Minimap_C.CanShowMinimap
struct UMinimap_C_CanShowMinimap_Params
{
	bool                                               bpp__CanShow__pf;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction Minimap.Minimap_C.OnRoyaleZoneWait__DelegateSignature
struct UMinimap_C_OnRoyaleZoneWait__DelegateSignature_Params
{
	float*                                             bpp__TimeUntilShrink__pf;                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

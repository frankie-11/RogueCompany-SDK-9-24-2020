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

// Function WatermarkWidget.WatermarkWidget_C.GetNewWatermarkTranslation
struct UWatermarkWidget_C_GetNewWatermarkTranslation_Params
{
	struct FVector2D                                   Transform_Translation;                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WatermarkWidget.WatermarkWidget_C.Construct
struct UWatermarkWidget_C_Construct_Params
{
};

// Function WatermarkWidget.WatermarkWidget_C.Reposition Watermark
struct UWatermarkWidget_C_Reposition_Watermark_Params
{
};

// Function WatermarkWidget.WatermarkWidget_C.Fade In
struct UWatermarkWidget_C_Fade_In_Params
{
};

// Function WatermarkWidget.WatermarkWidget_C.Fade Out
struct UWatermarkWidget_C_Fade_Out_Params
{
};

// Function WatermarkWidget.WatermarkWidget_C.Move Watermark To Random Position
struct UWatermarkWidget_C_Move_Watermark_To_Random_Position_Params
{
};

// Function WatermarkWidget.WatermarkWidget_C.StartPositionChanging
struct UWatermarkWidget_C_StartPositionChanging_Params
{
};

// Function WatermarkWidget.WatermarkWidget_C.OnResizeViewport
struct UWatermarkWidget_C_OnResizeViewport_Params
{
	struct FIntPoint*                                  Viewport_Size;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WatermarkWidget.WatermarkWidget_C.ExecuteUbergraph_WatermarkWidget
struct UWatermarkWidget_C_ExecuteUbergraph_WatermarkWidget_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

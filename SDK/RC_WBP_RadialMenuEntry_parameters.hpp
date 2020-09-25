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

// Function WBP_RadialMenuEntry.WBP_RadialMenuEntry_C.ShowBigTextInsteadOfIcon
struct UWBP_RadialMenuEntry_C_ShowBigTextInsteadOfIcon_Params
{
	bool*                                              ShowBigText;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_RadialMenuEntry.WBP_RadialMenuEntry_C.SetEmpty
struct UWBP_RadialMenuEntry_C_SetEmpty_Params
{
};

// Function WBP_RadialMenuEntry.WBP_RadialMenuEntry_C.SetIconColor
struct UWBP_RadialMenuEntry_C_SetIconColor_Params
{
	struct FLinearColor*                               LinearColor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_RadialMenuEntry.WBP_RadialMenuEntry_C.SetIconFromSoftTexture
struct UWBP_RadialMenuEntry_C_SetIconFromSoftTexture_Params
{
};

// Function WBP_RadialMenuEntry.WBP_RadialMenuEntry_C.Set IconAndName
struct UWBP_RadialMenuEntry_C_Set_IconAndName_Params
{
	class UKSItem**                                    Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              ShowSmallText;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_RadialMenuEntry.WBP_RadialMenuEntry_C.SetRotation
struct UWBP_RadialMenuEntry_C_SetRotation_Params
{
	float*                                             Angle;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_RadialMenuEntry.WBP_RadialMenuEntry_C.PreConstruct
struct UWBP_RadialMenuEntry_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_RadialMenuEntry.WBP_RadialMenuEntry_C.Construct
struct UWBP_RadialMenuEntry_C_Construct_Params
{
};

// Function WBP_RadialMenuEntry.WBP_RadialMenuEntry_C.ExecuteUbergraph_WBP_RadialMenuEntry
struct UWBP_RadialMenuEntry_C_ExecuteUbergraph_WBP_RadialMenuEntry_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

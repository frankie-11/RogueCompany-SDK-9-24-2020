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

// Function WBP_AsyncIcon.WBP_AsyncIcon_C.Set Brush from Texture on Item
struct UWBP_AsyncIcon_C_Set_Brush_from_Texture_on_Item_Params
{
	class UKSItem**                                    Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              MatchSize;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_AsyncIcon.WBP_AsyncIcon_C.Get Material
struct UWBP_AsyncIcon_C_Get_Material_Params
{
	class UMaterialInstanceDynamic*                    MaterialInstanceDynamic;                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_AsyncIcon.WBP_AsyncIcon_C.SetMaterialToUse
struct UWBP_AsyncIcon_C_SetMaterialToUse_Params
{
	class UMaterialInterface**                         Material;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_AsyncIcon.WBP_AsyncIcon_C.ApplyDefaultBrush
struct UWBP_AsyncIcon_C_ApplyDefaultBrush_Params
{
};

// Function WBP_AsyncIcon.WBP_AsyncIcon_C.SetBrushFromSoftTexture
struct UWBP_AsyncIcon_C_SetBrushFromSoftTexture_Params
{
	bool*                                              MatchSize;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_AsyncIcon.WBP_AsyncIcon_C.SetBrushFromTexture
struct UWBP_AsyncIcon_C_SetBrushFromTexture_Params
{
	class UTexture2D**                                 Texture;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              MatchSize;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_AsyncIcon.WBP_AsyncIcon_C.SetBrushFromItemIcon
struct UWBP_AsyncIcon_C_SetBrushFromItemIcon_Params
{
	class UPlatformInventoryItem**                     Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              MatchSize;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_AsyncIcon.WBP_AsyncIcon_C.PreConstruct
struct UWBP_AsyncIcon_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_AsyncIcon.WBP_AsyncIcon_C.Construct
struct UWBP_AsyncIcon_C_Construct_Params
{
};

// Function WBP_AsyncIcon.WBP_AsyncIcon_C.OnStartLoad
struct UWBP_AsyncIcon_C_OnStartLoad_Params
{
	class UPUMG_AsyncImage**                           Image;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_AsyncIcon.WBP_AsyncIcon_C.OnFinishLoad
struct UWBP_AsyncIcon_C_OnFinishLoad_Params
{
	class UPUMG_AsyncImage**                           Image;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_AsyncIcon.WBP_AsyncIcon_C.ExecuteUbergraph_WBP_AsyncIcon
struct UWBP_AsyncIcon_C_ExecuteUbergraph_WBP_AsyncIcon_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_AsyncIcon.WBP_AsyncIcon_C.OnIconUpdated__DelegateSignature
struct UWBP_AsyncIcon_C_OnIconUpdated__DelegateSignature_Params
{
	class UTexture2D**                                 Texture;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

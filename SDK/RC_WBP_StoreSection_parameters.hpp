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

// Function WBP_StoreSection.WBP_StoreSection_C.OnStoreTimerTick
struct UWBP_StoreSection_C_OnStoreTimerTick_Params
{
};

// Function WBP_StoreSection.WBP_StoreSection_C.ShowCTA
struct UWBP_StoreSection_C_ShowCTA_Params
{
	bool*                                              ShowCTA;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_StoreSection.WBP_StoreSection_C.UpdateSectionTimer
struct UWBP_StoreSection_C_UpdateSectionTimer_Params
{
};

// Function WBP_StoreSection.WBP_StoreSection_C.FindTaxInfo
struct UWBP_StoreSection_C_FindTaxInfo_Params
{
	class UKSStoreSection**                            StoreSection;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_StoreSection.WBP_StoreSection_C.SetItemSelected
struct UWBP_StoreSection_C_SetItemSelected_Params
{
	int*                                               SectionIndex;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               ItemIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_StoreSection.WBP_StoreSection_C.SetupSectionNavigation
struct UWBP_StoreSection_C_SetupSectionNavigation_Params
{
	bool*                                              SelectLast;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_StoreSection.WBP_StoreSection_C.SetSectionData
struct UWBP_StoreSection_C_SetSectionData_Params
{
	class UKSStoreSection**                            SectionData;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_StoreSection.WBP_StoreSection_C.ClearContents
struct UWBP_StoreSection_C_ClearContents_Params
{
};

// Function WBP_StoreSection.WBP_StoreSection_C.AddItemToSection
struct UWBP_StoreSection_C_AddItemToSection_Params
{
	class UKSStoreSectionItem**                        StoreItem;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UGridSlot*                                   NewSlot;                                                  // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_StoreSection.WBP_StoreSection_C.Construct
struct UWBP_StoreSection_C_Construct_Params
{
};

// Function WBP_StoreSection.WBP_StoreSection_C.Tick
struct UWBP_StoreSection_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_StoreSection.WBP_StoreSection_C.ExecuteUbergraph_WBP_StoreSection
struct UWBP_StoreSection_C_ExecuteUbergraph_WBP_StoreSection_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

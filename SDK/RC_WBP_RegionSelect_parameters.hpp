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

// Function WBP_RegionSelect.WBP_RegionSelect_C.GetRegionSelectEntries
struct UWBP_RegionSelect_C_GetRegionSelectEntries_Params
{
	TArray<class UWBP_RegionSelect_Entry_C*>           RegionSelectEntries;                                      // (Parm, OutParm, ZeroConstructor)
};

// Function WBP_RegionSelect.WBP_RegionSelect_C.PreConstruct
struct UWBP_RegionSelect_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_RegionSelect.WBP_RegionSelect_C.Construct
struct UWBP_RegionSelect_C_Construct_Params
{
};

// Function WBP_RegionSelect.WBP_RegionSelect_C.LoginState
struct UWBP_RegionSelect_C_LoginState_Params
{
	EPUMG_LoginState*                                  LoginState;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_RegionSelect.WBP_RegionSelect_C.Populate Regions
struct UWBP_RegionSelect_C_Populate_Regions_Params
{
};

// Function WBP_RegionSelect.WBP_RegionSelect_C.OnChildButtonSelectedRegion
struct UWBP_RegionSelect_C_OnChildButtonSelectedRegion_Params
{
};

// Function WBP_RegionSelect.WBP_RegionSelect_C.BndEvt__WBP_ModalPopupContainer_K2Node_ComponentBoundEvent_0_CloseButtonClicked__DelegateSignature
struct UWBP_RegionSelect_C_BndEvt__WBP_ModalPopupContainer_K2Node_ComponentBoundEvent_0_CloseButtonClicked__DelegateSignature_Params
{
};

// Function WBP_RegionSelect.WBP_RegionSelect_C.InitializeWidget
struct UWBP_RegionSelect_C_InitializeWidget_Params
{
	class APUMG_HUD**                                  HUD;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_RegionSelect.WBP_RegionSelect_C.OnShown
struct UWBP_RegionSelect_C_OnShown_Params
{
};

// Function WBP_RegionSelect.WBP_RegionSelect_C.ExecuteUbergraph_WBP_RegionSelect
struct UWBP_RegionSelect_C_ExecuteUbergraph_WBP_RegionSelect_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_RegionSelect.WBP_RegionSelect_C.OnRegionSelectEntriesCreated__DelegateSignature
struct UWBP_RegionSelect_C_OnRegionSelectEntriesCreated__DelegateSignature_Params
{
};

// Function WBP_RegionSelect.WBP_RegionSelect_C.OnRegionSelected__DelegateSignature
struct UWBP_RegionSelect_C_OnRegionSelected__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

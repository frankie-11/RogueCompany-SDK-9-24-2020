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

// Function WBP_SectionListingBar.WBP_SectionListingBar_C.SetActiveButton
struct UWBP_SectionListingBar_C_SetActiveButton_Params
{
	int*                                               ActiveIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_SectionListingBar.WBP_SectionListingBar_C.OnInputStateChanged
struct UWBP_SectionListingBar_C_OnInputStateChanged_Params
{
	TEnumAsByte<EPGAME_INPUT_STATE>*                   InputState;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_SectionListingBar.WBP_SectionListingBar_C.OnSectionButton
struct UWBP_SectionListingBar_C_OnSectionButton_Params
{
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_SectionListingBar.WBP_SectionListingBar_C.SetSections
struct UWBP_SectionListingBar_C_SetSections_Params
{
	TArray<class UKSStoreSection*>                     Sections;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function WBP_SectionListingBar.WBP_SectionListingBar_C.InitializeWidget
struct UWBP_SectionListingBar_C_InitializeWidget_Params
{
	class APUMG_HUD**                                  HUD;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_SectionListingBar.WBP_SectionListingBar_C.ExecuteUbergraph_WBP_SectionListingBar
struct UWBP_SectionListingBar_C_ExecuteUbergraph_WBP_SectionListingBar_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_SectionListingBar.WBP_SectionListingBar_C.OnSectionSelected__DelegateSignature
struct UWBP_SectionListingBar_C_OnSectionSelected__DelegateSignature_Params
{
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

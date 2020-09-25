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

// Function WBP_Player_Card_Social_Entry.WBP_Player_Card_Social_Entry_C.SetCurrentInfoContainer
struct UWBP_Player_Card_Social_Entry_C_SetCurrentInfoContainer_Params
{
	class UObject**                                    InfoContainer;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_Player_Card_Social_Entry.WBP_Player_Card_Social_Entry_C.UpdatePlayerCard
struct UWBP_Player_Card_Social_Entry_C_UpdatePlayerCard_Params
{
	class UKSPlayerInfo**                              playerinfo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_Player_Card_Social_Entry.WBP_Player_Card_Social_Entry_C.SetHoverState
struct UWBP_Player_Card_Social_Entry_C_SetHoverState_Params
{
	bool*                                              IsHovered;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_Player_Card_Social_Entry.WBP_Player_Card_Social_Entry_C.GetDisplayItem
struct UWBP_Player_Card_Social_Entry_C_GetDisplayItem_Params
{
	class UKSWidget*                                   ActiveDisplayItem;                                        // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_Player_Card_Social_Entry.WBP_Player_Card_Social_Entry_C.UpdateDataItem
struct UWBP_Player_Card_Social_Entry_C_UpdateDataItem_Params
{
	class UObject**                                    Data;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_Player_Card_Social_Entry.WBP_Player_Card_Social_Entry_C.BP_OnItemSelectionChanged
struct UWBP_Player_Card_Social_Entry_C_BP_OnItemSelectionChanged_Params
{
	bool*                                              bIsSelected;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_Player_Card_Social_Entry.WBP_Player_Card_Social_Entry_C.BP_OnItemExpansionChanged
struct UWBP_Player_Card_Social_Entry_C_BP_OnItemExpansionChanged_Params
{
	bool*                                              bIsExpanded;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_Player_Card_Social_Entry.WBP_Player_Card_Social_Entry_C.BP_OnEntryReleased
struct UWBP_Player_Card_Social_Entry_C_BP_OnEntryReleased_Params
{
};

// Function WBP_Player_Card_Social_Entry.WBP_Player_Card_Social_Entry_C.OnListItemObjectSet
struct UWBP_Player_Card_Social_Entry_C_OnListItemObjectSet_Params
{
	class UObject**                                    ListItemObject;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_Player_Card_Social_Entry.WBP_Player_Card_Social_Entry_C.InitializeWidget
struct UWBP_Player_Card_Social_Entry_C_InitializeWidget_Params
{
	class APUMG_HUD**                                  HUD;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_Player_Card_Social_Entry.WBP_Player_Card_Social_Entry_C.UninitializeWidget
struct UWBP_Player_Card_Social_Entry_C_UninitializeWidget_Params
{
};

// Function WBP_Player_Card_Social_Entry.WBP_Player_Card_Social_Entry_C.OnHeaderClicked
struct UWBP_Player_Card_Social_Entry_C_OnHeaderClicked_Params
{
	class UUserWidget**                                Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_Player_Card_Social_Entry.WBP_Player_Card_Social_Entry_C.OnPlayerClicked
struct UWBP_Player_Card_Social_Entry_C_OnPlayerClicked_Params
{
	class UWBP_player_card_module_C**                  Selected_Player_Card;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_Player_Card_Social_Entry.WBP_Player_Card_Social_Entry_C.OnMouseEnter
struct UWBP_Player_Card_Social_Entry_C_OnMouseEnter_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WBP_Player_Card_Social_Entry.WBP_Player_Card_Social_Entry_C.OnMouseLeave
struct UWBP_Player_Card_Social_Entry_C_OnMouseLeave_Params
{
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WBP_Player_Card_Social_Entry.WBP_Player_Card_Social_Entry_C.OnShown
struct UWBP_Player_Card_Social_Entry_C_OnShown_Params
{
};

// Function WBP_Player_Card_Social_Entry.WBP_Player_Card_Social_Entry_C.HandlePlayerContainerUpdate
struct UWBP_Player_Card_Social_Entry_C_HandlePlayerContainerUpdate_Params
{
	class UKSPlayerInfo**                              playerinfo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_Player_Card_Social_Entry.WBP_Player_Card_Social_Entry_C.ExecuteUbergraph_WBP_Player_Card_Social_Entry
struct UWBP_Player_Card_Social_Entry_C_ExecuteUbergraph_WBP_Player_Card_Social_Entry_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_Player_Card_Social_Entry.WBP_Player_Card_Social_Entry_C.OnClicked__DelegateSignature
struct UWBP_Player_Card_Social_Entry_C_OnClicked__DelegateSignature_Params
{
	class UUserWidget**                                Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function WBP_LoadoutButton.WBP_LoadoutButton_C.PopulateLoadoutButton
struct UWBP_LoadoutButton_C_PopulateLoadoutButton_Params
{
};

// Function WBP_LoadoutButton.WBP_LoadoutButton_C.SetLoadoutItem
struct UWBP_LoadoutButton_C_SetLoadoutItem_Params
{
};

// Function WBP_LoadoutButton.WBP_LoadoutButton_C.PreConstruct
struct UWBP_LoadoutButton_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_LoadoutButton.WBP_LoadoutButton_C.Construct
struct UWBP_LoadoutButton_C_Construct_Params
{
};

// Function WBP_LoadoutButton.WBP_LoadoutButton_C.OnClick
struct UWBP_LoadoutButton_C_OnClick_Params
{
};

// Function WBP_LoadoutButton.WBP_LoadoutButton_C.OnHover
struct UWBP_LoadoutButton_C_OnHover_Params
{
	bool*                                              IsGamepad;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_LoadoutButton.WBP_LoadoutButton_C.SetIsActive
struct UWBP_LoadoutButton_C_SetIsActive_Params
{
	bool*                                              IsActive;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_LoadoutButton.WBP_LoadoutButton_C.ExecuteUbergraph_WBP_LoadoutButton
struct UWBP_LoadoutButton_C_ExecuteUbergraph_WBP_LoadoutButton_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_LoadoutButton.WBP_LoadoutButton_C.OnClicked__DelegateSignature
struct UWBP_LoadoutButton_C_OnClicked__DelegateSignature_Params
{
	class UKSItem**                                    LoadoutItem;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UWBP_LoadoutButton_C**                       LoadoutButton;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_LoadoutButton.WBP_LoadoutButton_C.OnHovered__DelegateSignature
struct UWBP_LoadoutButton_C_OnHovered__DelegateSignature_Params
{
	class UKSItem**                                    LoadoutItem;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsGamepad;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

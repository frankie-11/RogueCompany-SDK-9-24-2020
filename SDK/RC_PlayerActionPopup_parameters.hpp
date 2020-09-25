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

// Function PlayerActionPopup.PlayerActionPopup_C.UpdateMuteText
struct UPlayerActionPopup_C_UpdateMuteText_Params
{
	bool*                                              IsMuted;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerActionPopup.PlayerActionPopup_C.GetButtons
struct UPlayerActionPopup_C_GetButtons_Params
{
	TArray<class UStandardButton_C*>                   Buttons;                                                  // (Parm, OutParm, ZeroConstructor)
};

// Function PlayerActionPopup.PlayerActionPopup_C.BndEvt__MutePlayerButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
struct UPlayerActionPopup_C_BndEvt__MutePlayerButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function PlayerActionPopup.PlayerActionPopup_C.BndEvt__ReportPlayerButton_K2Node_ComponentBoundEvent_164_OnClicked__DelegateSignature
struct UPlayerActionPopup_C_BndEvt__ReportPlayerButton_K2Node_ComponentBoundEvent_164_OnClicked__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function PlayerActionPopup.PlayerActionPopup_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct UPlayerActionPopup_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function PlayerActionPopup.PlayerActionPopup_C.InitializeWidget
struct UPlayerActionPopup_C_InitializeWidget_Params
{
	class APUMG_HUD**                                  HUD;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerActionPopup.PlayerActionPopup_C.OnPopupShown
struct UPlayerActionPopup_C_OnPopupShown_Params
{
	int64_t*                                           NewPlayerID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AKSPlayerState**                             NewPlayerState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               TeamNum;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              CanReport;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerActionPopup.PlayerActionPopup_C.OnPlayerReported
struct UPlayerActionPopup_C_OnPlayerReported_Params
{
	int*                                               PlayerId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerActionPopup.PlayerActionPopup_C.BndEvt__ViewProfile_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct UPlayerActionPopup_C_BndEvt__ViewProfile_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function PlayerActionPopup.PlayerActionPopup_C.ExecuteUbergraph_PlayerActionPopup
struct UPlayerActionPopup_C_ExecuteUbergraph_PlayerActionPopup_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerActionPopup.PlayerActionPopup_C.OnBackOut__DelegateSignature
struct UPlayerActionPopup_C_OnBackOut__DelegateSignature_Params
{
};

// Function PlayerActionPopup.PlayerActionPopup_C.OnMutePlayer__DelegateSignature
struct UPlayerActionPopup_C_OnMutePlayer__DelegateSignature_Params
{
	bool*                                              IsMuted;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int64_t*                                           OwningPlayerID;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerActionPopup.PlayerActionPopup_C.OnReportPlayer__DelegateSignature
struct UPlayerActionPopup_C_OnReportPlayer__DelegateSignature_Params
{
	int64_t*                                           ReportedPlayerID;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AKSPlayerState**                             NewPlayerState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               TeamNum;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

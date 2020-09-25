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

// Function NewWBP_LobbyNameplate.NewWBP_LobbyNameplate_C.OnPossession
struct UNewWBP_LobbyNameplate_C_OnPossession_Params
{
	class APlayerState**                               PlayerState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AKSCharacter**                               Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function NewWBP_LobbyNameplate.NewWBP_LobbyNameplate_C.OnHovered
struct UNewWBP_LobbyNameplate_C_OnHovered_Params
{
};

// Function NewWBP_LobbyNameplate.NewWBP_LobbyNameplate_C.OnUnhovered
struct UNewWBP_LobbyNameplate_C_OnUnhovered_Params
{
};

// Function NewWBP_LobbyNameplate.NewWBP_LobbyNameplate_C.Construct
struct UNewWBP_LobbyNameplate_C_Construct_Params
{
};

// Function NewWBP_LobbyNameplate.NewWBP_LobbyNameplate_C.SetName
struct UNewWBP_LobbyNameplate_C_SetName_Params
{
	struct FText*                                      InName;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function NewWBP_LobbyNameplate.NewWBP_LobbyNameplate_C.SetIcons
struct UNewWBP_LobbyNameplate_C_SetIcons_Params
{
	bool*                                              IsLeader;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UKSItem**                                    AvatarItem;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function NewWBP_LobbyNameplate.NewWBP_LobbyNameplate_C.InitializeWidget
struct UNewWBP_LobbyNameplate_C_InitializeWidget_Params
{
	class APUMG_HUD**                                  HUD;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function NewWBP_LobbyNameplate.NewWBP_LobbyNameplate_C.PreConstruct
struct UNewWBP_LobbyNameplate_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function NewWBP_LobbyNameplate.NewWBP_LobbyNameplate_C.ExecuteUbergraph_NewWBP_LobbyNameplate
struct UNewWBP_LobbyNameplate_C_ExecuteUbergraph_NewWBP_LobbyNameplate_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

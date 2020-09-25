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

// Function BrightLobbyHeader.BrightLobbyHeader_C.InitializeWidget
struct UBrightLobbyHeader_C_InitializeWidget_Params
{
	class APUMG_HUD**                                  HUD;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BrightLobbyHeader.BrightLobbyHeader_C.StartShowSequence
struct UBrightLobbyHeader_C_StartShowSequence_Params
{
	struct FName*                                      FromRoute;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      ToRoute;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BrightLobbyHeader.BrightLobbyHeader_C.HandleLobbyStartMenuInputAction
struct UBrightLobbyHeader_C_HandleLobbyStartMenuInputAction_Params
{
};

// Function BrightLobbyHeader.BrightLobbyHeader_C.HandleLoginStateChange
struct UBrightLobbyHeader_C_HandleLoginStateChange_Params
{
	EPUMG_LoginState*                                  LoginState;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BrightLobbyHeader.BrightLobbyHeader_C.ExecuteUbergraph_BrightLobbyHeader
struct UBrightLobbyHeader_C_ExecuteUbergraph_BrightLobbyHeader_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

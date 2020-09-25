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

// Function WBP_LocalPlayerModBar.WBP_LocalPlayerModBar_C.PostSetPawn
struct UWBP_LocalPlayerModBar_C_PostSetPawn_Params
{
};

// Function WBP_LocalPlayerModBar.WBP_LocalPlayerModBar_C.PreClearPawn
struct UWBP_LocalPlayerModBar_C_PreClearPawn_Params
{
};

// Function WBP_LocalPlayerModBar.WBP_LocalPlayerModBar_C.Handle Mods Updated
struct UWBP_LocalPlayerModBar_C_Handle_Mods_Updated_Params
{
	class AKSCharacter**                               Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_LocalPlayerModBar.WBP_LocalPlayerModBar_C.ExecuteUbergraph_WBP_LocalPlayerModBar
struct UWBP_LocalPlayerModBar_C_ExecuteUbergraph_WBP_LocalPlayerModBar_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

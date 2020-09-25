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

// Function LoggedInInventoryCheck.LoggedInInventoryCheck_C.Tick
struct ULoggedInInventoryCheck_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LoggedInInventoryCheck.LoggedInInventoryCheck_C.Construct
struct ULoggedInInventoryCheck_C_Construct_Params
{
};

// Function LoggedInInventoryCheck.LoggedInInventoryCheck_C.PreConstruct
struct ULoggedInInventoryCheck_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LoggedInInventoryCheck.LoggedInInventoryCheck_C.OpenGate
struct ULoggedInInventoryCheck_C_OpenGate_Params
{
};

// Function LoggedInInventoryCheck.LoggedInInventoryCheck_C.CloseGate
struct ULoggedInInventoryCheck_C_CloseGate_Params
{
};

// Function LoggedInInventoryCheck.LoggedInInventoryCheck_C.OnShown
struct ULoggedInInventoryCheck_C_OnShown_Params
{
};

// Function LoggedInInventoryCheck.LoggedInInventoryCheck_C.InitializeWidget
struct ULoggedInInventoryCheck_C_InitializeWidget_Params
{
	class APUMG_HUD**                                  HUD;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LoggedInInventoryCheck.LoggedInInventoryCheck_C.ExecuteUbergraph_LoggedInInventoryCheck
struct ULoggedInInventoryCheck_C_ExecuteUbergraph_LoggedInInventoryCheck_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

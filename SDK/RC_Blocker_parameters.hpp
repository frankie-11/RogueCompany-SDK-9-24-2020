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

// Function Blocker.Blocker_C.BndEvt__Closer_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
struct UBlocker_C_BndEvt__Closer_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function Blocker.Blocker_C.Bind
struct UBlocker_C_Bind_Params
{
	class UPUMG_Widget**                               Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool*                                              ClickToClose;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Blocker.Blocker_C.InitializeWidget
struct UBlocker_C_InitializeWidget_Params
{
	class APUMG_HUD**                                  HUD;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Blocker.Blocker_C.HandleBlockerChange
struct UBlocker_C_HandleBlockerChange_Params
{
	bool*                                              Show;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UUserWidget**                                InWidget;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Blocker.Blocker_C.ExecuteUbergraph_Blocker
struct UBlocker_C_ExecuteUbergraph_Blocker_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

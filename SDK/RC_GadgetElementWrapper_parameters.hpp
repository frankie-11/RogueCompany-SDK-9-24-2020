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

// Function GadgetElementWrapper.GadgetElementWrapper_C.Set Jammed
struct UGadgetElementWrapper_C_Set_Jammed_Params
{
	bool*                                              Is_Jammed;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GadgetElementWrapper.GadgetElementWrapper_C.InitializeWidget
struct UGadgetElementWrapper_C_InitializeWidget_Params
{
	class APUMG_HUD**                                  HUD;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GadgetElementWrapper.GadgetElementWrapper_C.PostSetPawn
struct UGadgetElementWrapper_C_PostSetPawn_Params
{
};

// Function GadgetElementWrapper.GadgetElementWrapper_C.OnWeaponInventoryChanged
struct UGadgetElementWrapper_C_OnWeaponInventoryChanged_Params
{
};

// Function GadgetElementWrapper.GadgetElementWrapper_C.GadgetSwapped
struct UGadgetElementWrapper_C_GadgetSwapped_Params
{
	class AKSCharacter**                               EquipmentOwner;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UKSWeaponComponent**                         Equipment;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function GadgetElementWrapper.GadgetElementWrapper_C.ExecuteUbergraph_GadgetElementWrapper
struct UGadgetElementWrapper_C_ExecuteUbergraph_GadgetElementWrapper_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

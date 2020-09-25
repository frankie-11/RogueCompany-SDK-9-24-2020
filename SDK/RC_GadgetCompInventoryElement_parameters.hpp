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

// Function GadgetCompInventoryElement.GadgetCompInventoryElement_C.Set Jammed
struct UGadgetCompInventoryElement_C_Set_Jammed_Params
{
	bool*                                              Is_Jammed;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GadgetCompInventoryElement.GadgetCompInventoryElement_C.OnAmmoChanged
struct UGadgetCompInventoryElement_C_OnAmmoChanged_Params
{
	int*                                               OldInClip;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               OldClipSize;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               OldReserve;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               NewInClip;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               NewClipSize;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               NewReserve;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GadgetCompInventoryElement.GadgetCompInventoryElement_C.InitializeWidget
struct UGadgetCompInventoryElement_C_InitializeWidget_Params
{
	class APUMG_HUD**                                  HUD;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GadgetCompInventoryElement.GadgetCompInventoryElement_C.Construct
struct UGadgetCompInventoryElement_C_Construct_Params
{
};

// Function GadgetCompInventoryElement.GadgetCompInventoryElement_C.PostSetWeaponComponent
struct UGadgetCompInventoryElement_C_PostSetWeaponComponent_Params
{
};

// Function GadgetCompInventoryElement.GadgetCompInventoryElement_C.PreClearWeaponComponent
struct UGadgetCompInventoryElement_C_PreClearWeaponComponent_Params
{
};

// Function GadgetCompInventoryElement.GadgetCompInventoryElement_C.OnBecomeActiveWeaponComponent
struct UGadgetCompInventoryElement_C_OnBecomeActiveWeaponComponent_Params
{
};

// Function GadgetCompInventoryElement.GadgetCompInventoryElement_C.ExecuteUbergraph_GadgetCompInventoryElement
struct UGadgetCompInventoryElement_C_ExecuteUbergraph_GadgetCompInventoryElement_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GadgetCompInventoryElement.GadgetCompInventoryElement_C.OnGadgetRemoved__DelegateSignature
struct UGadgetCompInventoryElement_C_OnGadgetRemoved__DelegateSignature_Params
{
};

// Function GadgetCompInventoryElement.GadgetCompInventoryElement_C.OnGadgetAdded__DelegateSignature
struct UGadgetCompInventoryElement_C_OnGadgetAdded__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

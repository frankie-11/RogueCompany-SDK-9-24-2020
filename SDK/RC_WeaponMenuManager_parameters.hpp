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

// Function WeaponMenuManager.WeaponMenuManager_C.IsFocusEnabled
struct UWeaponMenuManager_C_IsFocusEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WeaponMenuManager.WeaponMenuManager_C.Close All
struct UWeaponMenuManager_C_Close_All_Params
{
};

// Function WeaponMenuManager.WeaponMenuManager_C.PostSetWeapon
struct UWeaponMenuManager_C_PostSetWeapon_Params
{
};

// Function WeaponMenuManager.WeaponMenuManager_C.OtherWeaponUpdate
struct UWeaponMenuManager_C_OtherWeaponUpdate_Params
{
};

// Function WeaponMenuManager.WeaponMenuManager_C.PreClearWeapon
struct UWeaponMenuManager_C_PreClearWeapon_Params
{
};

// Function WeaponMenuManager.WeaponMenuManager_C.InventoryChange
struct UWeaponMenuManager_C_InventoryChange_Params
{
};

// Function WeaponMenuManager.WeaponMenuManager_C.Display Target List
struct UWeaponMenuManager_C_Display_Target_List_Params
{
	class AKSWeapon_Targeted**                         TargetingWeapon;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>*                             PotentialTargets;                                         // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function WeaponMenuManager.WeaponMenuManager_C.ExecuteUbergraph_WeaponMenuManager
struct UWeaponMenuManager_C_ExecuteUbergraph_WeaponMenuManager_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

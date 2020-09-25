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

// Function CharacterHeatSourceComponent.CharacterHeatSourceComponent_C.ReceiveEndPlay
struct UCharacterHeatSourceComponent_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       bpp__EndPlayReason__pf;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CharacterHeatSourceComponent.CharacterHeatSourceComponent_C.OnThermalVisionStateChanged
struct UCharacterHeatSourceComponent_C_OnThermalVisionStateChanged_Params
{
	EModViewModeState*                                 bpp__NewState__pf;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CharacterHeatSourceComponent.CharacterHeatSourceComponent_C.OnTemperatureChanged_Event_1
struct UCharacterHeatSourceComponent_C_OnTemperatureChanged_Event_1_Params
{
	class UKSHeatSourceComponent**                     bpp__HeatSource__pf__const;                               // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float*                                             bpp__NewTemperature__pf;                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CharacterHeatSourceComponent.CharacterHeatSourceComponent_C.OnOwnerInfoUpdateNotify
struct UCharacterHeatSourceComponent_C_OnOwnerInfoUpdateNotify_Params
{
};

// Function CharacterHeatSourceComponent.CharacterHeatSourceComponent_C.ExecuteUbergraph_CharacterHeatSourceComponent_2
struct UCharacterHeatSourceComponent_C_ExecuteUbergraph_CharacterHeatSourceComponent_2_Params
{
	int*                                               bpp__EntryPoint__pf;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CharacterHeatSourceComponent.CharacterHeatSourceComponent_C.Apply Temperature
struct UCharacterHeatSourceComponent_C_Apply_Temperature_Params
{
	float*                                             bpp__AppliedxTemp__pfT;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction CharacterHeatSourceComponent.CharacterHeatSourceComponent_C.OnTempChanged__DelegateSignature
struct UCharacterHeatSourceComponent_C_OnTempChanged__DelegateSignature_Params
{
	class UKSHeatSourceComponent**                     bpp__HeatSource__pf;                                      // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float*                                             bpp__NewTemperature__pf;                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

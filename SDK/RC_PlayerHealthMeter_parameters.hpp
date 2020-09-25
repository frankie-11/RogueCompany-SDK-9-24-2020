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

// Function PlayerHealthMeter.PlayerHealthMeter_C.SetHealthMeterState
struct UPlayerHealthMeter_C_SetHealthMeterState_Params
{
	struct FPlayerHealthMeterState*                    bpp__HealthMeterState__pf;                                // (Parm)
};

// Function PlayerHealthMeter.PlayerHealthMeter_C.PreConstruct
struct UPlayerHealthMeter_C_PreConstruct_Params
{
	bool*                                              bpp__IsDesignTime__pf;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerHealthMeter.PlayerHealthMeter_C.PlayDamagePulse
struct UPlayerHealthMeter_C_PlayDamagePulse_Params
{
};

// Function PlayerHealthMeter.PlayerHealthMeter_C.Construct
struct UPlayerHealthMeter_C_Construct_Params
{
};

// Function PlayerHealthMeter.PlayerHealthMeter_C.Apply State To Segments
struct UPlayerHealthMeter_C_Apply_State_To_Segments_Params
{
};

// Function PlayerHealthMeter.PlayerHealthMeter_C.Add Segments If Needed
struct UPlayerHealthMeter_C_Add_Segments_If_Needed_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

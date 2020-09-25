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

// Function VehicleOverlay.VehicleOverlay_C.UpdateRevealConeReticle
struct UVehicleOverlay_C_UpdateRevealConeReticle_Params
{
};

// Function VehicleOverlay.VehicleOverlay_C.SetVehicle
struct UVehicleOverlay_C_SetVehicle_Params
{
	class AKSVehicle**                                 Vehicle;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VehicleOverlay.VehicleOverlay_C.UnsetVehicle
struct UVehicleOverlay_C_UnsetVehicle_Params
{
};

// Function VehicleOverlay.VehicleOverlay_C.Tick
struct UVehicleOverlay_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VehicleOverlay.VehicleOverlay_C.InitializeWidget
struct UVehicleOverlay_C_InitializeWidget_Params
{
	class APUMG_HUD**                                  HUD;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VehicleOverlay.VehicleOverlay_C.ModeChange
struct UVehicleOverlay_C_ModeChange_Params
{
	TEnumAsByte<EPGAME_INPUT_STATE>*                   InputState;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VehicleOverlay.VehicleOverlay_C.PostSetPawn
struct UVehicleOverlay_C_PostSetPawn_Params
{
};

// Function VehicleOverlay.VehicleOverlay_C.PreClearPawn
struct UVehicleOverlay_C_PreClearPawn_Params
{
};

// Function VehicleOverlay.VehicleOverlay_C.Handle Vehicle State Changed
struct UVehicleOverlay_C_Handle_Vehicle_State_Changed_Params
{
};

// Function VehicleOverlay.VehicleOverlay_C.HandleVehicleHealthChanged
struct UVehicleOverlay_C_HandleVehicleHealthChanged_Params
{
	float*                                             CurrentHealth;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VehicleOverlay.VehicleOverlay_C.HandleVehicleSeatingChanged
struct UVehicleOverlay_C_HandleVehicleSeatingChanged_Params
{
};

// Function VehicleOverlay.VehicleOverlay_C.ExecuteUbergraph_VehicleOverlay
struct UVehicleOverlay_C_ExecuteUbergraph_VehicleOverlay_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VehicleOverlay.VehicleOverlay_C.Vehicle State Changed__DelegateSignature
struct UVehicleOverlay_C_Vehicle_State_Changed__DelegateSignature_Params
{
	bool*                                              InVehicle;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

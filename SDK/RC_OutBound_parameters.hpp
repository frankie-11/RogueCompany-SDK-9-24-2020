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

// Function OutBound.OutBound_C.Construct
struct UOutBound_C_Construct_Params
{
};

// Function OutBound.OutBound_C.HandleOutBoundsStart
struct UOutBound_C_HandleOutBoundsStart_Params
{
};

// Function OutBound.OutBound_C.HandleOutBoundsWarningEnd
struct UOutBound_C_HandleOutBoundsWarningEnd_Params
{
	class AKSCharacter**                               Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OutBound.OutBound_C.HandleOutBoundsEnd
struct UOutBound_C_HandleOutBoundsEnd_Params
{
};

// Function OutBound.OutBound_C.Tick
struct UOutBound_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OutBound.OutBound_C.OpenGate
struct UOutBound_C_OpenGate_Params
{
};

// Function OutBound.OutBound_C.CloseGate
struct UOutBound_C_CloseGate_Params
{
};

// Function OutBound.OutBound_C.PostSetPawn
struct UOutBound_C_PostSetPawn_Params
{
};

// Function OutBound.OutBound_C.PreClearPawn
struct UOutBound_C_PreClearPawn_Params
{
};

// Function OutBound.OutBound_C.HandleKillCamViewChange
struct UOutBound_C_HandleKillCamViewChange_Params
{
	class AKSPlayerController**                        Controller;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     OldActor;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     NewActor;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OutBound.OutBound_C.InitializeWidget
struct UOutBound_C_InitializeWidget_Params
{
	class APUMG_HUD**                                  HUD;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OutBound.OutBound_C.OnKillCamStart
struct UOutBound_C_OnKillCamStart_Params
{
	class APawn**                                      ViewPawn;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OutBound.OutBound_C.ExecuteUbergraph_OutBound
struct UOutBound_C_ExecuteUbergraph_OutBound_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function WBP_NeutralBombIndicator.WBP_NeutralBombIndicator_C.Construct
struct UWBP_NeutralBombIndicator_C_Construct_Params
{
};

// Function WBP_NeutralBombIndicator.WBP_NeutralBombIndicator_C.HandleBombStateChanged
struct UWBP_NeutralBombIndicator_C_HandleBombStateChanged_Params
{
	struct FKSNeutralBombState*                        BombState;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_NeutralBombIndicator.WBP_NeutralBombIndicator_C.HandleViewedPawnChanged
struct UWBP_NeutralBombIndicator_C_HandleViewedPawnChanged_Params
{
	class AKSPlayerController**                        Controller;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     OldViewTarget;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     NewViewTarget;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_NeutralBombIndicator.WBP_NeutralBombIndicator_C.InitializeWidget
struct UWBP_NeutralBombIndicator_C_InitializeWidget_Params
{
	class APUMG_HUD**                                  HUD;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_NeutralBombIndicator.WBP_NeutralBombIndicator_C.ExecuteUbergraph_WBP_NeutralBombIndicator
struct UWBP_NeutralBombIndicator_C_ExecuteUbergraph_WBP_NeutralBombIndicator_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

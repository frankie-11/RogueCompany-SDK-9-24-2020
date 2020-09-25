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

// Function NeutralBombZone.NeutralBombZone_C.ReceiveBeginPlay
struct ANeutralBombZone_C_ReceiveBeginPlay_Params
{
};

// Function NeutralBombZone.NeutralBombZone_C.UpdateZoneMaterial
struct ANeutralBombZone_C_UpdateZoneMaterial_Params
{
};

// Function NeutralBombZone.NeutralBombZone_C.RoundSetup
struct ANeutralBombZone_C_RoundSetup_Params
{
	struct FRoundInitState*                            RoundInitState;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function NeutralBombZone.NeutralBombZone_C.TeamUpdated
struct ANeutralBombZone_C_TeamUpdated_Params
{
};

// Function NeutralBombZone.NeutralBombZone_C.Activated
struct ANeutralBombZone_C_Activated_Params
{
	bool*                                              bActive;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function NeutralBombZone.NeutralBombZone_C.BombStateChanged
struct ANeutralBombZone_C_BombStateChanged_Params
{
	struct FKSNeutralBombState*                        BombState;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function NeutralBombZone.NeutralBombZone_C.ExecuteUbergraph_NeutralBombZone
struct ANeutralBombZone_C_ExecuteUbergraph_NeutralBombZone_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

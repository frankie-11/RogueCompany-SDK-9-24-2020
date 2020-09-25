// RogueCompany (4.24) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_ProgressionCardSlot_PlayerXP.WBP_ProgressionCardSlot_PlayerXP_C.ProcessPlayerProgression
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayerProgression*     PlayerProgress                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_ProgressionCardSlot_PlayerXP_C::ProcessPlayerProgression(struct FPlayerProgression* PlayerProgress)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ProgressionCardSlot_PlayerXP.WBP_ProgressionCardSlot_PlayerXP_C.ProcessPlayerProgression");

	UWBP_ProgressionCardSlot_PlayerXP_C_ProcessPlayerProgression_Params params;
	params.PlayerProgress = PlayerProgress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

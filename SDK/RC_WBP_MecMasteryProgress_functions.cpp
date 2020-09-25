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

// Function WBP_MecMasteryProgress.WBP_MecMasteryProgress_C.GetNextMasteryRewardTier
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FActivityTier>   ActivityTiers                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int*                           CurrentProgressCount           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FActivityTier           NextRewardTier                 (Parm, OutParm)
// bool                           RewardFound                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWBP_MecMasteryProgress_C::GetNextMasteryRewardTier(int* CurrentProgressCount, TArray<struct FActivityTier>* ActivityTiers, struct FActivityTier* NextRewardTier, bool* RewardFound)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MecMasteryProgress.WBP_MecMasteryProgress_C.GetNextMasteryRewardTier");

	UWBP_MecMasteryProgress_C_GetNextMasteryRewardTier_Params params;
	params.CurrentProgressCount = CurrentProgressCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ActivityTiers != nullptr)
		*ActivityTiers = params.ActivityTiers;
	if (NextRewardTier != nullptr)
		*NextRewardTier = params.NextRewardTier;
	if (RewardFound != nullptr)
		*RewardFound = params.RewardFound;
}


// Function WBP_MecMasteryProgress.WBP_MecMasteryProgress_C.SetMasteryLevelForJob
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UKSJobItem**             JobItem                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MecMasteryProgress_C::SetMasteryLevelForJob(class UKSJobItem** JobItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MecMasteryProgress.WBP_MecMasteryProgress_C.SetMasteryLevelForJob");

	UWBP_MecMasteryProgress_C_SetMasteryLevelForJob_Params params;
	params.JobItem = JobItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function WBP_MercMasteryIcon.WBP_MercMasteryIcon_C.SetMasteryLevelExplicit
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           CurrentLevel                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           MaxLevel                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MercMasteryIcon_C::SetMasteryLevelExplicit(int* CurrentLevel, int* MaxLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MercMasteryIcon.WBP_MercMasteryIcon_C.SetMasteryLevelExplicit");

	UWBP_MercMasteryIcon_C_SetMasteryLevelExplicit_Params params;
	params.CurrentLevel = CurrentLevel;
	params.MaxLevel = MaxLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MercMasteryIcon.WBP_MercMasteryIcon_C.SetMasteryLevelForJob
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UKSJobItem**             JobItem                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MercMasteryIcon_C::SetMasteryLevelForJob(class UKSJobItem** JobItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MercMasteryIcon.WBP_MercMasteryIcon_C.SetMasteryLevelForJob");

	UWBP_MercMasteryIcon_C_SetMasteryLevelForJob_Params params;
	params.JobItem = JobItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

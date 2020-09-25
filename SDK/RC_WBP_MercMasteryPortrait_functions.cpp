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

// Function WBP_MercMasteryPortrait.WBP_MercMasteryPortrait_C.SetMasteryFrameToLevel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           MasteryLevel                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           MaxMasteryLevel                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MercMasteryPortrait_C::SetMasteryFrameToLevel(int* MasteryLevel, int* MaxMasteryLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MercMasteryPortrait.WBP_MercMasteryPortrait_C.SetMasteryFrameToLevel");

	UWBP_MercMasteryPortrait_C_SetMasteryFrameToLevel_Params params;
	params.MasteryLevel = MasteryLevel;
	params.MaxMasteryLevel = MaxMasteryLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MercMasteryPortrait.WBP_MercMasteryPortrait_C.OnJobMasteryLevelUpdated
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_MercMasteryPortrait_C::OnJobMasteryLevelUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MercMasteryPortrait.WBP_MercMasteryPortrait_C.OnJobMasteryLevelUpdated");

	UWBP_MercMasteryPortrait_C_OnJobMasteryLevelUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MercMasteryPortrait.WBP_MercMasteryPortrait_C.SetJobPortraitFromSoftTexture
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_MercMasteryPortrait_C::SetJobPortraitFromSoftTexture()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MercMasteryPortrait.WBP_MercMasteryPortrait_C.SetJobPortraitFromSoftTexture");

	UWBP_MercMasteryPortrait_C_SetJobPortraitFromSoftTexture_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MercMasteryPortrait.WBP_MercMasteryPortrait_C.Set Mastery Frame
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_MercMasteryPortrait_C::Set_Mastery_Frame()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MercMasteryPortrait.WBP_MercMasteryPortrait_C.Set Mastery Frame");

	UWBP_MercMasteryPortrait_C_Set_Mastery_Frame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MercMasteryPortrait.WBP_MercMasteryPortrait_C.SetPlayerOwner
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSPlayerState**         PlayerState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MercMasteryPortrait_C::SetPlayerOwner(class AKSPlayerState** PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MercMasteryPortrait.WBP_MercMasteryPortrait_C.SetPlayerOwner");

	UWBP_MercMasteryPortrait_C_SetPlayerOwner_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MercMasteryPortrait.WBP_MercMasteryPortrait_C.SetJobInformation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UKSJobItem**             JobItem                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MercMasteryPortrait_C::SetJobInformation(class UKSJobItem** JobItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MercMasteryPortrait.WBP_MercMasteryPortrait_C.SetJobInformation");

	UWBP_MercMasteryPortrait_C_SetJobInformation_Params params;
	params.JobItem = JobItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

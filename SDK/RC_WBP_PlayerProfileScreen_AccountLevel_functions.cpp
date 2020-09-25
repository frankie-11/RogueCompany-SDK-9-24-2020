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

// Function WBP_PlayerProfileScreen_AccountLevel.WBP_PlayerProfileScreen_AccountLevel_C.UpdateProgressBar
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Perc                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PlayerProfileScreen_AccountLevel_C::UpdateProgressBar(float* Perc)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerProfileScreen_AccountLevel.WBP_PlayerProfileScreen_AccountLevel_C.UpdateProgressBar");

	UWBP_PlayerProfileScreen_AccountLevel_C_UpdateProgressBar_Params params;
	params.Perc = Perc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerProfileScreen_AccountLevel.WBP_PlayerProfileScreen_AccountLevel_C.RefreshStats
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_PlayerProfileScreen_AccountLevel_C::RefreshStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerProfileScreen_AccountLevel.WBP_PlayerProfileScreen_AccountLevel_C.RefreshStats");

	UWBP_PlayerProfileScreen_AccountLevel_C_RefreshStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerProfileScreen_AccountLevel.WBP_PlayerProfileScreen_AccountLevel_C.OnActivityInstanceChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsLoaded                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PlayerProfileScreen_AccountLevel_C::OnActivityInstanceChanged__DelegateSignature(bool* IsLoaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerProfileScreen_AccountLevel.WBP_PlayerProfileScreen_AccountLevel_C.OnActivityInstanceChanged__DelegateSignature");

	UWBP_PlayerProfileScreen_AccountLevel_C_OnActivityInstanceChanged__DelegateSignature_Params params;
	params.IsLoaded = IsLoaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

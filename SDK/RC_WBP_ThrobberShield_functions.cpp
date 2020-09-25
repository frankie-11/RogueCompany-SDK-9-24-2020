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

// Function WBP_ThrobberShield.WBP_ThrobberShield_C.ResetThrobberAnim
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_ThrobberShield_C::ResetThrobberAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ThrobberShield.WBP_ThrobberShield_C.ResetThrobberAnim");

	UWBP_ThrobberShield_C_ResetThrobberAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ThrobberShield.WBP_ThrobberShield_C.PlayThrobberAnim
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_ThrobberShield_C::PlayThrobberAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ThrobberShield.WBP_ThrobberShield_C.PlayThrobberAnim");

	UWBP_ThrobberShield_C_PlayThrobberAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ThrobberShield.WBP_ThrobberShield_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_ThrobberShield_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ThrobberShield.WBP_ThrobberShield_C.PreConstruct");

	UWBP_ThrobberShield_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ThrobberShield.WBP_ThrobberShield_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_ThrobberShield_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ThrobberShield.WBP_ThrobberShield_C.Construct");

	UWBP_ThrobberShield_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ThrobberShield.WBP_ThrobberShield_C.ExecuteUbergraph_WBP_ThrobberShield
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_ThrobberShield_C::ExecuteUbergraph_WBP_ThrobberShield(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ThrobberShield.WBP_ThrobberShield_C.ExecuteUbergraph_WBP_ThrobberShield");

	UWBP_ThrobberShield_C_ExecuteUbergraph_WBP_ThrobberShield_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

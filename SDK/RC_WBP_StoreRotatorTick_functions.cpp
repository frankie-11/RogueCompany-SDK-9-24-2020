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

// Function WBP_StoreRotatorTick.WBP_StoreRotatorTick_C.SetTickActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsActive                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_StoreRotatorTick_C::SetTickActive(bool* IsActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreRotatorTick.WBP_StoreRotatorTick_C.SetTickActive");

	UWBP_StoreRotatorTick_C_SetTickActive_Params params;
	params.IsActive = IsActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

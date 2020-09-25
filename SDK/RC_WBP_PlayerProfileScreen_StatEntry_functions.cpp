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

// Function WBP_PlayerProfileScreen_StatEntry.WBP_PlayerProfileScreen_StatEntry_C.SetActivityInstance
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UKSActivityInstance**    Instance                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EKSActivityProgressDisplayType* DisplayType                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PlayerProfileScreen_StatEntry_C::SetActivityInstance(class UKSActivityInstance** Instance, EKSActivityProgressDisplayType* DisplayType)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerProfileScreen_StatEntry.WBP_PlayerProfileScreen_StatEntry_C.SetActivityInstance");

	UWBP_PlayerProfileScreen_StatEntry_C_SetActivityInstance_Params params;
	params.Instance = Instance;
	params.DisplayType = DisplayType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

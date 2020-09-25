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

// Function FirstTimeSafeZoneViewRedirector.FirstTimeSafeZoneViewRedirector_C.DoesLocalSettingApply
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class APUMG_HUD**              HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UFirstTimeSafeZoneViewRedirector_C::DoesLocalSettingApply(class APUMG_HUD** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function FirstTimeSafeZoneViewRedirector.FirstTimeSafeZoneViewRedirector_C.DoesLocalSettingApply");

	UFirstTimeSafeZoneViewRedirector_C_DoesLocalSettingApply_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

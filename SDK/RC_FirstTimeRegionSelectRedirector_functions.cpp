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

// Function FirstTimeRegionSelectRedirector.FirstTimeRegionSelectRedirector_C.GetRelevantActivityManager
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UKSGameInstance**        GameInstance                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UKSActivityManagerBase*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UKSActivityManagerBase* UFirstTimeRegionSelectRedirector_C::GetRelevantActivityManager(class UKSGameInstance** GameInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function FirstTimeRegionSelectRedirector.FirstTimeRegionSelectRedirector_C.GetRelevantActivityManager");

	UFirstTimeRegionSelectRedirector_C_GetRelevantActivityManager_Params params;
	params.GameInstance = GameInstance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

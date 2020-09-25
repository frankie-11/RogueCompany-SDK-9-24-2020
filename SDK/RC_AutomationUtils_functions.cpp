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

// Function AutomationUtils.AutomationUtilsBlueprintLibrary.TakeGameplayAutomationScreenshot
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString*                ScreenshotName                 (ConstParm, Parm, ZeroConstructor)
// float*                         MaxGlobalError                 (Parm, ZeroConstructor, IsPlainOldData)
// float*                         MaxLocalError                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FString*                MapNameOverride                (Parm, ZeroConstructor)

void UAutomationUtilsBlueprintLibrary::STATIC_TakeGameplayAutomationScreenshot(struct FString* ScreenshotName, float* MaxGlobalError, float* MaxLocalError, struct FString* MapNameOverride)
{
	static auto fn = UObject::FindObject<UFunction>("Function AutomationUtils.AutomationUtilsBlueprintLibrary.TakeGameplayAutomationScreenshot");

	UAutomationUtilsBlueprintLibrary_TakeGameplayAutomationScreenshot_Params params;
	params.ScreenshotName = ScreenshotName;
	params.MaxGlobalError = MaxGlobalError;
	params.MaxLocalError = MaxLocalError;
	params.MapNameOverride = MapNameOverride;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

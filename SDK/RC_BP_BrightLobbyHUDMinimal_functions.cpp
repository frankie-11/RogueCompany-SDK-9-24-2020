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

// Function BP_BrightLobbyHUDMinimal.BP_BrightLobbyHUDMinimal_C.CallRemoveTopViewRoute
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          ForceTransition                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ViewChanged                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_BrightLobbyHUDMinimal_C::CallRemoveTopViewRoute(bool* ForceTransition, bool* ViewChanged)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BrightLobbyHUDMinimal.BP_BrightLobbyHUDMinimal_C.CallRemoveTopViewRoute");

	ABP_BrightLobbyHUDMinimal_C_CallRemoveTopViewRoute_Params params;
	params.ForceTransition = ForceTransition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ViewChanged != nullptr)
		*ViewChanged = params.ViewChanged;
}


// Function BP_BrightLobbyHUDMinimal.BP_BrightLobbyHUDMinimal_C.CallAddViewRoute
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  RouteName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          ClearRouteStack                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          ForceTransition                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ViewChanged                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_BrightLobbyHUDMinimal_C::CallAddViewRoute(struct FName* RouteName, bool* ClearRouteStack, bool* ForceTransition, bool* ViewChanged)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BrightLobbyHUDMinimal.BP_BrightLobbyHUDMinimal_C.CallAddViewRoute");

	ABP_BrightLobbyHUDMinimal_C_CallAddViewRoute_Params params;
	params.RouteName = RouteName;
	params.ClearRouteStack = ClearRouteStack;
	params.ForceTransition = ForceTransition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ViewChanged != nullptr)
		*ViewChanged = params.ViewChanged;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

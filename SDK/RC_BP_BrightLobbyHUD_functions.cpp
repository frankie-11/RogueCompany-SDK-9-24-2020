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

// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.SetupQueueEvents
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_BrightLobbyHUD_C::SetupQueueEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.SetupQueueEvents");

	ABP_BrightLobbyHUD_C_SetupQueueEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.CallRemoveTopViewRoute
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          ForceTransition                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ViewChanged                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_BrightLobbyHUD_C::CallRemoveTopViewRoute(bool* ForceTransition, bool* ViewChanged)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.CallRemoveTopViewRoute");

	ABP_BrightLobbyHUD_C_CallRemoveTopViewRoute_Params params;
	params.ForceTransition = ForceTransition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ViewChanged != nullptr)
		*ViewChanged = params.ViewChanged;
}


// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.CallAddViewRoute
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  RouteName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          ClearRouteStack                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          ForceTransition                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ViewChanged                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_BrightLobbyHUD_C::CallAddViewRoute(struct FName* RouteName, bool* ClearRouteStack, bool* ForceTransition, bool* ViewChanged)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.CallAddViewRoute");

	ABP_BrightLobbyHUD_C_CallAddViewRoute_Params params;
	params.RouteName = RouteName;
	params.ClearRouteStack = ClearRouteStack;
	params.ForceTransition = ForceTransition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ViewChanged != nullptr)
		*ViewChanged = params.ViewChanged;
}


// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.SafeFrameSettingApplied
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_BrightLobbyHUD_C::SafeFrameSettingApplied()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.SafeFrameSettingApplied");

	ABP_BrightLobbyHUD_C_SafeFrameSettingApplied_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.BindSettingCallbacks
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_BrightLobbyHUD_C::BindSettingCallbacks()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.BindSettingCallbacks");

	ABP_BrightLobbyHUD_C_BindSettingCallbacks_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.InternalAddViewRoute
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  RouteName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          ClearRouteStack                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          ForceTransition                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                Data                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ViewChanged                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_BrightLobbyHUD_C::InternalAddViewRoute(struct FName* RouteName, bool* ClearRouteStack, bool* ForceTransition, class UObject** Data, bool* ViewChanged)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.InternalAddViewRoute");

	ABP_BrightLobbyHUD_C_InternalAddViewRoute_Params params;
	params.RouteName = RouteName;
	params.ClearRouteStack = ClearRouteStack;
	params.ForceTransition = ForceTransition;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ViewChanged != nullptr)
		*ViewChanged = params.ViewChanged;
}


// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.OnAcquisition
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UKSAcquisition**         Acquisition                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BrightLobbyHUD_C::OnAcquisition(class UKSAcquisition** Acquisition)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.OnAcquisition");

	ABP_BrightLobbyHUD_C_OnAcquisition_Params params;
	params.Acquisition = Acquisition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.GetContextBarWidget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UKSContextBarWidget*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UKSContextBarWidget* ABP_BrightLobbyHUD_C::GetContextBarWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.GetContextBarWidget");

	ABP_BrightLobbyHUD_C_GetContextBarWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.SwapViewRoute
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  RouteName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  SwapTargetRoute                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          ForceTransition                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BrightLobbyHUD_C::SwapViewRoute(struct FName* RouteName, struct FName* SwapTargetRoute, bool* ForceTransition)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.SwapViewRoute");

	ABP_BrightLobbyHUD_C_SwapViewRoute_Params params;
	params.RouteName = RouteName;
	params.SwapTargetRoute = SwapTargetRoute;
	params.ForceTransition = ForceTransition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.Remove Top View Route
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          ForceTransition                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ViewChanged                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_BrightLobbyHUD_C::Remove_Top_View_Route(bool* ForceTransition, bool* ViewChanged)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.Remove Top View Route");

	ABP_BrightLobbyHUD_C_Remove_Top_View_Route_Params params;
	params.ForceTransition = ForceTransition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ViewChanged != nullptr)
		*ViewChanged = params.ViewChanged;
}


// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.Add View Route
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  RouteName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          ClearRouteStack                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          ForceTransition                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ViewChanged                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_BrightLobbyHUD_C::Add_View_Route(struct FName* RouteName, bool* ClearRouteStack, bool* ForceTransition, bool* ViewChanged)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.Add View Route");

	ABP_BrightLobbyHUD_C_Add_View_Route_Params params;
	params.RouteName = RouteName;
	params.ClearRouteStack = ClearRouteStack;
	params.ForceTransition = ForceTransition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ViewChanged != nullptr)
		*ViewChanged = params.ViewChanged;
}


// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.HandeEOMResults
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          ForceTransition                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BrightLobbyHUD_C::HandeEOMResults(bool* ForceTransition)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.HandeEOMResults");

	ABP_BrightLobbyHUD_C_HandeEOMResults_Params params;
	params.ForceTransition = ForceTransition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.GetCurrentTransitionRoute
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FName                   Current_Route                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_BrightLobbyHUD_C::GetCurrentTransitionRoute(struct FName* Current_Route)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.GetCurrentTransitionRoute");

	ABP_BrightLobbyHUD_C_GetCurrentTransitionRoute_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Current_Route != nullptr)
		*Current_Route = params.Current_Route;
}


// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.GetLobbyWidget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UKSLobbyWidget*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UKSLobbyWidget* ABP_BrightLobbyHUD_C::GetLobbyWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.GetLobbyWidget");

	ABP_BrightLobbyHUD_C_GetLobbyWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.Focus Home Screen
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_BrightLobbyHUD_C::Focus_Home_Screen()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.Focus Home Screen");

	ABP_BrightLobbyHUD_C_Focus_Home_Screen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.Get Current View Route
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FName                   Current_Route                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_BrightLobbyHUD_C::Get_Current_View_Route(struct FName* Current_Route)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.Get Current View Route");

	ABP_BrightLobbyHUD_C_Get_Current_View_Route_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Current_Route != nullptr)
		*Current_Route = params.Current_Route;
}


// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.Focus Sticky Loadout Panel
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_BrightLobbyHUD_C::Focus_Sticky_Loadout_Panel()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.Focus Sticky Loadout Panel");

	ABP_BrightLobbyHUD_C_Focus_Sticky_Loadout_Panel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.EvaluateFocus
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_BrightLobbyHUD_C::EvaluateFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.EvaluateFocus");

	ABP_BrightLobbyHUD_C_EvaluateFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.Get Current Loadout Slot
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// unsigned char                  Current_Loadout_Slot           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_BrightLobbyHUD_C::Get_Current_Loadout_Slot(unsigned char* Current_Loadout_Slot)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.Get Current Loadout Slot");

	ABP_BrightLobbyHUD_C_Get_Current_Loadout_Slot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Current_Loadout_Slot != nullptr)
		*Current_Loadout_Slot = params.Current_Loadout_Slot;
}


// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.Cache Current Loadout Slot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// unsigned char*                 Loadout_Slot_Edit              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BrightLobbyHUD_C::Cache_Current_Loadout_Slot(unsigned char* Loadout_Slot_Edit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.Cache Current Loadout Slot");

	ABP_BrightLobbyHUD_C_Cache_Current_Loadout_Slot_Params params;
	params.Loadout_Slot_Edit = Loadout_Slot_Edit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.InitialLobbyAnimStatesBinding
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_BrightLobbyHUD_C::InitialLobbyAnimStatesBinding()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.InitialLobbyAnimStatesBinding");

	ABP_BrightLobbyHUD_C_InitialLobbyAnimStatesBinding_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.TempBootstrapFunctionality
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_BrightLobbyHUD_C::TempBootstrapFunctionality()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.TempBootstrapFunctionality");

	ABP_BrightLobbyHUD_C_TempBootstrapFunctionality_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.FallbackLogoutCleanup
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_BrightLobbyHUD_C::FallbackLogoutCleanup()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.FallbackLogoutCleanup");

	ABP_BrightLobbyHUD_C_FallbackLogoutCleanup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.GetFocusableWidgetContainers
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UPanelWidget*>    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UPanelWidget*> ABP_BrightLobbyHUD_C::GetFocusableWidgetContainers()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.GetFocusableWidgetContainers");

	ABP_BrightLobbyHUD_C_GetFocusableWidgetContainers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.Handle Login State Change
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPUMG_LoginState*              Login_State                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BrightLobbyHUD_C::Handle_Login_State_Change(EPUMG_LoginState* Login_State)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.Handle Login State Change");

	ABP_BrightLobbyHUD_C_Handle_Login_State_Change_Params params;
	params.Login_State = Login_State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.GetPopupManager
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPUMG_PopupManager*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UPUMG_PopupManager* ABP_BrightLobbyHUD_C::GetPopupManager()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.GetPopupManager");

	ABP_BrightLobbyHUD_C_GetPopupManager_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_BrightLobbyHUD_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.ReceiveBeginPlay");

	ABP_BrightLobbyHUD_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.HandleEndPlayingPreMatch
// (BlueprintCallable, BlueprintEvent)

void ABP_BrightLobbyHUD_C::HandleEndPlayingPreMatch()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.HandleEndPlayingPreMatch");

	ABP_BrightLobbyHUD_C_HandleEndPlayingPreMatch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.HandleBeginPlayingPreMatch
// (BlueprintCallable, BlueprintEvent)

void ABP_BrightLobbyHUD_C::HandleBeginPlayingPreMatch()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.HandleBeginPlayingPreMatch");

	ABP_BrightLobbyHUD_C_HandleBeginPlayingPreMatch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.HandleEndPlayingPostMatch
// (BlueprintCallable, BlueprintEvent)

void ABP_BrightLobbyHUD_C::HandleEndPlayingPostMatch()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.HandleEndPlayingPostMatch");

	ABP_BrightLobbyHUD_C_HandleEndPlayingPostMatch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.HandleLoginCameraSet
// (BlueprintCallable, BlueprintEvent)

void ABP_BrightLobbyHUD_C::HandleLoginCameraSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.HandleLoginCameraSet");

	ABP_BrightLobbyHUD_C_HandleLoginCameraSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.HandleMainLobbyCameraSet
// (BlueprintCallable, BlueprintEvent)

void ABP_BrightLobbyHUD_C::HandleMainLobbyCameraSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.HandleMainLobbyCameraSet");

	ABP_BrightLobbyHUD_C_HandleMainLobbyCameraSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.Handle Party Invite Received
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPUMG_PlayerInfo**       Inviter                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BrightLobbyHUD_C::Handle_Party_Invite_Received(class UPUMG_PlayerInfo** Inviter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.Handle Party Invite Received");

	ABP_BrightLobbyHUD_C_Handle_Party_Invite_Received_Params params;
	params.Inviter = Inviter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.HandleSettingsKeybind
// (BlueprintCallable, BlueprintEvent)

void ABP_BrightLobbyHUD_C::HandleSettingsKeybind()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.HandleSettingsKeybind");

	ABP_BrightLobbyHUD_C_HandleSettingsKeybind_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.SetUIFocus
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_BrightLobbyHUD_C::SetUIFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.SetUIFocus");

	ABP_BrightLobbyHUD_C_SetUIFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.HandleOpenTextChat
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          BeginChatCommand               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BrightLobbyHUD_C::HandleOpenTextChat(bool* BeginChatCommand)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.HandleOpenTextChat");

	ABP_BrightLobbyHUD_C_HandleOpenTextChat_Params params;
	params.BeginChatCommand = BeginChatCommand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.OpenTextChatToPlayer
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPUMG_PlayerInfo**       Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BrightLobbyHUD_C::OpenTextChatToPlayer(class UPUMG_PlayerInfo** Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.OpenTextChatToPlayer");

	ABP_BrightLobbyHUD_C_OpenTextChatToPlayer_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.ApplySafeFrameScale
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         SafeFrameScale                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BrightLobbyHUD_C::ApplySafeFrameScale(float* SafeFrameScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.ApplySafeFrameScale");

	ABP_BrightLobbyHUD_C_ApplySafeFrameScale_Params params;
	params.SafeFrameScale = SafeFrameScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.OnCustomQueueJoin
// (BlueprintCallable, BlueprintEvent)

void ABP_BrightLobbyHUD_C::OnCustomQueueJoin()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.OnCustomQueueJoin");

	ABP_BrightLobbyHUD_C_OnCustomQueueJoin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.HandleRewardsReceived
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayerRewardsSummary*  PlayerRewardsSummary           (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FScoreboardStats*       ScoreboardStats                (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_BrightLobbyHUD_C::HandleRewardsReceived(struct FPlayerRewardsSummary* PlayerRewardsSummary, struct FScoreboardStats* ScoreboardStats)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.HandleRewardsReceived");

	ABP_BrightLobbyHUD_C_HandleRewardsReceived_Params params;
	params.PlayerRewardsSummary = PlayerRewardsSummary;
	params.ScoreboardStats = ScoreboardStats;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.ExecuteUbergraph_BP_BrightLobbyHUD
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BrightLobbyHUD_C::ExecuteUbergraph_BP_BrightLobbyHUD(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.ExecuteUbergraph_BP_BrightLobbyHUD");

	ABP_BrightLobbyHUD_C_ExecuteUbergraph_BP_BrightLobbyHUD_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.Loadout Slot Change__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// unsigned char*                 Loadout_Slot_Edit              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BrightLobbyHUD_C::Loadout_Slot_Change__DelegateSignature(unsigned char* Loadout_Slot_Edit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.Loadout Slot Change__DelegateSignature");

	ABP_BrightLobbyHUD_C_Loadout_Slot_Change__DelegateSignature_Params params;
	params.Loadout_Slot_Edit = Loadout_Slot_Edit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

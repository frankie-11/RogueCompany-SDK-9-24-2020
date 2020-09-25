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

// Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.GetSelectedMapId
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int*                           QueueId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FUIMapInfo*             MapInfo                        (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            mapId                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWBP_CreateCustomGame_C::GetSelectedMapId(int* QueueId, struct FUIMapInfo* MapInfo, int* mapId)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.GetSelectedMapId");

	UWBP_CreateCustomGame_C_GetSelectedMapId_Params params;
	params.QueueId = QueueId;
	params.MapInfo = MapInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (mapId != nullptr)
		*mapId = params.mapId;
}


// Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.GetQueueImageById
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int*                           QueueId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              QueueImage                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWBP_CreateCustomGame_C::GetQueueImageById(int* QueueId, class UTexture2D** QueueImage)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.GetQueueImageById");

	UWBP_CreateCustomGame_C_GetQueueImageById_Params params;
	params.QueueId = QueueId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (QueueImage != nullptr)
		*QueueImage = params.QueueImage;
}


// Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.SetupQueueInfoPanel
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FClientQueueInfo*       ClientQueueInfo                (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_CreateCustomGame_C::SetupQueueInfoPanel(struct FClientQueueInfo* ClientQueueInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.SetupQueueInfoPanel");

	UWBP_CreateCustomGame_C_SetupQueueInfoPanel_Params params;
	params.ClientQueueInfo = ClientQueueInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.OnLobbyCreated
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           QueueId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_CreateCustomGame_C::OnLobbyCreated(int* QueueId)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.OnLobbyCreated");

	UWBP_CreateCustomGame_C_OnLobbyCreated_Params params;
	params.QueueId = QueueId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.OnLobbyCanceled
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_CreateCustomGame_C::OnLobbyCanceled()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.OnLobbyCanceled");

	UWBP_CreateCustomGame_C_OnLobbyCanceled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.SetupConfirmation
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_CreateCustomGame_C::SetupConfirmation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.SetupConfirmation");

	UWBP_CreateCustomGame_C_SetupConfirmation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.ShowConfirmation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           QueueId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           mapId                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_CreateCustomGame_C::ShowConfirmation(int* QueueId, int* mapId)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.ShowConfirmation");

	UWBP_CreateCustomGame_C_ShowConfirmation_Params params;
	params.QueueId = QueueId;
	params.mapId = mapId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.BindConfirmationNavigation
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_CreateCustomGame_C::BindConfirmationNavigation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.BindConfirmationNavigation");

	UWBP_CreateCustomGame_C_BindConfirmationNavigation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.GoToLastScreen
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_CreateCustomGame_C::GoToLastScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.GoToLastScreen");

	UWBP_CreateCustomGame_C_GoToLastScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.NavigateBack
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWBP_CreateCustomGame_C::NavigateBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.NavigateBack");

	UWBP_CreateCustomGame_C_NavigateBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_CreateCustomGame_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.OnKeyDown");

	UWBP_CreateCustomGame_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.OnPreviousTab
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_CreateCustomGame_C::OnPreviousTab()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.OnPreviousTab");

	UWBP_CreateCustomGame_C_OnPreviousTab_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.OnNextTab
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_CreateCustomGame_C::OnNextTab()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.OnNextTab");

	UWBP_CreateCustomGame_C_OnNextTab_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.SetNavigation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           NumColumns                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_CreateCustomGame_C::SetNavigation(int* NumColumns)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.SetNavigation");

	UWBP_CreateCustomGame_C_SetNavigation_Params params;
	params.NumColumns = NumColumns;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.ResetMapSelection
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_CreateCustomGame_C::ResetMapSelection()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.ResetMapSelection");

	UWBP_CreateCustomGame_C_ResetMapSelection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.OnMapSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           mapId                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_CreateCustomGame_C::OnMapSelected(int* mapId)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.OnMapSelected");

	UWBP_CreateCustomGame_C_OnMapSelected_Params params;
	params.mapId = mapId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.OnTabSelected
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           ButtonIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_CreateCustomGame_C::OnTabSelected(int* ButtonIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.OnTabSelected");

	UWBP_CreateCustomGame_C_OnTabSelected_Params params;
	params.ButtonIndex = ButtonIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.Setup Custom Tabs
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_CreateCustomGame_C::Setup_Custom_Tabs()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.Setup Custom Tabs");

	UWBP_CreateCustomGame_C_Setup_Custom_Tabs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_CreateCustomGame_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.Construct");

	UWBP_CreateCustomGame_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APUMG_HUD**              HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_CreateCustomGame_C::InitializeWidget(class APUMG_HUD** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.InitializeWidget");

	UWBP_CreateCustomGame_C_InitializeWidget_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.InitializeWidgetNavigation
// (Event, Public, BlueprintEvent)

void UWBP_CreateCustomGame_C::InitializeWidgetNavigation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.InitializeWidgetNavigation");

	UWBP_CreateCustomGame_C_InitializeWidgetNavigation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.CheckIsInCustomMatch
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EPUMG_MatchStatus*             MatchStatus                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_CreateCustomGame_C::CheckIsInCustomMatch(EPUMG_MatchStatus* MatchStatus)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.CheckIsInCustomMatch");

	UWBP_CreateCustomGame_C_CheckIsInCustomMatch_Params params;
	params.MatchStatus = MatchStatus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.OnButtonsCreated
// (BlueprintCallable, BlueprintEvent)

void UWBP_CreateCustomGame_C::OnButtonsCreated()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.OnButtonsCreated");

	UWBP_CreateCustomGame_C_OnButtonsCreated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.OnBackButtonClicked
// (BlueprintCallable, BlueprintEvent)

void UWBP_CreateCustomGame_C::OnBackButtonClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.OnBackButtonClicked");

	UWBP_CreateCustomGame_C_OnBackButtonClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.OnHide
// (Event, Public, BlueprintEvent)

void UWBP_CreateCustomGame_C::OnHide()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.OnHide");

	UWBP_CreateCustomGame_C_OnHide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.OnShown
// (Event, Public, BlueprintEvent)

void UWBP_CreateCustomGame_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.OnShown");

	UWBP_CreateCustomGame_C_OnShown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_CreateCustomGame_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.PreConstruct");

	UWBP_CreateCustomGame_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.ExecuteUbergraph_WBP_CreateCustomGame
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_CreateCustomGame_C::ExecuteUbergraph_WBP_CreateCustomGame(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.ExecuteUbergraph_WBP_CreateCustomGame");

	UWBP_CreateCustomGame_C_ExecuteUbergraph_WBP_CreateCustomGame_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

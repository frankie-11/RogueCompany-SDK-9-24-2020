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

// Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.OnHeaderUpdated
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UKSDataSocialCategory**  Category                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText*                  Header                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_Social_Accordian_Header_C::OnHeaderUpdated(class UKSDataSocialCategory** Category, struct FText* Header)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.OnHeaderUpdated");

	UWBP_Social_Accordian_Header_C_OnHeaderUpdated_Params params;
	params.Category = Category;
	params.Header = Header;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.OnPlayersUpdated
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UKSDataSocialCategory**  Category                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UKSDataSocialPlayer*>* Players                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UWBP_Social_Accordian_Header_C::OnPlayersUpdated(class UKSDataSocialCategory** Category, TArray<class UKSDataSocialPlayer*>* Players)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.OnPlayersUpdated");

	UWBP_Social_Accordian_Header_C_OnPlayersUpdated_Params params;
	params.Category = Category;
	params.Players = Players;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.UpdateMessage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UKSDataSocialCategory**  Category                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Processing                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText*                  Message                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_Social_Accordian_Header_C::UpdateMessage(class UKSDataSocialCategory** Category, bool* Processing, struct FText* Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.UpdateMessage");

	UWBP_Social_Accordian_Header_C_UpdateMessage_Params params;
	params.Category = Category;
	params.Processing = Processing;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.GetIsExpanded
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Expanded                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWBP_Social_Accordian_Header_C::GetIsExpanded(bool* Expanded)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.GetIsExpanded");

	UWBP_Social_Accordian_Header_C_GetIsExpanded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Expanded != nullptr)
		*Expanded = params.Expanded;
}


// Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.GetData
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UKSDataSocialCategory*   NewParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWBP_Social_Accordian_Header_C::GetData(class UKSDataSocialCategory** NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.GetData");

	UWBP_Social_Accordian_Header_C_GetData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.SetExpanded
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Expanded                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Social_Accordian_Header_C::SetExpanded(bool* Expanded)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.SetExpanded");

	UWBP_Social_Accordian_Header_C_SetExpanded_Params params;
	params.Expanded = Expanded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.GetOuterHud
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSHUDCommon*            HUD                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWBP_Social_Accordian_Header_C::GetOuterHud(class AKSHUDCommon** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.GetOuterHud");

	UWBP_Social_Accordian_Header_C_GetOuterHud_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HUD != nullptr)
		*HUD = params.HUD;
}


// Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.SetListItemObject
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject**                Object                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Social_Accordian_Header_C::SetListItemObject(class UObject** Object)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.SetListItemObject");

	UWBP_Social_Accordian_Header_C_SetListItemObject_Params params;
	params.Object = Object;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_Social_Accordian_Header_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.Construct");

	UWBP_Social_Accordian_Header_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.BP_OnItemSelectionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          bIsSelected                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Social_Accordian_Header_C::BP_OnItemSelectionChanged(bool* bIsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.BP_OnItemSelectionChanged");

	UWBP_Social_Accordian_Header_C_BP_OnItemSelectionChanged_Params params;
	params.bIsSelected = bIsSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.BP_OnItemExpansionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          bIsExpanded                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Social_Accordian_Header_C::BP_OnItemExpansionChanged(bool* bIsExpanded)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.BP_OnItemExpansionChanged");

	UWBP_Social_Accordian_Header_C_BP_OnItemExpansionChanged_Params params;
	params.bIsExpanded = bIsExpanded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.BP_OnEntryReleased
// (Event, Protected, BlueprintEvent)

void UWBP_Social_Accordian_Header_C::BP_OnEntryReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.BP_OnEntryReleased");

	UWBP_Social_Accordian_Header_C_BP_OnEntryReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.OnListItemObjectSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UObject**                ListItemObject                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Social_Accordian_Header_C::OnListItemObjectSet(class UObject** ListItemObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.OnListItemObjectSet");

	UWBP_Social_Accordian_Header_C_OnListItemObjectSet_Params params;
	params.ListItemObject = ListItemObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.OnHovered
// (BlueprintCallable, BlueprintEvent)

void UWBP_Social_Accordian_Header_C::OnHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.OnHovered");

	UWBP_Social_Accordian_Header_C_OnHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.OnUnhovered
// (BlueprintCallable, BlueprintEvent)

void UWBP_Social_Accordian_Header_C::OnUnhovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.OnUnhovered");

	UWBP_Social_Accordian_Header_C_OnUnhovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APUMG_HUD**              HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Social_Accordian_Header_C::InitializeWidget(class APUMG_HUD** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.InitializeWidget");

	UWBP_Social_Accordian_Header_C_InitializeWidget_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.UninitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UWBP_Social_Accordian_Header_C::UninitializeWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.UninitializeWidget");

	UWBP_Social_Accordian_Header_C_UninitializeWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.HandleClicked
// (BlueprintCallable, BlueprintEvent)

void UWBP_Social_Accordian_Header_C::HandleClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.HandleClicked");

	UWBP_Social_Accordian_Header_C_HandleClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.UnbindCategoryEvents
// (BlueprintCallable, BlueprintEvent)

void UWBP_Social_Accordian_Header_C::UnbindCategoryEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.UnbindCategoryEvents");

	UWBP_Social_Accordian_Header_C_UnbindCategoryEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.BindCategoryEvents
// (BlueprintCallable, BlueprintEvent)

void UWBP_Social_Accordian_Header_C::BindCategoryEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.BindCategoryEvents");

	UWBP_Social_Accordian_Header_C_BindCategoryEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.OnInputStateChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EPGAME_INPUT_STATE>* InputState                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Social_Accordian_Header_C::OnInputStateChange(TEnumAsByte<EPGAME_INPUT_STATE>* InputState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.OnInputStateChange");

	UWBP_Social_Accordian_Header_C_OnInputStateChange_Params params;
	params.InputState = InputState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.ForceUnhover
// (BlueprintCallable, BlueprintEvent)

void UWBP_Social_Accordian_Header_C::ForceUnhover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.ForceUnhover");

	UWBP_Social_Accordian_Header_C_ForceUnhover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.ExecuteUbergraph_WBP_Social_Accordian_Header
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Social_Accordian_Header_C::ExecuteUbergraph_WBP_Social_Accordian_Header(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.ExecuteUbergraph_WBP_Social_Accordian_Header");

	UWBP_Social_Accordian_Header_C_ExecuteUbergraph_WBP_Social_Accordian_Header_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget**            Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_Social_Accordian_Header_C::OnClicked__DelegateSignature(class UUserWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.OnClicked__DelegateSignature");

	UWBP_Social_Accordian_Header_C_OnClicked__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

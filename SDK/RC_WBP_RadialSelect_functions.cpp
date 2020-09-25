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

// Function WBP_RadialSelect.WBP_RadialSelect_C.SetRadialItemName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_RadialSelect_C::SetRadialItemName(int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RadialSelect.WBP_RadialSelect_C.SetRadialItemName");

	UWBP_RadialSelect_C_SetRadialItemName_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RadialSelect.WBP_RadialSelect_C.SetupInputCallout
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_InputCallout_C**    InputCallout                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class APUMG_HUD**              HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EPGAME_INPUT_STATE>* InputState                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_RadialSelect_C::SetupInputCallout(class UWBP_InputCallout_C** InputCallout, class APUMG_HUD** HUD, TEnumAsByte<EPGAME_INPUT_STATE>* InputState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RadialSelect.WBP_RadialSelect_C.SetupInputCallout");

	UWBP_RadialSelect_C_SetupInputCallout_Params params;
	params.InputCallout = InputCallout;
	params.HUD = HUD;
	params.InputState = InputState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RadialSelect.WBP_RadialSelect_C.IsSelectorVisible
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWBP_RadialSelect_C::IsSelectorVisible()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RadialSelect.WBP_RadialSelect_C.IsSelectorVisible");

	UWBP_RadialSelect_C_IsSelectorVisible_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_RadialSelect.WBP_RadialSelect_C.ShowRadialMenuCycle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Show                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_RadialSelect_C::ShowRadialMenuCycle(bool* Show)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RadialSelect.WBP_RadialSelect_C.ShowRadialMenuCycle");

	UWBP_RadialSelect_C_ShowRadialMenuCycle_Params params;
	params.Show = Show;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RadialSelect.WBP_RadialSelect_C.GetRadialItemName
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AKSPlayerController**    KSPlayerController             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   RadialItemName                 (Parm, OutParm)

void UWBP_RadialSelect_C::GetRadialItemName(int* Index, class AKSPlayerController** KSPlayerController, struct FText* RadialItemName)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RadialSelect.WBP_RadialSelect_C.GetRadialItemName");

	UWBP_RadialSelect_C_GetRadialItemName_Params params;
	params.Index = Index;
	params.KSPlayerController = KSPlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RadialItemName != nullptr)
		*RadialItemName = params.RadialItemName;
}


// Function WBP_RadialSelect.WBP_RadialSelect_C.ActivateRadialItem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AKSPlayerController**    KSPlayerController             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ActivatedItem                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWBP_RadialSelect_C::ActivateRadialItem(int* Index, class AKSPlayerController** KSPlayerController, bool* ActivatedItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RadialSelect.WBP_RadialSelect_C.ActivateRadialItem");

	UWBP_RadialSelect_C_ActivateRadialItem_Params params;
	params.Index = Index;
	params.KSPlayerController = KSPlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ActivatedItem != nullptr)
		*ActivatedItem = params.ActivatedItem;
}


// Function WBP_RadialSelect.WBP_RadialSelect_C.GetTextForCosmeticSlot
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EMercCosmeticSlot*             CosmeticSlot                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Text                           (Parm, OutParm)

void UWBP_RadialSelect_C::GetTextForCosmeticSlot(EMercCosmeticSlot* CosmeticSlot, struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RadialSelect.WBP_RadialSelect_C.GetTextForCosmeticSlot");

	UWBP_RadialSelect_C_GetTextForCosmeticSlot_Params params;
	params.CosmeticSlot = CosmeticSlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;
}


// Function WBP_RadialSelect.WBP_RadialSelect_C.SetRadialMenuNames
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_RadialSelect_C::SetRadialMenuNames()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RadialSelect.WBP_RadialSelect_C.SetRadialMenuNames");

	UWBP_RadialSelect_C_SetRadialMenuNames_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RadialSelect.WBP_RadialSelect_C.Get Equipped Emotes
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UKSItem*>         Equipped_Emotes                (Parm, OutParm, ZeroConstructor)

void UWBP_RadialSelect_C::Get_Equipped_Emotes(TArray<class UKSItem*>* Equipped_Emotes)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RadialSelect.WBP_RadialSelect_C.Get Equipped Emotes");

	UWBP_RadialSelect_C_Get_Equipped_Emotes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Equipped_Emotes != nullptr)
		*Equipped_Emotes = params.Equipped_Emotes;
}


// Function WBP_RadialSelect.WBP_RadialSelect_C.GetDeadZone
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UWBP_RadialSelect_C::GetDeadZone()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RadialSelect.WBP_RadialSelect_C.GetDeadZone");

	UWBP_RadialSelect_C_GetDeadZone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_RadialSelect.WBP_RadialSelect_C.RefreshOptions
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_RadialSelect_C::RefreshOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RadialSelect.WBP_RadialSelect_C.RefreshOptions");

	UWBP_RadialSelect_C_RefreshOptions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RadialSelect.WBP_RadialSelect_C.GetOptionsCount
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UWBP_RadialSelect_C::GetOptionsCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RadialSelect.WBP_RadialSelect_C.GetOptionsCount");

	UWBP_RadialSelect_C_GetOptionsCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_RadialSelect.WBP_RadialSelect_C.GetWheelSize
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UWBP_RadialSelect_C::GetWheelSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RadialSelect.WBP_RadialSelect_C.GetWheelSize");

	UWBP_RadialSelect_C_GetWheelSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_RadialSelect.WBP_RadialSelect_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_RadialSelect_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RadialSelect.WBP_RadialSelect_C.PreConstruct");

	UWBP_RadialSelect_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RadialSelect.WBP_RadialSelect_C.HideSelector
// (Event, Protected, BlueprintEvent)

void UWBP_RadialSelect_C::HideSelector()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RadialSelect.WBP_RadialSelect_C.HideSelector");

	UWBP_RadialSelect_C_HideSelector_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RadialSelect.WBP_RadialSelect_C.ShowSelector
// (Event, Protected, BlueprintEvent)

void UWBP_RadialSelect_C::ShowSelector()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RadialSelect.WBP_RadialSelect_C.ShowSelector");

	UWBP_RadialSelect_C_ShowSelector_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RadialSelect.WBP_RadialSelect_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APUMG_HUD**              HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_RadialSelect_C::InitializeWidget(class APUMG_HUD** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RadialSelect.WBP_RadialSelect_C.InitializeWidget");

	UWBP_RadialSelect_C_InitializeWidget_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RadialSelect.WBP_RadialSelect_C.RadialOptionUnhover
// (Event, Protected, BlueprintEvent)

void UWBP_RadialSelect_C::RadialOptionUnhover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RadialSelect.WBP_RadialSelect_C.RadialOptionUnhover");

	UWBP_RadialSelect_C_RadialOptionUnhover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RadialSelect.WBP_RadialSelect_C.RadialOptionSelected
// (Event, Protected, BlueprintEvent)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_RadialSelect_C::RadialOptionSelected(int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RadialSelect.WBP_RadialSelect_C.RadialOptionSelected");

	UWBP_RadialSelect_C_RadialOptionSelected_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RadialSelect.WBP_RadialSelect_C.RadialOptionHovered
// (Event, Protected, BlueprintEvent)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_RadialSelect_C::RadialOptionHovered(int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RadialSelect.WBP_RadialSelect_C.RadialOptionHovered");

	UWBP_RadialSelect_C_RadialOptionHovered_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RadialSelect.WBP_RadialSelect_C.TraceSelectionCursor
// (Event, Protected, BlueprintEvent)
// Parameters:
// float*                         Radius                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Angle                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_RadialSelect_C::TraceSelectionCursor(float* Radius, float* Angle)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RadialSelect.WBP_RadialSelect_C.TraceSelectionCursor");

	UWBP_RadialSelect_C_TraceSelectionCursor_Params params;
	params.Radius = Radius;
	params.Angle = Angle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RadialSelect.WBP_RadialSelect_C.Handle Equipment Change
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSEquipment**           AddedEquipment                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_RadialSelect_C::Handle_Equipment_Change(class AKSEquipment** AddedEquipment)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RadialSelect.WBP_RadialSelect_C.Handle Equipment Change");

	UWBP_RadialSelect_C_Handle_Equipment_Change_Params params;
	params.AddedEquipment = AddedEquipment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RadialSelect.WBP_RadialSelect_C.ChangeToNewRadialMenu
// (Event, Protected, BlueprintEvent)

void UWBP_RadialSelect_C::ChangeToNewRadialMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RadialSelect.WBP_RadialSelect_C.ChangeToNewRadialMenu");

	UWBP_RadialSelect_C_ChangeToNewRadialMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RadialSelect.WBP_RadialSelect_C.OnCycledMenus
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          bCycledRight                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_RadialSelect_C::OnCycledMenus(bool* bCycledRight)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RadialSelect.WBP_RadialSelect_C.OnCycledMenus");

	UWBP_RadialSelect_C_OnCycledMenus_Params params;
	params.bCycledRight = bCycledRight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RadialSelect.WBP_RadialSelect_C.SetupForRadialWheelMode
// (Event, Protected, BlueprintEvent)
// Parameters:
// ERadialWheelMode*              NewRadialWheelMode             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_RadialSelect_C::SetupForRadialWheelMode(ERadialWheelMode* NewRadialWheelMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RadialSelect.WBP_RadialSelect_C.SetupForRadialWheelMode");

	UWBP_RadialSelect_C_SetupForRadialWheelMode_Params params;
	params.NewRadialWheelMode = NewRadialWheelMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RadialSelect.WBP_RadialSelect_C.ExecuteUbergraph_WBP_RadialSelect
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_RadialSelect_C::ExecuteUbergraph_WBP_RadialSelect(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RadialSelect.WBP_RadialSelect_C.ExecuteUbergraph_WBP_RadialSelect");

	UWBP_RadialSelect_C_ExecuteUbergraph_WBP_RadialSelect_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

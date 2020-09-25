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

// Function WBP_Acquisition.WBP_Acquisition_C.GetJobForItem
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UKSItem**                Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UKSJobItem*              Character                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWBP_Acquisition_C::GetJobForItem(class UKSItem** Item, class UKSJobItem** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Acquisition.WBP_Acquisition_C.GetJobForItem");

	UWBP_Acquisition_C_GetJobForItem_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Character != nullptr)
		*Character = params.Character;
}


// Function WBP_Acquisition.WBP_Acquisition_C.TrySetPreferredDefaultSkin
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSLobbyCharacter**      Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UKSItem**                Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Acquisition_C::TrySetPreferredDefaultSkin(class AKSLobbyCharacter** Character, class UKSItem** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Acquisition.WBP_Acquisition_C.TrySetPreferredDefaultSkin");

	UWBP_Acquisition_C_TrySetPreferredDefaultSkin_Params params;
	params.Character = Character;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Acquisition.WBP_Acquisition_C.SetEmote
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UKSItem**                EmoteItem                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Acquisition_C::SetEmote(class UKSItem** EmoteItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Acquisition.WBP_Acquisition_C.SetEmote");

	UWBP_Acquisition_C_SetEmote_Params params;
	params.EmoteItem = EmoteItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Acquisition.WBP_Acquisition_C.OnGamepadItemHover
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPUMG_StoreItem**        Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UKSWidget**              Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_Acquisition_C::OnGamepadItemHover(class UPUMG_StoreItem** Item, class UKSWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Acquisition.WBP_Acquisition_C.OnGamepadItemHover");

	UWBP_Acquisition_C_OnGamepadItemHover_Params params;
	params.Item = Item;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Acquisition.WBP_Acquisition_C.DisplayStoreItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPUMG_StoreItem**        StoreItem                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Acquisition_C::DisplayStoreItem(class UPUMG_StoreItem** StoreItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Acquisition.WBP_Acquisition_C.DisplayStoreItem");

	UWBP_Acquisition_C_DisplayStoreItem_Params params;
	params.StoreItem = StoreItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Acquisition.WBP_Acquisition_C.DisplayModelOrImageForItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UKSItem**                Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Acquisition_C::DisplayModelOrImageForItem(class UKSItem** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Acquisition.WBP_Acquisition_C.DisplayModelOrImageForItem");

	UWBP_Acquisition_C_DisplayModelOrImageForItem_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Acquisition.WBP_Acquisition_C.SetSkinOrRogueModel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UKSSkinBundle**          SkinBundle                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Acquisition_C::SetSkinOrRogueModel(class UKSSkinBundle** SkinBundle)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Acquisition.WBP_Acquisition_C.SetSkinOrRogueModel");

	UWBP_Acquisition_C_SetSkinOrRogueModel_Params params;
	params.SkinBundle = SkinBundle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Acquisition.WBP_Acquisition_C.ClearModels
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_Acquisition_C::ClearModels()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Acquisition.WBP_Acquisition_C.ClearModels");

	UWBP_Acquisition_C_ClearModels_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Acquisition.WBP_Acquisition_C.SetAcquisitionDisplay
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UKSAcquisition**         Acquistion                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Acquisition_C::SetAcquisitionDisplay(class UKSAcquisition** Acquistion)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Acquisition.WBP_Acquisition_C.SetAcquisitionDisplay");

	UWBP_Acquisition_C_SetAcquisitionDisplay_Params params;
	params.Acquistion = Acquistion;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Acquisition.WBP_Acquisition_C.NavigateBack
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWBP_Acquisition_C::NavigateBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Acquisition.WBP_Acquisition_C.NavigateBack");

	UWBP_Acquisition_C_NavigateBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_Acquisition.WBP_Acquisition_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Acquisition_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Acquisition.WBP_Acquisition_C.PreConstruct");

	UWBP_Acquisition_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Acquisition.WBP_Acquisition_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APUMG_HUD**              HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Acquisition_C::InitializeWidget(class APUMG_HUD** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Acquisition.WBP_Acquisition_C.InitializeWidget");

	UWBP_Acquisition_C_InitializeWidget_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Acquisition.WBP_Acquisition_C.OnBackPrompt
// (BlueprintCallable, BlueprintEvent)

void UWBP_Acquisition_C::OnBackPrompt()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Acquisition.WBP_Acquisition_C.OnBackPrompt");

	UWBP_Acquisition_C_OnBackPrompt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Acquisition.WBP_Acquisition_C.InitializeWidgetNavigation
// (Event, Public, BlueprintEvent)

void UWBP_Acquisition_C::InitializeWidgetNavigation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Acquisition.WBP_Acquisition_C.InitializeWidgetNavigation");

	UWBP_Acquisition_C_InitializeWidgetNavigation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Acquisition.WBP_Acquisition_C.OnShown
// (Event, Public, BlueprintEvent)

void UWBP_Acquisition_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Acquisition.WBP_Acquisition_C.OnShown");

	UWBP_Acquisition_C_OnShown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Acquisition.WBP_Acquisition_C.OnHide
// (Event, Public, BlueprintEvent)

void UWBP_Acquisition_C::OnHide()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Acquisition.WBP_Acquisition_C.OnHide");

	UWBP_Acquisition_C_OnHide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Acquisition.WBP_Acquisition_C.ExecuteUbergraph_WBP_Acquisition
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Acquisition_C::ExecuteUbergraph_WBP_Acquisition(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Acquisition.WBP_Acquisition_C.ExecuteUbergraph_WBP_Acquisition");

	UWBP_Acquisition_C_ExecuteUbergraph_WBP_Acquisition_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.GetFullScreenSplashImage
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           SplashFound                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWBP_PurchaseConfirmation_C::GetFullScreenSplashImage(bool* SplashFound)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.GetFullScreenSplashImage");

	UWBP_PurchaseConfirmation_C_GetFullScreenSplashImage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SplashFound != nullptr)
		*SplashFound = params.SplashFound;
}


// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.OnAcquisitionFailed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  ErrorMsg                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_PurchaseConfirmation_C::OnAcquisitionFailed(struct FText* ErrorMsg)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.OnAcquisitionFailed");

	UWBP_PurchaseConfirmation_C_OnAcquisitionFailed_Params params;
	params.ErrorMsg = ErrorMsg;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.SetPreferredDefaultSkin
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_PurchaseConfirmation_C::SetPreferredDefaultSkin()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.SetPreferredDefaultSkin");

	UWBP_PurchaseConfirmation_C_SetPreferredDefaultSkin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.Set Emote
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UKSItem**                EmoteItem                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PurchaseConfirmation_C::Set_Emote(class UKSItem** EmoteItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.Set Emote");

	UWBP_PurchaseConfirmation_C_Set_Emote_Params params;
	params.EmoteItem = EmoteItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.TryHandleRightStickKeyDown
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_PurchaseConfirmation_C::TryHandleRightStickKeyDown(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.TryHandleRightStickKeyDown");

	UWBP_PurchaseConfirmation_C_TryHandleRightStickKeyDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Key != nullptr)
		*Key = params.Key;

	return params.ReturnValue;
}


// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.OnBundleItemHoveredGamepad
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCosmeticSlotDetails*   CosmeticSlotDetails            (BlueprintVisible, BlueprintReadOnly, Parm)
// bool*                          IsGamepad                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWBP_KSCosmeticItemDisplay_C** Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_PurchaseConfirmation_C::OnBundleItemHoveredGamepad(struct FCosmeticSlotDetails* CosmeticSlotDetails, bool* IsGamepad, class UWBP_KSCosmeticItemDisplay_C** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.OnBundleItemHoveredGamepad");

	UWBP_PurchaseConfirmation_C_OnBundleItemHoveredGamepad_Params params;
	params.CosmeticSlotDetails = CosmeticSlotDetails;
	params.IsGamepad = IsGamepad;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.OnToggleViewMode
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_PurchaseConfirmation_C::OnToggleViewMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.OnToggleViewMode");

	UWBP_PurchaseConfirmation_C_OnToggleViewMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.OnInputModeChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EPGAME_INPUT_STATE>* InputState                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PurchaseConfirmation_C::OnInputModeChanged(TEnumAsByte<EPGAME_INPUT_STATE>* InputState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.OnInputModeChanged");

	UWBP_PurchaseConfirmation_C_OnInputModeChanged_Params params;
	params.InputState = InputState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.SetSubDetails
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPUMG_StoreItem**        StoreItem                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PurchaseConfirmation_C::SetSubDetails(class UPUMG_StoreItem** StoreItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.SetSubDetails");

	UWBP_PurchaseConfirmation_C_SetSubDetails_Params params;
	params.StoreItem = StoreItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.OnBundleItemClicked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_KSCosmeticItemDisplay_C** Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FCosmeticSlotDetails*   CosmeticSlotDetails            (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_PurchaseConfirmation_C::OnBundleItemClicked(class UWBP_KSCosmeticItemDisplay_C** Widget, struct FCosmeticSlotDetails* CosmeticSlotDetails)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.OnBundleItemClicked");

	UWBP_PurchaseConfirmation_C_OnBundleItemClicked_Params params;
	params.Widget = Widget;
	params.CosmeticSlotDetails = CosmeticSlotDetails;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.PopulateBundleContentsPanel
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_PurchaseConfirmation_C::PopulateBundleContentsPanel()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.PopulateBundleContentsPanel");

	UWBP_PurchaseConfirmation_C_PopulateBundleContentsPanel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.OnNextBundlePage
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_PurchaseConfirmation_C::OnNextBundlePage()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.OnNextBundlePage");

	UWBP_PurchaseConfirmation_C_OnNextBundlePage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.OnPreviousBundlePage
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_PurchaseConfirmation_C::OnPreviousBundlePage()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.OnPreviousBundlePage");

	UWBP_PurchaseConfirmation_C_OnPreviousBundlePage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.GoBackToItemDisplay
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_PurchaseConfirmation_C::GoBackToItemDisplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.GoBackToItemDisplay");

	UWBP_PurchaseConfirmation_C_GoBackToItemDisplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.OnViewBundleContents
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_PurchaseConfirmation_C::OnViewBundleContents()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.OnViewBundleContents");

	UWBP_PurchaseConfirmation_C_OnViewBundleContents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_PurchaseConfirmation_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.OnKeyDown");

	UWBP_PurchaseConfirmation_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.OnKeyUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_PurchaseConfirmation_C::OnKeyUp(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.OnKeyUp");

	UWBP_PurchaseConfirmation_C_OnKeyUp_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.OnNextItem
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_PurchaseConfirmation_C::OnNextItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.OnNextItem");

	UWBP_PurchaseConfirmation_C_OnNextItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.OnPreviousItem
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_PurchaseConfirmation_C::OnPreviousItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.OnPreviousItem");

	UWBP_PurchaseConfirmation_C_OnPreviousItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.DisplayModelOrImageForItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPUMG_StoreItem**        StoreItem                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PurchaseConfirmation_C::DisplayModelOrImageForItem(class UPUMG_StoreItem** StoreItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.DisplayModelOrImageForItem");

	UWBP_PurchaseConfirmation_C_DisplayModelOrImageForItem_Params params;
	params.StoreItem = StoreItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.ClearModels
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_PurchaseConfirmation_C::ClearModels()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.ClearModels");

	UWBP_PurchaseConfirmation_C_ClearModels_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.SetSkinOrRogueModel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UKSSkinBundle**          SkinBundle                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PurchaseConfirmation_C::SetSkinOrRogueModel(class UKSSkinBundle** SkinBundle)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.SetSkinOrRogueModel");

	UWBP_PurchaseConfirmation_C_SetSkinOrRogueModel_Params params;
	params.SkinBundle = SkinBundle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.PopulateItemData
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_PurchaseConfirmation_C::PopulateItemData()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.PopulateItemData");

	UWBP_PurchaseConfirmation_C_PopulateItemData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.OnAcquisition
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UKSAcquisition**         Acquisition                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PurchaseConfirmation_C::OnAcquisition(class UKSAcquisition** Acquisition)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.OnAcquisition");

	UWBP_PurchaseConfirmation_C_OnAcquisition_Params params;
	params.Acquisition = Acquisition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.PurchaseItemWithPortalOffer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPUMG_PortalOffer**      PortalOffer                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PurchaseConfirmation_C::PurchaseItemWithPortalOffer(class UPUMG_PortalOffer** PortalOffer)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.PurchaseItemWithPortalOffer");

	UWBP_PurchaseConfirmation_C_PurchaseItemWithPortalOffer_Params params;
	params.PortalOffer = PortalOffer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.PurchaseItemWithPrice
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPUMG_StoreItemPrice**   Price                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PurchaseConfirmation_C::PurchaseItemWithPrice(class UPUMG_StoreItemPrice** Price)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.PurchaseItemWithPrice");

	UWBP_PurchaseConfirmation_C_PurchaseItemWithPrice_Params params;
	params.Price = Price;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.DisplaySingleItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPUMG_StoreItem**        StoreItem                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PurchaseConfirmation_C::DisplaySingleItem(class UPUMG_StoreItem** StoreItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.DisplaySingleItem");

	UWBP_PurchaseConfirmation_C_DisplaySingleItem_Params params;
	params.StoreItem = StoreItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.NavigateBack
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWBP_PurchaseConfirmation_C::NavigateBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.NavigateBack");

	UWBP_PurchaseConfirmation_C_NavigateBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PurchaseConfirmation_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.PreConstruct");

	UWBP_PurchaseConfirmation_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PurchaseConfirmation_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.Tick");

	UWBP_PurchaseConfirmation_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APUMG_HUD**              HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PurchaseConfirmation_C::InitializeWidget(class APUMG_HUD** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.InitializeWidget");

	UWBP_PurchaseConfirmation_C_InitializeWidget_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.OnBackPrompt
// (BlueprintCallable, BlueprintEvent)

void UWBP_PurchaseConfirmation_C::OnBackPrompt()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.OnBackPrompt");

	UWBP_PurchaseConfirmation_C_OnBackPrompt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.InitializeWidgetNavigation
// (Event, Public, BlueprintEvent)

void UWBP_PurchaseConfirmation_C::InitializeWidgetNavigation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.InitializeWidgetNavigation");

	UWBP_PurchaseConfirmation_C_InitializeWidgetNavigation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.OnShown
// (Event, Public, BlueprintEvent)

void UWBP_PurchaseConfirmation_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.OnShown");

	UWBP_PurchaseConfirmation_C_OnShown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.OnHide
// (Event, Public, BlueprintEvent)

void UWBP_PurchaseConfirmation_C::OnHide()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.OnHide");

	UWBP_PurchaseConfirmation_C_OnHide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.SetScrollValueUp
// (BlueprintCallable, BlueprintEvent)

void UWBP_PurchaseConfirmation_C::SetScrollValueUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.SetScrollValueUp");

	UWBP_PurchaseConfirmation_C_SetScrollValueUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.SetScrollValueDown
// (BlueprintCallable, BlueprintEvent)

void UWBP_PurchaseConfirmation_C::SetScrollValueDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.SetScrollValueDown");

	UWBP_PurchaseConfirmation_C_SetScrollValueDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.ClearScrollValue
// (BlueprintCallable, BlueprintEvent)

void UWBP_PurchaseConfirmation_C::ClearScrollValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.ClearScrollValue");

	UWBP_PurchaseConfirmation_C_ClearScrollValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.FocusGroupNavigateRightFailure
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           FocusGroup                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PurchaseConfirmation_C::FocusGroupNavigateRightFailure(int* FocusGroup)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.FocusGroupNavigateRightFailure");

	UWBP_PurchaseConfirmation_C_FocusGroupNavigateRightFailure_Params params;
	params.FocusGroup = FocusGroup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.FocusGroupNavigateLeftFailure
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           FocusGroup                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PurchaseConfirmation_C::FocusGroupNavigateLeftFailure(int* FocusGroup)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.FocusGroupNavigateLeftFailure");

	UWBP_PurchaseConfirmation_C_FocusGroupNavigateLeftFailure_Params params;
	params.FocusGroup = FocusGroup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.UpdateScrollPromptVisibility
// (BlueprintCallable, BlueprintEvent)

void UWBP_PurchaseConfirmation_C::UpdateScrollPromptVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.UpdateScrollPromptVisibility");

	UWBP_PurchaseConfirmation_C_UpdateScrollPromptVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.ExecuteUbergraph_WBP_PurchaseConfirmation
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PurchaseConfirmation_C::ExecuteUbergraph_WBP_PurchaseConfirmation(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.ExecuteUbergraph_WBP_PurchaseConfirmation");

	UWBP_PurchaseConfirmation_C_ExecuteUbergraph_WBP_PurchaseConfirmation_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

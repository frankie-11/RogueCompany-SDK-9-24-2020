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

// Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.IsEquipAllAllowed
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UKSItem**                Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           CanEquipAll                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWBP_RogueCutomizationSelector_C::IsEquipAllAllowed(class UKSItem** Item, bool* CanEquipAll)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.IsEquipAllAllowed");

	UWBP_RogueCutomizationSelector_C_IsEquipAllAllowed_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanEquipAll != nullptr)
		*CanEquipAll = params.CanEquipAll;
}


// Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.DisplayEquipAllPrompt
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_RogueCutomizationSelector_C::DisplayEquipAllPrompt()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.DisplayEquipAllPrompt");

	UWBP_RogueCutomizationSelector_C_DisplayEquipAllPrompt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.OnEquipAll
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_RogueCutomizationSelector_C::OnEquipAll()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.OnEquipAll");

	UWBP_RogueCutomizationSelector_C_OnEquipAll_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.OnKeyUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_RogueCutomizationSelector_C::OnKeyUp(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.OnKeyUp");

	UWBP_RogueCutomizationSelector_C_OnKeyUp_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.SetEmoteModel
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UKSItem**                CosmeticItem                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_RogueCutomizationSelector_C::SetEmoteModel(class UKSItem** CosmeticItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.SetEmoteModel");

	UWBP_RogueCutomizationSelector_C_SetEmoteModel_Params params;
	params.CosmeticItem = CosmeticItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.SetEquippedItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsEquipped                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWBP_KSCosmeticItemSelector_C** CosmeticItemSlot               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UKSItem**                KSItem                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_RogueCutomizationSelector_C::SetEquippedItem(bool* IsEquipped, class UWBP_KSCosmeticItemSelector_C** CosmeticItemSlot, class UKSItem** KSItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.SetEquippedItem");

	UWBP_RogueCutomizationSelector_C_SetEquippedItem_Params params;
	params.IsEquipped = IsEquipped;
	params.CosmeticItemSlot = CosmeticItemSlot;
	params.KSItem = KSItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.SetOwnedItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPUMG_StoreItem**        StoreItem                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_RogueCutomizationSelector_C::SetOwnedItem(class UPUMG_StoreItem** StoreItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.SetOwnedItem");

	UWBP_RogueCutomizationSelector_C_SetOwnedItem_Params params;
	params.StoreItem = StoreItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.BindItemHelper
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_RogueCutomizationSelector_C::BindItemHelper()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.BindItemHelper");

	UWBP_RogueCutomizationSelector_C_BindItemHelper_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.OnPurchaseItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPUMG_StoreItem**        StoreItem                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_RogueCutomizationSelector_C::OnPurchaseItem(class UPUMG_StoreItem** StoreItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.OnPurchaseItem");

	UWBP_RogueCutomizationSelector_C_OnPurchaseItem_Params params;
	params.StoreItem = StoreItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.AddClearCosmeticSlot
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_RogueCutomizationSelector_C::AddClearCosmeticSlot()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.AddClearCosmeticSlot");

	UWBP_RogueCutomizationSelector_C_AddClearCosmeticSlot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.IsItemEquipped
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UKSItem**                KSItem                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsEquipped                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWBP_RogueCutomizationSelector_C::IsItemEquipped(class UKSItem** KSItem, bool* IsEquipped)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.IsItemEquipped");

	UWBP_RogueCutomizationSelector_C_IsItemEquipped_Params params;
	params.KSItem = KSItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsEquipped != nullptr)
		*IsEquipped = params.IsEquipped;
}


// Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.Set Active States
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_KSCosmeticItemSelector_C** ActiveWidget                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_RogueCutomizationSelector_C::Set_Active_States(class UWBP_KSCosmeticItemSelector_C** ActiveWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.Set Active States");

	UWBP_RogueCutomizationSelector_C_Set_Active_States_Params params;
	params.ActiveWidget = ActiveWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.SetEquipBtn
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_RogueCutomizationSelector_C::SetEquipBtn()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.SetEquipBtn");

	UWBP_RogueCutomizationSelector_C_SetEquipBtn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.SetWingSuitModel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UKSItem**                CosmeticItem                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_RogueCutomizationSelector_C::SetWingSuitModel(class UKSItem** CosmeticItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.SetWingSuitModel");

	UWBP_RogueCutomizationSelector_C_SetWingSuitModel_Params params;
	params.CosmeticItem = CosmeticItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.ResetSprayIcon
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_RogueCutomizationSelector_C::ResetSprayIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.ResetSprayIcon");

	UWBP_RogueCutomizationSelector_C_ResetSprayIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.ResetModels
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_RogueCutomizationSelector_C::ResetModels()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.ResetModels");

	UWBP_RogueCutomizationSelector_C_ResetModels_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.SetEmoteImage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UKSItem**                CosmeticItem                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_RogueCutomizationSelector_C::SetEmoteImage(class UKSItem** CosmeticItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.SetEmoteImage");

	UWBP_RogueCutomizationSelector_C_SetEmoteImage_Params params;
	params.CosmeticItem = CosmeticItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.ResetCharacter
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_RogueCutomizationSelector_C::ResetCharacter()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.ResetCharacter");

	UWBP_RogueCutomizationSelector_C_ResetCharacter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.SetWeapon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UKSItem**                CosmeticItem                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UKSJobItem**             JobItem                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EWeaponSlot*                   WeaponSlot                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_RogueCutomizationSelector_C::SetWeapon(class UKSItem** CosmeticItem, class UKSJobItem** JobItem, EWeaponSlot* WeaponSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.SetWeapon");

	UWBP_RogueCutomizationSelector_C_SetWeapon_Params params;
	params.CosmeticItem = CosmeticItem;
	params.JobItem = JobItem;
	params.WeaponSlot = WeaponSlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.SetModelViewer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UKSItem**                CosmeticItem                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FCosmeticSlotDetails*   CosmeticDetail                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_RogueCutomizationSelector_C::SetModelViewer(class UKSItem** CosmeticItem, struct FCosmeticSlotDetails* CosmeticDetail)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.SetModelViewer");

	UWBP_RogueCutomizationSelector_C_SetModelViewer_Params params;
	params.CosmeticItem = CosmeticItem;
	params.CosmeticDetail = CosmeticDetail;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.SetCharacterSkin
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UKSItem**                CosmeticItem                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UKSJobItem**             JobItem                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_RogueCutomizationSelector_C::SetCharacterSkin(class UKSItem** CosmeticItem, class UKSJobItem** JobItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.SetCharacterSkin");

	UWBP_RogueCutomizationSelector_C_SetCharacterSkin_Params params;
	params.CosmeticItem = CosmeticItem;
	params.JobItem = JobItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.NavigateBack
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWBP_RogueCutomizationSelector_C::NavigateBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.NavigateBack");

	UWBP_RogueCutomizationSelector_C_NavigateBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.SetContextBar
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_RogueCutomizationSelector_C::SetContextBar()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.SetContextBar");

	UWBP_RogueCutomizationSelector_C_SetContextBar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.RegisterNavigation
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_RogueCutomizationSelector_C::RegisterNavigation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.RegisterNavigation");

	UWBP_RogueCutomizationSelector_C_RegisterNavigation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.ResetCosmeticSelection
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_RogueCutomizationSelector_C::ResetCosmeticSelection()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.ResetCosmeticSelection");

	UWBP_RogueCutomizationSelector_C_ResetCosmeticSelection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.SetCosmeticSelection
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_KSCosmeticItemDisplay_C** CosmeticDisplayBtn             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_RogueCutomizationSelector_C::SetCosmeticSelection(class UWBP_KSCosmeticItemDisplay_C** CosmeticDisplayBtn)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.SetCosmeticSelection");

	UWBP_RogueCutomizationSelector_C_SetCosmeticSelection_Params params;
	params.CosmeticDisplayBtn = CosmeticDisplayBtn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APUMG_HUD**              HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_RogueCutomizationSelector_C::InitializeWidget(class APUMG_HUD** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.InitializeWidget");

	UWBP_RogueCutomizationSelector_C_InitializeWidget_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.OnHover
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCosmeticSlotDetails*   CosmeticDetails                (BlueprintVisible, BlueprintReadOnly, Parm)
// class UKSItem**                KSItem                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_RogueCutomizationSelector_C::OnHover(struct FCosmeticSlotDetails* CosmeticDetails, class UKSItem** KSItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.OnHover");

	UWBP_RogueCutomizationSelector_C_OnHover_Params params;
	params.CosmeticDetails = CosmeticDetails;
	params.KSItem = KSItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.OnUnhover
// (BlueprintCallable, BlueprintEvent)

void UWBP_RogueCutomizationSelector_C::OnUnhover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.OnUnhover");

	UWBP_RogueCutomizationSelector_C_OnUnhover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.OnSelectCosmetic
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UKSItem**                KSItem                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FCosmeticSlotDetails*   CosmeticDetails                (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_RogueCutomizationSelector_C::OnSelectCosmetic(class UKSItem** KSItem, class UWidget** Widget, struct FCosmeticSlotDetails* CosmeticDetails)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.OnSelectCosmetic");

	UWBP_RogueCutomizationSelector_C_OnSelectCosmetic_Params params;
	params.KSItem = KSItem;
	params.Widget = Widget;
	params.CosmeticDetails = CosmeticDetails;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.OnShown
// (Event, Public, BlueprintEvent)

void UWBP_RogueCutomizationSelector_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.OnShown");

	UWBP_RogueCutomizationSelector_C_OnShown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.OnBackPrompt
// (BlueprintCallable, BlueprintEvent)

void UWBP_RogueCutomizationSelector_C::OnBackPrompt()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.OnBackPrompt");

	UWBP_RogueCutomizationSelector_C_OnBackPrompt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.InitializeWidgetNavigation
// (Event, Public, BlueprintEvent)

void UWBP_RogueCutomizationSelector_C::InitializeWidgetNavigation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.InitializeWidgetNavigation");

	UWBP_RogueCutomizationSelector_C_InitializeWidgetNavigation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.EquipCosmetic
// (BlueprintCallable, BlueprintEvent)

void UWBP_RogueCutomizationSelector_C::EquipCosmetic()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.EquipCosmetic");

	UWBP_RogueCutomizationSelector_C_EquipCosmetic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.OnHide
// (Event, Public, BlueprintEvent)

void UWBP_RogueCutomizationSelector_C::OnHide()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.OnHide");

	UWBP_RogueCutomizationSelector_C_OnHide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.HandleInputStateChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EPGAME_INPUT_STATE>* InputState                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_RogueCutomizationSelector_C::HandleInputStateChanged(TEnumAsByte<EPGAME_INPUT_STATE>* InputState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.HandleInputStateChanged");

	UWBP_RogueCutomizationSelector_C_HandleInputStateChanged_Params params;
	params.InputState = InputState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.HandleOnPurchasedItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPUMG_StoreItem**        Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPUMG_StoreItemPrice**   Price                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_RogueCutomizationSelector_C::HandleOnPurchasedItem(class UPUMG_StoreItem** Item, class UPUMG_StoreItemPrice** Price)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.HandleOnPurchasedItem");

	UWBP_RogueCutomizationSelector_C_HandleOnPurchasedItem_Params params;
	params.Item = Item;
	params.Price = Price;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.BndEvt__AcceptEquipAll_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_RogueCutomizationSelector_C::BndEvt__AcceptEquipAll_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.BndEvt__AcceptEquipAll_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UWBP_RogueCutomizationSelector_C_BndEvt__AcceptEquipAll_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.BndEvt__CancelEquipAll_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_RogueCutomizationSelector_C::BndEvt__CancelEquipAll_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.BndEvt__CancelEquipAll_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	UWBP_RogueCutomizationSelector_C_BndEvt__CancelEquipAll_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.On Close Button Clicked
// (BlueprintCallable, BlueprintEvent)

void UWBP_RogueCutomizationSelector_C::On_Close_Button_Clicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.On Close Button Clicked");

	UWBP_RogueCutomizationSelector_C_On_Close_Button_Clicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.OnItemGamepadHovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPUMG_Widget**           Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool*                          bHovered                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_RogueCutomizationSelector_C::OnItemGamepadHovered(class UPUMG_Widget** Widget, bool* bHovered)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.OnItemGamepadHovered");

	UWBP_RogueCutomizationSelector_C_OnItemGamepadHovered_Params params;
	params.Widget = Widget;
	params.bHovered = bHovered;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.ExecuteUbergraph_WBP_RogueCutomizationSelector
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_RogueCutomizationSelector_C::ExecuteUbergraph_WBP_RogueCutomizationSelector(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.ExecuteUbergraph_WBP_RogueCutomizationSelector");

	UWBP_RogueCutomizationSelector_C_ExecuteUbergraph_WBP_RogueCutomizationSelector_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.OnEquipCosmeticItem__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// EMercCosmeticSlot*             SlotType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           SlotIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UKSItem**                Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_RogueCutomizationSelector_C::OnEquipCosmeticItem__DelegateSignature(EMercCosmeticSlot* SlotType, int* SlotIndex, class UKSItem** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.OnEquipCosmeticItem__DelegateSignature");

	UWBP_RogueCutomizationSelector_C_OnEquipCosmeticItem__DelegateSignature_Params params;
	params.SlotType = SlotType;
	params.SlotIndex = SlotIndex;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

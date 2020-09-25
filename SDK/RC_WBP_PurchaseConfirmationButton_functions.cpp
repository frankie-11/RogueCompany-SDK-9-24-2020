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

// Function WBP_PurchaseConfirmationButton.WBP_PurchaseConfirmationButton_C.StartConfirmHold
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_PurchaseConfirmationButton_C::StartConfirmHold()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PurchaseConfirmationButton.WBP_PurchaseConfirmationButton_C.StartConfirmHold");

	UWBP_PurchaseConfirmationButton_C_StartConfirmHold_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PurchaseConfirmationButton.WBP_PurchaseConfirmationButton_C.ClearConfirmHold
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_PurchaseConfirmationButton_C::ClearConfirmHold()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PurchaseConfirmationButton.WBP_PurchaseConfirmationButton_C.ClearConfirmHold");

	UWBP_PurchaseConfirmationButton_C_ClearConfirmHold_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PurchaseConfirmationButton.WBP_PurchaseConfirmationButton_C.UpdateGamepadPromptDisplay
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EPGAME_INPUT_STATE>* InputMode                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PurchaseConfirmationButton_C::UpdateGamepadPromptDisplay(TEnumAsByte<EPGAME_INPUT_STATE>* InputMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PurchaseConfirmationButton.WBP_PurchaseConfirmationButton_C.UpdateGamepadPromptDisplay");

	UWBP_PurchaseConfirmationButton_C_UpdateGamepadPromptDisplay_Params params;
	params.InputMode = InputMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PurchaseConfirmationButton.WBP_PurchaseConfirmationButton_C.OnButtonUnhovered
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_PurchaseConfirmationButton_C::OnButtonUnhovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PurchaseConfirmationButton.WBP_PurchaseConfirmationButton_C.OnButtonUnhovered");

	UWBP_PurchaseConfirmationButton_C_OnButtonUnhovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PurchaseConfirmationButton.WBP_PurchaseConfirmationButton_C.OnButtonHovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsGamepad                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PurchaseConfirmationButton_C::OnButtonHovered(bool* IsGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PurchaseConfirmationButton.WBP_PurchaseConfirmationButton_C.OnButtonHovered");

	UWBP_PurchaseConfirmationButton_C_OnButtonHovered_Params params;
	params.IsGamepad = IsGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PurchaseConfirmationButton.WBP_PurchaseConfirmationButton_C.OnButtonClicked
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_PurchaseConfirmationButton_C::OnButtonClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PurchaseConfirmationButton.WBP_PurchaseConfirmationButton_C.OnButtonClicked");

	UWBP_PurchaseConfirmationButton_C_OnButtonClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PurchaseConfirmationButton.WBP_PurchaseConfirmationButton_C.SetPortalOffer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPUMG_PortalOffer**      PortalOffer                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PurchaseConfirmationButton_C::SetPortalOffer(class UPUMG_PortalOffer** PortalOffer)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PurchaseConfirmationButton.WBP_PurchaseConfirmationButton_C.SetPortalOffer");

	UWBP_PurchaseConfirmationButton_C_SetPortalOffer_Params params;
	params.PortalOffer = PortalOffer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PurchaseConfirmationButton.WBP_PurchaseConfirmationButton_C.SetRawText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  ButtonText                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_PurchaseConfirmationButton_C::SetRawText(struct FText* ButtonText)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PurchaseConfirmationButton.WBP_PurchaseConfirmationButton_C.SetRawText");

	UWBP_PurchaseConfirmationButton_C_SetRawText_Params params;
	params.ButtonText = ButtonText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PurchaseConfirmationButton.WBP_PurchaseConfirmationButton_C.SetStorePrice
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPUMG_StoreItemPrice**   ItemPrice                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PurchaseConfirmationButton_C::SetStorePrice(class UPUMG_StoreItemPrice** ItemPrice)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PurchaseConfirmationButton.WBP_PurchaseConfirmationButton_C.SetStorePrice");

	UWBP_PurchaseConfirmationButton_C_SetStorePrice_Params params;
	params.ItemPrice = ItemPrice;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PurchaseConfirmationButton.WBP_PurchaseConfirmationButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PurchaseConfirmationButton_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PurchaseConfirmationButton.WBP_PurchaseConfirmationButton_C.PreConstruct");

	UWBP_PurchaseConfirmationButton_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PurchaseConfirmationButton.WBP_PurchaseConfirmationButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_PurchaseConfirmationButton_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PurchaseConfirmationButton.WBP_PurchaseConfirmationButton_C.Construct");

	UWBP_PurchaseConfirmationButton_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PurchaseConfirmationButton.WBP_PurchaseConfirmationButton_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PurchaseConfirmationButton_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PurchaseConfirmationButton.WBP_PurchaseConfirmationButton_C.Tick");

	UWBP_PurchaseConfirmationButton_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PurchaseConfirmationButton.WBP_PurchaseConfirmationButton_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APUMG_HUD**              HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PurchaseConfirmationButton_C::InitializeWidget(class APUMG_HUD** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PurchaseConfirmationButton.WBP_PurchaseConfirmationButton_C.InitializeWidget");

	UWBP_PurchaseConfirmationButton_C_InitializeWidget_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PurchaseConfirmationButton.WBP_PurchaseConfirmationButton_C.ExecuteUbergraph_WBP_PurchaseConfirmationButton
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PurchaseConfirmationButton_C::ExecuteUbergraph_WBP_PurchaseConfirmationButton(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PurchaseConfirmationButton.WBP_PurchaseConfirmationButton_C.ExecuteUbergraph_WBP_PurchaseConfirmationButton");

	UWBP_PurchaseConfirmationButton_C_ExecuteUbergraph_WBP_PurchaseConfirmationButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PurchaseConfirmationButton.WBP_PurchaseConfirmationButton_C.OnRawClick__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_PurchaseConfirmationButton_C::OnRawClick__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PurchaseConfirmationButton.WBP_PurchaseConfirmationButton_C.OnRawClick__DelegateSignature");

	UWBP_PurchaseConfirmationButton_C_OnRawClick__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PurchaseConfirmationButton.WBP_PurchaseConfirmationButton_C.PurcaseItemWithPortalOffer__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPUMG_PortalOffer**      PortalOffer                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PurchaseConfirmationButton_C::PurcaseItemWithPortalOffer__DelegateSignature(class UPUMG_PortalOffer** PortalOffer)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PurchaseConfirmationButton.WBP_PurchaseConfirmationButton_C.PurcaseItemWithPortalOffer__DelegateSignature");

	UWBP_PurchaseConfirmationButton_C_PurcaseItemWithPortalOffer__DelegateSignature_Params params;
	params.PortalOffer = PortalOffer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PurchaseConfirmationButton.WBP_PurchaseConfirmationButton_C.PurcaseItemWithPrice__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPUMG_StoreItemPrice**   Price                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PurchaseConfirmationButton_C::PurcaseItemWithPrice__DelegateSignature(class UPUMG_StoreItemPrice** Price)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PurchaseConfirmationButton.WBP_PurchaseConfirmationButton_C.PurcaseItemWithPrice__DelegateSignature");

	UWBP_PurchaseConfirmationButton_C_PurcaseItemWithPrice__DelegateSignature_Params params;
	params.Price = Price;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

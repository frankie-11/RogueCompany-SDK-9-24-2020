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

// Function WBP_LoadoutTierButton.WBP_LoadoutTierButton_C.SetIsActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          ShowPrice                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          SetActive                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_LoadoutTierButton_C::SetIsActive(bool* ShowPrice, bool* SetActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LoadoutTierButton.WBP_LoadoutTierButton_C.SetIsActive");

	UWBP_LoadoutTierButton_C_SetIsActive_Params params;
	params.ShowPrice = ShowPrice;
	params.SetActive = SetActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_LoadoutTierButton.WBP_LoadoutTierButton_C.SetTierPrice
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  PriceText                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_LoadoutTierButton_C::SetTierPrice(struct FText* PriceText)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LoadoutTierButton.WBP_LoadoutTierButton_C.SetTierPrice");

	UWBP_LoadoutTierButton_C_SetTierPrice_Params params;
	params.PriceText = PriceText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_LoadoutTierButton.WBP_LoadoutTierButton_C.Set Button Text
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  Text                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_LoadoutTierButton_C::Set_Button_Text(struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LoadoutTierButton.WBP_LoadoutTierButton_C.Set Button Text");

	UWBP_LoadoutTierButton_C_Set_Button_Text_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_LoadoutTierButton.WBP_LoadoutTierButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_LoadoutTierButton_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LoadoutTierButton.WBP_LoadoutTierButton_C.PreConstruct");

	UWBP_LoadoutTierButton_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_LoadoutTierButton.WBP_LoadoutTierButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_LoadoutTierButton_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LoadoutTierButton.WBP_LoadoutTierButton_C.Construct");

	UWBP_LoadoutTierButton_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_LoadoutTierButton.WBP_LoadoutTierButton_C.BndEvt__TierButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_LoadoutTierButton_C::BndEvt__TierButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LoadoutTierButton.WBP_LoadoutTierButton_C.BndEvt__TierButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UWBP_LoadoutTierButton_C_BndEvt__TierButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_LoadoutTierButton.WBP_LoadoutTierButton_C.BndEvt__TierButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_LoadoutTierButton_C::BndEvt__TierButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LoadoutTierButton.WBP_LoadoutTierButton_C.BndEvt__TierButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UWBP_LoadoutTierButton_C_BndEvt__TierButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_LoadoutTierButton.WBP_LoadoutTierButton_C.BndEvt__TierButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_LoadoutTierButton_C::BndEvt__TierButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LoadoutTierButton.WBP_LoadoutTierButton_C.BndEvt__TierButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UWBP_LoadoutTierButton_C_BndEvt__TierButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_LoadoutTierButton.WBP_LoadoutTierButton_C.ExecuteUbergraph_WBP_LoadoutTierButton
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_LoadoutTierButton_C::ExecuteUbergraph_WBP_LoadoutTierButton(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LoadoutTierButton.WBP_LoadoutTierButton_C.ExecuteUbergraph_WBP_LoadoutTierButton");

	UWBP_LoadoutTierButton_C_ExecuteUbergraph_WBP_LoadoutTierButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_LoadoutTierButton.WBP_LoadoutTierButton_C.OnClick__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           TierIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_LoadoutTierButton_C::OnClick__DelegateSignature(int* TierIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LoadoutTierButton.WBP_LoadoutTierButton_C.OnClick__DelegateSignature");

	UWBP_LoadoutTierButton_C_OnClick__DelegateSignature_Params params;
	params.TierIndex = TierIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_LoadoutTierButton.WBP_LoadoutTierButton_C.OnHover__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           TierIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_LoadoutTierButton_C::OnHover__DelegateSignature(int* TierIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LoadoutTierButton.WBP_LoadoutTierButton_C.OnHover__DelegateSignature");

	UWBP_LoadoutTierButton_C_OnHover__DelegateSignature_Params params;
	params.TierIndex = TierIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

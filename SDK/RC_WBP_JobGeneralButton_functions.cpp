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

// Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.SetItemOwned
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPUMG_StoreItem**        StoreItem                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_JobGeneralButton_C::SetItemOwned(class UPUMG_StoreItem** StoreItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.SetItemOwned");

	UWBP_JobGeneralButton_C_SetItemOwned_Params params;
	params.StoreItem = StoreItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.CanBeFavorited
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsValid                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWBP_JobGeneralButton_C::CanBeFavorited(bool* IsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.CanBeFavorited");

	UWBP_JobGeneralButton_C_CanBeFavorited_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsValid != nullptr)
		*IsValid = params.IsValid;
}


// Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.DisplayFavoriteStatus
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_JobGeneralButton_C::DisplayFavoriteStatus()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.DisplayFavoriteStatus");

	UWBP_JobGeneralButton_C_DisplayFavoriteStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.PopulateJobButton
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_JobGeneralButton_C::PopulateJobButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.PopulateJobButton");

	UWBP_JobGeneralButton_C_PopulateJobButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.NavigateConfirm
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWBP_JobGeneralButton_C::NavigateConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.NavigateConfirm");

	UWBP_JobGeneralButton_C_NavigateConfirm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.OnClickSound
// (BlueprintCallable, BlueprintEvent)

void UWBP_JobGeneralButton_C::OnClickSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.OnClickSound");

	UWBP_JobGeneralButton_C_OnClickSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.OnHoverSound
// (BlueprintCallable, BlueprintEvent)

void UWBP_JobGeneralButton_C::OnHoverSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.OnHoverSound");

	UWBP_JobGeneralButton_C_OnHoverSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_JobGeneralButton_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UWBP_JobGeneralButton_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_JobGeneralButton_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.Construct");

	UWBP_JobGeneralButton_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_JobGeneralButton_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.PreConstruct");

	UWBP_JobGeneralButton_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.OnGamepadConfirm
// (BlueprintCallable, BlueprintEvent)

void UWBP_JobGeneralButton_C::OnGamepadConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.OnGamepadConfirm");

	UWBP_JobGeneralButton_C_OnGamepadConfirm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.GamepadHover
// (Event, Public, BlueprintEvent)

void UWBP_JobGeneralButton_C::GamepadHover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.GamepadHover");

	UWBP_JobGeneralButton_C_GamepadHover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.GamepadUnhover
// (Event, Public, BlueprintEvent)

void UWBP_JobGeneralButton_C::GamepadUnhover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.GamepadUnhover");

	UWBP_JobGeneralButton_C_GamepadUnhover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_JobGeneralButton_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature");

	UWBP_JobGeneralButton_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_JobGeneralButton_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature");

	UWBP_JobGeneralButton_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APUMG_HUD**              HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_JobGeneralButton_C::InitializeWidget(class APUMG_HUD** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.InitializeWidget");

	UWBP_JobGeneralButton_C_InitializeWidget_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_JobGeneralButton_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature");

	UWBP_JobGeneralButton_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.BndEvt__FavoriteHitBox_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_JobGeneralButton_C::BndEvt__FavoriteHitBox_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.BndEvt__FavoriteHitBox_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UWBP_JobGeneralButton_C_BndEvt__FavoriteHitBox_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.BndEvt__FavoriteHitBox_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_JobGeneralButton_C::BndEvt__FavoriteHitBox_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.BndEvt__FavoriteHitBox_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");

	UWBP_JobGeneralButton_C_BndEvt__FavoriteHitBox_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.BndEvt__FavoriteHitBox_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_JobGeneralButton_C::BndEvt__FavoriteHitBox_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.BndEvt__FavoriteHitBox_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");

	UWBP_JobGeneralButton_C_BndEvt__FavoriteHitBox_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.UninitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UWBP_JobGeneralButton_C::UninitializeWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.UninitializeWidget");

	UWBP_JobGeneralButton_C_UninitializeWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.ExecuteUbergraph_WBP_JobGeneralButton
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_JobGeneralButton_C::ExecuteUbergraph_WBP_JobGeneralButton(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.ExecuteUbergraph_WBP_JobGeneralButton");

	UWBP_JobGeneralButton_C_ExecuteUbergraph_WBP_JobGeneralButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.OnFavorited__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_JobGeneralButton_C::OnFavorited__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.OnFavorited__DelegateSignature");

	UWBP_JobGeneralButton_C_OnFavorited__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.OnUnhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_JobGeneralButton_C::OnUnhovered__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.OnUnhovered__DelegateSignature");

	UWBP_JobGeneralButton_C_OnUnhovered__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.OnHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UKSJobItem**             JobItem                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPUMG_StoreItem**        StoreItem                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_JobGeneralButton_C::OnHovered__DelegateSignature(class UKSJobItem** JobItem, class UPUMG_StoreItem** StoreItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.OnHovered__DelegateSignature");

	UWBP_JobGeneralButton_C_OnHovered__DelegateSignature_Params params;
	params.JobItem = JobItem;
	params.StoreItem = StoreItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UKSJobItem**             JobItem                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_JobGeneralButton_C::OnClicked__DelegateSignature(class UKSJobItem** JobItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.OnClicked__DelegateSignature");

	UWBP_JobGeneralButton_C_OnClicked__DelegateSignature_Params params;
	params.JobItem = JobItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

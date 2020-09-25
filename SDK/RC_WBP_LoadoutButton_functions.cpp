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

// Function WBP_LoadoutButton.WBP_LoadoutButton_C.PopulateLoadoutButton
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_LoadoutButton_C::PopulateLoadoutButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LoadoutButton.WBP_LoadoutButton_C.PopulateLoadoutButton");

	UWBP_LoadoutButton_C_PopulateLoadoutButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_LoadoutButton.WBP_LoadoutButton_C.SetLoadoutItem
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_LoadoutButton_C::SetLoadoutItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LoadoutButton.WBP_LoadoutButton_C.SetLoadoutItem");

	UWBP_LoadoutButton_C_SetLoadoutItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_LoadoutButton.WBP_LoadoutButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_LoadoutButton_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LoadoutButton.WBP_LoadoutButton_C.PreConstruct");

	UWBP_LoadoutButton_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_LoadoutButton.WBP_LoadoutButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_LoadoutButton_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LoadoutButton.WBP_LoadoutButton_C.Construct");

	UWBP_LoadoutButton_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_LoadoutButton.WBP_LoadoutButton_C.OnClick
// (BlueprintCallable, BlueprintEvent)

void UWBP_LoadoutButton_C::OnClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LoadoutButton.WBP_LoadoutButton_C.OnClick");

	UWBP_LoadoutButton_C_OnClick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_LoadoutButton.WBP_LoadoutButton_C.OnHover
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsGamepad                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_LoadoutButton_C::OnHover(bool* IsGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LoadoutButton.WBP_LoadoutButton_C.OnHover");

	UWBP_LoadoutButton_C_OnHover_Params params;
	params.IsGamepad = IsGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_LoadoutButton.WBP_LoadoutButton_C.SetIsActive
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsActive                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_LoadoutButton_C::SetIsActive(bool* IsActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LoadoutButton.WBP_LoadoutButton_C.SetIsActive");

	UWBP_LoadoutButton_C_SetIsActive_Params params;
	params.IsActive = IsActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_LoadoutButton.WBP_LoadoutButton_C.ExecuteUbergraph_WBP_LoadoutButton
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_LoadoutButton_C::ExecuteUbergraph_WBP_LoadoutButton(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LoadoutButton.WBP_LoadoutButton_C.ExecuteUbergraph_WBP_LoadoutButton");

	UWBP_LoadoutButton_C_ExecuteUbergraph_WBP_LoadoutButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_LoadoutButton.WBP_LoadoutButton_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UKSItem**                LoadoutItem                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWBP_LoadoutButton_C**   LoadoutButton                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_LoadoutButton_C::OnClicked__DelegateSignature(class UKSItem** LoadoutItem, class UWBP_LoadoutButton_C** LoadoutButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LoadoutButton.WBP_LoadoutButton_C.OnClicked__DelegateSignature");

	UWBP_LoadoutButton_C_OnClicked__DelegateSignature_Params params;
	params.LoadoutItem = LoadoutItem;
	params.LoadoutButton = LoadoutButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_LoadoutButton.WBP_LoadoutButton_C.OnHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UKSItem**                LoadoutItem                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsGamepad                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_LoadoutButton_C::OnHovered__DelegateSignature(class UKSItem** LoadoutItem, bool* IsGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LoadoutButton.WBP_LoadoutButton_C.OnHovered__DelegateSignature");

	UWBP_LoadoutButton_C_OnHovered__DelegateSignature_Params params;
	params.LoadoutItem = LoadoutItem;
	params.IsGamepad = IsGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

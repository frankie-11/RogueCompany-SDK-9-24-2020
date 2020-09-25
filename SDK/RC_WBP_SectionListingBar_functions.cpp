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

// Function WBP_SectionListingBar.WBP_SectionListingBar_C.SetActiveButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           ActiveIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_SectionListingBar_C::SetActiveButton(int* ActiveIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SectionListingBar.WBP_SectionListingBar_C.SetActiveButton");

	UWBP_SectionListingBar_C_SetActiveButton_Params params;
	params.ActiveIndex = ActiveIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SectionListingBar.WBP_SectionListingBar_C.OnInputStateChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EPGAME_INPUT_STATE>* InputState                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_SectionListingBar_C::OnInputStateChanged(TEnumAsByte<EPGAME_INPUT_STATE>* InputState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SectionListingBar.WBP_SectionListingBar_C.OnInputStateChanged");

	UWBP_SectionListingBar_C_OnInputStateChanged_Params params;
	params.InputState = InputState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SectionListingBar.WBP_SectionListingBar_C.OnSectionButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_SectionListingBar_C::OnSectionButton(int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SectionListingBar.WBP_SectionListingBar_C.OnSectionButton");

	UWBP_SectionListingBar_C_OnSectionButton_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SectionListingBar.WBP_SectionListingBar_C.SetSections
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UKSStoreSection*> Sections                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UWBP_SectionListingBar_C::SetSections(TArray<class UKSStoreSection*>* Sections)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SectionListingBar.WBP_SectionListingBar_C.SetSections");

	UWBP_SectionListingBar_C_SetSections_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Sections != nullptr)
		*Sections = params.Sections;
}


// Function WBP_SectionListingBar.WBP_SectionListingBar_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APUMG_HUD**              HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_SectionListingBar_C::InitializeWidget(class APUMG_HUD** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SectionListingBar.WBP_SectionListingBar_C.InitializeWidget");

	UWBP_SectionListingBar_C_InitializeWidget_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SectionListingBar.WBP_SectionListingBar_C.ExecuteUbergraph_WBP_SectionListingBar
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_SectionListingBar_C::ExecuteUbergraph_WBP_SectionListingBar(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SectionListingBar.WBP_SectionListingBar_C.ExecuteUbergraph_WBP_SectionListingBar");

	UWBP_SectionListingBar_C_ExecuteUbergraph_WBP_SectionListingBar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SectionListingBar.WBP_SectionListingBar_C.OnSectionSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_SectionListingBar_C::OnSectionSelected__DelegateSignature(int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SectionListingBar.WBP_SectionListingBar_C.OnSectionSelected__DelegateSignature");

	UWBP_SectionListingBar_C_OnSectionSelected__DelegateSignature_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

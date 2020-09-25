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

// Function WBP_ProgressEarnedBar.WBP_ProgressEarnedBar_C.UpdateLevelDisplay
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_ProgressEarnedBar_C::UpdateLevelDisplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ProgressEarnedBar.WBP_ProgressEarnedBar_C.UpdateLevelDisplay");

	UWBP_ProgressEarnedBar_C_UpdateLevelDisplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ProgressEarnedBar.WBP_ProgressEarnedBar_C.Set Fill Colors
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_ProgressEarnedBar_C::Set_Fill_Colors()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ProgressEarnedBar.WBP_ProgressEarnedBar_C.Set Fill Colors");

	UWBP_ProgressEarnedBar_C_Set_Fill_Colors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ProgressEarnedBar.WBP_ProgressEarnedBar_C.OnLevelUpAnimCompleted
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_ProgressEarnedBar_C::OnLevelUpAnimCompleted()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ProgressEarnedBar.WBP_ProgressEarnedBar_C.OnLevelUpAnimCompleted");

	UWBP_ProgressEarnedBar_C_OnLevelUpAnimCompleted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ProgressEarnedBar.WBP_ProgressEarnedBar_C.GetXpPercentageInLevel
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          PercentProgress                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWBP_ProgressEarnedBar_C::GetXpPercentageInLevel(float* PercentProgress)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ProgressEarnedBar.WBP_ProgressEarnedBar_C.GetXpPercentageInLevel");

	UWBP_ProgressEarnedBar_C_GetXpPercentageInLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PercentProgress != nullptr)
		*PercentProgress = params.PercentProgress;
}


// Function WBP_ProgressEarnedBar.WBP_ProgressEarnedBar_C.DisplayXpAnimationState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_ProgressEarnedBar_C::DisplayXpAnimationState()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ProgressEarnedBar.WBP_ProgressEarnedBar_C.DisplayXpAnimationState");

	UWBP_ProgressEarnedBar_C_DisplayXpAnimationState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ProgressEarnedBar.WBP_ProgressEarnedBar_C.SetNewLerpTimeframe
// (Private, BlueprintCallable, BlueprintEvent)

void UWBP_ProgressEarnedBar_C::SetNewLerpTimeframe()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ProgressEarnedBar.WBP_ProgressEarnedBar_C.SetNewLerpTimeframe");

	UWBP_ProgressEarnedBar_C_SetNewLerpTimeframe_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ProgressEarnedBar.WBP_ProgressEarnedBar_C.SetProgressionData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayerProgression*     Progression                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_ProgressEarnedBar_C::SetProgressionData(struct FPlayerProgression* Progression)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ProgressEarnedBar.WBP_ProgressEarnedBar_C.SetProgressionData");

	UWBP_ProgressEarnedBar_C_SetProgressionData_Params params;
	params.Progression = Progression;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ProgressEarnedBar.WBP_ProgressEarnedBar_C.SetFillSettings
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         BasePercentage                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         FillPercentage                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_ProgressEarnedBar_C::SetFillSettings(float* BasePercentage, float* FillPercentage)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ProgressEarnedBar.WBP_ProgressEarnedBar_C.SetFillSettings");

	UWBP_ProgressEarnedBar_C_SetFillSettings_Params params;
	params.BasePercentage = BasePercentage;
	params.FillPercentage = FillPercentage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ProgressEarnedBar.WBP_ProgressEarnedBar_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_ProgressEarnedBar_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ProgressEarnedBar.WBP_ProgressEarnedBar_C.PreConstruct");

	UWBP_ProgressEarnedBar_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ProgressEarnedBar.WBP_ProgressEarnedBar_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_ProgressEarnedBar_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ProgressEarnedBar.WBP_ProgressEarnedBar_C.Construct");

	UWBP_ProgressEarnedBar_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ProgressEarnedBar.WBP_ProgressEarnedBar_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_ProgressEarnedBar_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ProgressEarnedBar.WBP_ProgressEarnedBar_C.Tick");

	UWBP_ProgressEarnedBar_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ProgressEarnedBar.WBP_ProgressEarnedBar_C.StartAnimation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Delay                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_ProgressEarnedBar_C::StartAnimation(float* Delay)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ProgressEarnedBar.WBP_ProgressEarnedBar_C.StartAnimation");

	UWBP_ProgressEarnedBar_C_StartAnimation_Params params;
	params.Delay = Delay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ProgressEarnedBar.WBP_ProgressEarnedBar_C.ExecuteUbergraph_WBP_ProgressEarnedBar
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_ProgressEarnedBar_C::ExecuteUbergraph_WBP_ProgressEarnedBar(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ProgressEarnedBar.WBP_ProgressEarnedBar_C.ExecuteUbergraph_WBP_ProgressEarnedBar");

	UWBP_ProgressEarnedBar_C_ExecuteUbergraph_WBP_ProgressEarnedBar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ProgressEarnedBar.WBP_ProgressEarnedBar_C.OnLevelUpEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           NewLevel                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_ProgressEarnedBar_C::OnLevelUpEvent__DelegateSignature(int* NewLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ProgressEarnedBar.WBP_ProgressEarnedBar_C.OnLevelUpEvent__DelegateSignature");

	UWBP_ProgressEarnedBar_C_OnLevelUpEvent__DelegateSignature_Params params;
	params.NewLevel = NewLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

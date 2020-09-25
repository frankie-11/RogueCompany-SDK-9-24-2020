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

// Function CombatLogElement.CombatLogElement_C.SetMessageData
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCombatLogData*         MessageData                    (BlueprintVisible, BlueprintReadOnly, Parm)
// class UCombatLogElement_C*     CombatLogElement               (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UCombatLogElement_C::SetMessageData(struct FCombatLogData* MessageData, class UCombatLogElement_C** CombatLogElement)
{
	static auto fn = UObject::FindObject<UFunction>("Function CombatLogElement.CombatLogElement_C.SetMessageData");

	UCombatLogElement_C_SetMessageData_Params params;
	params.MessageData = MessageData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CombatLogElement != nullptr)
		*CombatLogElement = params.CombatLogElement;
}


// Function CombatLogElement.CombatLogElement_C.GetVictimTextColor
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor             Color                          (Parm, OutParm)

void UCombatLogElement_C::GetVictimTextColor(struct FSlateColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function CombatLogElement.CombatLogElement_C.GetVictimTextColor");

	UCombatLogElement_C_GetVictimTextColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Color != nullptr)
		*Color = params.Color;
}


// Function CombatLogElement.CombatLogElement_C.GetInstigatorTextColor
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor             Color                          (Parm, OutParm)

void UCombatLogElement_C::GetInstigatorTextColor(struct FSlateColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function CombatLogElement.CombatLogElement_C.GetInstigatorTextColor");

	UCombatLogElement_C_GetInstigatorTextColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Color != nullptr)
		*Color = params.Color;
}


// Function CombatLogElement.CombatLogElement_C.OnIconUpdated
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D**             Texture                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCombatLogElement_C::OnIconUpdated(class UTexture2D** Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function CombatLogElement.CombatLogElement_C.OnIconUpdated");

	UCombatLogElement_C_OnIconUpdated_Params params;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CombatLogElement.CombatLogElement_C.Transition
// (BlueprintCallable, BlueprintEvent)

void UCombatLogElement_C::Transition()
{
	static auto fn = UObject::FindObject<UFunction>("Function CombatLogElement.CombatLogElement_C.Transition");

	UCombatLogElement_C_Transition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CombatLogElement.CombatLogElement_C.OnIconUpdated_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D**             Texture                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCombatLogElement_C::OnIconUpdated_Event_1(class UTexture2D** Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function CombatLogElement.CombatLogElement_C.OnIconUpdated_Event_1");

	UCombatLogElement_C_OnIconUpdated_Event_1_Params params;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CombatLogElement.CombatLogElement_C.OnFadeOutAnimFinished
// (BlueprintCallable, BlueprintEvent)

void UCombatLogElement_C::OnFadeOutAnimFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function CombatLogElement.CombatLogElement_C.OnFadeOutAnimFinished");

	UCombatLogElement_C_OnFadeOutAnimFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CombatLogElement.CombatLogElement_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCombatLogElement_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function CombatLogElement.CombatLogElement_C.Construct");

	UCombatLogElement_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CombatLogElement.CombatLogElement_C.OnInfoSet
// (BlueprintCallable, BlueprintEvent)

void UCombatLogElement_C::OnInfoSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function CombatLogElement.CombatLogElement_C.OnInfoSet");

	UCombatLogElement_C_OnInfoSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CombatLogElement.CombatLogElement_C.FadeOut
// (BlueprintCallable, BlueprintEvent)

void UCombatLogElement_C::FadeOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function CombatLogElement.CombatLogElement_C.FadeOut");

	UCombatLogElement_C_FadeOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CombatLogElement.CombatLogElement_C.StopAnimsAndTimers
// (BlueprintCallable, BlueprintEvent)

void UCombatLogElement_C::StopAnimsAndTimers()
{
	static auto fn = UObject::FindObject<UFunction>("Function CombatLogElement.CombatLogElement_C.StopAnimsAndTimers");

	UCombatLogElement_C_StopAnimsAndTimers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CombatLogElement.CombatLogElement_C.ExecuteUbergraph_CombatLogElement
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCombatLogElement_C::ExecuteUbergraph_CombatLogElement(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CombatLogElement.CombatLogElement_C.ExecuteUbergraph_CombatLogElement");

	UCombatLogElement_C_ExecuteUbergraph_CombatLogElement_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

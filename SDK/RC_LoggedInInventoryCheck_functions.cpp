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

// Function LoggedInInventoryCheck.LoggedInInventoryCheck_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULoggedInInventoryCheck_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoggedInInventoryCheck.LoggedInInventoryCheck_C.Tick");

	ULoggedInInventoryCheck_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoggedInInventoryCheck.LoggedInInventoryCheck_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ULoggedInInventoryCheck_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoggedInInventoryCheck.LoggedInInventoryCheck_C.Construct");

	ULoggedInInventoryCheck_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoggedInInventoryCheck.LoggedInInventoryCheck_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULoggedInInventoryCheck_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoggedInInventoryCheck.LoggedInInventoryCheck_C.PreConstruct");

	ULoggedInInventoryCheck_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoggedInInventoryCheck.LoggedInInventoryCheck_C.OpenGate
// (BlueprintCallable, BlueprintEvent)

void ULoggedInInventoryCheck_C::OpenGate()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoggedInInventoryCheck.LoggedInInventoryCheck_C.OpenGate");

	ULoggedInInventoryCheck_C_OpenGate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoggedInInventoryCheck.LoggedInInventoryCheck_C.CloseGate
// (BlueprintCallable, BlueprintEvent)

void ULoggedInInventoryCheck_C::CloseGate()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoggedInInventoryCheck.LoggedInInventoryCheck_C.CloseGate");

	ULoggedInInventoryCheck_C_CloseGate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoggedInInventoryCheck.LoggedInInventoryCheck_C.OnShown
// (Event, Public, BlueprintEvent)

void ULoggedInInventoryCheck_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoggedInInventoryCheck.LoggedInInventoryCheck_C.OnShown");

	ULoggedInInventoryCheck_C_OnShown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoggedInInventoryCheck.LoggedInInventoryCheck_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APUMG_HUD**              HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULoggedInInventoryCheck_C::InitializeWidget(class APUMG_HUD** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoggedInInventoryCheck.LoggedInInventoryCheck_C.InitializeWidget");

	ULoggedInInventoryCheck_C_InitializeWidget_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoggedInInventoryCheck.LoggedInInventoryCheck_C.ExecuteUbergraph_LoggedInInventoryCheck
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULoggedInInventoryCheck_C::ExecuteUbergraph_LoggedInInventoryCheck(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoggedInInventoryCheck.LoggedInInventoryCheck_C.ExecuteUbergraph_LoggedInInventoryCheck");

	ULoggedInInventoryCheck_C_ExecuteUbergraph_LoggedInInventoryCheck_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

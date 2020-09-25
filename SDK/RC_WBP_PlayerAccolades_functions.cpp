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

// Function WBP_PlayerAccolades.WBP_PlayerAccolades_C.GetAccolateWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAccoladeDisplayInfo*   AccoladeInfo                   (BlueprintVisible, BlueprintReadOnly, Parm)
// class UWBP_AccoladeMedal_C*    Widget                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_PlayerAccolades_C::GetAccolateWidget(struct FAccoladeDisplayInfo* AccoladeInfo, class UWBP_AccoladeMedal_C** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerAccolades.WBP_PlayerAccolades_C.GetAccolateWidget");

	UWBP_PlayerAccolades_C_GetAccolateWidget_Params params;
	params.AccoladeInfo = AccoladeInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Widget != nullptr)
		*Widget = params.Widget;
}


// Function WBP_PlayerAccolades.WBP_PlayerAccolades_C.InitAccoladePool
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_PlayerAccolades_C::InitAccoladePool()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerAccolades.WBP_PlayerAccolades_C.InitAccoladePool");

	UWBP_PlayerAccolades_C_InitAccoladePool_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerAccolades.WBP_PlayerAccolades_C.SetPresentationSpeed
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_PlayerAccolades_C::SetPresentationSpeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerAccolades.WBP_PlayerAccolades_C.SetPresentationSpeed");

	UWBP_PlayerAccolades_C_SetPresentationSpeed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerAccolades.WBP_PlayerAccolades_C.TickPresentationSpeed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         TimeDelta                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PlayerAccolades_C::TickPresentationSpeed(float* TimeDelta)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerAccolades.WBP_PlayerAccolades_C.TickPresentationSpeed");

	UWBP_PlayerAccolades_C_TickPresentationSpeed_Params params;
	params.TimeDelta = TimeDelta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerAccolades.WBP_PlayerAccolades_C.CalculatePresentationSpeed
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_PlayerAccolades_C::CalculatePresentationSpeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerAccolades.WBP_PlayerAccolades_C.CalculatePresentationSpeed");

	UWBP_PlayerAccolades_C_CalculatePresentationSpeed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerAccolades.WBP_PlayerAccolades_C.MoveAccolades
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_PlayerAccolades_C::MoveAccolades()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerAccolades.WBP_PlayerAccolades_C.MoveAccolades");

	UWBP_PlayerAccolades_C_MoveAccolades_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerAccolades.WBP_PlayerAccolades_C.QueueAccolade
// (BlueprintCallable, BlueprintEvent)

void UWBP_PlayerAccolades_C::QueueAccolade()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerAccolades.WBP_PlayerAccolades_C.QueueAccolade");

	UWBP_PlayerAccolades_C_QueueAccolade_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerAccolades.WBP_PlayerAccolades_C.AllowOtherAccolades
// (BlueprintCallable, BlueprintEvent)

void UWBP_PlayerAccolades_C::AllowOtherAccolades()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerAccolades.WBP_PlayerAccolades_C.AllowOtherAccolades");

	UWBP_PlayerAccolades_C_AllowOtherAccolades_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerAccolades.WBP_PlayerAccolades_C.RemoveAccolade
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_PlayerAccolades_C::RemoveAccolade(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerAccolades.WBP_PlayerAccolades_C.RemoveAccolade");

	UWBP_PlayerAccolades_C_RemoveAccolade_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerAccolades.WBP_PlayerAccolades_C.HandleAccoladeRecieved
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FAccoladeEventEntry>* AccoladeEvents                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UWBP_PlayerAccolades_C::HandleAccoladeRecieved(TArray<struct FAccoladeEventEntry>* AccoladeEvents)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerAccolades.WBP_PlayerAccolades_C.HandleAccoladeRecieved");

	UWBP_PlayerAccolades_C_HandleAccoladeRecieved_Params params;
	params.AccoladeEvents = AccoladeEvents;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerAccolades.WBP_PlayerAccolades_C.HandleMultiplier
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAccoladeDisplayInfo*   AccoladeDisplayInfo            (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_PlayerAccolades_C::HandleMultiplier(struct FAccoladeDisplayInfo* AccoladeDisplayInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerAccolades.WBP_PlayerAccolades_C.HandleMultiplier");

	UWBP_PlayerAccolades_C_HandleMultiplier_Params params;
	params.AccoladeDisplayInfo = AccoladeDisplayInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerAccolades.WBP_PlayerAccolades_C.CreateAccolade
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAccoladeDisplayInfo*   AccoladeInfo                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_PlayerAccolades_C::CreateAccolade(struct FAccoladeDisplayInfo* AccoladeInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerAccolades.WBP_PlayerAccolades_C.CreateAccolade");

	UWBP_PlayerAccolades_C_CreateAccolade_Params params;
	params.AccoladeInfo = AccoladeInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerAccolades.WBP_PlayerAccolades_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_PlayerAccolades_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerAccolades.WBP_PlayerAccolades_C.Construct");

	UWBP_PlayerAccolades_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerAccolades.WBP_PlayerAccolades_C.HandleKillCamEnabled
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsEnabled                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PlayerAccolades_C::HandleKillCamEnabled(bool* IsEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerAccolades.WBP_PlayerAccolades_C.HandleKillCamEnabled");

	UWBP_PlayerAccolades_C_HandleKillCamEnabled_Params params;
	params.IsEnabled = IsEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerAccolades.WBP_PlayerAccolades_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PlayerAccolades_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerAccolades.WBP_PlayerAccolades_C.Tick");

	UWBP_PlayerAccolades_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerAccolades.WBP_PlayerAccolades_C.ExecuteUbergraph_WBP_PlayerAccolades
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PlayerAccolades_C::ExecuteUbergraph_WBP_PlayerAccolades(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerAccolades.WBP_PlayerAccolades_C.ExecuteUbergraph_WBP_PlayerAccolades");

	UWBP_PlayerAccolades_C_ExecuteUbergraph_WBP_PlayerAccolades_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

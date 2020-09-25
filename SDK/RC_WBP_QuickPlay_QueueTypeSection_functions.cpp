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

// Function WBP_QuickPlay_QueueTypeSection.WBP_QuickPlay_QueueTypeSection_C.SortQueues
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FClientQueueInfo> Queues                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FClientQueueInfo> SortedQueues                   (Parm, OutParm, ZeroConstructor)

void UWBP_QuickPlay_QueueTypeSection_C::SortQueues(TArray<struct FClientQueueInfo>* Queues, TArray<struct FClientQueueInfo>* SortedQueues)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QuickPlay_QueueTypeSection.WBP_QuickPlay_QueueTypeSection_C.SortQueues");

	UWBP_QuickPlay_QueueTypeSection_C_SortQueues_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Queues != nullptr)
		*Queues = params.Queues;
	if (SortedQueues != nullptr)
		*SortedQueues = params.SortedQueues;
}


// Function WBP_QuickPlay_QueueTypeSection.WBP_QuickPlay_QueueTypeSection_C.ResetQueueButtons
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_QuickPlay_QueueTypeSection_C::ResetQueueButtons()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QuickPlay_QueueTypeSection.WBP_QuickPlay_QueueTypeSection_C.ResetQueueButtons");

	UWBP_QuickPlay_QueueTypeSection_C_ResetQueueButtons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QuickPlay_QueueTypeSection.WBP_QuickPlay_QueueTypeSection_C.GetQueueButtons
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UWBP_QuickPlay_QueueButton_C*> Buttons                        (Parm, OutParm, ZeroConstructor)

void UWBP_QuickPlay_QueueTypeSection_C::GetQueueButtons(TArray<class UWBP_QuickPlay_QueueButton_C*>* Buttons)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QuickPlay_QueueTypeSection.WBP_QuickPlay_QueueTypeSection_C.GetQueueButtons");

	UWBP_QuickPlay_QueueTypeSection_C_GetQueueButtons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Buttons != nullptr)
		*Buttons = params.Buttons;
}


// Function WBP_QuickPlay_QueueTypeSection.WBP_QuickPlay_QueueTypeSection_C.PopulateSection
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FQueueSection*          QueueSectionInfo               (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_QuickPlay_QueueTypeSection_C::PopulateSection(struct FQueueSection* QueueSectionInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QuickPlay_QueueTypeSection.WBP_QuickPlay_QueueTypeSection_C.PopulateSection");

	UWBP_QuickPlay_QueueTypeSection_C_PopulateSection_Params params;
	params.QueueSectionInfo = QueueSectionInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QuickPlay_QueueTypeSection.WBP_QuickPlay_QueueTypeSection_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_QuickPlay_QueueTypeSection_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QuickPlay_QueueTypeSection.WBP_QuickPlay_QueueTypeSection_C.Construct");

	UWBP_QuickPlay_QueueTypeSection_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QuickPlay_QueueTypeSection.WBP_QuickPlay_QueueTypeSection_C.HandleOnQueueClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           QueueId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_QuickPlay_QueueTypeSection_C::HandleOnQueueClicked(int* QueueId)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QuickPlay_QueueTypeSection.WBP_QuickPlay_QueueTypeSection_C.HandleOnQueueClicked");

	UWBP_QuickPlay_QueueTypeSection_C_HandleOnQueueClicked_Params params;
	params.QueueId = QueueId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QuickPlay_QueueTypeSection.WBP_QuickPlay_QueueTypeSection_C.HandleOnQueueHovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_QuickPlay_QueueTypeSection_C::HandleOnQueueHovered(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QuickPlay_QueueTypeSection.WBP_QuickPlay_QueueTypeSection_C.HandleOnQueueHovered");

	UWBP_QuickPlay_QueueTypeSection_C_HandleOnQueueHovered_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QuickPlay_QueueTypeSection.WBP_QuickPlay_QueueTypeSection_C.HandleOnQueueUnhovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_QuickPlay_QueueTypeSection_C::HandleOnQueueUnhovered(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QuickPlay_QueueTypeSection.WBP_QuickPlay_QueueTypeSection_C.HandleOnQueueUnhovered");

	UWBP_QuickPlay_QueueTypeSection_C_HandleOnQueueUnhovered_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QuickPlay_QueueTypeSection.WBP_QuickPlay_QueueTypeSection_C.HandleCustomBtnHovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsGamepad                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_QuickPlay_QueueTypeSection_C::HandleCustomBtnHovered(bool* IsGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QuickPlay_QueueTypeSection.WBP_QuickPlay_QueueTypeSection_C.HandleCustomBtnHovered");

	UWBP_QuickPlay_QueueTypeSection_C_HandleCustomBtnHovered_Params params;
	params.IsGamepad = IsGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QuickPlay_QueueTypeSection.WBP_QuickPlay_QueueTypeSection_C.HandleCustomBtnUnhovered
// (BlueprintCallable, BlueprintEvent)

void UWBP_QuickPlay_QueueTypeSection_C::HandleCustomBtnUnhovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QuickPlay_QueueTypeSection.WBP_QuickPlay_QueueTypeSection_C.HandleCustomBtnUnhovered");

	UWBP_QuickPlay_QueueTypeSection_C_HandleCustomBtnUnhovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QuickPlay_QueueTypeSection.WBP_QuickPlay_QueueTypeSection_C.HandleCustomBtnClicked
// (BlueprintCallable, BlueprintEvent)

void UWBP_QuickPlay_QueueTypeSection_C::HandleCustomBtnClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QuickPlay_QueueTypeSection.WBP_QuickPlay_QueueTypeSection_C.HandleCustomBtnClicked");

	UWBP_QuickPlay_QueueTypeSection_C_HandleCustomBtnClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QuickPlay_QueueTypeSection.WBP_QuickPlay_QueueTypeSection_C.ExecuteUbergraph_WBP_QuickPlay_QueueTypeSection
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_QuickPlay_QueueTypeSection_C::ExecuteUbergraph_WBP_QuickPlay_QueueTypeSection(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QuickPlay_QueueTypeSection.WBP_QuickPlay_QueueTypeSection_C.ExecuteUbergraph_WBP_QuickPlay_QueueTypeSection");

	UWBP_QuickPlay_QueueTypeSection_C_ExecuteUbergraph_WBP_QuickPlay_QueueTypeSection_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QuickPlay_QueueTypeSection.WBP_QuickPlay_QueueTypeSection_C.OnCustomMatchPopulated__DelegateSignature
// (Public, Delegate, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UKSWidget*>       Buttons                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UWBP_QuickPlay_QueueTypeSection_C::OnCustomMatchPopulated__DelegateSignature(TArray<class UKSWidget*>* Buttons)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QuickPlay_QueueTypeSection.WBP_QuickPlay_QueueTypeSection_C.OnCustomMatchPopulated__DelegateSignature");

	UWBP_QuickPlay_QueueTypeSection_C_OnCustomMatchPopulated__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Buttons != nullptr)
		*Buttons = params.Buttons;
}


// Function WBP_QuickPlay_QueueTypeSection.WBP_QuickPlay_QueueTypeSection_C.OnCustomMatchSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_QuickPlay_QueueTypeSection_C::OnCustomMatchSelected__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QuickPlay_QueueTypeSection.WBP_QuickPlay_QueueTypeSection_C.OnCustomMatchSelected__DelegateSignature");

	UWBP_QuickPlay_QueueTypeSection_C_OnCustomMatchSelected__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QuickPlay_QueueTypeSection.WBP_QuickPlay_QueueTypeSection_C.OnQueuePopulated__DelegateSignature
// (Public, Delegate, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UWBP_QuickPlay_QueueButton_C*> QueueButton                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UWBP_QuickPlay_QueueTypeSection_C::OnQueuePopulated__DelegateSignature(TArray<class UWBP_QuickPlay_QueueButton_C*>* QueueButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QuickPlay_QueueTypeSection.WBP_QuickPlay_QueueTypeSection_C.OnQueuePopulated__DelegateSignature");

	UWBP_QuickPlay_QueueTypeSection_C_OnQueuePopulated__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (QueueButton != nullptr)
		*QueueButton = params.QueueButton;
}


// Function WBP_QuickPlay_QueueTypeSection.WBP_QuickPlay_QueueTypeSection_C.OnQueueUnhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_QuickPlay_QueueTypeSection_C::OnQueueUnhovered__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QuickPlay_QueueTypeSection.WBP_QuickPlay_QueueTypeSection_C.OnQueueUnhovered__DelegateSignature");

	UWBP_QuickPlay_QueueTypeSection_C_OnQueueUnhovered__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QuickPlay_QueueTypeSection.WBP_QuickPlay_QueueTypeSection_C.OnQueueHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_QuickPlay_QueueTypeSection_C::OnQueueHovered__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QuickPlay_QueueTypeSection.WBP_QuickPlay_QueueTypeSection_C.OnQueueHovered__DelegateSignature");

	UWBP_QuickPlay_QueueTypeSection_C_OnQueueHovered__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QuickPlay_QueueTypeSection.WBP_QuickPlay_QueueTypeSection_C.OnQueueSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           QueueId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_QuickPlay_QueueTypeSection_C::OnQueueSelected__DelegateSignature(int* QueueId)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QuickPlay_QueueTypeSection.WBP_QuickPlay_QueueTypeSection_C.OnQueueSelected__DelegateSignature");

	UWBP_QuickPlay_QueueTypeSection_C_OnQueueSelected__DelegateSignature_Params params;
	params.QueueId = QueueId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

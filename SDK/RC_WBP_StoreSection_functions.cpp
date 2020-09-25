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

// Function WBP_StoreSection.WBP_StoreSection_C.OnStoreTimerTick
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_StoreSection_C::OnStoreTimerTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreSection.WBP_StoreSection_C.OnStoreTimerTick");

	UWBP_StoreSection_C_OnStoreTimerTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StoreSection.WBP_StoreSection_C.ShowCTA
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          ShowCTA                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_StoreSection_C::ShowCTA(bool* ShowCTA)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreSection.WBP_StoreSection_C.ShowCTA");

	UWBP_StoreSection_C_ShowCTA_Params params;
	params.ShowCTA = ShowCTA;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StoreSection.WBP_StoreSection_C.UpdateSectionTimer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_StoreSection_C::UpdateSectionTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreSection.WBP_StoreSection_C.UpdateSectionTimer");

	UWBP_StoreSection_C_UpdateSectionTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StoreSection.WBP_StoreSection_C.FindTaxInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UKSStoreSection**        StoreSection                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_StoreSection_C::FindTaxInfo(class UKSStoreSection** StoreSection)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreSection.WBP_StoreSection_C.FindTaxInfo");

	UWBP_StoreSection_C_FindTaxInfo_Params params;
	params.StoreSection = StoreSection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StoreSection.WBP_StoreSection_C.SetItemSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           SectionIndex                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           ItemIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_StoreSection_C::SetItemSelected(int* SectionIndex, int* ItemIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreSection.WBP_StoreSection_C.SetItemSelected");

	UWBP_StoreSection_C_SetItemSelected_Params params;
	params.SectionIndex = SectionIndex;
	params.ItemIndex = ItemIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StoreSection.WBP_StoreSection_C.SetupSectionNavigation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          SelectLast                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_StoreSection_C::SetupSectionNavigation(bool* SelectLast)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreSection.WBP_StoreSection_C.SetupSectionNavigation");

	UWBP_StoreSection_C_SetupSectionNavigation_Params params;
	params.SelectLast = SelectLast;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StoreSection.WBP_StoreSection_C.SetSectionData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UKSStoreSection**        SectionData                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_StoreSection_C::SetSectionData(class UKSStoreSection** SectionData)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreSection.WBP_StoreSection_C.SetSectionData");

	UWBP_StoreSection_C_SetSectionData_Params params;
	params.SectionData = SectionData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StoreSection.WBP_StoreSection_C.ClearContents
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_StoreSection_C::ClearContents()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreSection.WBP_StoreSection_C.ClearContents");

	UWBP_StoreSection_C_ClearContents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StoreSection.WBP_StoreSection_C.AddItemToSection
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UKSStoreSectionItem**    StoreItem                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UGridSlot*               NewSlot                        (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_StoreSection_C::AddItemToSection(class UKSStoreSectionItem** StoreItem, class UGridSlot** NewSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreSection.WBP_StoreSection_C.AddItemToSection");

	UWBP_StoreSection_C_AddItemToSection_Params params;
	params.StoreItem = StoreItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewSlot != nullptr)
		*NewSlot = params.NewSlot;
}


// Function WBP_StoreSection.WBP_StoreSection_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_StoreSection_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreSection.WBP_StoreSection_C.Construct");

	UWBP_StoreSection_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StoreSection.WBP_StoreSection_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_StoreSection_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreSection.WBP_StoreSection_C.Tick");

	UWBP_StoreSection_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StoreSection.WBP_StoreSection_C.ExecuteUbergraph_WBP_StoreSection
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_StoreSection_C::ExecuteUbergraph_WBP_StoreSection(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreSection.WBP_StoreSection_C.ExecuteUbergraph_WBP_StoreSection");

	UWBP_StoreSection_C_ExecuteUbergraph_WBP_StoreSection_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

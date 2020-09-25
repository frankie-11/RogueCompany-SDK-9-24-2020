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

// Function WBP_RegionSelectRedirect.WBP_RegionSelectRedirect_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APUMG_HUD**              HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_RegionSelectRedirect_C::InitializeWidget(class APUMG_HUD** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RegionSelectRedirect.WBP_RegionSelectRedirect_C.InitializeWidget");

	UWBP_RegionSelectRedirect_C_InitializeWidget_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RegionSelectRedirect.WBP_RegionSelectRedirect_C.Handle Region Selected
// (BlueprintCallable, BlueprintEvent)

void UWBP_RegionSelectRedirect_C::Handle_Region_Selected()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RegionSelectRedirect.WBP_RegionSelectRedirect_C.Handle Region Selected");

	UWBP_RegionSelectRedirect_C_Handle_Region_Selected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RegionSelectRedirect.WBP_RegionSelectRedirect_C.Handle Region Select Entries Created
// (BlueprintCallable, BlueprintEvent)

void UWBP_RegionSelectRedirect_C::Handle_Region_Select_Entries_Created()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RegionSelectRedirect.WBP_RegionSelectRedirect_C.Handle Region Select Entries Created");

	UWBP_RegionSelectRedirect_C_Handle_Region_Select_Entries_Created_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RegionSelectRedirect.WBP_RegionSelectRedirect_C.InitializeWidgetNavigation
// (Event, Public, BlueprintEvent)

void UWBP_RegionSelectRedirect_C::InitializeWidgetNavigation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RegionSelectRedirect.WBP_RegionSelectRedirect_C.InitializeWidgetNavigation");

	UWBP_RegionSelectRedirect_C_InitializeWidgetNavigation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RegionSelectRedirect.WBP_RegionSelectRedirect_C.OnShown
// (Event, Public, BlueprintEvent)

void UWBP_RegionSelectRedirect_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RegionSelectRedirect.WBP_RegionSelectRedirect_C.OnShown");

	UWBP_RegionSelectRedirect_C_OnShown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RegionSelectRedirect.WBP_RegionSelectRedirect_C.ExecuteUbergraph_WBP_RegionSelectRedirect
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_RegionSelectRedirect_C::ExecuteUbergraph_WBP_RegionSelectRedirect(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RegionSelectRedirect.WBP_RegionSelectRedirect_C.ExecuteUbergraph_WBP_RegionSelectRedirect");

	UWBP_RegionSelectRedirect_C_ExecuteUbergraph_WBP_RegionSelectRedirect_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

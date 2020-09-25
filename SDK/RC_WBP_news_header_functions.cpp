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

// Function WBP_news_header.WBP_news_header_C.Add Settings Group Widget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UKSSettingsGroup**       Settings_Group_Widget          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_news_header_C::Add_Settings_Group_Widget(class UKSSettingsGroup** Settings_Group_Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_news_header.WBP_news_header_C.Add Settings Group Widget");

	UWBP_news_header_C_Add_Settings_Group_Widget_Params params;
	params.Settings_Group_Widget = Settings_Group_Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_news_header.WBP_news_header_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_news_header_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_news_header.WBP_news_header_C.PreConstruct");

	UWBP_news_header_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_news_header.WBP_news_header_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_news_header_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_news_header.WBP_news_header_C.Construct");

	UWBP_news_header_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_news_header.WBP_news_header_C.ExecuteUbergraph_WBP_news_header
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_news_header_C::ExecuteUbergraph_WBP_news_header(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_news_header.WBP_news_header_C.ExecuteUbergraph_WBP_news_header");

	UWBP_news_header_C_ExecuteUbergraph_WBP_news_header_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

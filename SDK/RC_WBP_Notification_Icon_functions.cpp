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

// Function WBP_Notification_Icon.WBP_Notification_Icon_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_Notification_Icon_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Notification_Icon.WBP_Notification_Icon_C.Construct");

	UWBP_Notification_Icon_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Notification_Icon.WBP_Notification_Icon_C.OnShown
// (Event, Public, BlueprintEvent)

void UWBP_Notification_Icon_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Notification_Icon.WBP_Notification_Icon_C.OnShown");

	UWBP_Notification_Icon_C_OnShown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Notification_Icon.WBP_Notification_Icon_C.OnHide
// (Event, Public, BlueprintEvent)

void UWBP_Notification_Icon_C::OnHide()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Notification_Icon.WBP_Notification_Icon_C.OnHide");

	UWBP_Notification_Icon_C_OnHide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Notification_Icon.WBP_Notification_Icon_C.HandleShown
// (BlueprintCallable, BlueprintEvent)

void UWBP_Notification_Icon_C::HandleShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Notification_Icon.WBP_Notification_Icon_C.HandleShown");

	UWBP_Notification_Icon_C_HandleShown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Notification_Icon.WBP_Notification_Icon_C.HandleHide
// (BlueprintCallable, BlueprintEvent)

void UWBP_Notification_Icon_C::HandleHide()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Notification_Icon.WBP_Notification_Icon_C.HandleHide");

	UWBP_Notification_Icon_C_HandleHide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Notification_Icon.WBP_Notification_Icon_C.ExecuteUbergraph_WBP_Notification_Icon
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Notification_Icon_C::ExecuteUbergraph_WBP_Notification_Icon(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Notification_Icon.WBP_Notification_Icon_C.ExecuteUbergraph_WBP_Notification_Icon");

	UWBP_Notification_Icon_C_ExecuteUbergraph_WBP_Notification_Icon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

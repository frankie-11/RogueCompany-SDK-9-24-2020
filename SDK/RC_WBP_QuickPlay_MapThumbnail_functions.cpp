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

// Function WBP_QuickPlay_MapThumbnail.WBP_QuickPlay_MapThumbnail_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_QuickPlay_MapThumbnail_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QuickPlay_MapThumbnail.WBP_QuickPlay_MapThumbnail_C.Construct");

	UWBP_QuickPlay_MapThumbnail_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QuickPlay_MapThumbnail.WBP_QuickPlay_MapThumbnail_C.SetMapInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUIMapInfo*             UIMapInfo                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_QuickPlay_MapThumbnail_C::SetMapInfo(struct FUIMapInfo* UIMapInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QuickPlay_MapThumbnail.WBP_QuickPlay_MapThumbnail_C.SetMapInfo");

	UWBP_QuickPlay_MapThumbnail_C_SetMapInfo_Params params;
	params.UIMapInfo = UIMapInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QuickPlay_MapThumbnail.WBP_QuickPlay_MapThumbnail_C.ExecuteUbergraph_WBP_QuickPlay_MapThumbnail
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_QuickPlay_MapThumbnail_C::ExecuteUbergraph_WBP_QuickPlay_MapThumbnail(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QuickPlay_MapThumbnail.WBP_QuickPlay_MapThumbnail_C.ExecuteUbergraph_WBP_QuickPlay_MapThumbnail");

	UWBP_QuickPlay_MapThumbnail_C_ExecuteUbergraph_WBP_QuickPlay_MapThumbnail_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

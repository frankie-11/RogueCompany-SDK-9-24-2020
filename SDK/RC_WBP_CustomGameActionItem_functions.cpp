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

// Function WBP_CustomGameActionItem.WBP_CustomGameActionItem_C.SetText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  Text                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_CustomGameActionItem_C::SetText(struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomGameActionItem.WBP_CustomGameActionItem_C.SetText");

	UWBP_CustomGameActionItem_C_SetText_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CustomGameActionItem.WBP_CustomGameActionItem_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_CustomGameActionItem_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomGameActionItem.WBP_CustomGameActionItem_C.PreConstruct");

	UWBP_CustomGameActionItem_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CustomGameActionItem.WBP_CustomGameActionItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_CustomGameActionItem_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomGameActionItem.WBP_CustomGameActionItem_C.Construct");

	UWBP_CustomGameActionItem_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CustomGameActionItem.WBP_CustomGameActionItem_C.ExecuteUbergraph_WBP_CustomGameActionItem
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_CustomGameActionItem_C::ExecuteUbergraph_WBP_CustomGameActionItem(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomGameActionItem.WBP_CustomGameActionItem_C.ExecuteUbergraph_WBP_CustomGameActionItem");

	UWBP_CustomGameActionItem_C_ExecuteUbergraph_WBP_CustomGameActionItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

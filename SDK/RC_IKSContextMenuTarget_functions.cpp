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

// Function IKSContextMenuTarget.IKSContextMenuTarget_C.OnContextMenuOpen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ELaterality>*      Side                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIKSContextMenuTarget_C::OnContextMenuOpen(TEnumAsByte<ELaterality>* Side)
{
	static auto fn = UObject::FindObject<UFunction>("Function IKSContextMenuTarget.IKSContextMenuTarget_C.OnContextMenuOpen");

	UIKSContextMenuTarget_C_OnContextMenuOpen_Params params;
	params.Side = Side;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IKSContextMenuTarget.IKSContextMenuTarget_C.OnContextMenuClose
// (Public, BlueprintCallable, BlueprintEvent)

void UIKSContextMenuTarget_C::OnContextMenuClose()
{
	static auto fn = UObject::FindObject<UFunction>("Function IKSContextMenuTarget.IKSContextMenuTarget_C.OnContextMenuClose");

	UIKSContextMenuTarget_C_OnContextMenuClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

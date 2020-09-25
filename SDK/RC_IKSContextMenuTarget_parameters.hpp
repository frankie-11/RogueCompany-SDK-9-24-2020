#pragma once

// RogueCompany (4.24) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function IKSContextMenuTarget.IKSContextMenuTarget_C.OnContextMenuOpen
struct UIKSContextMenuTarget_C_OnContextMenuOpen_Params
{
	TEnumAsByte<ELaterality>*                          Side;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IKSContextMenuTarget.IKSContextMenuTarget_C.OnContextMenuClose
struct UIKSContextMenuTarget_C_OnContextMenuClose_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

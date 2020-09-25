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

// Function WBP_QuickPlay_MapThumbnail.WBP_QuickPlay_MapThumbnail_C.Construct
struct UWBP_QuickPlay_MapThumbnail_C_Construct_Params
{
};

// Function WBP_QuickPlay_MapThumbnail.WBP_QuickPlay_MapThumbnail_C.SetMapInfo
struct UWBP_QuickPlay_MapThumbnail_C_SetMapInfo_Params
{
	struct FUIMapInfo*                                 UIMapInfo;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_QuickPlay_MapThumbnail.WBP_QuickPlay_MapThumbnail_C.ExecuteUbergraph_WBP_QuickPlay_MapThumbnail
struct UWBP_QuickPlay_MapThumbnail_C_ExecuteUbergraph_WBP_QuickPlay_MapThumbnail_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

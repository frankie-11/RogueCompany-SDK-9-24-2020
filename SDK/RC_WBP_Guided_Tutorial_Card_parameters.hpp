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

// Function WBP_Guided_Tutorial_Card.WBP_Guided_Tutorial_Card_C.SetCardData
struct UWBP_Guided_Tutorial_Card_C_SetCardData_Params
{
	struct FGuidedCalloutCardData*                     CardData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_Guided_Tutorial_Card.WBP_Guided_Tutorial_Card_C.PreConstruct
struct UWBP_Guided_Tutorial_Card_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_Guided_Tutorial_Card.WBP_Guided_Tutorial_Card_C.ExecuteUbergraph_WBP_Guided_Tutorial_Card
struct UWBP_Guided_Tutorial_Card_C_ExecuteUbergraph_WBP_Guided_Tutorial_Card_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

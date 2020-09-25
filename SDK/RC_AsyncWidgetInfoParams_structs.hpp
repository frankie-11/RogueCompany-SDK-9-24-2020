#pragma once

// RogueCompany (4.24) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AsyncWidgetInfoParams.AsyncWidgetInfoParams
// 0x0040
struct FAsyncWidgetInfoParams
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) UNKNOWN PROPERTY: SoftClassProperty AsyncWidgetInfoParams.AsyncWidgetInfoParams.UserWidgetClass_2_9069E8704905834356F9E38E08D51BF1
	struct FString                                     ParentWidgetName_5_E592578E4CB7445E7A8364834A8EDD77;      // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class AKSWidgetInfoActor*                          WidgetInfoActor_9_3B7896EF4E8FD3533F260AACB9FA5E99;       // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

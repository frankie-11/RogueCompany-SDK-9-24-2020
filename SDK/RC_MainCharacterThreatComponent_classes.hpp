#pragma once

// RogueCompany (4.24) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// DynamicClass MainCharacterThreatComponent.MainCharacterThreatComponent_C
// 0x0090 (0x0228 - 0x0198)
class UMainCharacterThreatComponent_C : public UConfigurableThreatComponent_C
{
public:
	TMap<int, struct FLinearColor>                     DebugColorMap;                                            // 0x0198(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      DebuggingVisuals;                                         // 0x01E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                K2Node_MakeStruct_LinearColor;                            // 0x01EC(0x0010) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_Event_DeltaSeconds;                                // 0x01FC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      K2Node_Event_Show;                                        // 0x0200(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FLinearColor                                K2Node_MakeStruct_LinearColor_2;                          // 0x0204(0x0010) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FLinearColor                                CallFunc_Map_Find_Value;                                  // 0x0214(0x0010) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass MainCharacterThreatComponent.MainCharacterThreatComponent_C");
		return ptr;
	}


	void ReceiveTick(float* bpp__DeltaSeconds__pf);
	void DebugThreatLevels(bool* bpp__Show__pf);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// BlueprintGeneratedClass WalkinSequence1.SequenceDirector_C
// 0x0008 (0x0038 - 0x0030)
class USequenceDirector_C : public ULevelSequenceDirector
{
public:
	class UCINE_Walkin_Widget_C*                       Widget;                                                   // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WalkinSequence1.SequenceDirector_C");
		return ptr;
	}


	void SequenceEvent__ENTRYPOINTSequenceDirector_6();
	void SequenceEvent__ENTRYPOINTSequenceDirector_5();
	void SequenceEvent__ENTRYPOINTSequenceDirector_4();
	void SequenceEvent__ENTRYPOINTSequenceDirector_3();
	void SequenceEvent__ENTRYPOINTSequenceDirector_2();
	void SequenceEvent__ENTRYPOINTSequenceDirector_1();
	void OnEnableSlomo(bool* bEnableSlomo);
	void SequenceEvent_5();
	void SequenceEvent_4();
	void SequenceEvent_3();
	void SequenceEvent_2();
	void Sequence_Event_0();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

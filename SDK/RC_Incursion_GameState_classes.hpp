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

// BlueprintGeneratedClass Incursion_GameState.Incursion_GameState_C
// 0x0020 (0x1518 - 0x14F8)
class AIncursion_GameState_C : public AExtraction_GameState_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x14F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UKSTimerComponent*                           Global_Match_Timer;                                       // 0x1500(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FScriptMulticastDelegate                    On_New_Wave;                                              // 0x1508(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	unsigned char                                      UnknownData00[0xF];                                       // 0x1508(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Incursion_GameState.Incursion_GameState_C");
		return ptr;
	}


	void GetUIMatchTime(float* OutTimeRemaining, float* OutTotalTime);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Incursion_GameState(int* EntryPoint);
	void On_New_Wave__DelegateSignature(int* Current_Wave_Number, int* Total_Wave_Number);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

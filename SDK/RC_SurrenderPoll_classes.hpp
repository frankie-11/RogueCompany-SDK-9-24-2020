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

// BlueprintGeneratedClass SurrenderPoll.SurrenderPoll_C
// 0x000C (0x00EC - 0x00E0)
class USurrenderPoll_C : public UKSPollBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                WinningTeamNum;                                           // 0x00E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SurrenderPoll.SurrenderPoll_C");
		return ptr;
	}


	bool CanPlayerProposeThisPoll(class AKSPlayerState** Player);
	void OnPollPassed(class AKSGameState** GameState, int* TeamNum);
	void OnPollFailed(class AKSGameState** GameState, int* TeamNum);
	void OnPollStarted(class AKSGameState** GameState, int* TeamNum);
	void ExecuteUbergraph_SurrenderPoll(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

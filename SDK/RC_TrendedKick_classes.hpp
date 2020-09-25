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

// BlueprintGeneratedClass TrendedKick.TrendedKick_C
// 0x0014 (0x003C - 0x0028)
class UTrendedKick_C : public UKickbackModule
{
public:
	TArray<struct FKickTrendProfile>                   KickTrendProfiles;                                        // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                TrendRepeatIndex;                                         // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TrendedKick.TrendedKick_C");
		return ptr;
	}


	float GetMaximumHorizontalKick();
	float GetMaximumVerticalKick();
	void GetCurrentTrendProfile(int* ShotIndex, struct FKickTrendProfile* TrendProfile);
	struct FInterpCurveVector2D MakeKickbackInstance(int* ShotIndex, float* AbsoluteMaxDuration);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

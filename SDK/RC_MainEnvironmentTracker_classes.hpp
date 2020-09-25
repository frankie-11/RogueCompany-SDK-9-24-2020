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

// DynamicClass MainEnvironmentTracker.MainEnvironmentTracker_C
// 0x0040 (0x0178 - 0x0138)
class UMainEnvironmentTracker_C : public UEnvironmentTrackerComponent
{
public:
	TArray<struct FName>                               Environment_Priorties;                                    // 0x0138(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FName                                       Temp_name_Variable;                                       // 0x0148(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      K2Node_SwitchName_CmpSuccess;                             // 0x0150(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FName                                       Temp_name_Variable_2;                                     // 0x0154(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FName                                       Temp_name_Variable_3;                                     // 0x015C(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FName                                       Temp_name_Variable_4;                                     // 0x0164(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FName                                       K2Node_Event_OldEnvironment;                              // 0x016C(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass MainEnvironmentTracker.MainEnvironmentTracker_C");
		return ptr;
	}


	void BlueprintEnvironmentChanged(struct FName* bpp__OldEnvironment__pf);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

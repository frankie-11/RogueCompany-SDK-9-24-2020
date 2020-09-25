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

// DynamicClass CharacterHeatSourceComponent.CharacterHeatSourceComponent_C
// 0x0060 (0x0160 - 0x0100)
class UCharacterHeatSourceComponent_C : public UKSHeatSourceComponent
{
public:
	class UParticleSystem*                             ThermalVisionExtraParticlesPS;                            // 0x0100(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    ThermalVisionExtraParticlesComp;                          // 0x0108(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate;                     // 0x0110(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	EModViewModeState                                  K2Node_Event_NewState;                                    // 0x0120(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      K2Node_SwitchEnum_CmpSuccess;                             // 0x0121(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<EEndPlayReason>                        K2Node_Event_EndPlayReason;                               // 0x0122(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AKSCharacterBase*                            K2Node_DynamicCast_AsKSCharacter_Base;                    // 0x0128(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      K2Node_DynamicCast_bSuccess;                              // 0x0130(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UKSHeatSourceComponent*                      K2Node_CustomEvent_HeatSource;                            // 0x0138(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_CustomEvent_NewTemperature;                        // 0x0140(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AKSCharacter*                                K2Node_DynamicCast_AsKSCharacter;                         // 0x0148(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      K2Node_DynamicCast_bSuccess_2;                            // 0x0150(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_GetParticleSystem_Priority;                      // 0x0154(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_GetFloat_Priority;                               // 0x0158(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass CharacterHeatSourceComponent.CharacterHeatSourceComponent_C");
		return ptr;
	}


	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* bpp__EndPlayReason__pf);
	void OnThermalVisionStateChanged(EModViewModeState* bpp__NewState__pf);
	void OnTemperatureChanged_Event_1(class UKSHeatSourceComponent** bpp__HeatSource__pf__const, float* bpp__NewTemperature__pf);
	void OnOwnerInfoUpdateNotify();
	void ExecuteUbergraph_CharacterHeatSourceComponent_2(int* bpp__EntryPoint__pf);
	void Apply_Temperature(float* bpp__AppliedxTemp__pfT);
	void OnTempChanged__DelegateSignature(class UKSHeatSourceComponent** bpp__HeatSource__pf, float* bpp__NewTemperature__pf);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

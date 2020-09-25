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

// DynamicClass Master_GrenadeComponent.Master_GrenadeComponent_C
// 0x00B0 (0x1190 - 0x10E0)
class UMaster_GrenadeComponent_C : public UMaster_WeaponComponent_C
{
public:
	unsigned char                                      bDoHideWeaponOnDestroy;                                   // 0x10E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UKSCharacterAnimInst*                        CallFunc_Get_Character_Anim_Instance_Anim_Inst;           // 0x10E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	EWeaponStateNew                                    K2Node_Event_OldState;                                    // 0x10F0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	EWeaponStateNew                                    K2Node_Event_NewState;                                    // 0x10F1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      K2Node_SwitchEnum_CmpSuccess;                             // 0x10F2(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_GetAnimMontage_Priority;                         // 0x10F4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_GetAudioEvent_Priority;                          // 0x10F8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_GetAnimMontage_Priority_2;                       // 0x10FC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_GetAudioEvent_Priority_2;                        // 0x1100(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_GetAnimMontage_Priority_3;                       // 0x1104(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UKSCharacterAnimInst*                        CallFunc_Get_Character_Anim_Instance_Anim_Inst_2;         // 0x1108(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_GetAnimMontage_Priority_4;                       // 0x1110(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UKSCharacterAnimInst*                        CallFunc_Get_Character_Anim_Instance_Anim_Inst_3;         // 0x1118(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_Event_DeltaSeconds;                                // 0x1120(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UKSCharacterAnimInst*                        CallFunc_Get_Character_Anim_Instance_Anim_Inst_4;         // 0x1128(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UKSCharacterAnimInst*                        CallFunc_Get_Character_Anim_Instance_Anim_Inst_5;         // 0x1130(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UKSCharacterAnimInst*                        CallFunc_Get_Character_Anim_Instance_Anim_Inst_6;         // 0x1138(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UKSCharacterAnimInst*                        CallFunc_Get_Character_Anim_Instance_Anim_Inst_7;         // 0x1140(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_GetAnimMontage_Priority_5;                       // 0x1148(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Get_Scaled_Grenade_Fire_Playrate_Scaled_Playrate;// 0x114C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FName                                       Temp_name_Variable;                                       // 0x1150(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UKSCharacterAnimInst*                        CallFunc_Get_Character_Anim_Instance_Anim_Inst_8;         // 0x1158(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FScriptDelegate                             Temp_delegate_Variable;                                   // 0x1160(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	struct FScriptDelegate                             Temp_delegate_Variable_2;                                 // 0x1170(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	class UKSCharacterAnimInst*                        CallFunc_Get_Character_Anim_Instance_Anim_Inst_9;         // 0x1180(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UKSCharacterAnimInst*                        CallFunc_Get_Character_Anim_Instance_Anim_Inst_10;        // 0x1188(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass Master_GrenadeComponent.Master_GrenadeComponent_C");
		return ptr;
	}


	void ShowGadget();
	void HideGadget();
	void Get_Scaled_Grenade_Fire_Playrate(class UAnimMontage** bpp__AnimxMontage__pfT, float* bpp__NewParam__pf, float* bpp__ScaledxPlayrate__pfT);
	void ExecuteUbergraph_Master_GrenadeComponent_1(int* bpp__EntryPoint__pf);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

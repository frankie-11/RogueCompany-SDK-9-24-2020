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

// DynamicClass DualMLXMark4_WeaponComponent.DualMLXMark4_WeaponComponent_C
// 0x0110 (0x1200 - 0x10F0)
class UDualMLXMark4_WeaponComponent_C : public UHidden_WeaponComponent_C
{
public:
	class UMaterialInstanceDynamic*                    Weapon_Material_Instance;                                 // 0x10F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    Duplicate_Weapon_Material_Instance;                       // 0x10F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       Muzzle_Glow;                                              // 0x1100(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Heat_Per_Shot;                                            // 0x1108(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bIsCoolingDown;                                           // 0x110C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Time_Until_Cooldown;                                      // 0x1110(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptDelegate                             Temp_delegate_Variable;                                   // 0x1114(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	float                                              K2Node_Event_DeltaSeconds;                                // 0x1124(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FAimData                                    K2Node_Event_InputPin;                                    // 0x1128(0x0050) (Transient, DuplicateTransient)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate;                     // 0x1178(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	struct FFullFireRepData                            K2Node_Event_Data;                                        // 0x1188(0x0068) (Transient, DuplicateTransient)
	unsigned char                                      K2Node_Event_PlayNoChainFireMontage;                      // 0x11F0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UKSCharacterAnimInst*                        CallFunc_Get_Character_Anim_Instance_Anim_Inst;           // 0x11F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass DualMLXMark4_WeaponComponent.DualMLXMark4_WeaponComponent_C");
		return ptr;
	}


	void Update_Heat(float* bpp__DeltaxSeconds__pfT);
	void Scale_Out();
	void Scale_In();
	void Play_Muzzle_Fire_On_Duplicate_Mesh();
	void ExecuteUbergraph_DualMLXMark4_WeaponComponent_8(int* bpp__EntryPoint__pf);
	void ExecuteUbergraph_DualMLXMark4_WeaponComponent_6(int* bpp__EntryPoint__pf);
	void ExecuteUbergraph_DualMLXMark4_WeaponComponent_4(int* bpp__EntryPoint__pf);
	void Event_Activate();
	void Cool_Down();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

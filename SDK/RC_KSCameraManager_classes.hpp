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

// BlueprintGeneratedClass KSCameraManager.KSCameraManager_C
// 0x0170 (0x2870 - 0x2700)
class AKSCameraManager_C : public AKSPlayerCameraManager
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x2700(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FVector                                     Vault_Medium_Running_Rotation_19357AD44276670DB6B495B6695BBF6C;// 0x2708(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Vault_Medium_Running_Location_19357AD44276670DB6B495B6695BBF6C;// 0x2714(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              Vault_Medium_Running_FOV_19357AD44276670DB6B495B6695BBF6C;// 0x2720(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Vault_Medium_Running__Direction_19357AD44276670DB6B495B6695BBF6C;// 0x2724(0x0001) (ZeroConstructor, IsPlainOldData)
	class UTimelineComponent*                          Vault_Medium_Running;                                     // 0x2728(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     Vault_Short_Rotation_F73D9F61446F5474502BD8BF3252D762;    // 0x2730(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Vault_Short_Location_F73D9F61446F5474502BD8BF3252D762;    // 0x273C(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              Vault_Short_FOV_F73D9F61446F5474502BD8BF3252D762;         // 0x2748(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Vault_Short__Direction_F73D9F61446F5474502BD8BF3252D762;  // 0x274C(0x0001) (ZeroConstructor, IsPlainOldData)
	class UTimelineComponent*                          Vault_Short;                                              // 0x2750(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     Vault_Medium_Rotation_973BB77943BEA34D1A27C0A9070CFD1F;   // 0x2758(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Vault_Medium_Location_973BB77943BEA34D1A27C0A9070CFD1F;   // 0x2764(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              Vault_Medium_FOV_973BB77943BEA34D1A27C0A9070CFD1F;        // 0x2770(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Vault_Medium__Direction_973BB77943BEA34D1A27C0A9070CFD1F; // 0x2774(0x0001) (ZeroConstructor, IsPlainOldData)
	class UTimelineComponent*                          Vault_Medium;                                             // 0x2778(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     Vault_Tall_Rotation_7F94194A49D4BE17D3B299B0FF993F6D;     // 0x2780(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Vault_Tall_Location_7F94194A49D4BE17D3B299B0FF993F6D;     // 0x278C(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              Vault_Tall_FOV_7F94194A49D4BE17D3B299B0FF993F6D;          // 0x2798(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Vault_Tall__Direction_7F94194A49D4BE17D3B299B0FF993F6D;   // 0x279C(0x0001) (ZeroConstructor, IsPlainOldData)
	class UTimelineComponent*                          Vault_Tall;                                               // 0x27A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     Mantle_Short_Rotation_CF02379640077BEA8312A4A97CABFFE5;   // 0x27A8(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Mantle_Short_Location_CF02379640077BEA8312A4A97CABFFE5;   // 0x27B4(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              Mantle_Short_FOV_CF02379640077BEA8312A4A97CABFFE5;        // 0x27C0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Mantle_Short__Direction_CF02379640077BEA8312A4A97CABFFE5; // 0x27C4(0x0001) (ZeroConstructor, IsPlainOldData)
	class UTimelineComponent*                          Mantle_Short;                                             // 0x27C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     Mantle_Medium_Rotation_BD9A8E7641CB9B707C1CE6BA8842B569;  // 0x27D0(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Mantle_Medium_Location_BD9A8E7641CB9B707C1CE6BA8842B569;  // 0x27DC(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              Mantle_Medium_FOV_BD9A8E7641CB9B707C1CE6BA8842B569;       // 0x27E8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Mantle_Medium__Direction_BD9A8E7641CB9B707C1CE6BA8842B569;// 0x27EC(0x0001) (ZeroConstructor, IsPlainOldData)
	class UTimelineComponent*                          Mantle_Medium;                                            // 0x27F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     Mantle_Tall_Rotation_745F8D394D1BA4D0F0F12C9F36C8F1F2;    // 0x27F8(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Mantle_Tall_Location_745F8D394D1BA4D0F0F12C9F36C8F1F2;    // 0x2804(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              Mantle_Tall_FOV_745F8D394D1BA4D0F0F12C9F36C8F1F2;         // 0x2810(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Mantle_Tall__Direction_745F8D394D1BA4D0F0F12C9F36C8F1F2;  // 0x2814(0x0001) (ZeroConstructor, IsPlainOldData)
	class UTimelineComponent*                          Mantle_Tall;                                              // 0x2818(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     JumpLanding_Rotation_F0A9B6BE484D0B52D2A1D2A14592B75A;    // 0x2820(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     JumpLanding_Location_F0A9B6BE484D0B52D2A1D2A14592B75A;    // 0x282C(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              JumpLanding_FOV_F0A9B6BE484D0B52D2A1D2A14592B75A;         // 0x2838(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    JumpLanding__Direction_F0A9B6BE484D0B52D2A1D2A14592B75A;  // 0x283C(0x0001) (ZeroConstructor, IsPlainOldData)
	class UTimelineComponent*                          JumpLanding;                                              // 0x2840(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     JumpStart_Rotation_626F506A47DB820B20B53DBAEA84159F;      // 0x2848(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     JumpStart_Location_626F506A47DB820B20B53DBAEA84159F;      // 0x2854(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              JumpStart_FOV_626F506A47DB820B20B53DBAEA84159F;           // 0x2860(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    JumpStart__Direction_626F506A47DB820B20B53DBAEA84159F;    // 0x2864(0x0001) (ZeroConstructor, IsPlainOldData)
	class UTimelineComponent*                          JumpStart;                                                // 0x2868(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass KSCameraManager.KSCameraManager_C");
		return ptr;
	}


	void GetMantleHeightFromKSChar(bool* NoMantleCamera);
	void NotifyCamModFinished(class UClass** Modifier_Class);
	void UpdateCamModValues(class UClass** Modifier_Class, struct FVector* In_Location, struct FVector* In_Rotation, float* In_FOV, bool* Success);
	void JumpStart__FinishedFunc();
	void JumpStart__UpdateFunc();
	void JumpLanding__FinishedFunc();
	void JumpLanding__UpdateFunc();
	void Mantle_Tall__FinishedFunc();
	void Mantle_Tall__UpdateFunc();
	void Mantle_Medium__FinishedFunc();
	void Mantle_Medium__UpdateFunc();
	void Mantle_Short__FinishedFunc();
	void Mantle_Short__UpdateFunc();
	void Vault_Tall__FinishedFunc();
	void Vault_Tall__UpdateFunc();
	void Vault_Medium__FinishedFunc();
	void Vault_Medium__UpdateFunc();
	void Vault_Short__FinishedFunc();
	void Vault_Short__UpdateFunc();
	void Vault_Medium_Running__FinishedFunc();
	void Vault_Medium_Running__UpdateFunc();
	void Play_Jump_Start();
	void PlayJumpLanding();
	void Play_Mantle(int* Mantle_Index);
	void ExecuteUbergraph_KSCameraManager(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

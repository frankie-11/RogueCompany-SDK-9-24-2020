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

// BlueprintGeneratedClass LobbyMainCharacter.LobbyMainCharacter_C
// 0x00A0 (0x3710 - 0x3670)
class ALobbyMainCharacter_C : public AKSLobbyCharacter
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x3670(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	TEnumAsByte<ETimelineDirection>                    LobbyProp01_Timeline__Direction_311B7F8B46533A11B70CFAA92E9DA987;// 0x3678(0x0001) (ZeroConstructor, IsPlainOldData)
	class UTimelineComponent*                          LobbyProp01_Timeline;                                     // 0x3680(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    LobbyWeapon02_Timeline__Direction_6E3E791441C09FAF955C7099C1934001;// 0x3688(0x0001) (ZeroConstructor, IsPlainOldData)
	class UTimelineComponent*                          LobbyWeapon02_Timeline;                                   // 0x3690(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    LobbyWeapon01_Timeline__Direction_A9FF0C36405CB79CE4A5609C33E7F935;// 0x3698(0x0001) (ZeroConstructor, IsPlainOldData)
	class UTimelineComponent*                          LobbyWeapon01_Timeline;                                   // 0x36A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FName>                               LobbyFidgetKeywordArray;                                  // 0x36A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x8];                                       // 0x36B8(0x0008) MISSED OFFSET
	struct FTransform                                  Transform_Reset;                                          // 0x36C0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              Lobby_Anim_total_duration;                                // 0x36F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                Lobby_Anim_timer;                                         // 0x36F8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	unsigned char                                      Loop_montage;                                             // 0x3700(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                NewVar_1;                                                 // 0x3704(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EKSLobbyCharacterAnimationPose                     Lobby_Character_Animation_Pose;                           // 0x3708(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Lobby_Anim_Starting_Time;                                 // 0x370C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LobbyMainCharacter.LobbyMainCharacter_C");
		return ptr;
	}


	void Randomize_Lobby_Idle_anim_start();
	void Make_Lobby_Fidget_Keyword_Array();
	void Parse_Lobby_Fidget_Animation(TArray<struct FName>* LobbyFidgetKeywordArray, EKSLobbyCharacterAnimationPose* Lobby_Character_Animation_Pose);
	void Get_Montage_Position_of_Lobby_Characater(float* Position);
	void Init_Body_Apparel();
	void LobbyWeapon01_Timeline__FinishedFunc();
	void LobbyWeapon01_Timeline__UpdateFunc();
	void LobbyWeapon02_Timeline__FinishedFunc();
	void LobbyWeapon02_Timeline__UpdateFunc();
	void LobbyProp01_Timeline__FinishedFunc();
	void LobbyProp01_Timeline__UpdateFunc();
	void OnNotifyEnd_AA177F3D4F176F58A7691D84D8C329C7(struct FName* NotifyName, int* MontageInstanceID);
	void OnNotifyBegin_AA177F3D4F176F58A7691D84D8C329C7(struct FName* NotifyName, int* MontageInstanceID);
	void OnInterrupted_AA177F3D4F176F58A7691D84D8C329C7(struct FName* NotifyName, int* MontageInstanceID);
	void OnBlendOut_AA177F3D4F176F58A7691D84D8C329C7(struct FName* NotifyName, int* MontageInstanceID);
	void OnCompleted_AA177F3D4F176F58A7691D84D8C329C7(struct FName* NotifyName, int* MontageInstanceID);
	void StopLeftPropEffect();
	void PlayLeftPropEffect(float* Duration, struct FName* MaterialParameter, class UCurveFloat** FloatCurve);
	void StopScenePropEffect();
	void PlayScenePropEffect(float* Duration, struct FName* MaterialParameter, class UCurveFloat** FloatCurve);
	void PlayRightPropEffect(float* Duration, struct FName* MaterialParameter, class UCurveFloat** FloatCurve);
	void ReceiveBeginPlay();
	void Add_Body_Apparel_As_Parent(class USkinnableSkeletalMeshComponent** Skinnable_Mesh_Component);
	void StopRightPropEffect();
	void PlayLobbyCharacterMontage();
	void StopLobbyCharacterMontage();
	void InitializeLobbyCharacterAnimation();
	void ExecuteUbergraph_LobbyMainCharacter(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

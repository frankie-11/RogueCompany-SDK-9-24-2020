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

// DynamicClass NameplateWidget.NameplateWidget_C
// 0x0220 (0x0450 - 0x0230)
class UNameplateWidget_C : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0230(0x0008) MISSED OFFSET
	class UWidgetAnimation*                            DeathBreak;                                               // 0x0238(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UWidgetAnimation*                            DamagePulse;                                              // 0x0240(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UInvalidationBox*                            InvalidationBox_1;                                        // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPlayerHealthMeter_C*                        PlayerHealthMeter;                                        // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  PlayerName;                                               // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      RogueIcon;                                                // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class APlayerState*                                Nameplate_PlayerState;                                    // 0x0268(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AKSCharacter*                                Nameplate_Character;                                      // 0x0270(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      Killcam_Enabled;                                          // 0x0278(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       HoverState;                                               // 0x027C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ResidualFadeAlpha;                                        // 0x0284(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ResidualFadeDelayTime;                                    // 0x0288(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   DamageLerpEndpoints;                                      // 0x028C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ResidualFadeTime;                                         // 0x0294(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Manual_Tick_Delta_Time;                                   // 0x0298(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ResidualFadeDelayTimer;                                   // 0x029C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DamageLerpAlpha;                                          // 0x02A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ResidualFadePower;                                        // 0x02A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DamageLerpPower;                                          // 0x02A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DamageLerpTime;                                           // 0x02AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PreviousHealth;                                           // 0x02B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FPlayerHealthMeterState                     CurrentMeterState;                                        // 0x02B4(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	unsigned char                                      HasDeferredUpdate;                                        // 0x02CC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate;                     // 0x02D0(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	unsigned char                                      K2Node_CustomEvent_IsEnabled;                             // 0x02E0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AKSPlayerState*                              K2Node_CustomEvent_PlayerState_3;                         // 0x02E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      Temp_bool_Variable;                                       // 0x02F0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AKSPlayerState*                              K2Node_CustomEvent_PlayerState_2;                         // 0x02F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AKSCharacterBase*                            K2Node_CustomEvent_Character_2;                           // 0x0300(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AKSCharacter*                                K2Node_DynamicCast_AsKSCharacter;                         // 0x0308(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      K2Node_DynamicCast_bSuccess;                              // 0x0310(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_2;                   // 0x0314(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	class AKSPlayerState*                              K2Node_DynamicCast_AsKSPlayer_State;                      // 0x0328(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      K2Node_DynamicCast_bSuccess_2;                            // 0x0330(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APlayerState*                                K2Node_Event_PlayerState;                                 // 0x0338(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AKSCharacter*                                K2Node_Event_Character;                                   // 0x0340(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AKSCharacterBase*                            K2Node_CustomEvent_Character;                             // 0x0348(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_3;                   // 0x0350(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	class AKSGameState*                                K2Node_DynamicCast_AsKSGame_State;                        // 0x0360(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      K2Node_DynamicCast_bSuccess_3;                            // 0x0368(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AKSPlayerState*                              K2Node_CustomEvent_PlayerState;                           // 0x0370(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AKSGameState*                                K2Node_DynamicCast_AsKSGame_State_2;                      // 0x0378(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      K2Node_DynamicCast_bSuccess_4;                            // 0x0380(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      CallFunc_Player_Is_Blinded_Is_Blind;                      // 0x0381(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	ESlateVisibility                                   Temp_byte_Variable;                                       // 0x0382(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      CallFunc_Should_Show_Enemy_Nameplate_ShouldShow;          // 0x0383(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_4;                   // 0x0384(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	class UObject*                                     Temp_object_Variable;                                     // 0x0398(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UKSLocalPlayer*                              K2Node_DynamicCast_AsKSLocal_Player;                      // 0x03A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      K2Node_DynamicCast_bSuccess_5;                            // 0x03A8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UTexture2D*                                  K2Node_DynamicCast_AsTexture_2D;                          // 0x03B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      K2Node_DynamicCast_bSuccess_6;                            // 0x03B8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      Temp_bool_Has_Been_Initd_Variable;                        // 0x03B9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_5;                   // 0x03BC(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_6;                   // 0x03CC(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	unsigned char                                      Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable;// 0x03DC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              Temp_float_Variable;                                      // 0x03E0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              Temp_float_Variable_2;                                    // 0x03E4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      Temp_bool_Variable_2;                                     // 0x03E8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_7;                   // 0x03EC(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	float                                              K2Node_Select_Default;                                    // 0x03FC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AKSPlayerState*                              K2Node_DynamicCast_AsKSPlayer_State_2;                    // 0x0400(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      K2Node_DynamicCast_bSuccess_7;                            // 0x0408(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_8;                   // 0x040C(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	unsigned char                                      Temp_bool_IsClosed_Variable;                              // 0x041C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UObject*                                     K2Node_CustomEvent_Loaded;                                // 0x0420(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_9;                   // 0x0428(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	ESlateVisibility                                   Temp_byte_Variable_2;                                     // 0x0438(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_10;                  // 0x043C(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	ESlateVisibility                                   K2Node_Select_Default_2;                                  // 0x044C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass NameplateWidget.NameplateWidget_C");
		return ptr;
	}


	void Should_Show_Enemy_Nameplate(bool* bpp__ShouldShow__pf);
	void SetNamePlateColor();
	void Player_Is_Blinded(bool* bpp__IsxBlind__pfT);
	void OnUnhovered();
	void OnPossession(class APlayerState** bpp__PlayerState__pf, class AKSCharacter** bpp__Character__pf);
	void OnPlayerUINeedsUpdate(class AKSPlayerState** bpp__PlayerState__pf);
	void OnPlayerDownedChanged_Event(class AKSPlayerState** bpp__PlayerState__pf);
	void OnLoaded_F5BCD8C84871643FB2979DA9F519484F(class UObject** bpp__Loaded__pf);
	void OnKillCamEnabled(bool* bpp__IsEnabled__pf);
	void OnHovered();
	void OnDead(class AKSPlayerState** bpp__PlayerState__pf);
	void Manual_Tick();
	void Handle_Overheal_Changed(class AKSCharacterBase** bpp__Character__pf__const);
	void Handle_Job_Changed();
	void HandleNameChanged(class AKSPlayerState** bpp__InKSPlayerState__pf);
	void ExecuteUbergraph_NameplateWidget_9(int* bpp__EntryPoint__pf);
	void ExecuteUbergraph_NameplateWidget_5(int* bpp__EntryPoint__pf);
	void Destruct();
	void Deferred_Player_State_Open();
	void Construct();
	void CharacterHealthChange(class AKSCharacterBase** bpp__Character__pf__const);
	void OnUIRelevantPlayerStateChanged__DelegateSignature(class AKSPlayerState** bpp__PlayerState__pf);
	void OnPlayerEliminated__DelegateSignature(class AKSPlayerState** bpp__PlayerState__pf);
	void OnPlayerDownedChanged__DelegateSignature(class AKSPlayerState** bpp__PlayerState__pf);
	void OnKSPlayerStateNameChanged__DelegateSignature(class AKSPlayerState** bpp__KSPlayerState__pf);
	void OnKillCamEnabled__DelegateSignature(bool* bpp__bEnabled__pf);
	void OnJobChanged__DelegateSignature();
	void OnHealthChanged__DelegateSignature(class AKSCharacterBase** bpp__Character__pf);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// DynamicClass AllyMinimapIcon.AllyMinimapIcon_C
// 0x0190 (0x0440 - 0x02B0)
class UAllyMinimapIcon_C : public UKSMapIconWidgetBase
{
public:
	class UImage*                                      AboveIndicator;                                           // 0x02B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBorder*                                     AllyMinimapOverlay;                                       // 0x02B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      BelowIndicator;                                           // 0x02C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      BombIcon;                                                 // 0x02C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      ImageIcon;                                                // 0x02D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AKSPlayerState*                              Represented_Player_State;                                 // 0x02D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      IsBombHolder;                                             // 0x02E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTexture2D*                                  Bomb_Texture;                                             // 0x02E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      Temp_bool_Variable;                                       // 0x02F0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	ESlateVisibility                                   Temp_byte_Variable;                                       // 0x02F1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	ESlateVisibility                                   Temp_byte_Variable_2;                                     // 0x02F2(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      Temp_bool_Variable_2;                                     // 0x02F3(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	ESlateVisibility                                   Temp_byte_Variable_3;                                     // 0x02F4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	ESlateVisibility                                   Temp_byte_Variable_4;                                     // 0x02F5(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate;                     // 0x02F8(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	struct FLinearColor                                CallFunc_GetFriendlyColor_Return_Value;                   // 0x0308(0x0010) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UTexture2D*                                  Temp_object_Variable;                                     // 0x0318(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FLinearColor                                Temp_struct_Variable;                                     // 0x0320(0x0010) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FGeometry                                   K2Node_Event_MyGeometry;                                  // 0x0330(0x0058) (Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_Event_InDeltaTime;                                 // 0x0388(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AKSGameState_NeutralBomb*                    K2Node_DynamicCast_AsKSGame_State_Neutral_Bomb;           // 0x0390(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      K2Node_DynamicCast_bSuccess;                              // 0x0398(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_2;                   // 0x039C(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_3;                   // 0x03AC(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	class UTexture2D*                                  Temp_object_Variable_2;                                   // 0x03C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_4;                   // 0x03C8(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	unsigned char                                      K2Node_Event_bHeight;                                     // 0x03D8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      K2Node_Event_bDepth;                                      // 0x03D9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AKSPlayerState*                              K2Node_DynamicCast_AsKSPlayer_State;                      // 0x03E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      K2Node_DynamicCast_bSuccess_2;                            // 0x03E8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	ESlateVisibility                                   K2Node_Select_Default;                                    // 0x03E9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	ESlateVisibility                                   K2Node_Select_Default_2;                                  // 0x03EA(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FKSNeutralBombState                         K2Node_CustomEvent_BombState;                             // 0x03F0(0x0018) (Transient, DuplicateTransient)
	unsigned char                                      Temp_bool_Variable_3;                                     // 0x0408(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FLinearColor                                K2Node_Select_Default_3;                                  // 0x040C(0x0010) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      Temp_bool_Variable_4;                                     // 0x041C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UTexture2D*                                  K2Node_Select_Default_4;                                  // 0x0420(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AKSPlayerState*                              K2Node_CustomEvent_PlayerState;                           // 0x0428(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_5;                   // 0x0430(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass AllyMinimapIcon.AllyMinimapIcon_C");
		return ptr;
	}


	void UIRelevantChanged(class AKSPlayerState** bpp__PlayerState__pf);
	void Tick(struct FGeometry* bpp__MyGeometry__pf, float* bpp__InDeltaTime__pf);
	void OnSetupStart();
	void OnPlayerRevived(class AKSPlayerState** bpp__Revivee__pf, class AKSPlayerState** bpp__Reviver__pf, int* bpp__ExpBonus__pf);
	void OnPlayerDown(struct FCombatEventInfo* bpp__CombatEventInfo__pf, int* bpp__ExpBonus__pf);
	void Handle_Bomb_State_Changed(struct FKSNeutralBombState* bpp__BombState__pf);
	void Construct();
	void PlayerReviveDelegate__DelegateSignature(class AKSPlayerState** bpp__Revivee__pf, class AKSPlayerState** bpp__Reviver__pf, int* bpp__ExpBonus__pf);
	void PlayerDownInfo__DelegateSignature(struct FCombatEventInfo* bpp__EventInfo__pf, int* bpp__ExpBonus__pf);
	void OnUIRelevantPlayerStateChanged__DelegateSignature(class AKSPlayerState** bpp__PlayerState__pf);
	void OnSetupPhaseStart__DelegateSignature();
	void OnNeutralBombStateChanged__DelegateSignature(struct FKSNeutralBombState* bpp__BombState__pf);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

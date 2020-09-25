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

// DynamicClass Sub_Hero_ABP_Zipline.Sub_Hero_ABP_Zipline_C
// 0x2620 (0x3610 - 0x0FF0)
class USub_Hero_ABP_Zipline_C : public UKSCharacterAnimInst
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0FF0(0x0020) MISSED OFFSET
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_50A1C84E4CE59ADEEDDB11A96397537E;// 0x1010(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D9C5B0034C9C28AA4A0434BA01E27E73;// 0x1038(0x0028)
	struct FAnimNode_BlendSpacePlayerSkinned           AnimGraphNode_BlendSpaceSkinned_577EE3674D6488AD1BA5B5BA5E8F3A50;// 0x1060(0x01F0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_63FADFCC4369E5CA43AEB6BE83BB21A1;// 0x1250(0x00E0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_1C3E2AAE4A4964ADF93621ABE9F633DE;// 0x1330(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_556344E14A3DEE52191486975BC9DB84;// 0x1360(0x0078)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_B9181387485A666970A49889A68ED26F;// 0x13D8(0x00A0)
	struct FAnimNode_BlendSpacePlayerSkinned           AnimGraphNode_BlendSpaceSkinned_80F1A71746D41110C5D5FCADC5EDD435;// 0x1478(0x01F0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_7B2A7F944ED865FD10996EA01BC15667;// 0x1668(0x00E0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_F1E6438D4B172E7906E0079D53B4183A;// 0x1748(0x0030)
	struct FAnimNode_BlendSpacePlayerSkinned           AnimGraphNode_BlendSpaceSkinned_769354A4460D113A02228D82E3549896;// 0x1778(0x01F0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_15CE2B8B48F79EA259D963A5555DBD8A;// 0x1968(0x00E0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_3FB3204C429D3874E9020681EBA45110;// 0x1A48(0x0030)
	struct FAnimNode_BlendSpacePlayerSkinned           AnimGraphNode_BlendSpaceSkinned_E7FAB0364AE90ECA3A0068A7B0632EAA;// 0x1A78(0x01F0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_4B37677F4A4264EEBDF985ACC9AB792B;// 0x1C68(0x00E0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_3C922D64459392D9F87A8E999F9D887D;// 0x1D48(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_B08F0047435927B8D907DC9FA1A9FDFF;// 0x1D78(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_E68740ED404712991E413EACABBD2472;// 0x1E28(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_C66CEC4848F564C48464C3BAADD88778;// 0x1EA0(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_55437C0A4434598990F422921F491EBE;// 0x1ED0(0x00B0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_1C80D8C547E02CE76223C19639B9E15C;// 0x1F80(0x00A0)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9EB4B7F74F5444400BF077A179F61B69;// 0x2020(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_09A602084B5A102876EB09BB3031974C;// 0x2048(0x0028)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_5D2A1DCD447CE3C46CB9168712D6D42C;// 0x2070(0x0150)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A9B9997F4274170024B30AAF76B9B998;// 0x21C0(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_AED38CD54C92893710188FB6B534F687;// 0x2238(0x0030)
	struct FAnimNode_BlendSpacePlayerSkinned           AnimGraphNode_BlendSpaceSkinned_5F46B98C4B1D30DBFEFD828DAC1F7AFC;// 0x2268(0x01F0)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_BDB7D0FA4F4555D0A7F4998D8304A3AA;// 0x2458(0x0150)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_8C8312374A9E45C00FEC4EB5D1DFEC16;// 0x25A8(0x00C0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_96D929C6478ED6A24CB6B5A994268BD7;// 0x2668(0x0078)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_BB5718EA470B95B8C71CAEAD9061FD51;// 0x26E0(0x00E0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_3430879145B3CF253E621D8E69F8854A;// 0x27C0(0x0030)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_91B03DE44B327E34181677ACAAAFFBFC;// 0x27F0(0x0150)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F4CAF02B43DC5CECA020BFB40CE483D9;// 0x2940(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_0E67BD6A43E8862D4C10108EA3BFC4D5;// 0x29B8(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_299786184302FFAB35B4D2B706AC14B4;// 0x29E8(0x00B0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_EF067AE54CCF3234E2A3AC8D6046397D;// 0x2A98(0x00A0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_910E5E2249AF2D083D949AAC6158271D;// 0x2B38(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_C980C2A1494DFF75412595B874A259C3;// 0x2BF0(0x0028)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_DDE3AA1946C4264B5A59E0B1BADCBADC;// 0x2C18(0x00C8)
	struct FAnimNode_AimOffsetSkinned                  AnimGraphNode_AimOffsetSkinned_A46F832B4EAD1C4FD29A9DB467609956;// 0x2CE0(0x01B0)
	struct FAnimNode_AimOffsetSkinned                  AnimGraphNode_AimOffsetSkinned_92964D4D4DF2C733E2D9DDA7FAA8A42E;// 0x2E90(0x01B0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_9F156A91443AF9F3B4A144B1310E484B;// 0x3040(0x0028)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_6E904BD04714429A0781C2B1602F7CD1;// 0x3068(0x00A0)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_242462904500E0B6D930E19E4DB0C6D4;// 0x3108(0x00C8)
	struct FAnimNode_AimOffsetSkinned                  AnimGraphNode_AimOffsetSkinned_D6326F614B64DD28D034169EC440A648;// 0x31D0(0x01B0)
	struct FAnimNode_AimOffsetSkinned                  AnimGraphNode_AimOffsetSkinned_E97D7DCC4FC77CFFC5E030929A3BCC7B;// 0x3380(0x01B0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_1049DD0C4626A8FCBEDD8EBC2F2DF958;// 0x3530(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_FCD41F4B41F540A176A27EA11345B02A;// 0x3558(0x0028)
	struct FAnimNode_Root                              AnimGraphNode_Root_9FCC757E4FD271BF9AC855B8EE66C0B7;      // 0x3580(0x0030)
	class AKSCharacter*                                Character;                                                // 0x35B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    Zipline_Lower_Wheel_Rotator;                              // 0x35B8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    Zipline_Upper_Wheel_Rotator;                              // 0x35C4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Wheel_Speed;                                              // 0x35D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Temp_float_Variable;                                      // 0x35D4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              Temp_float_Variable_2;                                    // 0x35D8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRotator_Roll;                               // 0x35DC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRotator_Pitch;                              // 0x35E0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRotator_Yaw;                                // 0x35E4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      Temp_bool_Variable;                                       // 0x35E8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              Temp_float_Variable_3;                                    // 0x35EC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_Select_Default;                                    // 0x35F0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              Temp_float_Variable_4;                                    // 0x35F4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      Temp_bool_Variable_2;                                     // 0x35F8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_Select_Default_2;                                  // 0x35FC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AKSCharacter*                                K2Node_DynamicCast_AsKSCharacter;                         // 0x3600(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      K2Node_DynamicCast_bSuccess;                              // 0x3608(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass Sub_Hero_ABP_Zipline.Sub_Hero_ABP_Zipline_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sub_Hero_ABP_Zipline_AnimGraphNode_TwoWayBlend_DDE3AA1946C4264B5A59E0B1BADCBADC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sub_Hero_ABP_Zipline_AnimGraphNode_TwoWayBlend_242462904500E0B6D930E19E4DB0C6D4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sub_Hero_ABP_Zipline_AnimGraphNode_TransitionResult_D9C5B0034C9C28AA4A0434BA01E27E73();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sub_Hero_ABP_Zipline_AnimGraphNode_TransitionResult_1E1D89A741DF2E43F644BCA5EE070A99();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sub_Hero_ABP_Zipline_AnimGraphNode_TransitionResult_09A602084B5A102876EB09BB3031974C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sub_Hero_ABP_Zipline_AnimGraphNode_BlendSpaceSkinned_5F46B98C4B1D30DBFEFD828DAC1F7AFC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sub_Hero_ABP_Zipline_AnimGraphNode_BlendSpacePlayer_BB5718EA470B95B8C71CAEAD9061FD51();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sub_Hero_ABP_Zipline_AnimGraphNode_AimOffsetSkinned_D6326F614B64DD28D034169EC440A648();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sub_Hero_ABP_Zipline_AnimGraphNode_AimOffsetSkinned_A46F832B4EAD1C4FD29A9DB467609956();
	void BlueprintInitializeAnimation();
	void AnimGraph(struct FPoseLink* bpp__AnimGraph__pf);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// DynamicClass Sub_Hero_ABP_PowerSlide.Sub_Hero_ABP_PowerSlide_C
// 0x4BB0 (0x5BA0 - 0x0FF0)
class USub_Hero_ABP_PowerSlide_C : public UKSCharacterAnimInst
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0FF0(0x0028) MISSED OFFSET
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E1B166FA4321518628C978A26026F23E;// 0x1018(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_32F65F924990F33626F4EDBD051A057C;// 0x1040(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_201089204CD97FF64CC7A2B9E1C32BDD;// 0x1068(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F2002302482AD25E4145C8A35E6E52A9;// 0x1090(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3EFDE50344F37F1823FB6183AB26579A;// 0x10B8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9C1158CA49F8D953A3CC959E565A0B4D;// 0x10E0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6340AB694822FD8029F618AABD307E22;// 0x1108(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_0C51BCE94007B9A9160D67BE7D5836DC;// 0x1130(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_626A4BA84BF03C6DA1EE96809445500D;// 0x1158(0x0078)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_21221C964E95085A717C52BB19D1DF26;// 0x11D0(0x0150)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_0B141AF94A53C2DD63A3F6B4736B1F71;// 0x1320(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_E20CFCE64B29F82425F58B8E2DF27C48;// 0x1350(0x0078)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_F5EA1CC94C66A2F60F8A29896ACC7CD0;// 0x13C8(0x0150)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_49DB8DB24D3D6424B8094A9545A0680D;// 0x1518(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_1B5E2A0E4BD18AD20CA308B02D149621;// 0x1548(0x0078)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_7C6D1D574B80BFE2C2CE25A7EC494742;// 0x15C0(0x0150)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_6A38AAE44F3DAA7D41E28DA378C00E8B;// 0x1710(0x0030)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_B0CA9594463847AD38DB199BDBA7724A;// 0x1740(0x0150)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_1875422341C7422EFF2AC2A883A21C85;// 0x1890(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_50D7C37245620088E80974B8BAAD4C25;// 0x1908(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_EADE11374C6AA75AAB26B8885F795818;// 0x1938(0x0078)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_1B300E5249E07310CEB4B990FCBBC49B;// 0x19B0(0x0150)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_7C6616EC4684A451D459BBAA2922AE07;// 0x1B00(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_2B97CE9A4748BE7E7ED82CA38CBEC51C;// 0x1B30(0x00B0)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D96BE9C9403A519C8121D2957A4C005B;// 0x1BE0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_977DEB744118B55CD06583B8A13E13F2;// 0x1C08(0x0028)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_8C6E3AED436691E14C883EA8AA80F514;// 0x1C30(0x0020)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_B45B717147804E510C5B599EE8B0E0E7;// 0x1C50(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_8118FD1244C07E1574432E9D8AA3B4DF;// 0x1D58(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_90ACB92541DA90554D4CCDB4144A2124;// 0x1E60(0x0108)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_0672EA364FE491F5BEDE8CBC540DA765;// 0x1F68(0x0020)
	struct FKSAnimNode_SpeedWarp                       KSAnimGraphNode_SpeedWarp_E1C273BF48A9A2FBD1B359854C4E2839;// 0x1F88(0x0120)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_56A0BA664CA080FE6C1A53A0E9561AEA;// 0x20A8(0x00E0)
	struct FAnimNode_BlendSpacePlayerSkinned           AnimGraphNode_BlendSpaceSkinned_03AF9E2D44AD587DB0BFA9A3043D1D84;// 0x2188(0x01F0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_0BF3D51C4E49FA0E6BDAB4ADCA54972D;// 0x2378(0x00E0)
	struct FAnimNode_BlendSpacePlayerSkinned           AnimGraphNode_BlendSpaceSkinned_CF24B82D4E01ACF7ABAF1BA9DCE6DECD;// 0x2458(0x01F0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_BBA4BDE14E900E88D23896AB2DB668B0;// 0x2648(0x00E0)
	struct FAnimNode_BlendSpacePlayerSkinned           AnimGraphNode_BlendSpaceSkinned_52C8BC844C68202D5993DA9CA5E2C32F;// 0x2728(0x01F0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_2C8F29214EAD97D17374B2B300ED19D9;// 0x2918(0x00E0)
	struct FAnimNode_BlendSpacePlayerSkinned           AnimGraphNode_BlendSpaceSkinned_465C816540F74E50D3423296439BCE57;// 0x29F8(0x01F0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_C402C52B4171FA792D5D4FB09972310F;// 0x2BE8(0x00E0)
	struct FAnimNode_BlendSpacePlayerSkinned           AnimGraphNode_BlendSpaceSkinned_C72727A54B34146BD602A2A4AC04CE4E;// 0x2CC8(0x01F0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_3E1CAA604C7EEB26EE4ED4A89A46FA28;// 0x2EB8(0x00E0)
	struct FAnimNode_BlendSpacePlayerSkinned           AnimGraphNode_BlendSpaceSkinned_2CD5CA054C3E996398F26A8E0E3FABA2;// 0x2F98(0x01F0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_4A2CC349441BAEE4604431B23596D824;// 0x3188(0x00E0)
	struct FAnimNode_BlendSpacePlayerSkinned           AnimGraphNode_BlendSpaceSkinned_21153EDE4E70197DB7AEB79689F61219;// 0x3268(0x01F0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_AE0E2B794C6D69334C6291ABF4A172DE;// 0x3458(0x00E0)
	struct FAnimNode_BlendSpacePlayerSkinned           AnimGraphNode_BlendSpaceSkinned_071B9B17400341D1E243F7B53C86121A;// 0x3538(0x01F0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_65F50D0D4B40DDA24CB3D096BB20C016;// 0x3728(0x00E0)
	struct FAnimNode_BlendSpacePlayerSkinned           AnimGraphNode_BlendSpaceSkinned_DCAA4026425F698070DAD7BE6CF68484;// 0x3808(0x01F0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_868432F64CC5FAB9D04929821FFB0CEA;// 0x39F8(0x00E0)
	struct FAnimNode_BlendSpacePlayerSkinned           AnimGraphNode_BlendSpaceSkinned_722D1265438A8137EA1AFCB330F9447C;// 0x3AD8(0x01F0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_84596AAE4907334EFF20E18DBAE1FD6C;// 0x3CC8(0x00E0)
	struct FAnimNode_BlendSpacePlayerSkinned           AnimGraphNode_BlendSpaceSkinned_FF461AE744207C35F40532A5FA84831D;// 0x3DA8(0x01F0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_4F09702742B2D869E96E12B48522F477;// 0x3F98(0x00E0)
	struct FAnimNode_BlendSpacePlayerSkinned           AnimGraphNode_BlendSpaceSkinned_83136BE741E6A8146CF403836F019C94;// 0x4078(0x01F0)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_C4A79B2641171C4879A34E864BE30129;// 0x4268(0x00B0)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_006A397246DA461E518BD7A75D269B87;// 0x4318(0x00B0)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_24F768CE4AF47B2180B1DF9281F8D0A2;// 0x43C8(0x00B0)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_D11486AF44F8E51DE50F4AAA34826DFE;// 0x4478(0x00B0)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_73A082B64DC2BB797689A8B22AD73411;// 0x4528(0x00B0)
	struct FKSAnimNode_OrientationWarp                 KSAnimGraphNode_OrientationWarp_E6B9ECA5478011A9E7C0ADAB631328CD;// 0x45D8(0x0110)
	struct FKSAnimNode_OrientationWarp                 KSAnimGraphNode_OrientationWarp_32D27A574278FB712BF96488250B5F7A;// 0x46E8(0x0110)
	struct FKSAnimNode_OrientationWarp                 KSAnimGraphNode_OrientationWarp_282DCF324F2F06445FECF0A3027E286B;// 0x47F8(0x0110)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_C3641817492C9C12E6A7BB97D5DD046C;// 0x4908(0x0020)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_F6E9FD554B2B03F959774F8F53750C5D;// 0x4928(0x0020)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_B7A85D5A4CF3735295BDECA1487E03F5;// 0x4948(0x0020)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_9CD25732464D43E51B0CAFA617B94D5C;// 0x4968(0x0020)
	struct FKSAnimNode_OrientationWarp                 KSAnimGraphNode_OrientationWarp_852E24BE45A599B4D0C59183BBF09D75;// 0x4988(0x0110)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_3AF8EB91447EF2E9CD0B338F50A06075;// 0x4A98(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_2F299A0F402044C3C2301996F7915C03;// 0x4AB8(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_C35FBC3F46402D0D8A13B09EDB0498F0;// 0x4AD8(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_B54217EE4BF3C280FC28BC9A0EFBFE3C;// 0x4AF8(0x0020)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_FBDBA9AE49621D93579CC69E27C2DC1C;// 0x4B18(0x0030)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_7016B0174593950F8A8D9DA1B184BCD9;// 0x4B48(0x00E0)
	struct FAnimNode_BlendSpacePlayerSkinned           AnimGraphNode_BlendSpaceSkinned_8BB258A14FD61C366543BEA5A21EE9C2;// 0x4C28(0x01F0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_53D26CA4431AD819E49930B34E735252;// 0x4E18(0x00E0)
	struct FAnimNode_BlendSpacePlayerSkinned           AnimGraphNode_BlendSpaceSkinned_0668D97040F6B6F84F9F11B31F19A156;// 0x4EF8(0x01F0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_FBA0C9A44D1DDAFFEBC191834A748C73;// 0x50E8(0x00E0)
	struct FAnimNode_BlendSpacePlayerSkinned           AnimGraphNode_BlendSpaceSkinned_8705CEFB478BC295A7B97DB7C796F63B;// 0x51C8(0x01F0)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_B5668DC34FBE930251364B88F6BA4028;// 0x53B8(0x00B0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_90A91E084FA55C53E2FB379A5FA0BF48;// 0x5468(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_DD29199642A101CCB707909C29AC5E7D;// 0x5570(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_40A3816F4F8700AA7B1C11B524234E2D;// 0x5678(0x0108)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_B938A62D4BB2D9297096C3A1A8F08EA0;// 0x5780(0x0020)
	struct FKSAnimNode_SpeedWarp                       KSAnimGraphNode_SpeedWarp_98DEA1234130A442F37C6F85A37C3257;// 0x57A0(0x0120)
	struct FKSAnimNode_OrientationWarp                 KSAnimGraphNode_OrientationWarp_A95B6A2A4ADAC857B204AEB5FF63DC2A;// 0x58C0(0x0110)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_3FE0997E4993C52B0E7A678A53700D2F;// 0x59D0(0x0020)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_67FE0A7A47307EA54F9DE994AE5582BC;// 0x59F0(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_09D62C684E2F19EC2AD95B86DC4B78EF;// 0x5A20(0x00B0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_B377C51648F63D9BCB27D3B9BE10D7C0;// 0x5AD0(0x00A0)
	class AKSCharacter*                                Character;                                                // 0x5B70(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bIsInPowerSlideBP;                                        // 0x5B78(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ExitPowerSlideBlendTime;                                  // 0x5B7C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      ForceResetSlide;                                          // 0x5B80(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EKSPowerSlideEndReason                             K2Node_Event_EndReason;                                   // 0x5B81(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      K2Node_SwitchEnum_CmpSuccess;                             // 0x5B82(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AKSCharacter*                                K2Node_DynamicCast_AsKSCharacter;                         // 0x5B88(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      K2Node_DynamicCast_bSuccess;                              // 0x5B90(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData01[0xF];                                       // 0x5B91(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass Sub_Hero_ABP_PowerSlide.Sub_Hero_ABP_PowerSlide_C");
		return ptr;
	}


	void EventEndPowerSlide(EKSPowerSlideEndReason* bpp__EndReason__pf);
	void EventDoPowerSlide();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sub_Hero_ABP_PowerSlide_AnimGraphNode_TransitionResult_F2002302482AD25E4145C8A35E6E52A9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sub_Hero_ABP_PowerSlide_AnimGraphNode_TransitionResult_9C1158CA49F8D953A3CC959E565A0B4D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sub_Hero_ABP_PowerSlide_AnimGraphNode_TransitionResult_6340AB694822FD8029F618AABD307E22();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sub_Hero_ABP_PowerSlide_AnimGraphNode_TransitionResult_3EFDE50344F37F1823FB6183AB26579A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sub_Hero_ABP_PowerSlide_AnimGraphNode_TransitionResult_0C51BCE94007B9A9160D67BE7D5836DC();
	void BlueprintInitializeAnimation();
	void AnimGraph(struct FPoseLink* bpp__AnimGraph__pf);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

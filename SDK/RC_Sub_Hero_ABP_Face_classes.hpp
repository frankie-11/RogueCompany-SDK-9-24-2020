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

// DynamicClass Sub_Hero_ABP_Face.Sub_Hero_ABP_Face_C
// 0x1700 (0x26F0 - 0x0FF0)
class USub_Hero_ABP_Face_C : public UKSFaceAnimInst
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0FF0(0x0028) MISSED OFFSET
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4D79D682404460443C420E8140F235B2;// 0x1018(0x0028)
	struct FAnimNode_SeqEvalSkinned                    AnimGraphNode_SeqEvalSkinned_256BD2624D810F83F51643A6BD931480;// 0x1040(0x0160)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_69FB7241449044A8E04A03A17A99596E;// 0x11A0(0x0048)
	struct FAnimNode_BlendPoseNodeSkinned              AnimGraphNode_BlendPoseSkinned_E922B4B5405492186FE44AA8749F7BAD;// 0x11E8(0x00C8)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_D2EA9A9744F516EDEB6C80B7CD09A9EB;// 0x12B0(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_AD2E90C14EAE9890FEC4E3BD7C1887A4;// 0x12E0(0x0078)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_679F9B50472B4DB6A9797EB75793DEBC;// 0x1358(0x00C0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A0FDF5D142E3746DEAB3FEA482544877;// 0x1418(0x0078)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_331CABC842D62B83F7AAF0A90084B2A5;// 0x1490(0x00C0)
	struct FAnimNode_SeqEvalSkinned                    AnimGraphNode_SeqEvalSkinned_A864A1D3480955DDADFFEDAE8A32A9CF;// 0x1550(0x0160)
	struct FAnimNode_SeqEvalSkinned                    AnimGraphNode_SeqEvalSkinned_EE0B5C954F1A6873549FEAAEA209B609;// 0x16B0(0x0160)
	struct FAnimNode_SeqEvalSkinned                    AnimGraphNode_SeqEvalSkinned_CD7EF69E4D2DC62544064584057D0C93;// 0x1810(0x0160)
	struct FAnimNode_SeqEvalSkinned                    AnimGraphNode_SeqEvalSkinned_1DF796BE40D2D0479F98B4BA34AEBD63;// 0x1970(0x0160)
	struct FAnimNode_SeqEvalSkinned                    AnimGraphNode_SeqEvalSkinned_F110683E4B2A05B13167B88609963745;// 0x1AD0(0x0160)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_BED1301645B78BBC49D66581A325AC9F;// 0x1C30(0x0048)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_25AD62704D03F87159B8F4B01BE578BA;// 0x1C78(0x0048)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_187A24114B4ED1188C3642B7AE29B850;// 0x1CC0(0x0048)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_5176B17C4A16E32E78B921ABD98FCC31;// 0x1D08(0x0048)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_95A837F243C5BAE9A74245AD79CC035B;// 0x1D50(0x0048)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_EDBAF6ED44DBD6129971F48AD461853A;// 0x1D98(0x00B0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_CED3F5B246750C111A7508B6A1DE34A9;// 0x1E48(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_C0D5CC874D095AF4264178A0580C5C31;// 0x1E78(0x00B0)
	struct FAnimNode_LinkedInputPose                   AnimGraphNode_LinkedInputPose_26F5248C460691492E5A6F930EE6F8CF;// 0x1F28(0x0070)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_9376705A4D182DEACB780AAEBAFE5437;// 0x1F98(0x00C0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_D7E21F1C449B268F368A958262BD0C6A;// 0x2058(0x00A0)
	struct FAnimNode_BlendByLOD                        AnimGraphNode_BlendByLOD_79FB27D745D103EB4E5F249F4F192274;// 0x20F8(0x00A0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_D5FBAD0F4732629F6D19CDA1CA329071;// 0x2198(0x00A0)
	struct FAnimNode_BlendPoseNodeSkinned              AnimGraphNode_BlendPoseSkinned_CE0BCF8A4A7F602FA05726991D8F72E2;// 0x2238(0x00C8)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_1D761A6F4C305B05C7012297F447DF94;// 0x2300(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_2967D505406568ACCA2E309E050C4411;// 0x23B8(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_3CE350FE4861ACA9D78D2F8535DEF2C8;// 0x23E0(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_312CD2C146ED83662DD54C8C5DBC4790;// 0x2408(0x0028)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_0A392284454062FCF73942B713E26DD7;// 0x2430(0x00A0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_B59DC49244DD1A7C75B49989C32E94C2;// 0x24D0(0x0028)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_BA4AA342450212BC01C6F3B1FB08AECD;// 0x24F8(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_B53E242D433C442313A6F5A4B3131C38;// 0x25B0(0x0028)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_8CEC094041A686C2E4D8C59686ADEC0D;// 0x25D8(0x00C0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_764598074BF14A93B6EAAC9AE2AEBCE2;// 0x2698(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_E62F8B0F42817B2267451D907CB6DD9E;// 0x26C0(0x0028)
	EKSEmotion                                         emotionTest;                                              // 0x26E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bIsServer;                                                // 0x26E9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bIsLobby;                                                 // 0x26EA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass Sub_Hero_ABP_Face.Sub_Hero_ABP_Face_C");
		return ptr;
	}


	void ExecuteUbergraph_Sub_Hero_ABP_Face(int* bpp__EntryPoint__pf);
	void AnimGraph(struct FPoseLink* bpp__InPose__pf, struct FPoseLink* bpp__AnimGraph__pf);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

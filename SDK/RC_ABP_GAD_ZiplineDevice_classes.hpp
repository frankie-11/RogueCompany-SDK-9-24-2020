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

// AnimBlueprintGeneratedClass ABP_GAD_ZiplineDevice.ABP_GAD_ZiplineDevice_C
// 0x0EAC (0x1ECC - 0x1020)
class UABP_GAD_ZiplineDevice_C : public UKSZiplineAnimInst
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1020(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_7C1AE441428085EA1F42DFB46612F8DA;      // 0x1028(0x0030)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_7CEDEA8140508F2195275BB58C7B7F7B;// 0x1058(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_2351671D4D214B8E8D1205A9C12225C9;// 0x1160(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_C305EC0F4ACB349A6D3F498103C2A72E;// 0x1268(0x0108)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_661B4C6B4C52FDB0745CC095D2DAB754;// 0x1370(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_2E6A4CA04A7EAB81E4EF1AB10EC00C25;// 0x1390(0x0020)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_BA0971E245FEBA3CFBA27F9DA33A1A6D;// 0x13B0(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_0D70AB4C42050166D5E2CC836FB0C892;// 0x1450(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_B480E1B046B6CF890403769078BEF028;// 0x14C8(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_AF9EEEB549903C57304D65885F819FC3;// 0x14F8(0x00B0)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_62FDDEDF42D689E6F1991B986FC9F8B1;// 0x15A8(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_BF394FED44F2A0B0FDE5CE98D7D52614;// 0x15C8(0x0020)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_3D5919C840E4C5F6A75EAC9ED02BE249;// 0x15E8(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_9647B8934BE258A1C4C6F0AB01EEE1C5;// 0x16A0(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4AB705F9480BB80044CC4483B590EAF1;// 0x16C8(0x0078)
	struct FAnimNode_CCDIK                             AnimGraphNode_CCDIK_97B30A684116E84084C6229051F6BA6C;     // 0x1740(0x0180)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_9176CB304DC541F5EC4DFEB91E9D82BF;// 0x18C0(0x0108)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_0176E0F84183FC97BDF4DEB906BC60DD;// 0x19C8(0x00A0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_7AAB035F4BD02805939FC89D4653FD19;// 0x1A68(0x0020)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_B3602A2847365F1B5A65149F6941E3BA;// 0x1A88(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3F3CB1D1487F673A45358EA4339C4AD3;// 0x1AA8(0x0078)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_4E92831D4E908D2F2FF788A5C326977D;// 0x1B20(0x0108)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_E2FB40EA4C051ED9945974B206D4DBD9;// 0x1C28(0x00A0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_89F212EA4B51EDFD77CAE5BB37378944;// 0x1CC8(0x0020)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_EDD00ECE4E0B05A11AF88F933483405B;// 0x1CE8(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8C9EE8D540B00CFFC42694B34EF60CA3;// 0x1D08(0x0078)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_F572602D454CFDFC4EDA67A03194BCE8;// 0x1D80(0x0108)
	class UPCM_Hero_ABP_C*                             HeroABP;                                                  // 0x1E88(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     Zipline_IK_Target_Location;                               // 0x1E90(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     Zipline_Device_Rope_Pivot;                                // 0x1E9C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    Zipline_IK_Target_Rotation;                               // 0x1EA8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     L_ZiplineDevice_Location;                                 // 0x1EB4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     R_ZiplineDevice_Location;                                 // 0x1EC0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_GAD_ZiplineDevice.ABP_GAD_ZiplineDevice_C");
		return ptr;
	}


	void AnimGraph(struct FPoseLink* AnimGraph);
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_ABP_GAD_ZiplineDevice(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

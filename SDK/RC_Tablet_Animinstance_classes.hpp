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

// AnimBlueprintGeneratedClass Tablet_Animinstance.Tablet_Animinstance_C
// 0x0572 (0x0832 - 0x02C0)
class UTablet_Animinstance_C : public UKSTabletAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_30B896254FBF9B34AC3BAB93CFE704E7;      // 0x02C8(0x0030)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_663822E3415C75ED19679CB91FC56195;// 0x02F8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C6030DE749FE3B92159BDE9A75441D4B;// 0x0320(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A00E3A2D46D412DE24E1CB9FEC4D40AE;// 0x0348(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B240F97E43230583E3B1E0A41F36FCDC;// 0x0370(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_E029C00149BA9DF12B158697AF6DC5C7;// 0x0398(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_9511863D426134F927CC9B80CE068BB0;// 0x0410(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_C3A98E094F804B661B636296C9736C69;// 0x0440(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_B25C15F84A40F70D2B8E15935D5475B5;// 0x04B8(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_DCB174B64BC8B4811461A88E46DC7ED9;// 0x04E8(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_2330DBAC45E0F31E6418AB9B96460C0A;// 0x0560(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5072BC504FF82A678A3F4A9D4BF4FF8E;// 0x0590(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_BAA77E5B4AD435F1A5E007AB92E8DBBB;// 0x0608(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_4A4DA59A4270EA42D7A853BAD0028971;// 0x0638(0x00B0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_782693C24F9DB4BE02AEE5B24FE6069B;// 0x06E8(0x0108)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_E52932A347DCD347BAEAC19E448C2C10;// 0x07F0(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_BE31515F47B44020F5D0B080E6F67965;// 0x0810(0x0020)
	unsigned char                                      Is_Fully_Opened;                                          // 0x0830(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      Is_Fully_Closed;                                          // 0x0831(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Tablet_Animinstance.Tablet_Animinstance_C");
		return ptr;
	}


	void AnimGraph(struct FPoseLink* AnimGraph);
	bool CheckFullyClosed();
	bool CheckFullyOpened();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Tablet_Animinstance_AnimGraphNode_TransitionResult_C6030DE749FE3B92159BDE9A75441D4B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Tablet_Animinstance_AnimGraphNode_TransitionResult_663822E3415C75ED19679CB91FC56195();
	void AnimNotify_BecomeFullyOpened();
	void AnimNotify_EndFullyOpened();
	void AnimNotify_BecomeFullyClosed();
	void AnimNotify_EndFullyClosed();
	void ExecuteUbergraph_Tablet_Animinstance(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

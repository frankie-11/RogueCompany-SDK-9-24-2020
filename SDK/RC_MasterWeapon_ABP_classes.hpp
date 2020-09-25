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

// DynamicClass MasterWeapon_ABP.MasterWeapon_ABP_C
// 0x2990 (0x2CD0 - 0x0340)
class UMasterWeapon_ABP_C : public UKSWeaponAnimInstance
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0340(0x0028) MISSED OFFSET
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_E7FDA8AE4E34E6DA616E5490E3559F82;// 0x0368(0x0108)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_7370CF02410A4024ADA681A615E25BDE;// 0x0470(0x0020)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_434374F142A2C850B8EAD1BFD532990F;      // 0x0490(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_611B83614EC94B902AE59986EF3BC03A;// 0x04D8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C81FAA1C43A50F58E2735BA1DAFCEAC3;// 0x0500(0x0028)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_6793BED64C8B12B2E2C7CAB4401DEB4C;// 0x0528(0x0018)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_BBD780FF46C92AD7473CFFA44B04C0EB;// 0x0540(0x0150)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_8D407D3B4E9DF8DEBA89FBB2A5413674;// 0x0690(0x00A0)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_8BC1FDD740597DCBD990E4AC9AA1C0DF;// 0x0730(0x0150)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_C3211AC14DD1933173945996ECEB1F67;// 0x0880(0x0018)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_7B0AFA7D4FE12AD846D46F98AD123CE6;// 0x0898(0x0150)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_696B788542BE0ECF8B7BF197F10EE7C2;// 0x09E8(0x0030)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_F94F26174C8CFF43749CD1A65827DD00;// 0x0A18(0x0018)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_EBAE8D5D4A6541E5CF05E4AB3EABC9A7;// 0x0A30(0x0150)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_CEC8BAA24486CCE8523D558EF1C23E96;// 0x0B80(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_5D7862CC4ED635A837A82E8C3A614D0E;// 0x0BB0(0x00B0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_F1B5C8344FDA0B72D3D198A4EBE4FE4D;// 0x0C60(0x00B8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_89DFBFF9494FADF8C0FA10A5AA987989;// 0x0D18(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_91E6832F41B31F36B237D494C6961889;// 0x0E20(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_0A1A314240F7319FEDA29383F7733B2F;// 0x0F28(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_7F5287D64A27234615995A9023CB6CCC;// 0x1030(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_8A5FE8734D66FFC6FB10FFABDD0E9337;// 0x1138(0x0108)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_4A4392874F72B1248FAB0E9D63FDF4F3;// 0x1240(0x00A0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_F8570D884610CCEAFAB23C80FDD22344;// 0x12E0(0x0020)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_99DAB8AB498C5364122A1492E542BF17;// 0x1300(0x00B8)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_7973873B409D6ACFF106C39F5D4F4B04;// 0x13B8(0x0020)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_EFBD00024F3476753F35AD9D17CD56D9;// 0x13D8(0x0028)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_A13AC96F42D942636709FDAD5B4B6862;// 0x1400(0x0020)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_B3032D7E4D2ADC529FFA0085EAF17B02;// 0x1420(0x0028)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_DB9E8774489403F74267BBA274350DD7;// 0x1448(0x0018)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_8526D6E449602E19D5729397AF84D59D;// 0x1460(0x0150)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_746639DD43AE60E472E7D4A699576F8E;// 0x15B0(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_53B9312D4347A19ED9B65A8A628FB566;// 0x15E0(0x00B0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_B7DBF10F48E70D3111C6B0B37899D4BC;// 0x1690(0x00A0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_63A98B6F4B9BD206800D58875DACCFD0;// 0x1730(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_1C12C1C444BB425A4C02008AD5CF3D81;// 0x1838(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_2948D682427D0937B5670EBEE08629DE;// 0x1940(0x0108)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_C7362FA04FDCF676271B5688F096693A;// 0x1A48(0x0028)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_244BE81F4021DDAF17E34C9F9AC8909F;// 0x1A70(0x0020)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_6BA5C44E4CEEEDFA5486B1BE39735C50;// 0x1A90(0x00A0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_D778AC904DD9C3FA7ED292B2E0AF570B;// 0x1B30(0x0020)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_EF96D5F54C9B7AE12AF6CA8EAF66BDF5;// 0x1B50(0x0028)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_775496AF47D80DA5778D3F999ED9C68A;// 0x1B78(0x0108)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_0A2988C041C2195B99D44EAAEA0E2A6B;// 0x1C80(0x0150)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_6E25F83845C3E7F3D1CDD1BB9E2937A8;// 0x1DD0(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_C9FA06DB4172FFAB5A558D8DA890EF7C;// 0x1E88(0x0028)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_96B95BD94F4B9C74CBFBE58178673852;// 0x1EB0(0x00A0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_6AA1AB084F59E2F4C0050CA1A05D8EE8;// 0x1F50(0x0028)
	struct FAnimNode_ApplyMeshSpaceAdditive            AnimGraphNode_ApplyMeshSpaceAdditive_DECF17304D5839A9965258AD2B4D1C29;// 0x1F78(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_0CD308AF48246D7DB7C140986D861D3B;// 0x1FC0(0x0018)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_0850309240ED2A4280AC25B5A5FFBF36;// 0x1FD8(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_32FC673643829E302FEC5F9A2846EBF4;// 0x20E0(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_3401703B446DB86A652C148AD933BF76;// 0x21E8(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_3381DA1C4B18F1E4C80ED29ADACCA0F4;// 0x22F0(0x0108)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_A6F5D86F4C599C654D5BDFB61772F954;// 0x23F8(0x00A0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_B2FCCE0F4E856CFAA0EA80B0A8281949;// 0x2498(0x0020)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_977BAEFA4997FF86D572FB92807E659A;// 0x24B8(0x0020)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_7DFA2FE04768E508669F6EBE78DD92C6;// 0x24D8(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_250E7BD942A2808067CC119BF7F5E4FA;// 0x2590(0x0028)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_FBB91B444D483E62FC7B039B04C2BE12;// 0x25B8(0x0020)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_02866314423EDB0ABA03FA97C978A88D;// 0x25D8(0x0028)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_FF7352514003221BCE6E5D9708534143;// 0x2600(0x0108)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_449757CA429E45A04FBEAD9C812342E9;// 0x2708(0x0020)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_D166D5A749E2E5F695723FBA36707D4D;// 0x2728(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_A61070E940AA2A7B6AA14D99852E0F77;// 0x27E0(0x0028)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_17E68C2144829EB7055923A7E6B204AD;// 0x2808(0x00A0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_27E4F6F7479F398A18DFABBDC2C7AD6A;      // 0x28A8(0x0048)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_DB32E92340518B65EDBFB0A21C7B18EC;// 0x28F0(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_466C365643E4773F31E767853AAF0445;// 0x29A8(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_AC9D63074900CD3F699777BF974EBB20;// 0x29D0(0x0028)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_A215AAD44C266C5D246F879CFD8752A6;// 0x29F8(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_52465FEA4D6701EB8BD2D5B0FF7D5E44;// 0x2B00(0x0108)
	float                                              HideMagazineAlpha;                                        // 0x2C08(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               Weapon_ABP_Idle;                                          // 0x2C10(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               Weapon_ABP_Holster;                                       // 0x2C18(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Shell_Housing_Spin;                                       // 0x2C20(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Missing_Shell_Count;                                      // 0x2C2C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      Shell_Loading;                                            // 0x2C30(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    Target_Shell_Housing_Spin;                                // 0x2C34(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      ShellE_Hidden;                                            // 0x2C40(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Revolver_Index;                                           // 0x2C44(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Turn_Directional_Amount;                                  // 0x2C48(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Scope_Scale_Alpha;                                        // 0x2C4C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      Is_Revolver;                                              // 0x2C50(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      Is_Multi_Stage_Reload;                                    // 0x2C51(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Multi_Stage_Reload_Alpha;                                 // 0x2C54(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      Is_Holstered;                                             // 0x2C58(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    Revolver_Chamber;                                         // 0x2C5C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      Prevent_Scope_Scaling_Override;                           // 0x2C68(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Alt_Scope_Scale_Alpha;                                    // 0x2C6C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UnspentShellAlphaA;                                       // 0x2C70(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UnspentShellAlphaB;                                       // 0x2C74(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UnspentShellAlphaC;                                       // 0x2C78(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UnspentShellAlphaD;                                       // 0x2C7C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UnspentShellAlphaE;                                       // 0x2C80(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UnspentShellAlphaF;                                       // 0x2C84(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpentShellAlphaA;                                         // 0x2C88(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpentShellAlphaB;                                         // 0x2C8C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpentShellAlphaC;                                         // 0x2C90(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpentShellAlphaD;                                         // 0x2C94(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpentShellAlphaE;                                         // 0x2C98(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpentShellAlphaF;                                         // 0x2C9C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      Is_in_Lobby_Viewer_;                                      // 0x2CA0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Is_Stock_Folded;                                          // 0x2CA4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    Stock_Rotation_Target;                                    // 0x2CA8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    Stock_Alt_Rotation_Target;                                // 0x2CB4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     ADS_ScopeLocationModifier;                                // 0x2CC0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UseAdditive;                                              // 0x2CCC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass MasterWeapon_ABP.MasterWeapon_ABP_C");
		return ptr;
	}


	void UpdateUnspentShellVisibility(int* bpp__ShellIndex__pf, bool* bpp__NewxVisibility__pfT);
	void UpdateSpentShellVisibility(int* bpp__ShellIndex__pf, bool* bpp__NewxVisibility__pfT);
	void Set_Weapon_State(class UKSWeaponComponent** bpp__OwningxWeaponxComponent__pfTT, EWeaponStateNew* bpp__OldxState__pfT, EWeaponStateNew* bpp__NewxState__pfT);
	void Set_Scope_Scale_Alpha(float* bpp__NewxAlpha__pfT);
	void Set_Revolver_Chamber_Rot(struct FRotator* bpp__NewxRevolverxChamberxRot__pfTTT);
	void Set_Multi_Stage_Reload(bool* bpp__NewxIsxMultixStagexReload__pfTTTT);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MasterWeapon_ABP_AnimGraphNode_ModifyBone_52465FEA4D6701EB8BD2D5B0FF7D5E44();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MasterWeapon_ABP_AnimGraphNode_BlendListByBool_8D407D3B4E9DF8DEBA89FBB2A5413674();
	void AnimNotify_Unhide_Mag();
	void AnimNotify_Hide_Mag();
	void AnimGraph(struct FPoseLink* bpp__AnimGraph__pf);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

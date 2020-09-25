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

// Class KillstreakAnimGraphRuntime.RecoilProfileAsset
// 0x01F0 (0x0220 - 0x0030)
class URecoilProfileAsset : public UDataAsset
{
public:
	struct FRecoilProfile                              RecoilProfile;                                            // 0x0030(0x01EC) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      DontPlayRecoilMontage;                                    // 0x021C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakAnimGraphRuntime.RecoilProfileAsset");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

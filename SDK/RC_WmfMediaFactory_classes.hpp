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

// Class WmfMediaFactory.WmfMediaSettings
// 0x0008 (0x0030 - 0x0028)
class UWmfMediaSettings : public UObject
{
public:
	unsigned char                                      AllowNonStandardCodecs;                                   // 0x0028(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      LowLatency;                                               // 0x0029(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      NativeAudioOut;                                           // 0x002A(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      HardwareAcceleratedVideoDecoding;                         // 0x002B(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WmfMediaFactory.WmfMediaSettings");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

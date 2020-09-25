#pragma once

// RogueCompany (4.24) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum ImageWriteQueue.EDesiredImageFormat
enum class EDesiredImageFormat : uint8_t
{
	EDesiredImageFormat__PNG       = 0,
	EDesiredImageFormat__JPG       = 1,
	EDesiredImageFormat__BMP       = 2,
	EDesiredImageFormat__EXR       = 3,
	EDesiredImageFormat__EDesiredImageFormat_MAX = 4
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct ImageWriteQueue.ImageWriteOptions
// 0x0060
struct FImageWriteOptions
{
	EDesiredImageFormat                                Format;                                                   // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             OnComplete;                                               // 0x0004(0x0010) (BlueprintVisible, ZeroConstructor, InstancedReference)
	int                                                CompressionQuality;                                       // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bOverwriteFile;                                           // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bAsync;                                                   // 0x0019(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x46];                                      // 0x001A(0x0046) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

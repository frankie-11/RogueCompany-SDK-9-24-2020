#pragma once

// RogueCompany (4.24) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct LiveLinkMovieScene.LiveLinkPropertyData
// 0x0058
struct FLiveLinkPropertyData
{
	struct FName                                       PropertyName;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FMovieSceneFloatChannel>             FloatChannel;                                             // 0x0008(0x0010) (ZeroConstructor)
	TArray<struct FMovieSceneStringChannel>            StringChannel;                                            // 0x0018(0x0010) (ZeroConstructor)
	TArray<struct FMovieSceneIntegerChannel>           IntegerChannel;                                           // 0x0028(0x0010) (ZeroConstructor)
	TArray<struct FMovieSceneBoolChannel>              BoolChannel;                                              // 0x0038(0x0010) (ZeroConstructor)
	TArray<struct FMovieSceneByteChannel>              ByteChannel;                                              // 0x0048(0x0010) (ZeroConstructor)
};

// ScriptStruct LiveLinkMovieScene.LiveLinkSubSectionData
// 0x0010
struct FLiveLinkSubSectionData
{
	TArray<struct FLiveLinkPropertyData>               Properties;                                               // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct LiveLinkMovieScene.MovieSceneLiveLinkSectionTemplate
// 0x0080 (0x00C8 - 0x0048)
struct FMovieSceneLiveLinkSectionTemplate : public FMovieScenePropertySectionTemplate
{
	struct FLiveLinkSubjectPreset                      SubjectPreset;                                            // 0x0048(0x0038)
	TArray<unsigned char>                              ChannelMask;                                              // 0x0080(0x0010) (ZeroConstructor)
	TArray<struct FLiveLinkSubSectionData>             SubSectionsData;                                          // 0x0090(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x28];                                      // 0x00A0(0x0028) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

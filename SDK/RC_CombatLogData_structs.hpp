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

// ScriptStruct CombatLogData.CombatLogData
// 0x0020
struct FCombatLogData
{
	class APlayerState*                                Instigator_2_A0897D504595825D10580A98CB5440B6;            // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class APlayerState*                                Victim_4_94BB1634420E90915FD417B1E72F8EEF;                // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class UKSItem*                                     Weapon_7_285A4CF84ACD0FD209ADF8A4D4A1CE8E;                // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Downed_10_6C5493354CA90760098A848F5307E44C;               // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

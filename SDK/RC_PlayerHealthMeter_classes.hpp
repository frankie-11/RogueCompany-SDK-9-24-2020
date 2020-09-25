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

// DynamicClass PlayerHealthMeter.PlayerHealthMeter_C
// 0x0078 (0x02A8 - 0x0230)
class UPlayerHealthMeter_C : public UKSPlayerHealthMeterBase
{
public:
	class UHorizontalBox*                              SegmentContainer;                                         // 0x0230(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                HealthSegmentWidth;                                       // 0x0238(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      ShouldUseDots;                                            // 0x023C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FPlayerHealthMeterState                     CurrentHealthMeterState;                                  // 0x0240(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              SegmentPadding;                                           // 0x0258(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FMargin                                     K2Node_MakeStruct_Margin;                                 // 0x025C(0x0010) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                Temp_int_Array_Index_Variable;                            // 0x026C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                Temp_int_Loop_Counter_Variable;                           // 0x0270(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      K2Node_Event_IsDesignTime;                                // 0x0274(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FPlayerHealthMeterState                     K2Node_Event_HealthMeterState;                            // 0x0278(0x0018) (Transient, DuplicateTransient)
	TArray<class UWidget*>                             CallFunc_GetAllChildren_ReturnValue;                      // 0x0290(0x0010) (ExportObject, ZeroConstructor, Transient, DuplicateTransient)
	class UWidget*                                     CallFunc_Array_Get_Item;                                  // 0x02A0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass PlayerHealthMeter.PlayerHealthMeter_C");
		return ptr;
	}


	void SetHealthMeterState(struct FPlayerHealthMeterState* bpp__HealthMeterState__pf);
	void PreConstruct(bool* bpp__IsDesignTime__pf);
	void PlayDamagePulse();
	void Construct();
	void Apply_State_To_Segments();
	void Add_Segments_If_Needed();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

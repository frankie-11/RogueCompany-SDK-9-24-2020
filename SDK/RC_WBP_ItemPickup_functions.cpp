// RogueCompany (4.24) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_ItemPickup.WBP_ItemPickup_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_ItemPickup_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ItemPickup.WBP_ItemPickup_C.Construct");

	UWBP_ItemPickup_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ItemPickup.WBP_ItemPickup_C.OnItemPickedUp_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSCharacter**           Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AKSItemDrop**            ItemDrop                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UKSItem**                Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_ItemPickup_C::OnItemPickedUp_Event_1(class AKSCharacter** Character, class AKSItemDrop** ItemDrop, class UKSItem** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ItemPickup.WBP_ItemPickup_C.OnItemPickedUp_Event_1");

	UWBP_ItemPickup_C_OnItemPickedUp_Event_1_Params params;
	params.Character = Character;
	params.ItemDrop = ItemDrop;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ItemPickup.WBP_ItemPickup_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_ItemPickup_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ItemPickup.WBP_ItemPickup_C.Tick");

	UWBP_ItemPickup_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ItemPickup.WBP_ItemPickup_C.ExecuteUbergraph_WBP_ItemPickup
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_ItemPickup_C::ExecuteUbergraph_WBP_ItemPickup(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ItemPickup.WBP_ItemPickup_C.ExecuteUbergraph_WBP_ItemPickup");

	UWBP_ItemPickup_C_ExecuteUbergraph_WBP_ItemPickup_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

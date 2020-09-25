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

// Function WBP_DamageNumberMgr.WBP_DamageNumberMgr_C.GetDamageNumberWidgetInstance
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDamageNumberDisplayWidget* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UDamageNumberDisplayWidget* UWBP_DamageNumberMgr_C::GetDamageNumberWidgetInstance()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_DamageNumberMgr.WBP_DamageNumberMgr_C.GetDamageNumberWidgetInstance");

	UWBP_DamageNumberMgr_C_GetDamageNumberWidgetInstance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_DamageNumberMgr.WBP_DamageNumberMgr_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_DamageNumberMgr_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_DamageNumberMgr.WBP_DamageNumberMgr_C.Construct");

	UWBP_DamageNumberMgr_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_DamageNumberMgr.WBP_DamageNumberMgr_C.ExecuteUbergraph_WBP_DamageNumberMgr
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_DamageNumberMgr_C::ExecuteUbergraph_WBP_DamageNumberMgr(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_DamageNumberMgr.WBP_DamageNumberMgr_C.ExecuteUbergraph_WBP_DamageNumberMgr");

	UWBP_DamageNumberMgr_C_ExecuteUbergraph_WBP_DamageNumberMgr_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

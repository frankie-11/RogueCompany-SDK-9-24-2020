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

// Function FootstepNotify.FootstepNotify_C.Received_Notify
// (Native, Event, Public, BlueprintCallable, Const)
// Parameters:
// class USkeletalMeshComponent** bpp__MeshComp__pf              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UAnimSequenceBase**      bpp__Animation__pf             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UFootstepNotify_C::Received_Notify(class USkeletalMeshComponent** bpp__MeshComp__pf, class UAnimSequenceBase** bpp__Animation__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function FootstepNotify.FootstepNotify_C.Received_Notify");

	UFootstepNotify_C_Received_Notify_Params params;
	params.bpp__MeshComp__pf = bpp__MeshComp__pf;
	params.bpp__Animation__pf = bpp__Animation__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function FootstepNotify.FootstepNotify_C.GetSFXMaterial
// (Native, Public, HasOutParms, BlueprintCallable, Const)
// Parameters:
// class UAnimInstance**          bpp__AnimInstance__pf          (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  bpp__BonexName__pfT            (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   bpp__MaterialxReturn__pfT      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class AActor*                  bpp__ActorxReturn__pfT         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UFootstepNotify_C::GetSFXMaterial(class UAnimInstance** bpp__AnimInstance__pf, struct FName* bpp__BonexName__pfT, struct FName* bpp__MaterialxReturn__pfT, class AActor** bpp__ActorxReturn__pfT)
{
	static auto fn = UObject::FindObject<UFunction>("Function FootstepNotify.FootstepNotify_C.GetSFXMaterial");

	UFootstepNotify_C_GetSFXMaterial_Params params;
	params.bpp__AnimInstance__pf = bpp__AnimInstance__pf;
	params.bpp__BonexName__pfT = bpp__BonexName__pfT;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bpp__MaterialxReturn__pfT != nullptr)
		*bpp__MaterialxReturn__pfT = params.bpp__MaterialxReturn__pfT;
	if (bpp__ActorxReturn__pfT != nullptr)
		*bpp__ActorxReturn__pfT = params.bpp__ActorxReturn__pfT;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

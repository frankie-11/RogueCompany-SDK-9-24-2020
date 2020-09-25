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

// Function LobbyMainCharacter.LobbyMainCharacter_C.Randomize Lobby Idle anim start
// (Public, BlueprintCallable, BlueprintEvent)

void ALobbyMainCharacter_C::Randomize_Lobby_Idle_anim_start()
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyMainCharacter.LobbyMainCharacter_C.Randomize Lobby Idle anim start");

	ALobbyMainCharacter_C_Randomize_Lobby_Idle_anim_start_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyMainCharacter.LobbyMainCharacter_C.Make Lobby Fidget Keyword Array
// (Public, BlueprintCallable, BlueprintEvent)

void ALobbyMainCharacter_C::Make_Lobby_Fidget_Keyword_Array()
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyMainCharacter.LobbyMainCharacter_C.Make Lobby Fidget Keyword Array");

	ALobbyMainCharacter_C_Make_Lobby_Fidget_Keyword_Array_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyMainCharacter.LobbyMainCharacter_C.Parse Lobby Fidget Animation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FName>           LobbyFidgetKeywordArray        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// EKSLobbyCharacterAnimationPose Lobby_Character_Animation_Pose (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ALobbyMainCharacter_C::Parse_Lobby_Fidget_Animation(TArray<struct FName>* LobbyFidgetKeywordArray, EKSLobbyCharacterAnimationPose* Lobby_Character_Animation_Pose)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyMainCharacter.LobbyMainCharacter_C.Parse Lobby Fidget Animation");

	ALobbyMainCharacter_C_Parse_Lobby_Fidget_Animation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LobbyFidgetKeywordArray != nullptr)
		*LobbyFidgetKeywordArray = params.LobbyFidgetKeywordArray;
	if (Lobby_Character_Animation_Pose != nullptr)
		*Lobby_Character_Animation_Pose = params.Lobby_Character_Animation_Pose;
}


// Function LobbyMainCharacter.LobbyMainCharacter_C.Get Montage Position of Lobby Characater
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Position                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ALobbyMainCharacter_C::Get_Montage_Position_of_Lobby_Characater(float* Position)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyMainCharacter.LobbyMainCharacter_C.Get Montage Position of Lobby Characater");

	ALobbyMainCharacter_C_Get_Montage_Position_of_Lobby_Characater_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Position != nullptr)
		*Position = params.Position;
}


// Function LobbyMainCharacter.LobbyMainCharacter_C.Init Body Apparel
// (Public, BlueprintCallable, BlueprintEvent)

void ALobbyMainCharacter_C::Init_Body_Apparel()
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyMainCharacter.LobbyMainCharacter_C.Init Body Apparel");

	ALobbyMainCharacter_C_Init_Body_Apparel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyMainCharacter.LobbyMainCharacter_C.LobbyWeapon01_Timeline__FinishedFunc
// (BlueprintEvent)

void ALobbyMainCharacter_C::LobbyWeapon01_Timeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyMainCharacter.LobbyMainCharacter_C.LobbyWeapon01_Timeline__FinishedFunc");

	ALobbyMainCharacter_C_LobbyWeapon01_Timeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyMainCharacter.LobbyMainCharacter_C.LobbyWeapon01_Timeline__UpdateFunc
// (BlueprintEvent)

void ALobbyMainCharacter_C::LobbyWeapon01_Timeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyMainCharacter.LobbyMainCharacter_C.LobbyWeapon01_Timeline__UpdateFunc");

	ALobbyMainCharacter_C_LobbyWeapon01_Timeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyMainCharacter.LobbyMainCharacter_C.LobbyWeapon02_Timeline__FinishedFunc
// (BlueprintEvent)

void ALobbyMainCharacter_C::LobbyWeapon02_Timeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyMainCharacter.LobbyMainCharacter_C.LobbyWeapon02_Timeline__FinishedFunc");

	ALobbyMainCharacter_C_LobbyWeapon02_Timeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyMainCharacter.LobbyMainCharacter_C.LobbyWeapon02_Timeline__UpdateFunc
// (BlueprintEvent)

void ALobbyMainCharacter_C::LobbyWeapon02_Timeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyMainCharacter.LobbyMainCharacter_C.LobbyWeapon02_Timeline__UpdateFunc");

	ALobbyMainCharacter_C_LobbyWeapon02_Timeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyMainCharacter.LobbyMainCharacter_C.LobbyProp01_Timeline__FinishedFunc
// (BlueprintEvent)

void ALobbyMainCharacter_C::LobbyProp01_Timeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyMainCharacter.LobbyMainCharacter_C.LobbyProp01_Timeline__FinishedFunc");

	ALobbyMainCharacter_C_LobbyProp01_Timeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyMainCharacter.LobbyMainCharacter_C.LobbyProp01_Timeline__UpdateFunc
// (BlueprintEvent)

void ALobbyMainCharacter_C::LobbyProp01_Timeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyMainCharacter.LobbyMainCharacter_C.LobbyProp01_Timeline__UpdateFunc");

	ALobbyMainCharacter_C_LobbyProp01_Timeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyMainCharacter.LobbyMainCharacter_C.OnNotifyEnd_AA177F3D4F176F58A7691D84D8C329C7
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           MontageInstanceID              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALobbyMainCharacter_C::OnNotifyEnd_AA177F3D4F176F58A7691D84D8C329C7(struct FName* NotifyName, int* MontageInstanceID)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyMainCharacter.LobbyMainCharacter_C.OnNotifyEnd_AA177F3D4F176F58A7691D84D8C329C7");

	ALobbyMainCharacter_C_OnNotifyEnd_AA177F3D4F176F58A7691D84D8C329C7_Params params;
	params.NotifyName = NotifyName;
	params.MontageInstanceID = MontageInstanceID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyMainCharacter.LobbyMainCharacter_C.OnNotifyBegin_AA177F3D4F176F58A7691D84D8C329C7
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           MontageInstanceID              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALobbyMainCharacter_C::OnNotifyBegin_AA177F3D4F176F58A7691D84D8C329C7(struct FName* NotifyName, int* MontageInstanceID)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyMainCharacter.LobbyMainCharacter_C.OnNotifyBegin_AA177F3D4F176F58A7691D84D8C329C7");

	ALobbyMainCharacter_C_OnNotifyBegin_AA177F3D4F176F58A7691D84D8C329C7_Params params;
	params.NotifyName = NotifyName;
	params.MontageInstanceID = MontageInstanceID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyMainCharacter.LobbyMainCharacter_C.OnInterrupted_AA177F3D4F176F58A7691D84D8C329C7
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           MontageInstanceID              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALobbyMainCharacter_C::OnInterrupted_AA177F3D4F176F58A7691D84D8C329C7(struct FName* NotifyName, int* MontageInstanceID)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyMainCharacter.LobbyMainCharacter_C.OnInterrupted_AA177F3D4F176F58A7691D84D8C329C7");

	ALobbyMainCharacter_C_OnInterrupted_AA177F3D4F176F58A7691D84D8C329C7_Params params;
	params.NotifyName = NotifyName;
	params.MontageInstanceID = MontageInstanceID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyMainCharacter.LobbyMainCharacter_C.OnBlendOut_AA177F3D4F176F58A7691D84D8C329C7
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           MontageInstanceID              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALobbyMainCharacter_C::OnBlendOut_AA177F3D4F176F58A7691D84D8C329C7(struct FName* NotifyName, int* MontageInstanceID)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyMainCharacter.LobbyMainCharacter_C.OnBlendOut_AA177F3D4F176F58A7691D84D8C329C7");

	ALobbyMainCharacter_C_OnBlendOut_AA177F3D4F176F58A7691D84D8C329C7_Params params;
	params.NotifyName = NotifyName;
	params.MontageInstanceID = MontageInstanceID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyMainCharacter.LobbyMainCharacter_C.OnCompleted_AA177F3D4F176F58A7691D84D8C329C7
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           MontageInstanceID              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALobbyMainCharacter_C::OnCompleted_AA177F3D4F176F58A7691D84D8C329C7(struct FName* NotifyName, int* MontageInstanceID)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyMainCharacter.LobbyMainCharacter_C.OnCompleted_AA177F3D4F176F58A7691D84D8C329C7");

	ALobbyMainCharacter_C_OnCompleted_AA177F3D4F176F58A7691D84D8C329C7_Params params;
	params.NotifyName = NotifyName;
	params.MontageInstanceID = MontageInstanceID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyMainCharacter.LobbyMainCharacter_C.StopLeftPropEffect
// (BlueprintCallable, BlueprintEvent)

void ALobbyMainCharacter_C::StopLeftPropEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyMainCharacter.LobbyMainCharacter_C.StopLeftPropEffect");

	ALobbyMainCharacter_C_StopLeftPropEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyMainCharacter.LobbyMainCharacter_C.PlayLeftPropEffect
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  MaterialParameter              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UCurveFloat**            FloatCurve                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALobbyMainCharacter_C::PlayLeftPropEffect(float* Duration, struct FName* MaterialParameter, class UCurveFloat** FloatCurve)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyMainCharacter.LobbyMainCharacter_C.PlayLeftPropEffect");

	ALobbyMainCharacter_C_PlayLeftPropEffect_Params params;
	params.Duration = Duration;
	params.MaterialParameter = MaterialParameter;
	params.FloatCurve = FloatCurve;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyMainCharacter.LobbyMainCharacter_C.StopScenePropEffect
// (BlueprintCallable, BlueprintEvent)

void ALobbyMainCharacter_C::StopScenePropEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyMainCharacter.LobbyMainCharacter_C.StopScenePropEffect");

	ALobbyMainCharacter_C_StopScenePropEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyMainCharacter.LobbyMainCharacter_C.PlayScenePropEffect
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  MaterialParameter              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UCurveFloat**            FloatCurve                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALobbyMainCharacter_C::PlayScenePropEffect(float* Duration, struct FName* MaterialParameter, class UCurveFloat** FloatCurve)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyMainCharacter.LobbyMainCharacter_C.PlayScenePropEffect");

	ALobbyMainCharacter_C_PlayScenePropEffect_Params params;
	params.Duration = Duration;
	params.MaterialParameter = MaterialParameter;
	params.FloatCurve = FloatCurve;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyMainCharacter.LobbyMainCharacter_C.PlayRightPropEffect
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  MaterialParameter              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UCurveFloat**            FloatCurve                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALobbyMainCharacter_C::PlayRightPropEffect(float* Duration, struct FName* MaterialParameter, class UCurveFloat** FloatCurve)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyMainCharacter.LobbyMainCharacter_C.PlayRightPropEffect");

	ALobbyMainCharacter_C_PlayRightPropEffect_Params params;
	params.Duration = Duration;
	params.MaterialParameter = MaterialParameter;
	params.FloatCurve = FloatCurve;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyMainCharacter.LobbyMainCharacter_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ALobbyMainCharacter_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyMainCharacter.LobbyMainCharacter_C.ReceiveBeginPlay");

	ALobbyMainCharacter_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyMainCharacter.LobbyMainCharacter_C.Add Body Apparel As Parent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkinnableSkeletalMeshComponent** Skinnable_Mesh_Component       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ALobbyMainCharacter_C::Add_Body_Apparel_As_Parent(class USkinnableSkeletalMeshComponent** Skinnable_Mesh_Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyMainCharacter.LobbyMainCharacter_C.Add Body Apparel As Parent");

	ALobbyMainCharacter_C_Add_Body_Apparel_As_Parent_Params params;
	params.Skinnable_Mesh_Component = Skinnable_Mesh_Component;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyMainCharacter.LobbyMainCharacter_C.StopRightPropEffect
// (BlueprintCallable, BlueprintEvent)

void ALobbyMainCharacter_C::StopRightPropEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyMainCharacter.LobbyMainCharacter_C.StopRightPropEffect");

	ALobbyMainCharacter_C_StopRightPropEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyMainCharacter.LobbyMainCharacter_C.PlayLobbyCharacterMontage
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ALobbyMainCharacter_C::PlayLobbyCharacterMontage()
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyMainCharacter.LobbyMainCharacter_C.PlayLobbyCharacterMontage");

	ALobbyMainCharacter_C_PlayLobbyCharacterMontage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyMainCharacter.LobbyMainCharacter_C.StopLobbyCharacterMontage
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ALobbyMainCharacter_C::StopLobbyCharacterMontage()
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyMainCharacter.LobbyMainCharacter_C.StopLobbyCharacterMontage");

	ALobbyMainCharacter_C_StopLobbyCharacterMontage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyMainCharacter.LobbyMainCharacter_C.InitializeLobbyCharacterAnimation
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ALobbyMainCharacter_C::InitializeLobbyCharacterAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyMainCharacter.LobbyMainCharacter_C.InitializeLobbyCharacterAnimation");

	ALobbyMainCharacter_C_InitializeLobbyCharacterAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyMainCharacter.LobbyMainCharacter_C.ExecuteUbergraph_LobbyMainCharacter
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALobbyMainCharacter_C::ExecuteUbergraph_LobbyMainCharacter(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyMainCharacter.LobbyMainCharacter_C.ExecuteUbergraph_LobbyMainCharacter");

	ALobbyMainCharacter_C_ExecuteUbergraph_LobbyMainCharacter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

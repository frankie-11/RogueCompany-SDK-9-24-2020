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

// Enum PhysicsCore.EChaosBufferMode
enum class EChaosBufferMode : uint8_t
{
	EChaosBufferMode__Double       = 0,
	EChaosBufferMode__Triple       = 1,
	EChaosBufferMode__Num          = 2,
	EChaosBufferMode__Invalid      = 3,
	EChaosBufferMode__EChaosBufferMode_MAX = 4
};


// Enum PhysicsCore.EChaosThreadingMode
enum class EChaosThreadingMode : uint8_t
{
	EChaosThreadingMode__DedicatedThread = 0,
	EChaosThreadingMode__TaskGraph = 1,
	EChaosThreadingMode__SingleThread = 2,
	EChaosThreadingMode__Num       = 3,
	EChaosThreadingMode__Invalid   = 4,
	EChaosThreadingMode__EChaosThreadingMode_MAX = 5
};


// Enum PhysicsCore.EChaosSolverTickMode
enum class EChaosSolverTickMode : uint8_t
{
	EChaosSolverTickMode__Fixed    = 0,
	EChaosSolverTickMode__Variable = 1,
	EChaosSolverTickMode__VariableCapped = 2,
	EChaosSolverTickMode__VariableCappedWithTarget = 3,
	EChaosSolverTickMode__EChaosSolverTickMode_MAX = 4
};



}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Enum PlatformCommon.EPCOM_SessionUpdateEvent
enum class EPCOM_SessionUpdateEvent : uint8_t
{
	EPCOM_SessionUpdateEvent__Unknown = 0,
	EPCOM_SessionUpdateEvent__JoinFailure = 1,
	EPCOM_SessionUpdateEvent__JoinFailure_NoOpenConnections = 2,
	EPCOM_SessionUpdateEvent__JoinFailure_SessionNotAvailable = 3,
	EPCOM_SessionUpdateEvent__JoinSuccess = 4,
	EPCOM_SessionUpdateEvent__EPCOM_MAX = 5
};


// Enum PlatformCommon.EPCOM_PrivilegeStatus
enum class EPCOM_PrivilegeStatus : uint8_t
{
	EPCOM_PrivilegeStatus__Unchecked = 0,
	EPCOM_PrivilegeStatus__Pending = 1,
	EPCOM_PrivilegeStatus__Denied  = 2,
	EPCOM_PrivilegeStatus__Allowed = 3,
	EPCOM_PrivilegeStatus__EPCOM_MAX = 4
};



}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;

#include "mscorlib_System_ValueType3507792607.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PatientData
struct  PatientData_t2385140857 
{
public:
	// System.String PatientData::patientName
	String_t* ___patientName_0;

public:
	inline static int32_t get_offset_of_patientName_0() { return static_cast<int32_t>(offsetof(PatientData_t2385140857, ___patientName_0)); }
	inline String_t* get_patientName_0() const { return ___patientName_0; }
	inline String_t** get_address_of_patientName_0() { return &___patientName_0; }
	inline void set_patientName_0(String_t* value)
	{
		___patientName_0 = value;
		Il2CppCodeGenWriteBarrier(&___patientName_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of PatientData
struct PatientData_t2385140857_marshaled_pinvoke
{
	char* ___patientName_0;
};
// Native definition for COM marshalling of PatientData
struct PatientData_t2385140857_marshaled_com
{
	Il2CppChar* ___patientName_0;
};

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

// NewBehaviourScript
struct NewBehaviourScript_t3815670778;
// System.String
struct String_t;
// System.Single[]
struct SingleU5BU5D_t577127397;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array3829468939.h"
#include "AssemblyU2DCSharp_U3CModuleU3E3783534214.h"
#include "AssemblyU2DCSharp_U3CModuleU3E3783534214MethodDeclarations.h"
#include "AssemblyU2DCSharp_NewBehaviourScript3815670778.h"
#include "AssemblyU2DCSharp_NewBehaviourScript3815670778MethodDeclarations.h"
#include "mscorlib_System_Void1841601450.h"
#include "UnityEngine_UnityEngine_MonoBehaviour1158329972MethodDeclarations.h"
#include "AssemblyU2DCSharp_PatientData2385140857.h"
#include "AssemblyU2DCSharp_PatientData2385140857MethodDeclarations.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_ArrayTypes.h"
#include "mscorlib_System_Single2076509932.h"
#include "mscorlib_System_Int322071877448.h"
#include "UnityEngine_UnityEngine_Texture2D3542995729MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Texture2243626319MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Texture2D3542995729.h"
#include "UnityEngine_UnityEngine_TextureFormat1386130234.h"
#include "mscorlib_System_Boolean3825574718.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void NewBehaviourScript::.ctor()
extern "C"  void NewBehaviourScript__ctor_m3327632941 (NewBehaviourScript_t3815670778 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
extern "C" void DEFAULT_CALL Hello(PatientData_t2385140857_marshaled_pinvoke);
// System.Void NewBehaviourScript::Hello(PatientData)
extern "C"  void NewBehaviourScript_Hello_m3801862662 (Il2CppObject * __this /* static, unused */, PatientData_t2385140857  ___data0, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (PatientData_t2385140857_marshaled_pinvoke);

	// Marshaling of parameter '___data0' to native representation
	PatientData_t2385140857_marshaled_pinvoke ____data0_marshaled = { };
	PatientData_t2385140857_marshal_pinvoke(___data0, ____data0_marshaled);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Hello)(____data0_marshaled);

	// Marshaling cleanup of parameter '___data0' native representation
	PatientData_t2385140857_marshal_pinvoke_cleanup(____data0_marshaled);

}
extern "C" void DEFAULT_CALL HelloString(char*);
// System.Void NewBehaviourScript::HelloString(System.String)
extern "C"  void NewBehaviourScript_HelloString_m2635784802 (Il2CppObject * __this /* static, unused */, String_t* ___str0, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___str0' to native representation
	char* ____str0_marshaled = NULL;
	____str0_marshaled = il2cpp_codegen_marshal_string(___str0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(HelloString)(____str0_marshaled);

	// Marshaling cleanup of parameter '___str0' native representation
	il2cpp_codegen_marshal_free(____str0_marshaled);
	____str0_marshaled = NULL;

}
extern "C" void DEFAULT_CALL PrintFloatArray(float*, int32_t);
// System.Void NewBehaviourScript::PrintFloatArray(System.Single[],System.Int32)
extern "C"  void NewBehaviourScript_PrintFloatArray_m956930899 (Il2CppObject * __this /* static, unused */, SingleU5BU5D_t577127397* ___array0, int32_t ___size1, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (float*, int32_t);

	// Marshaling of parameter '___array0' to native representation
	float* ____array0_marshaled = NULL;
	if (___array0 != NULL)
	{
		____array0_marshaled = reinterpret_cast<float*>((___array0)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(PrintFloatArray)(____array0_marshaled, ___size1);

}
extern "C" int32_t DEFAULT_CALL AddNumbers(int32_t, int32_t);
// System.Int32 NewBehaviourScript::AddNumbers(System.Int32,System.Int32)
extern "C"  int32_t NewBehaviourScript_AddNumbers_m3956613304 (Il2CppObject * __this /* static, unused */, int32_t ___x0, int32_t ___y1, const MethodInfo* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t, int32_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(AddNumbers)(___x0, ___y1);

	return returnValue;
}
extern "C" char* DEFAULT_CALL StringReturnValueFunction();
// System.String NewBehaviourScript::StringReturnValueFunction()
extern "C"  String_t* NewBehaviourScript_StringReturnValueFunction_m2409839166 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	char* returnValue = reinterpret_cast<PInvokeFunc>(StringReturnValueFunction)();

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
extern "C" void DEFAULT_CALL BindWebGLTexture(int32_t);
// System.Void NewBehaviourScript::BindWebGLTexture(System.Int32)
extern "C"  void NewBehaviourScript_BindWebGLTexture_m2018962405 (Il2CppObject * __this /* static, unused */, int32_t ___texture0, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(BindWebGLTexture)(___texture0);

}
// System.Void NewBehaviourScript::Start()
extern Il2CppClass* Texture2D_t3542995729_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1502599982;
extern const uint32_t NewBehaviourScript_Start_m720604773_MetadataUsageId;
extern "C"  void NewBehaviourScript_Start_m720604773 (NewBehaviourScript_t3815670778 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NewBehaviourScript_Start_m720604773_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	PatientData_t2385140857  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Texture2D_t3542995729 * V_1 = NULL;
	{
		PatientData__ctor_m3345288250((&V_0), _stringLiteral1502599982, /*hidden argument*/NULL);
		PatientData_t2385140857  L_0 = V_0;
		NewBehaviourScript_Hello_m3801862662(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		Texture2D_t3542995729 * L_1 = (Texture2D_t3542995729 *)il2cpp_codegen_object_new(Texture2D_t3542995729_il2cpp_TypeInfo_var);
		Texture2D__ctor_m1873923924(L_1, 0, 0, 5, (bool)0, /*hidden argument*/NULL);
		V_1 = L_1;
		Texture2D_t3542995729 * L_2 = V_1;
		int32_t L_3 = Texture_GetNativeTextureID_m1317239321(L_2, /*hidden argument*/NULL);
		NewBehaviourScript_BindWebGLTexture_m2018962405(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NewBehaviourScript::Update()
extern "C"  void NewBehaviourScript_Update_m1514715100 (NewBehaviourScript_t3815670778 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void PatientData::.ctor(System.String)
extern "C"  void PatientData__ctor_m3345288250 (PatientData_t2385140857 * __this, String_t* ___name0, const MethodInfo* method)
{
	{
		String_t* L_0 = ___name0;
		__this->set_patientName_0(L_0);
		return;
	}
}
extern "C"  void PatientData__ctor_m3345288250_AdjustorThunk (Il2CppObject * __this, String_t* ___name0, const MethodInfo* method)
{
	PatientData_t2385140857 * _thisAdjusted = reinterpret_cast<PatientData_t2385140857 *>(__this + 1);
	PatientData__ctor_m3345288250(_thisAdjusted, ___name0, method);
}
// Conversion methods for marshalling of: PatientData
extern "C" void PatientData_t2385140857_marshal_pinvoke(const PatientData_t2385140857& unmarshaled, PatientData_t2385140857_marshaled_pinvoke& marshaled)
{
	marshaled.___patientName_0 = il2cpp_codegen_marshal_string(unmarshaled.get_patientName_0());
}
extern "C" void PatientData_t2385140857_marshal_pinvoke_back(const PatientData_t2385140857_marshaled_pinvoke& marshaled, PatientData_t2385140857& unmarshaled)
{
	unmarshaled.set_patientName_0(il2cpp_codegen_marshal_string_result(marshaled.___patientName_0));
}
// Conversion method for clean up from marshalling of: PatientData
extern "C" void PatientData_t2385140857_marshal_pinvoke_cleanup(PatientData_t2385140857_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___patientName_0);
	marshaled.___patientName_0 = NULL;
}
// Conversion methods for marshalling of: PatientData
extern "C" void PatientData_t2385140857_marshal_com(const PatientData_t2385140857& unmarshaled, PatientData_t2385140857_marshaled_com& marshaled)
{
	marshaled.___patientName_0 = il2cpp_codegen_marshal_bstring(unmarshaled.get_patientName_0());
}
extern "C" void PatientData_t2385140857_marshal_com_back(const PatientData_t2385140857_marshaled_com& marshaled, PatientData_t2385140857& unmarshaled)
{
	unmarshaled.set_patientName_0(il2cpp_codegen_marshal_bstring_result(marshaled.___patientName_0));
}
// Conversion method for clean up from marshalling of: PatientData
extern "C" void PatientData_t2385140857_marshal_com_cleanup(PatientData_t2385140857_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___patientName_0);
	marshaled.___patientName_0 = NULL;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif

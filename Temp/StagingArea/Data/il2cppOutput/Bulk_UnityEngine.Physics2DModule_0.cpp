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
#include <stdint.h>

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "object-internals.h"

// UnityEngine.RaycastHit2D[]
struct RaycastHit2DU5BU5D_t4176517891;
// System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>
struct List_1_t4166282325;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t2058570427;
// UnityEngine.Collider2D
struct Collider2D_t646061738;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t502193897;
// UnityEngine.Rigidbody2D[]
struct Rigidbody2DU5BU5D_t4025623380;
// System.Void
struct Void_t1841601450;
// System.Char[]
struct CharU5BU5D_t1328083999;
// System.String
struct String_t;
// UnityEngine.ContactPoint2D[]
struct ContactPoint2DU5BU5D_t1215651809;

extern RuntimeClass* Mathf_t2336485820_il2cpp_TypeInfo_var;
extern const uint32_t ContactFilter2D_CheckConsistency_m4046727088_MetadataUsageId;
extern RuntimeClass* ContactFilter2D_t1672660996_il2cpp_TypeInfo_var;
extern RuntimeClass* Physics2D_t2540166467_il2cpp_TypeInfo_var;
extern const uint32_t ContactFilter2D_CreateLegacyFilter_m2995965414_MetadataUsageId;
extern const uint32_t Physics2D_Raycast_m608778191_MetadataUsageId;
extern const uint32_t Physics2D_Raycast_m2434840196_MetadataUsageId;
extern const uint32_t Physics2D_Raycast_m1275014335_MetadataUsageId;
extern const uint32_t Physics2D_Raycast_m3897525470_MetadataUsageId;
extern const uint32_t Physics2D_Raycast_m298439588_MetadataUsageId;
extern const uint32_t Physics2D_Raycast_m2247349452_MetadataUsageId;
extern const uint32_t Physics2D_Raycast_m1029557985_MetadataUsageId;
extern const uint32_t Physics2D_Internal_Raycast_m1939412323_MetadataUsageId;
extern const uint32_t Physics2D_Internal_RaycastNonAlloc_m2519397231_MetadataUsageId;
extern const uint32_t Physics2D_GetRayIntersectionAll_m4061247206_MetadataUsageId;
extern const uint32_t Physics2D_GetRayIntersectionAll_m1867109771_MetadataUsageId;
extern const uint32_t Physics2D_GetRayIntersectionAll_m3730967068_MetadataUsageId;
extern RuntimeClass* List_1_t4166282325_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1__ctor_m1935313869_RuntimeMethod_var;
extern const uint32_t Physics2D__cctor_m2451529022_MetadataUsageId;
struct ContactPoint2D_t3659330976 ;

struct ContactPoint2DU5BU5D_t1215651809;
struct RaycastHit2DU5BU5D_t4176517891;


#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef U3CMODULEU3E_T3783534219_H
#define U3CMODULEU3E_T3783534219_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t3783534219 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T3783534219_H
#ifndef PHYSICS2D_T2540166467_H
#define PHYSICS2D_T2540166467_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Physics2D
struct  Physics2D_t2540166467  : public RuntimeObject
{
public:

public:
};

struct Physics2D_t2540166467_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Rigidbody2D> UnityEngine.Physics2D::m_LastDisabledRigidbody2D
	List_1_t4166282325 * ___m_LastDisabledRigidbody2D_0;

public:
	inline static int32_t get_offset_of_m_LastDisabledRigidbody2D_0() { return static_cast<int32_t>(offsetof(Physics2D_t2540166467_StaticFields, ___m_LastDisabledRigidbody2D_0)); }
	inline List_1_t4166282325 * get_m_LastDisabledRigidbody2D_0() const { return ___m_LastDisabledRigidbody2D_0; }
	inline List_1_t4166282325 ** get_address_of_m_LastDisabledRigidbody2D_0() { return &___m_LastDisabledRigidbody2D_0; }
	inline void set_m_LastDisabledRigidbody2D_0(List_1_t4166282325 * value)
	{
		___m_LastDisabledRigidbody2D_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_LastDisabledRigidbody2D_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PHYSICS2D_T2540166467_H
#ifndef LIST_1_T4166282325_H
#define LIST_1_T4166282325_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>
struct  List_1_t4166282325  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Rigidbody2DU5BU5D_t4025623380* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t4166282325, ____items_1)); }
	inline Rigidbody2DU5BU5D_t4025623380* get__items_1() const { return ____items_1; }
	inline Rigidbody2DU5BU5D_t4025623380** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Rigidbody2DU5BU5D_t4025623380* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t4166282325, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t4166282325, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t4166282325_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	Rigidbody2DU5BU5D_t4025623380* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t4166282325_StaticFields, ___EmptyArray_4)); }
	inline Rigidbody2DU5BU5D_t4025623380* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline Rigidbody2DU5BU5D_t4025623380** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(Rigidbody2DU5BU5D_t4025623380* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T4166282325_H
#ifndef VALUETYPE_T3507792607_H
#define VALUETYPE_T3507792607_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3507792607  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3507792607_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3507792607_marshaled_com
{
};
#endif // VALUETYPE_T3507792607_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef INT32_T2071877448_H
#define INT32_T2071877448_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2071877448 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t2071877448, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2071877448_H
#ifndef VECTOR3_T2243707580_H
#define VECTOR3_T2243707580_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t2243707580 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_1;
	// System.Single UnityEngine.Vector3::y
	float ___y_2;
	// System.Single UnityEngine.Vector3::z
	float ___z_3;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector3_t2243707580, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector3_t2243707580, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector3_t2243707580, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}
};

struct Vector3_t2243707580_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t2243707580  ___zeroVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t2243707580  ___oneVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t2243707580  ___upVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t2243707580  ___downVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t2243707580  ___leftVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t2243707580  ___rightVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t2243707580  ___forwardVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t2243707580  ___backVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t2243707580  ___positiveInfinityVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t2243707580  ___negativeInfinityVector_13;

public:
	inline static int32_t get_offset_of_zeroVector_4() { return static_cast<int32_t>(offsetof(Vector3_t2243707580_StaticFields, ___zeroVector_4)); }
	inline Vector3_t2243707580  get_zeroVector_4() const { return ___zeroVector_4; }
	inline Vector3_t2243707580 * get_address_of_zeroVector_4() { return &___zeroVector_4; }
	inline void set_zeroVector_4(Vector3_t2243707580  value)
	{
		___zeroVector_4 = value;
	}

	inline static int32_t get_offset_of_oneVector_5() { return static_cast<int32_t>(offsetof(Vector3_t2243707580_StaticFields, ___oneVector_5)); }
	inline Vector3_t2243707580  get_oneVector_5() const { return ___oneVector_5; }
	inline Vector3_t2243707580 * get_address_of_oneVector_5() { return &___oneVector_5; }
	inline void set_oneVector_5(Vector3_t2243707580  value)
	{
		___oneVector_5 = value;
	}

	inline static int32_t get_offset_of_upVector_6() { return static_cast<int32_t>(offsetof(Vector3_t2243707580_StaticFields, ___upVector_6)); }
	inline Vector3_t2243707580  get_upVector_6() const { return ___upVector_6; }
	inline Vector3_t2243707580 * get_address_of_upVector_6() { return &___upVector_6; }
	inline void set_upVector_6(Vector3_t2243707580  value)
	{
		___upVector_6 = value;
	}

	inline static int32_t get_offset_of_downVector_7() { return static_cast<int32_t>(offsetof(Vector3_t2243707580_StaticFields, ___downVector_7)); }
	inline Vector3_t2243707580  get_downVector_7() const { return ___downVector_7; }
	inline Vector3_t2243707580 * get_address_of_downVector_7() { return &___downVector_7; }
	inline void set_downVector_7(Vector3_t2243707580  value)
	{
		___downVector_7 = value;
	}

	inline static int32_t get_offset_of_leftVector_8() { return static_cast<int32_t>(offsetof(Vector3_t2243707580_StaticFields, ___leftVector_8)); }
	inline Vector3_t2243707580  get_leftVector_8() const { return ___leftVector_8; }
	inline Vector3_t2243707580 * get_address_of_leftVector_8() { return &___leftVector_8; }
	inline void set_leftVector_8(Vector3_t2243707580  value)
	{
		___leftVector_8 = value;
	}

	inline static int32_t get_offset_of_rightVector_9() { return static_cast<int32_t>(offsetof(Vector3_t2243707580_StaticFields, ___rightVector_9)); }
	inline Vector3_t2243707580  get_rightVector_9() const { return ___rightVector_9; }
	inline Vector3_t2243707580 * get_address_of_rightVector_9() { return &___rightVector_9; }
	inline void set_rightVector_9(Vector3_t2243707580  value)
	{
		___rightVector_9 = value;
	}

	inline static int32_t get_offset_of_forwardVector_10() { return static_cast<int32_t>(offsetof(Vector3_t2243707580_StaticFields, ___forwardVector_10)); }
	inline Vector3_t2243707580  get_forwardVector_10() const { return ___forwardVector_10; }
	inline Vector3_t2243707580 * get_address_of_forwardVector_10() { return &___forwardVector_10; }
	inline void set_forwardVector_10(Vector3_t2243707580  value)
	{
		___forwardVector_10 = value;
	}

	inline static int32_t get_offset_of_backVector_11() { return static_cast<int32_t>(offsetof(Vector3_t2243707580_StaticFields, ___backVector_11)); }
	inline Vector3_t2243707580  get_backVector_11() const { return ___backVector_11; }
	inline Vector3_t2243707580 * get_address_of_backVector_11() { return &___backVector_11; }
	inline void set_backVector_11(Vector3_t2243707580  value)
	{
		___backVector_11 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t2243707580_StaticFields, ___positiveInfinityVector_12)); }
	inline Vector3_t2243707580  get_positiveInfinityVector_12() const { return ___positiveInfinityVector_12; }
	inline Vector3_t2243707580 * get_address_of_positiveInfinityVector_12() { return &___positiveInfinityVector_12; }
	inline void set_positiveInfinityVector_12(Vector3_t2243707580  value)
	{
		___positiveInfinityVector_12 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t2243707580_StaticFields, ___negativeInfinityVector_13)); }
	inline Vector3_t2243707580  get_negativeInfinityVector_13() const { return ___negativeInfinityVector_13; }
	inline Vector3_t2243707580 * get_address_of_negativeInfinityVector_13() { return &___negativeInfinityVector_13; }
	inline void set_negativeInfinityVector_13(Vector3_t2243707580  value)
	{
		___negativeInfinityVector_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T2243707580_H
#ifndef ENUM_T2459695545_H
#define ENUM_T2459695545_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t2459695545  : public ValueType_t3507792607
{
public:

public:
};

struct Enum_t2459695545_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t1328083999* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t2459695545_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t1328083999* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t1328083999** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t1328083999* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2459695545_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2459695545_marshaled_com
{
};
#endif // ENUM_T2459695545_H
#ifndef BOOLEAN_T3825574718_H
#define BOOLEAN_T3825574718_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t3825574718 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t3825574718, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t3825574718_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t3825574718_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t3825574718_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T3825574718_H
#ifndef LAYERMASK_T3188175821_H
#define LAYERMASK_T3188175821_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.LayerMask
struct  LayerMask_t3188175821 
{
public:
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;

public:
	inline static int32_t get_offset_of_m_Mask_0() { return static_cast<int32_t>(offsetof(LayerMask_t3188175821, ___m_Mask_0)); }
	inline int32_t get_m_Mask_0() const { return ___m_Mask_0; }
	inline int32_t* get_address_of_m_Mask_0() { return &___m_Mask_0; }
	inline void set_m_Mask_0(int32_t value)
	{
		___m_Mask_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LAYERMASK_T3188175821_H
#ifndef VECTOR2_T2243707579_H
#define VECTOR2_T2243707579_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_t2243707579 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_t2243707579, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_t2243707579, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_t2243707579_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t2243707579  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t2243707579  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t2243707579  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t2243707579  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t2243707579  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t2243707579  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t2243707579  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t2243707579  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_t2243707579_StaticFields, ___zeroVector_2)); }
	inline Vector2_t2243707579  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_t2243707579 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_t2243707579  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_t2243707579_StaticFields, ___oneVector_3)); }
	inline Vector2_t2243707579  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_t2243707579 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_t2243707579  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_t2243707579_StaticFields, ___upVector_4)); }
	inline Vector2_t2243707579  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_t2243707579 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_t2243707579  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_t2243707579_StaticFields, ___downVector_5)); }
	inline Vector2_t2243707579  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_t2243707579 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_t2243707579  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_t2243707579_StaticFields, ___leftVector_6)); }
	inline Vector2_t2243707579  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_t2243707579 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_t2243707579  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_t2243707579_StaticFields, ___rightVector_7)); }
	inline Vector2_t2243707579  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_t2243707579 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_t2243707579  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_t2243707579_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_t2243707579  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_t2243707579 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_t2243707579  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_t2243707579_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_t2243707579  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_t2243707579 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_t2243707579  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_T2243707579_H
#ifndef SINGLE_T2076509932_H
#define SINGLE_T2076509932_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t2076509932 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t2076509932, ___m_value_7)); }
	inline float get_m_value_7() const { return ___m_value_7; }
	inline float* get_address_of_m_value_7() { return &___m_value_7; }
	inline void set_m_value_7(float value)
	{
		___m_value_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T2076509932_H
#ifndef VOID_T1841601450_H
#define VOID_T1841601450_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1841601450 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1841601450_H
#ifndef FORCEMODE2D_T4177575466_H
#define FORCEMODE2D_T4177575466_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ForceMode2D
struct  ForceMode2D_t4177575466 
{
public:
	// System.Int32 UnityEngine.ForceMode2D::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ForceMode2D_t4177575466, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FORCEMODE2D_T4177575466_H
#ifndef COLLISION2D_T1539500754_H
#define COLLISION2D_T1539500754_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collision2D
struct  Collision2D_t1539500754  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.Collision2D::m_Collider
	int32_t ___m_Collider_0;
	// System.Int32 UnityEngine.Collision2D::m_OtherCollider
	int32_t ___m_OtherCollider_1;
	// System.Int32 UnityEngine.Collision2D::m_Rigidbody
	int32_t ___m_Rigidbody_2;
	// System.Int32 UnityEngine.Collision2D::m_OtherRigidbody
	int32_t ___m_OtherRigidbody_3;
	// UnityEngine.ContactPoint2D[] UnityEngine.Collision2D::m_Contacts
	ContactPoint2DU5BU5D_t1215651809* ___m_Contacts_4;
	// UnityEngine.Vector2 UnityEngine.Collision2D::m_RelativeVelocity
	Vector2_t2243707579  ___m_RelativeVelocity_5;
	// System.Int32 UnityEngine.Collision2D::m_Enabled
	int32_t ___m_Enabled_6;

public:
	inline static int32_t get_offset_of_m_Collider_0() { return static_cast<int32_t>(offsetof(Collision2D_t1539500754, ___m_Collider_0)); }
	inline int32_t get_m_Collider_0() const { return ___m_Collider_0; }
	inline int32_t* get_address_of_m_Collider_0() { return &___m_Collider_0; }
	inline void set_m_Collider_0(int32_t value)
	{
		___m_Collider_0 = value;
	}

	inline static int32_t get_offset_of_m_OtherCollider_1() { return static_cast<int32_t>(offsetof(Collision2D_t1539500754, ___m_OtherCollider_1)); }
	inline int32_t get_m_OtherCollider_1() const { return ___m_OtherCollider_1; }
	inline int32_t* get_address_of_m_OtherCollider_1() { return &___m_OtherCollider_1; }
	inline void set_m_OtherCollider_1(int32_t value)
	{
		___m_OtherCollider_1 = value;
	}

	inline static int32_t get_offset_of_m_Rigidbody_2() { return static_cast<int32_t>(offsetof(Collision2D_t1539500754, ___m_Rigidbody_2)); }
	inline int32_t get_m_Rigidbody_2() const { return ___m_Rigidbody_2; }
	inline int32_t* get_address_of_m_Rigidbody_2() { return &___m_Rigidbody_2; }
	inline void set_m_Rigidbody_2(int32_t value)
	{
		___m_Rigidbody_2 = value;
	}

	inline static int32_t get_offset_of_m_OtherRigidbody_3() { return static_cast<int32_t>(offsetof(Collision2D_t1539500754, ___m_OtherRigidbody_3)); }
	inline int32_t get_m_OtherRigidbody_3() const { return ___m_OtherRigidbody_3; }
	inline int32_t* get_address_of_m_OtherRigidbody_3() { return &___m_OtherRigidbody_3; }
	inline void set_m_OtherRigidbody_3(int32_t value)
	{
		___m_OtherRigidbody_3 = value;
	}

	inline static int32_t get_offset_of_m_Contacts_4() { return static_cast<int32_t>(offsetof(Collision2D_t1539500754, ___m_Contacts_4)); }
	inline ContactPoint2DU5BU5D_t1215651809* get_m_Contacts_4() const { return ___m_Contacts_4; }
	inline ContactPoint2DU5BU5D_t1215651809** get_address_of_m_Contacts_4() { return &___m_Contacts_4; }
	inline void set_m_Contacts_4(ContactPoint2DU5BU5D_t1215651809* value)
	{
		___m_Contacts_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Contacts_4), value);
	}

	inline static int32_t get_offset_of_m_RelativeVelocity_5() { return static_cast<int32_t>(offsetof(Collision2D_t1539500754, ___m_RelativeVelocity_5)); }
	inline Vector2_t2243707579  get_m_RelativeVelocity_5() const { return ___m_RelativeVelocity_5; }
	inline Vector2_t2243707579 * get_address_of_m_RelativeVelocity_5() { return &___m_RelativeVelocity_5; }
	inline void set_m_RelativeVelocity_5(Vector2_t2243707579  value)
	{
		___m_RelativeVelocity_5 = value;
	}

	inline static int32_t get_offset_of_m_Enabled_6() { return static_cast<int32_t>(offsetof(Collision2D_t1539500754, ___m_Enabled_6)); }
	inline int32_t get_m_Enabled_6() const { return ___m_Enabled_6; }
	inline int32_t* get_address_of_m_Enabled_6() { return &___m_Enabled_6; }
	inline void set_m_Enabled_6(int32_t value)
	{
		___m_Enabled_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Collision2D
struct Collision2D_t1539500754_marshaled_pinvoke
{
	int32_t ___m_Collider_0;
	int32_t ___m_OtherCollider_1;
	int32_t ___m_Rigidbody_2;
	int32_t ___m_OtherRigidbody_3;
	ContactPoint2D_t3659330976 * ___m_Contacts_4;
	Vector2_t2243707579  ___m_RelativeVelocity_5;
	int32_t ___m_Enabled_6;
};
// Native definition for COM marshalling of UnityEngine.Collision2D
struct Collision2D_t1539500754_marshaled_com
{
	int32_t ___m_Collider_0;
	int32_t ___m_OtherCollider_1;
	int32_t ___m_Rigidbody_2;
	int32_t ___m_OtherRigidbody_3;
	ContactPoint2D_t3659330976 * ___m_Contacts_4;
	Vector2_t2243707579  ___m_RelativeVelocity_5;
	int32_t ___m_Enabled_6;
};
#endif // COLLISION2D_T1539500754_H
#ifndef OBJECT_T1021602117_H
#define OBJECT_T1021602117_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t1021602117  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t1021602117, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t1021602117_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t1021602117_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t1021602117_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t1021602117_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T1021602117_H
#ifndef CONTACTPOINT2D_T3659330976_H
#define CONTACTPOINT2D_T3659330976_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ContactPoint2D
struct  ContactPoint2D_t3659330976 
{
public:
	// UnityEngine.Vector2 UnityEngine.ContactPoint2D::m_Point
	Vector2_t2243707579  ___m_Point_0;
	// UnityEngine.Vector2 UnityEngine.ContactPoint2D::m_Normal
	Vector2_t2243707579  ___m_Normal_1;
	// UnityEngine.Vector2 UnityEngine.ContactPoint2D::m_RelativeVelocity
	Vector2_t2243707579  ___m_RelativeVelocity_2;
	// System.Single UnityEngine.ContactPoint2D::m_Separation
	float ___m_Separation_3;
	// System.Single UnityEngine.ContactPoint2D::m_NormalImpulse
	float ___m_NormalImpulse_4;
	// System.Single UnityEngine.ContactPoint2D::m_TangentImpulse
	float ___m_TangentImpulse_5;
	// System.Int32 UnityEngine.ContactPoint2D::m_Collider
	int32_t ___m_Collider_6;
	// System.Int32 UnityEngine.ContactPoint2D::m_OtherCollider
	int32_t ___m_OtherCollider_7;
	// System.Int32 UnityEngine.ContactPoint2D::m_Rigidbody
	int32_t ___m_Rigidbody_8;
	// System.Int32 UnityEngine.ContactPoint2D::m_OtherRigidbody
	int32_t ___m_OtherRigidbody_9;
	// System.Int32 UnityEngine.ContactPoint2D::m_Enabled
	int32_t ___m_Enabled_10;

public:
	inline static int32_t get_offset_of_m_Point_0() { return static_cast<int32_t>(offsetof(ContactPoint2D_t3659330976, ___m_Point_0)); }
	inline Vector2_t2243707579  get_m_Point_0() const { return ___m_Point_0; }
	inline Vector2_t2243707579 * get_address_of_m_Point_0() { return &___m_Point_0; }
	inline void set_m_Point_0(Vector2_t2243707579  value)
	{
		___m_Point_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(ContactPoint2D_t3659330976, ___m_Normal_1)); }
	inline Vector2_t2243707579  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector2_t2243707579 * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector2_t2243707579  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_RelativeVelocity_2() { return static_cast<int32_t>(offsetof(ContactPoint2D_t3659330976, ___m_RelativeVelocity_2)); }
	inline Vector2_t2243707579  get_m_RelativeVelocity_2() const { return ___m_RelativeVelocity_2; }
	inline Vector2_t2243707579 * get_address_of_m_RelativeVelocity_2() { return &___m_RelativeVelocity_2; }
	inline void set_m_RelativeVelocity_2(Vector2_t2243707579  value)
	{
		___m_RelativeVelocity_2 = value;
	}

	inline static int32_t get_offset_of_m_Separation_3() { return static_cast<int32_t>(offsetof(ContactPoint2D_t3659330976, ___m_Separation_3)); }
	inline float get_m_Separation_3() const { return ___m_Separation_3; }
	inline float* get_address_of_m_Separation_3() { return &___m_Separation_3; }
	inline void set_m_Separation_3(float value)
	{
		___m_Separation_3 = value;
	}

	inline static int32_t get_offset_of_m_NormalImpulse_4() { return static_cast<int32_t>(offsetof(ContactPoint2D_t3659330976, ___m_NormalImpulse_4)); }
	inline float get_m_NormalImpulse_4() const { return ___m_NormalImpulse_4; }
	inline float* get_address_of_m_NormalImpulse_4() { return &___m_NormalImpulse_4; }
	inline void set_m_NormalImpulse_4(float value)
	{
		___m_NormalImpulse_4 = value;
	}

	inline static int32_t get_offset_of_m_TangentImpulse_5() { return static_cast<int32_t>(offsetof(ContactPoint2D_t3659330976, ___m_TangentImpulse_5)); }
	inline float get_m_TangentImpulse_5() const { return ___m_TangentImpulse_5; }
	inline float* get_address_of_m_TangentImpulse_5() { return &___m_TangentImpulse_5; }
	inline void set_m_TangentImpulse_5(float value)
	{
		___m_TangentImpulse_5 = value;
	}

	inline static int32_t get_offset_of_m_Collider_6() { return static_cast<int32_t>(offsetof(ContactPoint2D_t3659330976, ___m_Collider_6)); }
	inline int32_t get_m_Collider_6() const { return ___m_Collider_6; }
	inline int32_t* get_address_of_m_Collider_6() { return &___m_Collider_6; }
	inline void set_m_Collider_6(int32_t value)
	{
		___m_Collider_6 = value;
	}

	inline static int32_t get_offset_of_m_OtherCollider_7() { return static_cast<int32_t>(offsetof(ContactPoint2D_t3659330976, ___m_OtherCollider_7)); }
	inline int32_t get_m_OtherCollider_7() const { return ___m_OtherCollider_7; }
	inline int32_t* get_address_of_m_OtherCollider_7() { return &___m_OtherCollider_7; }
	inline void set_m_OtherCollider_7(int32_t value)
	{
		___m_OtherCollider_7 = value;
	}

	inline static int32_t get_offset_of_m_Rigidbody_8() { return static_cast<int32_t>(offsetof(ContactPoint2D_t3659330976, ___m_Rigidbody_8)); }
	inline int32_t get_m_Rigidbody_8() const { return ___m_Rigidbody_8; }
	inline int32_t* get_address_of_m_Rigidbody_8() { return &___m_Rigidbody_8; }
	inline void set_m_Rigidbody_8(int32_t value)
	{
		___m_Rigidbody_8 = value;
	}

	inline static int32_t get_offset_of_m_OtherRigidbody_9() { return static_cast<int32_t>(offsetof(ContactPoint2D_t3659330976, ___m_OtherRigidbody_9)); }
	inline int32_t get_m_OtherRigidbody_9() const { return ___m_OtherRigidbody_9; }
	inline int32_t* get_address_of_m_OtherRigidbody_9() { return &___m_OtherRigidbody_9; }
	inline void set_m_OtherRigidbody_9(int32_t value)
	{
		___m_OtherRigidbody_9 = value;
	}

	inline static int32_t get_offset_of_m_Enabled_10() { return static_cast<int32_t>(offsetof(ContactPoint2D_t3659330976, ___m_Enabled_10)); }
	inline int32_t get_m_Enabled_10() const { return ___m_Enabled_10; }
	inline int32_t* get_address_of_m_Enabled_10() { return &___m_Enabled_10; }
	inline void set_m_Enabled_10(int32_t value)
	{
		___m_Enabled_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTACTPOINT2D_T3659330976_H
#ifndef RAY_T2469606224_H
#define RAY_T2469606224_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Ray
struct  Ray_t2469606224 
{
public:
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t2243707580  ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t2243707580  ___m_Direction_1;

public:
	inline static int32_t get_offset_of_m_Origin_0() { return static_cast<int32_t>(offsetof(Ray_t2469606224, ___m_Origin_0)); }
	inline Vector3_t2243707580  get_m_Origin_0() const { return ___m_Origin_0; }
	inline Vector3_t2243707580 * get_address_of_m_Origin_0() { return &___m_Origin_0; }
	inline void set_m_Origin_0(Vector3_t2243707580  value)
	{
		___m_Origin_0 = value;
	}

	inline static int32_t get_offset_of_m_Direction_1() { return static_cast<int32_t>(offsetof(Ray_t2469606224, ___m_Direction_1)); }
	inline Vector3_t2243707580  get_m_Direction_1() const { return ___m_Direction_1; }
	inline Vector3_t2243707580 * get_address_of_m_Direction_1() { return &___m_Direction_1; }
	inline void set_m_Direction_1(Vector3_t2243707580  value)
	{
		___m_Direction_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RAY_T2469606224_H
#ifndef CONTACTFILTER2D_T1672660996_H
#define CONTACTFILTER2D_T1672660996_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ContactFilter2D
struct  ContactFilter2D_t1672660996 
{
public:
	// System.Boolean UnityEngine.ContactFilter2D::useTriggers
	bool ___useTriggers_0;
	// System.Boolean UnityEngine.ContactFilter2D::useLayerMask
	bool ___useLayerMask_1;
	// System.Boolean UnityEngine.ContactFilter2D::useDepth
	bool ___useDepth_2;
	// System.Boolean UnityEngine.ContactFilter2D::useOutsideDepth
	bool ___useOutsideDepth_3;
	// System.Boolean UnityEngine.ContactFilter2D::useNormalAngle
	bool ___useNormalAngle_4;
	// System.Boolean UnityEngine.ContactFilter2D::useOutsideNormalAngle
	bool ___useOutsideNormalAngle_5;
	// UnityEngine.LayerMask UnityEngine.ContactFilter2D::layerMask
	LayerMask_t3188175821  ___layerMask_6;
	// System.Single UnityEngine.ContactFilter2D::minDepth
	float ___minDepth_7;
	// System.Single UnityEngine.ContactFilter2D::maxDepth
	float ___maxDepth_8;
	// System.Single UnityEngine.ContactFilter2D::minNormalAngle
	float ___minNormalAngle_9;
	// System.Single UnityEngine.ContactFilter2D::maxNormalAngle
	float ___maxNormalAngle_10;

public:
	inline static int32_t get_offset_of_useTriggers_0() { return static_cast<int32_t>(offsetof(ContactFilter2D_t1672660996, ___useTriggers_0)); }
	inline bool get_useTriggers_0() const { return ___useTriggers_0; }
	inline bool* get_address_of_useTriggers_0() { return &___useTriggers_0; }
	inline void set_useTriggers_0(bool value)
	{
		___useTriggers_0 = value;
	}

	inline static int32_t get_offset_of_useLayerMask_1() { return static_cast<int32_t>(offsetof(ContactFilter2D_t1672660996, ___useLayerMask_1)); }
	inline bool get_useLayerMask_1() const { return ___useLayerMask_1; }
	inline bool* get_address_of_useLayerMask_1() { return &___useLayerMask_1; }
	inline void set_useLayerMask_1(bool value)
	{
		___useLayerMask_1 = value;
	}

	inline static int32_t get_offset_of_useDepth_2() { return static_cast<int32_t>(offsetof(ContactFilter2D_t1672660996, ___useDepth_2)); }
	inline bool get_useDepth_2() const { return ___useDepth_2; }
	inline bool* get_address_of_useDepth_2() { return &___useDepth_2; }
	inline void set_useDepth_2(bool value)
	{
		___useDepth_2 = value;
	}

	inline static int32_t get_offset_of_useOutsideDepth_3() { return static_cast<int32_t>(offsetof(ContactFilter2D_t1672660996, ___useOutsideDepth_3)); }
	inline bool get_useOutsideDepth_3() const { return ___useOutsideDepth_3; }
	inline bool* get_address_of_useOutsideDepth_3() { return &___useOutsideDepth_3; }
	inline void set_useOutsideDepth_3(bool value)
	{
		___useOutsideDepth_3 = value;
	}

	inline static int32_t get_offset_of_useNormalAngle_4() { return static_cast<int32_t>(offsetof(ContactFilter2D_t1672660996, ___useNormalAngle_4)); }
	inline bool get_useNormalAngle_4() const { return ___useNormalAngle_4; }
	inline bool* get_address_of_useNormalAngle_4() { return &___useNormalAngle_4; }
	inline void set_useNormalAngle_4(bool value)
	{
		___useNormalAngle_4 = value;
	}

	inline static int32_t get_offset_of_useOutsideNormalAngle_5() { return static_cast<int32_t>(offsetof(ContactFilter2D_t1672660996, ___useOutsideNormalAngle_5)); }
	inline bool get_useOutsideNormalAngle_5() const { return ___useOutsideNormalAngle_5; }
	inline bool* get_address_of_useOutsideNormalAngle_5() { return &___useOutsideNormalAngle_5; }
	inline void set_useOutsideNormalAngle_5(bool value)
	{
		___useOutsideNormalAngle_5 = value;
	}

	inline static int32_t get_offset_of_layerMask_6() { return static_cast<int32_t>(offsetof(ContactFilter2D_t1672660996, ___layerMask_6)); }
	inline LayerMask_t3188175821  get_layerMask_6() const { return ___layerMask_6; }
	inline LayerMask_t3188175821 * get_address_of_layerMask_6() { return &___layerMask_6; }
	inline void set_layerMask_6(LayerMask_t3188175821  value)
	{
		___layerMask_6 = value;
	}

	inline static int32_t get_offset_of_minDepth_7() { return static_cast<int32_t>(offsetof(ContactFilter2D_t1672660996, ___minDepth_7)); }
	inline float get_minDepth_7() const { return ___minDepth_7; }
	inline float* get_address_of_minDepth_7() { return &___minDepth_7; }
	inline void set_minDepth_7(float value)
	{
		___minDepth_7 = value;
	}

	inline static int32_t get_offset_of_maxDepth_8() { return static_cast<int32_t>(offsetof(ContactFilter2D_t1672660996, ___maxDepth_8)); }
	inline float get_maxDepth_8() const { return ___maxDepth_8; }
	inline float* get_address_of_maxDepth_8() { return &___maxDepth_8; }
	inline void set_maxDepth_8(float value)
	{
		___maxDepth_8 = value;
	}

	inline static int32_t get_offset_of_minNormalAngle_9() { return static_cast<int32_t>(offsetof(ContactFilter2D_t1672660996, ___minNormalAngle_9)); }
	inline float get_minNormalAngle_9() const { return ___minNormalAngle_9; }
	inline float* get_address_of_minNormalAngle_9() { return &___minNormalAngle_9; }
	inline void set_minNormalAngle_9(float value)
	{
		___minNormalAngle_9 = value;
	}

	inline static int32_t get_offset_of_maxNormalAngle_10() { return static_cast<int32_t>(offsetof(ContactFilter2D_t1672660996, ___maxNormalAngle_10)); }
	inline float get_maxNormalAngle_10() const { return ___maxNormalAngle_10; }
	inline float* get_address_of_maxNormalAngle_10() { return &___maxNormalAngle_10; }
	inline void set_maxNormalAngle_10(float value)
	{
		___maxNormalAngle_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ContactFilter2D
struct ContactFilter2D_t1672660996_marshaled_pinvoke
{
	int32_t ___useTriggers_0;
	int32_t ___useLayerMask_1;
	int32_t ___useDepth_2;
	int32_t ___useOutsideDepth_3;
	int32_t ___useNormalAngle_4;
	int32_t ___useOutsideNormalAngle_5;
	LayerMask_t3188175821  ___layerMask_6;
	float ___minDepth_7;
	float ___maxDepth_8;
	float ___minNormalAngle_9;
	float ___maxNormalAngle_10;
};
// Native definition for COM marshalling of UnityEngine.ContactFilter2D
struct ContactFilter2D_t1672660996_marshaled_com
{
	int32_t ___useTriggers_0;
	int32_t ___useLayerMask_1;
	int32_t ___useDepth_2;
	int32_t ___useOutsideDepth_3;
	int32_t ___useNormalAngle_4;
	int32_t ___useOutsideNormalAngle_5;
	LayerMask_t3188175821  ___layerMask_6;
	float ___minDepth_7;
	float ___maxDepth_8;
	float ___minNormalAngle_9;
	float ___maxNormalAngle_10;
};
#endif // CONTACTFILTER2D_T1672660996_H
#ifndef RAYCASTHIT2D_T4063908774_H
#define RAYCASTHIT2D_T4063908774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RaycastHit2D
struct  RaycastHit2D_t4063908774 
{
public:
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Centroid
	Vector2_t2243707579  ___m_Centroid_0;
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Point
	Vector2_t2243707579  ___m_Point_1;
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Normal
	Vector2_t2243707579  ___m_Normal_2;
	// System.Single UnityEngine.RaycastHit2D::m_Distance
	float ___m_Distance_3;
	// System.Single UnityEngine.RaycastHit2D::m_Fraction
	float ___m_Fraction_4;
	// UnityEngine.Collider2D UnityEngine.RaycastHit2D::m_Collider
	Collider2D_t646061738 * ___m_Collider_5;

public:
	inline static int32_t get_offset_of_m_Centroid_0() { return static_cast<int32_t>(offsetof(RaycastHit2D_t4063908774, ___m_Centroid_0)); }
	inline Vector2_t2243707579  get_m_Centroid_0() const { return ___m_Centroid_0; }
	inline Vector2_t2243707579 * get_address_of_m_Centroid_0() { return &___m_Centroid_0; }
	inline void set_m_Centroid_0(Vector2_t2243707579  value)
	{
		___m_Centroid_0 = value;
	}

	inline static int32_t get_offset_of_m_Point_1() { return static_cast<int32_t>(offsetof(RaycastHit2D_t4063908774, ___m_Point_1)); }
	inline Vector2_t2243707579  get_m_Point_1() const { return ___m_Point_1; }
	inline Vector2_t2243707579 * get_address_of_m_Point_1() { return &___m_Point_1; }
	inline void set_m_Point_1(Vector2_t2243707579  value)
	{
		___m_Point_1 = value;
	}

	inline static int32_t get_offset_of_m_Normal_2() { return static_cast<int32_t>(offsetof(RaycastHit2D_t4063908774, ___m_Normal_2)); }
	inline Vector2_t2243707579  get_m_Normal_2() const { return ___m_Normal_2; }
	inline Vector2_t2243707579 * get_address_of_m_Normal_2() { return &___m_Normal_2; }
	inline void set_m_Normal_2(Vector2_t2243707579  value)
	{
		___m_Normal_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(RaycastHit2D_t4063908774, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_Fraction_4() { return static_cast<int32_t>(offsetof(RaycastHit2D_t4063908774, ___m_Fraction_4)); }
	inline float get_m_Fraction_4() const { return ___m_Fraction_4; }
	inline float* get_address_of_m_Fraction_4() { return &___m_Fraction_4; }
	inline void set_m_Fraction_4(float value)
	{
		___m_Fraction_4 = value;
	}

	inline static int32_t get_offset_of_m_Collider_5() { return static_cast<int32_t>(offsetof(RaycastHit2D_t4063908774, ___m_Collider_5)); }
	inline Collider2D_t646061738 * get_m_Collider_5() const { return ___m_Collider_5; }
	inline Collider2D_t646061738 ** get_address_of_m_Collider_5() { return &___m_Collider_5; }
	inline void set_m_Collider_5(Collider2D_t646061738 * value)
	{
		___m_Collider_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_Collider_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.RaycastHit2D
struct RaycastHit2D_t4063908774_marshaled_pinvoke
{
	Vector2_t2243707579  ___m_Centroid_0;
	Vector2_t2243707579  ___m_Point_1;
	Vector2_t2243707579  ___m_Normal_2;
	float ___m_Distance_3;
	float ___m_Fraction_4;
	Collider2D_t646061738 * ___m_Collider_5;
};
// Native definition for COM marshalling of UnityEngine.RaycastHit2D
struct RaycastHit2D_t4063908774_marshaled_com
{
	Vector2_t2243707579  ___m_Centroid_0;
	Vector2_t2243707579  ___m_Point_1;
	Vector2_t2243707579  ___m_Normal_2;
	float ___m_Distance_3;
	float ___m_Fraction_4;
	Collider2D_t646061738 * ___m_Collider_5;
};
#endif // RAYCASTHIT2D_T4063908774_H
#ifndef COMPONENT_T3819376471_H
#define COMPONENT_T3819376471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t3819376471  : public Object_t1021602117
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T3819376471_H
#ifndef RIGIDBODY2D_T502193897_H
#define RIGIDBODY2D_T502193897_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rigidbody2D
struct  Rigidbody2D_t502193897  : public Component_t3819376471
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RIGIDBODY2D_T502193897_H
#ifndef BEHAVIOUR_T955675639_H
#define BEHAVIOUR_T955675639_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t955675639  : public Component_t3819376471
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T955675639_H
#ifndef COLLIDER2D_T646061738_H
#define COLLIDER2D_T646061738_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collider2D
struct  Collider2D_t646061738  : public Behaviour_t955675639
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLIDER2D_T646061738_H
// UnityEngine.ContactPoint2D[]
struct ContactPoint2DU5BU5D_t1215651809  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ContactPoint2D_t3659330976  m_Items[1];

public:
	inline ContactPoint2D_t3659330976  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ContactPoint2D_t3659330976 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ContactPoint2D_t3659330976  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline ContactPoint2D_t3659330976  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ContactPoint2D_t3659330976 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ContactPoint2D_t3659330976  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.RaycastHit2D[]
struct RaycastHit2DU5BU5D_t4176517891  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RaycastHit2D_t4063908774  m_Items[1];

public:
	inline RaycastHit2D_t4063908774  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RaycastHit2D_t4063908774 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RaycastHit2D_t4063908774  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline RaycastHit2D_t4063908774  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RaycastHit2D_t4063908774 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RaycastHit2D_t4063908774  value)
	{
		m_Items[index] = value;
	}
};


// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C"  void List_1__ctor_m310736118_gshared (List_1_t2058570427 * __this, const RuntimeMethod* method);

// System.Boolean System.Single::IsNaN(System.Single)
extern "C"  bool Single_IsNaN_m2349591895 (RuntimeObject * __this /* static, unused */, float p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
extern "C"  float Mathf_Clamp_m1779415170 (RuntimeObject * __this /* static, unused */, float p0, float p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ContactFilter2D::CheckConsistency()
extern "C"  void ContactFilter2D_CheckConsistency_m4046727088 (ContactFilter2D_t1672660996 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ContactFilter2D::SetLayerMask(UnityEngine.LayerMask)
extern "C"  void ContactFilter2D_SetLayerMask_m1065107803 (ContactFilter2D_t1672660996 * __this, LayerMask_t3188175821  ___layerMask0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ContactFilter2D::SetDepth(System.Single,System.Single)
extern "C"  void ContactFilter2D_SetDepth_m1404256817 (ContactFilter2D_t1672660996 * __this, float ___minDepth0, float ___maxDepth1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics2D::get_queriesHitTriggers()
extern "C"  bool Physics2D_get_queriesHitTriggers_m494111288 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.LayerMask UnityEngine.LayerMask::op_Implicit(System.Int32)
extern "C"  LayerMask_t3188175821  LayerMask_op_Implicit_m1796475436 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit2D UnityEngine.Physics2D::Raycast(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32,System.Single,System.Single)
extern "C"  RaycastHit2D_t4063908774  Physics2D_Raycast_m298439588 (RuntimeObject * __this /* static, unused */, Vector2_t2243707579  ___origin0, Vector2_t2243707579  ___direction1, float ___distance2, int32_t ___layerMask3, float ___minDepth4, float ___maxDepth5, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ContactFilter2D UnityEngine.ContactFilter2D::CreateLegacyFilter(System.Int32,System.Single,System.Single)
extern "C"  ContactFilter2D_t1672660996  ContactFilter2D_CreateLegacyFilter_m2995965414 (RuntimeObject * __this /* static, unused */, int32_t ___layerMask0, float ___minDepth1, float ___maxDepth2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Physics2D::Internal_Raycast(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,UnityEngine.ContactFilter2D,UnityEngine.RaycastHit2D&)
extern "C"  void Physics2D_Internal_Raycast_m1939412323 (RuntimeObject * __this /* static, unused */, Vector2_t2243707579  ___origin0, Vector2_t2243707579  ___direction1, float ___distance2, ContactFilter2D_t1672660996  ___contactFilter3, RaycastHit2D_t4063908774 * ___raycastHit4, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Physics2D::Raycast(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.ContactFilter2D,UnityEngine.RaycastHit2D[],System.Single)
extern "C"  int32_t Physics2D_Raycast_m1029557985 (RuntimeObject * __this /* static, unused */, Vector2_t2243707579  ___origin0, Vector2_t2243707579  ___direction1, ContactFilter2D_t1672660996  ___contactFilter2, RaycastHit2DU5BU5D_t4176517891* ___results3, float ___distance4, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Physics2D::Internal_RaycastNonAlloc(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,UnityEngine.ContactFilter2D,UnityEngine.RaycastHit2D[])
extern "C"  int32_t Physics2D_Internal_RaycastNonAlloc_m2519397231 (RuntimeObject * __this /* static, unused */, Vector2_t2243707579  ___origin0, Vector2_t2243707579  ___direction1, float ___distance2, ContactFilter2D_t1672660996  ___contactFilter3, RaycastHit2DU5BU5D_t4176517891* ___results4, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Physics2D::INTERNAL_CALL_Internal_Raycast(UnityEngine.Vector2&,UnityEngine.Vector2&,System.Single,UnityEngine.ContactFilter2D&,UnityEngine.RaycastHit2D&)
extern "C"  void Physics2D_INTERNAL_CALL_Internal_Raycast_m333005000 (RuntimeObject * __this /* static, unused */, Vector2_t2243707579 * ___origin0, Vector2_t2243707579 * ___direction1, float ___distance2, ContactFilter2D_t1672660996 * ___contactFilter3, RaycastHit2D_t4063908774 * ___raycastHit4, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Physics2D::INTERNAL_CALL_Internal_RaycastNonAlloc(UnityEngine.Vector2&,UnityEngine.Vector2&,System.Single,UnityEngine.ContactFilter2D&,UnityEngine.RaycastHit2D[])
extern "C"  int32_t Physics2D_INTERNAL_CALL_Internal_RaycastNonAlloc_m1368406894 (RuntimeObject * __this /* static, unused */, Vector2_t2243707579 * ___origin0, Vector2_t2243707579 * ___direction1, float ___distance2, ContactFilter2D_t1672660996 * ___contactFilter3, RaycastHit2DU5BU5D_t4176517891* ___results4, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit2D[] UnityEngine.Physics2D::INTERNAL_CALL_GetRayIntersectionAll(UnityEngine.Ray&,System.Single,System.Int32)
extern "C"  RaycastHit2DU5BU5D_t4176517891* Physics2D_INTERNAL_CALL_GetRayIntersectionAll_m3838222705 (RuntimeObject * __this /* static, unused */, Ray_t2469606224 * ___ray0, float ___distance1, int32_t ___layerMask2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::.ctor()
#define List_1__ctor_m1935313869(__this, method) ((  void (*) (List_1_t4166282325 *, const RuntimeMethod*))List_1__ctor_m310736118_gshared)(__this, method)
// UnityEngine.Vector2 UnityEngine.RaycastHit2D::get_point()
extern "C"  Vector2_t2243707579  RaycastHit2D_get_point_m2962370910 (RaycastHit2D_t4063908774 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.RaycastHit2D::get_normal()
extern "C"  Vector2_t2243707579  RaycastHit2D_get_normal_m1680752829 (RaycastHit2D_t4063908774 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.RaycastHit2D::get_distance()
extern "C"  float RaycastHit2D_get_distance_m1439788004 (RaycastHit2D_t4063908774 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Collider2D UnityEngine.RaycastHit2D::get_collider()
extern "C"  Collider2D_t646061738 * RaycastHit2D_get_collider_m1095503671 (RaycastHit2D_t4063908774 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody2D::INTERNAL_set_velocity(UnityEngine.Vector2&)
extern "C"  void Rigidbody2D_INTERNAL_set_velocity_m213500543 (Rigidbody2D_t502193897 * __this, Vector2_t2243707579 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody2D::INTERNAL_CALL_AddForce(UnityEngine.Rigidbody2D,UnityEngine.Vector2&,UnityEngine.ForceMode2D)
extern "C"  void Rigidbody2D_INTERNAL_CALL_AddForce_m3401256999 (RuntimeObject * __this /* static, unused */, Rigidbody2D_t502193897 * ___self0, Vector2_t2243707579 * ___force1, int32_t ___mode2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.Collision2D
extern "C" void Collision2D_t1539500754_marshal_pinvoke(const Collision2D_t1539500754& unmarshaled, Collision2D_t1539500754_marshaled_pinvoke& marshaled)
{
	Il2CppCodeGenException* ___m_Contacts_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Contacts' of type 'Collision2D'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Contacts_4Exception);
}
extern "C" void Collision2D_t1539500754_marshal_pinvoke_back(const Collision2D_t1539500754_marshaled_pinvoke& marshaled, Collision2D_t1539500754& unmarshaled)
{
	Il2CppCodeGenException* ___m_Contacts_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Contacts' of type 'Collision2D'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Contacts_4Exception);
}
// Conversion method for clean up from marshalling of: UnityEngine.Collision2D
extern "C" void Collision2D_t1539500754_marshal_pinvoke_cleanup(Collision2D_t1539500754_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.Collision2D
extern "C" void Collision2D_t1539500754_marshal_com(const Collision2D_t1539500754& unmarshaled, Collision2D_t1539500754_marshaled_com& marshaled)
{
	Il2CppCodeGenException* ___m_Contacts_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Contacts' of type 'Collision2D'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Contacts_4Exception);
}
extern "C" void Collision2D_t1539500754_marshal_com_back(const Collision2D_t1539500754_marshaled_com& marshaled, Collision2D_t1539500754& unmarshaled)
{
	Il2CppCodeGenException* ___m_Contacts_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Contacts' of type 'Collision2D'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Contacts_4Exception);
}
// Conversion method for clean up from marshalling of: UnityEngine.Collision2D
extern "C" void Collision2D_t1539500754_marshal_com_cleanup(Collision2D_t1539500754_marshaled_com& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.ContactFilter2D
extern "C" void ContactFilter2D_t1672660996_marshal_pinvoke(const ContactFilter2D_t1672660996& unmarshaled, ContactFilter2D_t1672660996_marshaled_pinvoke& marshaled)
{
	marshaled.___useTriggers_0 = static_cast<int32_t>(unmarshaled.get_useTriggers_0());
	marshaled.___useLayerMask_1 = static_cast<int32_t>(unmarshaled.get_useLayerMask_1());
	marshaled.___useDepth_2 = static_cast<int32_t>(unmarshaled.get_useDepth_2());
	marshaled.___useOutsideDepth_3 = static_cast<int32_t>(unmarshaled.get_useOutsideDepth_3());
	marshaled.___useNormalAngle_4 = static_cast<int32_t>(unmarshaled.get_useNormalAngle_4());
	marshaled.___useOutsideNormalAngle_5 = static_cast<int32_t>(unmarshaled.get_useOutsideNormalAngle_5());
	marshaled.___layerMask_6 = unmarshaled.get_layerMask_6();
	marshaled.___minDepth_7 = unmarshaled.get_minDepth_7();
	marshaled.___maxDepth_8 = unmarshaled.get_maxDepth_8();
	marshaled.___minNormalAngle_9 = unmarshaled.get_minNormalAngle_9();
	marshaled.___maxNormalAngle_10 = unmarshaled.get_maxNormalAngle_10();
}
extern "C" void ContactFilter2D_t1672660996_marshal_pinvoke_back(const ContactFilter2D_t1672660996_marshaled_pinvoke& marshaled, ContactFilter2D_t1672660996& unmarshaled)
{
	bool unmarshaled_useTriggers_temp_0 = false;
	unmarshaled_useTriggers_temp_0 = static_cast<bool>(marshaled.___useTriggers_0);
	unmarshaled.set_useTriggers_0(unmarshaled_useTriggers_temp_0);
	bool unmarshaled_useLayerMask_temp_1 = false;
	unmarshaled_useLayerMask_temp_1 = static_cast<bool>(marshaled.___useLayerMask_1);
	unmarshaled.set_useLayerMask_1(unmarshaled_useLayerMask_temp_1);
	bool unmarshaled_useDepth_temp_2 = false;
	unmarshaled_useDepth_temp_2 = static_cast<bool>(marshaled.___useDepth_2);
	unmarshaled.set_useDepth_2(unmarshaled_useDepth_temp_2);
	bool unmarshaled_useOutsideDepth_temp_3 = false;
	unmarshaled_useOutsideDepth_temp_3 = static_cast<bool>(marshaled.___useOutsideDepth_3);
	unmarshaled.set_useOutsideDepth_3(unmarshaled_useOutsideDepth_temp_3);
	bool unmarshaled_useNormalAngle_temp_4 = false;
	unmarshaled_useNormalAngle_temp_4 = static_cast<bool>(marshaled.___useNormalAngle_4);
	unmarshaled.set_useNormalAngle_4(unmarshaled_useNormalAngle_temp_4);
	bool unmarshaled_useOutsideNormalAngle_temp_5 = false;
	unmarshaled_useOutsideNormalAngle_temp_5 = static_cast<bool>(marshaled.___useOutsideNormalAngle_5);
	unmarshaled.set_useOutsideNormalAngle_5(unmarshaled_useOutsideNormalAngle_temp_5);
	LayerMask_t3188175821  unmarshaled_layerMask_temp_6;
	memset(&unmarshaled_layerMask_temp_6, 0, sizeof(unmarshaled_layerMask_temp_6));
	unmarshaled_layerMask_temp_6 = marshaled.___layerMask_6;
	unmarshaled.set_layerMask_6(unmarshaled_layerMask_temp_6);
	float unmarshaled_minDepth_temp_7 = 0.0f;
	unmarshaled_minDepth_temp_7 = marshaled.___minDepth_7;
	unmarshaled.set_minDepth_7(unmarshaled_minDepth_temp_7);
	float unmarshaled_maxDepth_temp_8 = 0.0f;
	unmarshaled_maxDepth_temp_8 = marshaled.___maxDepth_8;
	unmarshaled.set_maxDepth_8(unmarshaled_maxDepth_temp_8);
	float unmarshaled_minNormalAngle_temp_9 = 0.0f;
	unmarshaled_minNormalAngle_temp_9 = marshaled.___minNormalAngle_9;
	unmarshaled.set_minNormalAngle_9(unmarshaled_minNormalAngle_temp_9);
	float unmarshaled_maxNormalAngle_temp_10 = 0.0f;
	unmarshaled_maxNormalAngle_temp_10 = marshaled.___maxNormalAngle_10;
	unmarshaled.set_maxNormalAngle_10(unmarshaled_maxNormalAngle_temp_10);
}
// Conversion method for clean up from marshalling of: UnityEngine.ContactFilter2D
extern "C" void ContactFilter2D_t1672660996_marshal_pinvoke_cleanup(ContactFilter2D_t1672660996_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.ContactFilter2D
extern "C" void ContactFilter2D_t1672660996_marshal_com(const ContactFilter2D_t1672660996& unmarshaled, ContactFilter2D_t1672660996_marshaled_com& marshaled)
{
	marshaled.___useTriggers_0 = static_cast<int32_t>(unmarshaled.get_useTriggers_0());
	marshaled.___useLayerMask_1 = static_cast<int32_t>(unmarshaled.get_useLayerMask_1());
	marshaled.___useDepth_2 = static_cast<int32_t>(unmarshaled.get_useDepth_2());
	marshaled.___useOutsideDepth_3 = static_cast<int32_t>(unmarshaled.get_useOutsideDepth_3());
	marshaled.___useNormalAngle_4 = static_cast<int32_t>(unmarshaled.get_useNormalAngle_4());
	marshaled.___useOutsideNormalAngle_5 = static_cast<int32_t>(unmarshaled.get_useOutsideNormalAngle_5());
	marshaled.___layerMask_6 = unmarshaled.get_layerMask_6();
	marshaled.___minDepth_7 = unmarshaled.get_minDepth_7();
	marshaled.___maxDepth_8 = unmarshaled.get_maxDepth_8();
	marshaled.___minNormalAngle_9 = unmarshaled.get_minNormalAngle_9();
	marshaled.___maxNormalAngle_10 = unmarshaled.get_maxNormalAngle_10();
}
extern "C" void ContactFilter2D_t1672660996_marshal_com_back(const ContactFilter2D_t1672660996_marshaled_com& marshaled, ContactFilter2D_t1672660996& unmarshaled)
{
	bool unmarshaled_useTriggers_temp_0 = false;
	unmarshaled_useTriggers_temp_0 = static_cast<bool>(marshaled.___useTriggers_0);
	unmarshaled.set_useTriggers_0(unmarshaled_useTriggers_temp_0);
	bool unmarshaled_useLayerMask_temp_1 = false;
	unmarshaled_useLayerMask_temp_1 = static_cast<bool>(marshaled.___useLayerMask_1);
	unmarshaled.set_useLayerMask_1(unmarshaled_useLayerMask_temp_1);
	bool unmarshaled_useDepth_temp_2 = false;
	unmarshaled_useDepth_temp_2 = static_cast<bool>(marshaled.___useDepth_2);
	unmarshaled.set_useDepth_2(unmarshaled_useDepth_temp_2);
	bool unmarshaled_useOutsideDepth_temp_3 = false;
	unmarshaled_useOutsideDepth_temp_3 = static_cast<bool>(marshaled.___useOutsideDepth_3);
	unmarshaled.set_useOutsideDepth_3(unmarshaled_useOutsideDepth_temp_3);
	bool unmarshaled_useNormalAngle_temp_4 = false;
	unmarshaled_useNormalAngle_temp_4 = static_cast<bool>(marshaled.___useNormalAngle_4);
	unmarshaled.set_useNormalAngle_4(unmarshaled_useNormalAngle_temp_4);
	bool unmarshaled_useOutsideNormalAngle_temp_5 = false;
	unmarshaled_useOutsideNormalAngle_temp_5 = static_cast<bool>(marshaled.___useOutsideNormalAngle_5);
	unmarshaled.set_useOutsideNormalAngle_5(unmarshaled_useOutsideNormalAngle_temp_5);
	LayerMask_t3188175821  unmarshaled_layerMask_temp_6;
	memset(&unmarshaled_layerMask_temp_6, 0, sizeof(unmarshaled_layerMask_temp_6));
	unmarshaled_layerMask_temp_6 = marshaled.___layerMask_6;
	unmarshaled.set_layerMask_6(unmarshaled_layerMask_temp_6);
	float unmarshaled_minDepth_temp_7 = 0.0f;
	unmarshaled_minDepth_temp_7 = marshaled.___minDepth_7;
	unmarshaled.set_minDepth_7(unmarshaled_minDepth_temp_7);
	float unmarshaled_maxDepth_temp_8 = 0.0f;
	unmarshaled_maxDepth_temp_8 = marshaled.___maxDepth_8;
	unmarshaled.set_maxDepth_8(unmarshaled_maxDepth_temp_8);
	float unmarshaled_minNormalAngle_temp_9 = 0.0f;
	unmarshaled_minNormalAngle_temp_9 = marshaled.___minNormalAngle_9;
	unmarshaled.set_minNormalAngle_9(unmarshaled_minNormalAngle_temp_9);
	float unmarshaled_maxNormalAngle_temp_10 = 0.0f;
	unmarshaled_maxNormalAngle_temp_10 = marshaled.___maxNormalAngle_10;
	unmarshaled.set_maxNormalAngle_10(unmarshaled_maxNormalAngle_temp_10);
}
// Conversion method for clean up from marshalling of: UnityEngine.ContactFilter2D
extern "C" void ContactFilter2D_t1672660996_marshal_com_cleanup(ContactFilter2D_t1672660996_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.ContactFilter2D::CheckConsistency()
extern "C"  void ContactFilter2D_CheckConsistency_m4046727088 (ContactFilter2D_t1672660996 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ContactFilter2D_CheckConsistency_m4046727088_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	ContactFilter2D_t1672660996 * G_B3_0 = NULL;
	ContactFilter2D_t1672660996 * G_B1_0 = NULL;
	ContactFilter2D_t1672660996 * G_B2_0 = NULL;
	ContactFilter2D_t1672660996 * G_B4_0 = NULL;
	float G_B5_0 = 0.0f;
	ContactFilter2D_t1672660996 * G_B5_1 = NULL;
	ContactFilter2D_t1672660996 * G_B8_0 = NULL;
	ContactFilter2D_t1672660996 * G_B6_0 = NULL;
	ContactFilter2D_t1672660996 * G_B7_0 = NULL;
	ContactFilter2D_t1672660996 * G_B9_0 = NULL;
	float G_B10_0 = 0.0f;
	ContactFilter2D_t1672660996 * G_B10_1 = NULL;
	ContactFilter2D_t1672660996 * G_B14_0 = NULL;
	ContactFilter2D_t1672660996 * G_B13_0 = NULL;
	float G_B15_0 = 0.0f;
	ContactFilter2D_t1672660996 * G_B15_1 = NULL;
	ContactFilter2D_t1672660996 * G_B17_0 = NULL;
	ContactFilter2D_t1672660996 * G_B16_0 = NULL;
	float G_B18_0 = 0.0f;
	ContactFilter2D_t1672660996 * G_B18_1 = NULL;
	{
		float L_0 = __this->get_minDepth_7();
		G_B1_0 = __this;
		if ((((float)L_0) == ((float)(-std::numeric_limits<float>::infinity()))))
		{
			G_B3_0 = __this;
			goto IL_0032;
		}
	}
	{
		float L_1 = __this->get_minDepth_7();
		G_B2_0 = G_B1_0;
		if ((((float)L_1) == ((float)(std::numeric_limits<float>::infinity()))))
		{
			G_B3_0 = G_B1_0;
			goto IL_0032;
		}
	}
	{
		float L_2 = __this->get_minDepth_7();
		bool L_3 = Single_IsNaN_m2349591895(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		G_B3_0 = G_B2_0;
		if (!L_3)
		{
			G_B4_0 = G_B2_0;
			goto IL_003c;
		}
	}

IL_0032:
	{
		G_B5_0 = (-std::numeric_limits<float>::max());
		G_B5_1 = G_B3_0;
		goto IL_0042;
	}

IL_003c:
	{
		float L_4 = __this->get_minDepth_7();
		G_B5_0 = L_4;
		G_B5_1 = G_B4_0;
	}

IL_0042:
	{
		G_B5_1->set_minDepth_7(G_B5_0);
		float L_5 = __this->get_maxDepth_8();
		G_B6_0 = __this;
		if ((((float)L_5) == ((float)(-std::numeric_limits<float>::infinity()))))
		{
			G_B8_0 = __this;
			goto IL_0078;
		}
	}
	{
		float L_6 = __this->get_maxDepth_8();
		G_B7_0 = G_B6_0;
		if ((((float)L_6) == ((float)(std::numeric_limits<float>::infinity()))))
		{
			G_B8_0 = G_B6_0;
			goto IL_0078;
		}
	}
	{
		float L_7 = __this->get_maxDepth_8();
		bool L_8 = Single_IsNaN_m2349591895(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		G_B8_0 = G_B7_0;
		if (!L_8)
		{
			G_B9_0 = G_B7_0;
			goto IL_0082;
		}
	}

IL_0078:
	{
		G_B10_0 = (std::numeric_limits<float>::max());
		G_B10_1 = G_B8_0;
		goto IL_0088;
	}

IL_0082:
	{
		float L_9 = __this->get_maxDepth_8();
		G_B10_0 = L_9;
		G_B10_1 = G_B9_0;
	}

IL_0088:
	{
		G_B10_1->set_maxDepth_8(G_B10_0);
		float L_10 = __this->get_minDepth_7();
		float L_11 = __this->get_maxDepth_8();
		if ((!(((float)L_10) > ((float)L_11))))
		{
			goto IL_00ba;
		}
	}
	{
		float L_12 = __this->get_minDepth_7();
		V_0 = L_12;
		float L_13 = __this->get_maxDepth_8();
		__this->set_minDepth_7(L_13);
		float L_14 = V_0;
		__this->set_maxDepth_8(L_14);
	}

IL_00ba:
	{
		float L_15 = __this->get_minNormalAngle_9();
		bool L_16 = Single_IsNaN_m2349591895(NULL /*static, unused*/, L_15, /*hidden argument*/NULL);
		G_B13_0 = __this;
		if (!L_16)
		{
			G_B14_0 = __this;
			goto IL_00d5;
		}
	}
	{
		G_B15_0 = (0.0f);
		G_B15_1 = G_B13_0;
		goto IL_00ea;
	}

IL_00d5:
	{
		float L_17 = __this->get_minNormalAngle_9();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t2336485820_il2cpp_TypeInfo_var);
		float L_18 = Mathf_Clamp_m1779415170(NULL /*static, unused*/, L_17, (0.0f), (359.9999f), /*hidden argument*/NULL);
		G_B15_0 = L_18;
		G_B15_1 = G_B14_0;
	}

IL_00ea:
	{
		G_B15_1->set_minNormalAngle_9(G_B15_0);
		float L_19 = __this->get_maxNormalAngle_10();
		bool L_20 = Single_IsNaN_m2349591895(NULL /*static, unused*/, L_19, /*hidden argument*/NULL);
		G_B16_0 = __this;
		if (!L_20)
		{
			G_B17_0 = __this;
			goto IL_010a;
		}
	}
	{
		G_B18_0 = (359.9999f);
		G_B18_1 = G_B16_0;
		goto IL_011f;
	}

IL_010a:
	{
		float L_21 = __this->get_maxNormalAngle_10();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t2336485820_il2cpp_TypeInfo_var);
		float L_22 = Mathf_Clamp_m1779415170(NULL /*static, unused*/, L_21, (0.0f), (359.9999f), /*hidden argument*/NULL);
		G_B18_0 = L_22;
		G_B18_1 = G_B17_0;
	}

IL_011f:
	{
		G_B18_1->set_maxNormalAngle_10(G_B18_0);
		float L_23 = __this->get_minNormalAngle_9();
		float L_24 = __this->get_maxNormalAngle_10();
		if ((!(((float)L_23) > ((float)L_24))))
		{
			goto IL_0151;
		}
	}
	{
		float L_25 = __this->get_minNormalAngle_9();
		V_1 = L_25;
		float L_26 = __this->get_maxNormalAngle_10();
		__this->set_minNormalAngle_9(L_26);
		float L_27 = V_1;
		__this->set_maxNormalAngle_10(L_27);
	}

IL_0151:
	{
		return;
	}
}
extern "C"  void ContactFilter2D_CheckConsistency_m4046727088_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	ContactFilter2D_t1672660996 * _thisAdjusted = reinterpret_cast<ContactFilter2D_t1672660996 *>(__this + 1);
	ContactFilter2D_CheckConsistency_m4046727088(_thisAdjusted, method);
}
// System.Void UnityEngine.ContactFilter2D::SetLayerMask(UnityEngine.LayerMask)
extern "C"  void ContactFilter2D_SetLayerMask_m1065107803 (ContactFilter2D_t1672660996 * __this, LayerMask_t3188175821  ___layerMask0, const RuntimeMethod* method)
{
	{
		LayerMask_t3188175821  L_0 = ___layerMask0;
		__this->set_layerMask_6(L_0);
		__this->set_useLayerMask_1((bool)1);
		return;
	}
}
extern "C"  void ContactFilter2D_SetLayerMask_m1065107803_AdjustorThunk (RuntimeObject * __this, LayerMask_t3188175821  ___layerMask0, const RuntimeMethod* method)
{
	ContactFilter2D_t1672660996 * _thisAdjusted = reinterpret_cast<ContactFilter2D_t1672660996 *>(__this + 1);
	ContactFilter2D_SetLayerMask_m1065107803(_thisAdjusted, ___layerMask0, method);
}
// System.Void UnityEngine.ContactFilter2D::SetDepth(System.Single,System.Single)
extern "C"  void ContactFilter2D_SetDepth_m1404256817 (ContactFilter2D_t1672660996 * __this, float ___minDepth0, float ___maxDepth1, const RuntimeMethod* method)
{
	{
		float L_0 = ___minDepth0;
		__this->set_minDepth_7(L_0);
		float L_1 = ___maxDepth1;
		__this->set_maxDepth_8(L_1);
		__this->set_useDepth_2((bool)1);
		ContactFilter2D_CheckConsistency_m4046727088(__this, /*hidden argument*/NULL);
		return;
	}
}
extern "C"  void ContactFilter2D_SetDepth_m1404256817_AdjustorThunk (RuntimeObject * __this, float ___minDepth0, float ___maxDepth1, const RuntimeMethod* method)
{
	ContactFilter2D_t1672660996 * _thisAdjusted = reinterpret_cast<ContactFilter2D_t1672660996 *>(__this + 1);
	ContactFilter2D_SetDepth_m1404256817(_thisAdjusted, ___minDepth0, ___maxDepth1, method);
}
// UnityEngine.ContactFilter2D UnityEngine.ContactFilter2D::CreateLegacyFilter(System.Int32,System.Single,System.Single)
extern "C"  ContactFilter2D_t1672660996  ContactFilter2D_CreateLegacyFilter_m2995965414 (RuntimeObject * __this /* static, unused */, int32_t ___layerMask0, float ___minDepth1, float ___maxDepth2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ContactFilter2D_CreateLegacyFilter_m2995965414_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ContactFilter2D_t1672660996  V_0;
	memset(&V_0, 0, sizeof(V_0));
	ContactFilter2D_t1672660996  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		Initobj (ContactFilter2D_t1672660996_il2cpp_TypeInfo_var, (&V_0));
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t2540166467_il2cpp_TypeInfo_var);
		bool L_0 = Physics2D_get_queriesHitTriggers_m494111288(NULL /*static, unused*/, /*hidden argument*/NULL);
		(&V_0)->set_useTriggers_0(L_0);
		int32_t L_1 = ___layerMask0;
		LayerMask_t3188175821  L_2 = LayerMask_op_Implicit_m1796475436(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		ContactFilter2D_SetLayerMask_m1065107803((&V_0), L_2, /*hidden argument*/NULL);
		float L_3 = ___minDepth1;
		float L_4 = ___maxDepth2;
		ContactFilter2D_SetDepth_m1404256817((&V_0), L_3, L_4, /*hidden argument*/NULL);
		ContactFilter2D_t1672660996  L_5 = V_0;
		V_1 = L_5;
		goto IL_0032;
	}

IL_0032:
	{
		ContactFilter2D_t1672660996  L_6 = V_1;
		return L_6;
	}
}
// System.Boolean UnityEngine.Physics2D::get_queriesHitTriggers()
extern "C"  bool Physics2D_get_queriesHitTriggers_m494111288 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef bool (*Physics2D_get_queriesHitTriggers_m494111288_ftn) ();
	static Physics2D_get_queriesHitTriggers_m494111288_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics2D_get_queriesHitTriggers_m494111288_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics2D::get_queriesHitTriggers()");
	bool retVal = _il2cpp_icall_func();
	return retVal;
}
// UnityEngine.RaycastHit2D UnityEngine.Physics2D::Raycast(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32,System.Single)
extern "C"  RaycastHit2D_t4063908774  Physics2D_Raycast_m608778191 (RuntimeObject * __this /* static, unused */, Vector2_t2243707579  ___origin0, Vector2_t2243707579  ___direction1, float ___distance2, int32_t ___layerMask3, float ___minDepth4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Physics2D_Raycast_m608778191_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	RaycastHit2D_t4063908774  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		V_0 = (std::numeric_limits<float>::infinity());
		Vector2_t2243707579  L_0 = ___origin0;
		Vector2_t2243707579  L_1 = ___direction1;
		float L_2 = ___distance2;
		int32_t L_3 = ___layerMask3;
		float L_4 = ___minDepth4;
		float L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t2540166467_il2cpp_TypeInfo_var);
		RaycastHit2D_t4063908774  L_6 = Physics2D_Raycast_m298439588(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		RaycastHit2D_t4063908774  L_7 = V_1;
		return L_7;
	}
}
// UnityEngine.RaycastHit2D UnityEngine.Physics2D::Raycast(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32)
extern "C"  RaycastHit2D_t4063908774  Physics2D_Raycast_m2434840196 (RuntimeObject * __this /* static, unused */, Vector2_t2243707579  ___origin0, Vector2_t2243707579  ___direction1, float ___distance2, int32_t ___layerMask3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Physics2D_Raycast_m2434840196_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	RaycastHit2D_t4063908774  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		V_0 = (std::numeric_limits<float>::infinity());
		V_1 = (-std::numeric_limits<float>::infinity());
		Vector2_t2243707579  L_0 = ___origin0;
		Vector2_t2243707579  L_1 = ___direction1;
		float L_2 = ___distance2;
		int32_t L_3 = ___layerMask3;
		float L_4 = V_1;
		float L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t2540166467_il2cpp_TypeInfo_var);
		RaycastHit2D_t4063908774  L_6 = Physics2D_Raycast_m298439588(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		V_2 = L_6;
		goto IL_001e;
	}

IL_001e:
	{
		RaycastHit2D_t4063908774  L_7 = V_2;
		return L_7;
	}
}
// UnityEngine.RaycastHit2D UnityEngine.Physics2D::Raycast(UnityEngine.Vector2,UnityEngine.Vector2,System.Single)
extern "C"  RaycastHit2D_t4063908774  Physics2D_Raycast_m1275014335 (RuntimeObject * __this /* static, unused */, Vector2_t2243707579  ___origin0, Vector2_t2243707579  ___direction1, float ___distance2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Physics2D_Raycast_m1275014335_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	RaycastHit2D_t4063908774  V_3;
	memset(&V_3, 0, sizeof(V_3));
	{
		V_0 = (std::numeric_limits<float>::infinity());
		V_1 = (-std::numeric_limits<float>::infinity());
		V_2 = ((int32_t)-5);
		Vector2_t2243707579  L_0 = ___origin0;
		Vector2_t2243707579  L_1 = ___direction1;
		float L_2 = ___distance2;
		int32_t L_3 = V_2;
		float L_4 = V_1;
		float L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t2540166467_il2cpp_TypeInfo_var);
		RaycastHit2D_t4063908774  L_6 = Physics2D_Raycast_m298439588(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		V_3 = L_6;
		goto IL_0021;
	}

IL_0021:
	{
		RaycastHit2D_t4063908774  L_7 = V_3;
		return L_7;
	}
}
// UnityEngine.RaycastHit2D UnityEngine.Physics2D::Raycast(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  RaycastHit2D_t4063908774  Physics2D_Raycast_m3897525470 (RuntimeObject * __this /* static, unused */, Vector2_t2243707579  ___origin0, Vector2_t2243707579  ___direction1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Physics2D_Raycast_m3897525470_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	float V_3 = 0.0f;
	RaycastHit2D_t4063908774  V_4;
	memset(&V_4, 0, sizeof(V_4));
	{
		V_0 = (std::numeric_limits<float>::infinity());
		V_1 = (-std::numeric_limits<float>::infinity());
		V_2 = ((int32_t)-5);
		V_3 = (std::numeric_limits<float>::infinity());
		Vector2_t2243707579  L_0 = ___origin0;
		Vector2_t2243707579  L_1 = ___direction1;
		float L_2 = V_3;
		int32_t L_3 = V_2;
		float L_4 = V_1;
		float L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t2540166467_il2cpp_TypeInfo_var);
		RaycastHit2D_t4063908774  L_6 = Physics2D_Raycast_m298439588(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		V_4 = L_6;
		goto IL_0028;
	}

IL_0028:
	{
		RaycastHit2D_t4063908774  L_7 = V_4;
		return L_7;
	}
}
// UnityEngine.RaycastHit2D UnityEngine.Physics2D::Raycast(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32,System.Single,System.Single)
extern "C"  RaycastHit2D_t4063908774  Physics2D_Raycast_m298439588 (RuntimeObject * __this /* static, unused */, Vector2_t2243707579  ___origin0, Vector2_t2243707579  ___direction1, float ___distance2, int32_t ___layerMask3, float ___minDepth4, float ___maxDepth5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Physics2D_Raycast_m298439588_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ContactFilter2D_t1672660996  V_0;
	memset(&V_0, 0, sizeof(V_0));
	RaycastHit2D_t4063908774  V_1;
	memset(&V_1, 0, sizeof(V_1));
	RaycastHit2D_t4063908774  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		int32_t L_0 = ___layerMask3;
		float L_1 = ___minDepth4;
		float L_2 = ___maxDepth5;
		ContactFilter2D_t1672660996  L_3 = ContactFilter2D_CreateLegacyFilter_m2995965414(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		Vector2_t2243707579  L_4 = ___origin0;
		Vector2_t2243707579  L_5 = ___direction1;
		float L_6 = ___distance2;
		ContactFilter2D_t1672660996  L_7 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t2540166467_il2cpp_TypeInfo_var);
		Physics2D_Internal_Raycast_m1939412323(NULL /*static, unused*/, L_4, L_5, L_6, L_7, (&V_1), /*hidden argument*/NULL);
		RaycastHit2D_t4063908774  L_8 = V_1;
		V_2 = L_8;
		goto IL_001e;
	}

IL_001e:
	{
		RaycastHit2D_t4063908774  L_9 = V_2;
		return L_9;
	}
}
// System.Int32 UnityEngine.Physics2D::Raycast(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.ContactFilter2D,UnityEngine.RaycastHit2D[])
extern "C"  int32_t Physics2D_Raycast_m2247349452 (RuntimeObject * __this /* static, unused */, Vector2_t2243707579  ___origin0, Vector2_t2243707579  ___direction1, ContactFilter2D_t1672660996  ___contactFilter2, RaycastHit2DU5BU5D_t4176517891* ___results3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Physics2D_Raycast_m2247349452_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	{
		V_0 = (std::numeric_limits<float>::infinity());
		Vector2_t2243707579  L_0 = ___origin0;
		Vector2_t2243707579  L_1 = ___direction1;
		ContactFilter2D_t1672660996  L_2 = ___contactFilter2;
		RaycastHit2DU5BU5D_t4176517891* L_3 = ___results3;
		float L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t2540166467_il2cpp_TypeInfo_var);
		int32_t L_5 = Physics2D_Raycast_m1029557985(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		goto IL_0017;
	}

IL_0017:
	{
		int32_t L_6 = V_1;
		return L_6;
	}
}
// System.Int32 UnityEngine.Physics2D::Raycast(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.ContactFilter2D,UnityEngine.RaycastHit2D[],System.Single)
extern "C"  int32_t Physics2D_Raycast_m1029557985 (RuntimeObject * __this /* static, unused */, Vector2_t2243707579  ___origin0, Vector2_t2243707579  ___direction1, ContactFilter2D_t1672660996  ___contactFilter2, RaycastHit2DU5BU5D_t4176517891* ___results3, float ___distance4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Physics2D_Raycast_m1029557985_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		Vector2_t2243707579  L_0 = ___origin0;
		Vector2_t2243707579  L_1 = ___direction1;
		float L_2 = ___distance4;
		ContactFilter2D_t1672660996  L_3 = ___contactFilter2;
		RaycastHit2DU5BU5D_t4176517891* L_4 = ___results3;
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t2540166467_il2cpp_TypeInfo_var);
		int32_t L_5 = Physics2D_Internal_RaycastNonAlloc_m2519397231(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		goto IL_0012;
	}

IL_0012:
	{
		int32_t L_6 = V_0;
		return L_6;
	}
}
// System.Void UnityEngine.Physics2D::Internal_Raycast(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,UnityEngine.ContactFilter2D,UnityEngine.RaycastHit2D&)
extern "C"  void Physics2D_Internal_Raycast_m1939412323 (RuntimeObject * __this /* static, unused */, Vector2_t2243707579  ___origin0, Vector2_t2243707579  ___direction1, float ___distance2, ContactFilter2D_t1672660996  ___contactFilter3, RaycastHit2D_t4063908774 * ___raycastHit4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Physics2D_Internal_Raycast_m1939412323_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ___distance2;
		RaycastHit2D_t4063908774 * L_1 = ___raycastHit4;
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t2540166467_il2cpp_TypeInfo_var);
		Physics2D_INTERNAL_CALL_Internal_Raycast_m333005000(NULL /*static, unused*/, (&___origin0), (&___direction1), L_0, (&___contactFilter3), L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Physics2D::INTERNAL_CALL_Internal_Raycast(UnityEngine.Vector2&,UnityEngine.Vector2&,System.Single,UnityEngine.ContactFilter2D&,UnityEngine.RaycastHit2D&)
extern "C"  void Physics2D_INTERNAL_CALL_Internal_Raycast_m333005000 (RuntimeObject * __this /* static, unused */, Vector2_t2243707579 * ___origin0, Vector2_t2243707579 * ___direction1, float ___distance2, ContactFilter2D_t1672660996 * ___contactFilter3, RaycastHit2D_t4063908774 * ___raycastHit4, const RuntimeMethod* method)
{
	typedef void (*Physics2D_INTERNAL_CALL_Internal_Raycast_m333005000_ftn) (Vector2_t2243707579 *, Vector2_t2243707579 *, float, ContactFilter2D_t1672660996 *, RaycastHit2D_t4063908774 *);
	static Physics2D_INTERNAL_CALL_Internal_Raycast_m333005000_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics2D_INTERNAL_CALL_Internal_Raycast_m333005000_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics2D::INTERNAL_CALL_Internal_Raycast(UnityEngine.Vector2&,UnityEngine.Vector2&,System.Single,UnityEngine.ContactFilter2D&,UnityEngine.RaycastHit2D&)");
	_il2cpp_icall_func(___origin0, ___direction1, ___distance2, ___contactFilter3, ___raycastHit4);
}
// System.Int32 UnityEngine.Physics2D::Internal_RaycastNonAlloc(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,UnityEngine.ContactFilter2D,UnityEngine.RaycastHit2D[])
extern "C"  int32_t Physics2D_Internal_RaycastNonAlloc_m2519397231 (RuntimeObject * __this /* static, unused */, Vector2_t2243707579  ___origin0, Vector2_t2243707579  ___direction1, float ___distance2, ContactFilter2D_t1672660996  ___contactFilter3, RaycastHit2DU5BU5D_t4176517891* ___results4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Physics2D_Internal_RaycastNonAlloc_m2519397231_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		float L_0 = ___distance2;
		RaycastHit2DU5BU5D_t4176517891* L_1 = ___results4;
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t2540166467_il2cpp_TypeInfo_var);
		int32_t L_2 = Physics2D_INTERNAL_CALL_Internal_RaycastNonAlloc_m1368406894(NULL /*static, unused*/, (&___origin0), (&___direction1), L_0, (&___contactFilter3), L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0015;
	}

IL_0015:
	{
		int32_t L_3 = V_0;
		return L_3;
	}
}
// System.Int32 UnityEngine.Physics2D::INTERNAL_CALL_Internal_RaycastNonAlloc(UnityEngine.Vector2&,UnityEngine.Vector2&,System.Single,UnityEngine.ContactFilter2D&,UnityEngine.RaycastHit2D[])
extern "C"  int32_t Physics2D_INTERNAL_CALL_Internal_RaycastNonAlloc_m1368406894 (RuntimeObject * __this /* static, unused */, Vector2_t2243707579 * ___origin0, Vector2_t2243707579 * ___direction1, float ___distance2, ContactFilter2D_t1672660996 * ___contactFilter3, RaycastHit2DU5BU5D_t4176517891* ___results4, const RuntimeMethod* method)
{
	typedef int32_t (*Physics2D_INTERNAL_CALL_Internal_RaycastNonAlloc_m1368406894_ftn) (Vector2_t2243707579 *, Vector2_t2243707579 *, float, ContactFilter2D_t1672660996 *, RaycastHit2DU5BU5D_t4176517891*);
	static Physics2D_INTERNAL_CALL_Internal_RaycastNonAlloc_m1368406894_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics2D_INTERNAL_CALL_Internal_RaycastNonAlloc_m1368406894_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics2D::INTERNAL_CALL_Internal_RaycastNonAlloc(UnityEngine.Vector2&,UnityEngine.Vector2&,System.Single,UnityEngine.ContactFilter2D&,UnityEngine.RaycastHit2D[])");
	int32_t retVal = _il2cpp_icall_func(___origin0, ___direction1, ___distance2, ___contactFilter3, ___results4);
	return retVal;
}
// UnityEngine.RaycastHit2D[] UnityEngine.Physics2D::GetRayIntersectionAll(UnityEngine.Ray,System.Single,System.Int32)
extern "C"  RaycastHit2DU5BU5D_t4176517891* Physics2D_GetRayIntersectionAll_m4061247206 (RuntimeObject * __this /* static, unused */, Ray_t2469606224  ___ray0, float ___distance1, int32_t ___layerMask2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Physics2D_GetRayIntersectionAll_m4061247206_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RaycastHit2DU5BU5D_t4176517891* V_0 = NULL;
	{
		float L_0 = ___distance1;
		int32_t L_1 = ___layerMask2;
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t2540166467_il2cpp_TypeInfo_var);
		RaycastHit2DU5BU5D_t4176517891* L_2 = Physics2D_INTERNAL_CALL_GetRayIntersectionAll_m3838222705(NULL /*static, unused*/, (&___ray0), L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		RaycastHit2DU5BU5D_t4176517891* L_3 = V_0;
		return L_3;
	}
}
// UnityEngine.RaycastHit2D[] UnityEngine.Physics2D::GetRayIntersectionAll(UnityEngine.Ray,System.Single)
extern "C"  RaycastHit2DU5BU5D_t4176517891* Physics2D_GetRayIntersectionAll_m1867109771 (RuntimeObject * __this /* static, unused */, Ray_t2469606224  ___ray0, float ___distance1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Physics2D_GetRayIntersectionAll_m1867109771_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RaycastHit2DU5BU5D_t4176517891* V_1 = NULL;
	{
		V_0 = ((int32_t)-5);
		float L_0 = ___distance1;
		int32_t L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t2540166467_il2cpp_TypeInfo_var);
		RaycastHit2DU5BU5D_t4176517891* L_2 = Physics2D_INTERNAL_CALL_GetRayIntersectionAll_m3838222705(NULL /*static, unused*/, (&___ray0), L_0, L_1, /*hidden argument*/NULL);
		V_1 = L_2;
		goto IL_0013;
	}

IL_0013:
	{
		RaycastHit2DU5BU5D_t4176517891* L_3 = V_1;
		return L_3;
	}
}
// UnityEngine.RaycastHit2D[] UnityEngine.Physics2D::GetRayIntersectionAll(UnityEngine.Ray)
extern "C"  RaycastHit2DU5BU5D_t4176517891* Physics2D_GetRayIntersectionAll_m3730967068 (RuntimeObject * __this /* static, unused */, Ray_t2469606224  ___ray0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Physics2D_GetRayIntersectionAll_m3730967068_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	RaycastHit2DU5BU5D_t4176517891* V_2 = NULL;
	{
		V_0 = ((int32_t)-5);
		V_1 = (std::numeric_limits<float>::infinity());
		float L_0 = V_1;
		int32_t L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t2540166467_il2cpp_TypeInfo_var);
		RaycastHit2DU5BU5D_t4176517891* L_2 = Physics2D_INTERNAL_CALL_GetRayIntersectionAll_m3838222705(NULL /*static, unused*/, (&___ray0), L_0, L_1, /*hidden argument*/NULL);
		V_2 = L_2;
		goto IL_0019;
	}

IL_0019:
	{
		RaycastHit2DU5BU5D_t4176517891* L_3 = V_2;
		return L_3;
	}
}
// UnityEngine.RaycastHit2D[] UnityEngine.Physics2D::INTERNAL_CALL_GetRayIntersectionAll(UnityEngine.Ray&,System.Single,System.Int32)
extern "C"  RaycastHit2DU5BU5D_t4176517891* Physics2D_INTERNAL_CALL_GetRayIntersectionAll_m3838222705 (RuntimeObject * __this /* static, unused */, Ray_t2469606224 * ___ray0, float ___distance1, int32_t ___layerMask2, const RuntimeMethod* method)
{
	typedef RaycastHit2DU5BU5D_t4176517891* (*Physics2D_INTERNAL_CALL_GetRayIntersectionAll_m3838222705_ftn) (Ray_t2469606224 *, float, int32_t);
	static Physics2D_INTERNAL_CALL_GetRayIntersectionAll_m3838222705_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics2D_INTERNAL_CALL_GetRayIntersectionAll_m3838222705_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics2D::INTERNAL_CALL_GetRayIntersectionAll(UnityEngine.Ray&,System.Single,System.Int32)");
	RaycastHit2DU5BU5D_t4176517891* retVal = _il2cpp_icall_func(___ray0, ___distance1, ___layerMask2);
	return retVal;
}
// System.Void UnityEngine.Physics2D::.cctor()
extern "C"  void Physics2D__cctor_m2451529022 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Physics2D__cctor_m2451529022_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t4166282325 * L_0 = (List_1_t4166282325 *)il2cpp_codegen_object_new(List_1_t4166282325_il2cpp_TypeInfo_var);
		List_1__ctor_m1935313869(L_0, /*hidden argument*/List_1__ctor_m1935313869_RuntimeMethod_var);
		((Physics2D_t2540166467_StaticFields*)il2cpp_codegen_static_fields_for(Physics2D_t2540166467_il2cpp_TypeInfo_var))->set_m_LastDisabledRigidbody2D_0(L_0);
		return;
	}
}
// Conversion methods for marshalling of: UnityEngine.RaycastHit2D
extern "C" void RaycastHit2D_t4063908774_marshal_pinvoke(const RaycastHit2D_t4063908774& unmarshaled, RaycastHit2D_t4063908774_marshaled_pinvoke& marshaled)
{
	Il2CppCodeGenException* ___m_Collider_5Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Collider' of type 'RaycastHit2D': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Collider_5Exception);
}
extern "C" void RaycastHit2D_t4063908774_marshal_pinvoke_back(const RaycastHit2D_t4063908774_marshaled_pinvoke& marshaled, RaycastHit2D_t4063908774& unmarshaled)
{
	Il2CppCodeGenException* ___m_Collider_5Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Collider' of type 'RaycastHit2D': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Collider_5Exception);
}
// Conversion method for clean up from marshalling of: UnityEngine.RaycastHit2D
extern "C" void RaycastHit2D_t4063908774_marshal_pinvoke_cleanup(RaycastHit2D_t4063908774_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.RaycastHit2D
extern "C" void RaycastHit2D_t4063908774_marshal_com(const RaycastHit2D_t4063908774& unmarshaled, RaycastHit2D_t4063908774_marshaled_com& marshaled)
{
	Il2CppCodeGenException* ___m_Collider_5Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Collider' of type 'RaycastHit2D': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Collider_5Exception);
}
extern "C" void RaycastHit2D_t4063908774_marshal_com_back(const RaycastHit2D_t4063908774_marshaled_com& marshaled, RaycastHit2D_t4063908774& unmarshaled)
{
	Il2CppCodeGenException* ___m_Collider_5Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Collider' of type 'RaycastHit2D': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Collider_5Exception);
}
// Conversion method for clean up from marshalling of: UnityEngine.RaycastHit2D
extern "C" void RaycastHit2D_t4063908774_marshal_com_cleanup(RaycastHit2D_t4063908774_marshaled_com& marshaled)
{
}
// UnityEngine.Vector2 UnityEngine.RaycastHit2D::get_point()
extern "C"  Vector2_t2243707579  RaycastHit2D_get_point_m2962370910 (RaycastHit2D_t4063908774 * __this, const RuntimeMethod* method)
{
	Vector2_t2243707579  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Vector2_t2243707579  L_0 = __this->get_m_Point_1();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		Vector2_t2243707579  L_1 = V_0;
		return L_1;
	}
}
extern "C"  Vector2_t2243707579  RaycastHit2D_get_point_m2962370910_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	RaycastHit2D_t4063908774 * _thisAdjusted = reinterpret_cast<RaycastHit2D_t4063908774 *>(__this + 1);
	return RaycastHit2D_get_point_m2962370910(_thisAdjusted, method);
}
// UnityEngine.Vector2 UnityEngine.RaycastHit2D::get_normal()
extern "C"  Vector2_t2243707579  RaycastHit2D_get_normal_m1680752829 (RaycastHit2D_t4063908774 * __this, const RuntimeMethod* method)
{
	Vector2_t2243707579  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Vector2_t2243707579  L_0 = __this->get_m_Normal_2();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		Vector2_t2243707579  L_1 = V_0;
		return L_1;
	}
}
extern "C"  Vector2_t2243707579  RaycastHit2D_get_normal_m1680752829_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	RaycastHit2D_t4063908774 * _thisAdjusted = reinterpret_cast<RaycastHit2D_t4063908774 *>(__this + 1);
	return RaycastHit2D_get_normal_m1680752829(_thisAdjusted, method);
}
// System.Single UnityEngine.RaycastHit2D::get_distance()
extern "C"  float RaycastHit2D_get_distance_m1439788004 (RaycastHit2D_t4063908774 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->get_m_Distance_3();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		float L_1 = V_0;
		return L_1;
	}
}
extern "C"  float RaycastHit2D_get_distance_m1439788004_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	RaycastHit2D_t4063908774 * _thisAdjusted = reinterpret_cast<RaycastHit2D_t4063908774 *>(__this + 1);
	return RaycastHit2D_get_distance_m1439788004(_thisAdjusted, method);
}
// UnityEngine.Collider2D UnityEngine.RaycastHit2D::get_collider()
extern "C"  Collider2D_t646061738 * RaycastHit2D_get_collider_m1095503671 (RaycastHit2D_t4063908774 * __this, const RuntimeMethod* method)
{
	Collider2D_t646061738 * V_0 = NULL;
	{
		Collider2D_t646061738 * L_0 = __this->get_m_Collider_5();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		Collider2D_t646061738 * L_1 = V_0;
		return L_1;
	}
}
extern "C"  Collider2D_t646061738 * RaycastHit2D_get_collider_m1095503671_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	RaycastHit2D_t4063908774 * _thisAdjusted = reinterpret_cast<RaycastHit2D_t4063908774 *>(__this + 1);
	return RaycastHit2D_get_collider_m1095503671(_thisAdjusted, method);
}
// System.Void UnityEngine.Rigidbody2D::set_velocity(UnityEngine.Vector2)
extern "C"  void Rigidbody2D_set_velocity_m2161463521 (Rigidbody2D_t502193897 * __this, Vector2_t2243707579  ___value0, const RuntimeMethod* method)
{
	{
		Rigidbody2D_INTERNAL_set_velocity_m213500543(__this, (&___value0), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Rigidbody2D::INTERNAL_set_velocity(UnityEngine.Vector2&)
extern "C"  void Rigidbody2D_INTERNAL_set_velocity_m213500543 (Rigidbody2D_t502193897 * __this, Vector2_t2243707579 * ___value0, const RuntimeMethod* method)
{
	typedef void (*Rigidbody2D_INTERNAL_set_velocity_m213500543_ftn) (Rigidbody2D_t502193897 *, Vector2_t2243707579 *);
	static Rigidbody2D_INTERNAL_set_velocity_m213500543_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody2D_INTERNAL_set_velocity_m213500543_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody2D::INTERNAL_set_velocity(UnityEngine.Vector2&)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Rigidbody2D::AddForce(UnityEngine.Vector2)
extern "C"  void Rigidbody2D_AddForce_m1687473487 (Rigidbody2D_t502193897 * __this, Vector2_t2243707579  ___force0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		int32_t L_0 = V_0;
		Rigidbody2D_INTERNAL_CALL_AddForce_m3401256999(NULL /*static, unused*/, __this, (&___force0), L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Rigidbody2D::INTERNAL_CALL_AddForce(UnityEngine.Rigidbody2D,UnityEngine.Vector2&,UnityEngine.ForceMode2D)
extern "C"  void Rigidbody2D_INTERNAL_CALL_AddForce_m3401256999 (RuntimeObject * __this /* static, unused */, Rigidbody2D_t502193897 * ___self0, Vector2_t2243707579 * ___force1, int32_t ___mode2, const RuntimeMethod* method)
{
	typedef void (*Rigidbody2D_INTERNAL_CALL_AddForce_m3401256999_ftn) (Rigidbody2D_t502193897 *, Vector2_t2243707579 *, int32_t);
	static Rigidbody2D_INTERNAL_CALL_AddForce_m3401256999_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody2D_INTERNAL_CALL_AddForce_m3401256999_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody2D::INTERNAL_CALL_AddForce(UnityEngine.Rigidbody2D,UnityEngine.Vector2&,UnityEngine.ForceMode2D)");
	_il2cpp_icall_func(___self0, ___force1, ___mode2);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif

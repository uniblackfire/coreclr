//
// Copyright (c) Microsoft. All rights reserved.
// Licensed under the MIT license. See LICENSE file in the project root for full license information.
//



#ifndef FEATURE_PREJIT 
#error FEATURE_PREJIT is required for this file
#endif


#ifndef DEFINE_ITEM_KIND 
#define DEFINE_ITEM_KIND(id)
#endif

//-----------------------------------------------------------------------------
// Items
//-----------------------------------------------------------------------------

DEFINE_ITEM_KIND(ITEM_MODULE)
DEFINE_ITEM_KIND(ITEM_FILEREF_MAP)
DEFINE_ITEM_KIND(ITEM_ASSEMREF_MAP)
DEFINE_ITEM_KIND(ITEM_GC_STATIC_HANDLES_HOT)
DEFINE_ITEM_KIND(ITEM_DYNAMIC_STATICS_INFO_TABLE)
DEFINE_ITEM_KIND(ITEM_DYNAMIC_STATICS_INFO_ENTRY)
DEFINE_ITEM_KIND(ITEM_RID_MAP_HOT)
DEFINE_ITEM_KIND(ITEM_TYPEDEF_MAP)
DEFINE_ITEM_KIND(ITEM_MODULE_CCTOR_INFO_HOT)
DEFINE_ITEM_KIND(ITEM_MODULE_CCTOR_INFO_COLD)
DEFINE_ITEM_KIND(ITEM_STORED_METHOD_SIG)
DEFINE_ITEM_KIND(ITEM_STORED_METHOD_SIG_READONLY)
DEFINE_ITEM_KIND(ITEM_STORED_METHOD_SIG_READONLY_WARM)
DEFINE_ITEM_KIND(ITEM_STORED_METHOD_NAME)
DEFINE_ITEM_KIND(ITEM_PROPERTY_NAME_SET)
DEFINE_ITEM_KIND(ITEM_BINDER)
DEFINE_ITEM_KIND(ITEM_BINDER_ITEMS)
DEFINE_ITEM_KIND(ITEM_TYPEREF_MAP)
DEFINE_ITEM_KIND(ITEM_METHODDEF_MAP)
DEFINE_ITEM_KIND(ITEM_FIELDDEF_MAP)
DEFINE_ITEM_KIND(ITEM_MEMBERREF_MAP)
DEFINE_ITEM_KIND(ITEM_GENERICPARAM_MAP)
DEFINE_ITEM_KIND(ITEM_GENERICTYPEDEF_MAP)
DEFINE_ITEM_KIND(ITEM_PROPERTYINFO_MAP)
DEFINE_ITEM_KIND(ITEM_DISPATCH_MAP)
DEFINE_ITEM_KIND(ITEM_PARAM_TYPEDESC)
DEFINE_ITEM_KIND(ITEM_ARRAY_TYPEDESC)
#ifdef FEATURE_COMINTEROP 
DEFINE_ITEM_KIND(ITEM_SPARSE_VTABLE_MAP_TABLE)
DEFINE_ITEM_KIND(ITEM_SPARSE_VTABLE_MAP_ENTRIES)
#endif // FEATURE_COMINTEROP
DEFINE_ITEM_KIND(ITEM_EECLASS)
DEFINE_ITEM_KIND(ITEM_EECLASS_COLD)
DEFINE_ITEM_KIND(ITEM_EECLASS_WARM)
DEFINE_ITEM_KIND(ITEM_CLASS_VARIANCE_INFO)
DEFINE_ITEM_KIND(ITEM_FIELD_DESC_LIST)
DEFINE_ITEM_KIND(ITEM_FIELD_MARSHALERS)
DEFINE_ITEM_KIND(ITEM_ENUM_VALUES)
DEFINE_ITEM_KIND(ITEM_ENUM_NAME_POINTERS)
DEFINE_ITEM_KIND(ITEM_ENUM_NAME)
DEFINE_ITEM_KIND(ITEM_DICTIONARY_LAYOUT)
DEFINE_ITEM_KIND(ITEM_TYVAR_TYPEDESC)
DEFINE_ITEM_KIND(ITEM_FPTR_TYPEDESC)
DEFINE_ITEM_KIND(ITEM_DICTIONARY)
DEFINE_ITEM_KIND(ITEM_DICTIONARY_WRITEABLE)
DEFINE_ITEM_KIND(ITEM_METHOD_TABLE)
DEFINE_ITEM_KIND(ITEM_METHOD_TABLE_SPECIAL_WRITEABLE)
DEFINE_ITEM_KIND(ITEM_METHOD_TABLE_DATA_HOT_WRITEABLE)
DEFINE_ITEM_KIND(ITEM_METHOD_TABLE_DATA_COLD_WRITEABLE)
DEFINE_ITEM_KIND(ITEM_INTERFACE_MAP)
DEFINE_ITEM_KIND(ITEM_VTABLE_CHUNK)
DEFINE_ITEM_KIND(ITEM_GUID_INFO)
DEFINE_ITEM_KIND(ITEM_GENERICS_STATIC_FIELDDESCS)
DEFINE_ITEM_KIND(ITEM_RVA_STATICS)
DEFINE_ITEM_KIND(ITEM_DEBUG)
DEFINE_ITEM_KIND(ITEM_GC_STATIC_HANDLES_COLD)
DEFINE_ITEM_KIND(ITEM_METHOD_PRECODE_COLD_WRITEABLE)
DEFINE_ITEM_KIND(ITEM_METHOD_PRECODE_COLD)
DEFINE_ITEM_KIND(ITEM_METHOD_PRECODE_HOT_WRITEABLE)
DEFINE_ITEM_KIND(ITEM_METHOD_PRECODE_HOT)
DEFINE_ITEM_KIND(ITEM_METHOD_DESC_COLD_WRITEABLE)
DEFINE_ITEM_KIND(ITEM_METHOD_DESC_COLD)
DEFINE_ITEM_KIND(ITEM_METHOD_DESC_HOT_WRITEABLE)
DEFINE_ITEM_KIND(ITEM_METHOD_DESC_HOT)
DEFINE_ITEM_KIND(ITEM_CROSS_DOMAIN_INFO)
DEFINE_ITEM_KIND(ITEM_CER_ROOT_TABLE)
DEFINE_ITEM_KIND(ITEM_CER_METHOD_LIST)
DEFINE_ITEM_KIND(ITEM_CER_RESTORE_FLAGS)
DEFINE_ITEM_KIND(ITEM_VTS_INFO)
DEFINE_ITEM_KIND(ITEM_MODULE_SECDESC)
DEFINE_ITEM_KIND(ITEM_FROZEN_OBJECTS)
DEFINE_ITEM_KIND(ITEM_NGEN_HASH_HOT)
DEFINE_ITEM_KIND(ITEM_NGEN_HASH_COLD)
DEFINE_ITEM_KIND(ITEM_NGEN_HASH_BUCKETLIST_HOT)
DEFINE_ITEM_KIND(ITEM_NGEN_HASH_BUCKETLIST_COLD)
DEFINE_ITEM_KIND(ITEM_NGEN_HASH_ENTRIES_HOT)
DEFINE_ITEM_KIND(ITEM_NGEN_HASH_ENTRIES_COLD)
DEFINE_ITEM_KIND(ITEM_NGEN_HASH_ENTRIES_RO_HOT)
DEFINE_ITEM_KIND(ITEM_NGEN_HASH_ENTRIES_RO_COLD)
DEFINE_ITEM_KIND(ITEM_COMPRESSED_MAP)
DEFINE_ITEM_KIND(ITEM_INLINING_DATA)

#ifdef DEFINE_ITEM_KIND 
#undef DEFINE_ITEM_KIND
#endif

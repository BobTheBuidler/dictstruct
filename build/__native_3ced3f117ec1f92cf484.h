#ifndef MYPYC_NATIVE_3ced3f117ec1f92cf484_H
#define MYPYC_NATIVE_3ced3f117ec1f92cf484_H
#include <Python.h>
#include <CPy.h>
#ifndef MYPYC_DECLARED_tuple_T3OOO
#define MYPYC_DECLARED_tuple_T3OOO
typedef struct tuple_T3OOO {
    PyObject *f0;
    PyObject *f1;
    PyObject *f2;
} tuple_T3OOO;
#endif

#ifndef MYPYC_DECLARED_tuple_T2OO
#define MYPYC_DECLARED_tuple_T2OO
typedef struct tuple_T2OO {
    PyObject *f0;
    PyObject *f1;
} tuple_T2OO;
#endif

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    vectorcallfunc vectorcall;
} dictstruct____main_____bool___3_DictStruct_objObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    vectorcallfunc vectorcall;
} dictstruct____main_____contains___3_DictStruct_objObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    vectorcallfunc vectorcall;
} dictstruct____main___get_DictStruct_objObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    vectorcallfunc vectorcall;
} dictstruct____main_____getitem___3_DictStruct_objObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    vectorcallfunc vectorcall;
} dictstruct____main_____getattribute___3_DictStruct_objObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    vectorcallfunc vectorcall;
} dictstruct____main_____setitem___3_DictStruct_objObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_self__;
    PyObject *_self;
    PyObject *_type;
    PyObject *_value;
    PyObject *_traceback;
    PyObject *_arg;
    CPyTagged ___mypyc_next_label__;
    PyObject *___mypyc_temp__0;
    CPyTagged ___mypyc_temp__1;
    PyObject *_field;
} dictstruct____main_____iter___3_DictStruct_envObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    vectorcallfunc vectorcall;
} dictstruct____main_____iter___3_DictStruct_objObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_env__;
} dictstruct____main_____iter___3_DictStruct_genObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    vectorcallfunc vectorcall;
} dictstruct____main_____len___3_DictStruct_objObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_self__;
    PyObject *_self;
    PyObject *_type;
    PyObject *_value;
    PyObject *_traceback;
    PyObject *_arg;
    CPyTagged ___mypyc_next_label__;
    PyObject *___mypyc_temp__2;
    tuple_T3OOO ___mypyc_temp__3;
} dictstruct____main___keys_DictStruct_envObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    vectorcallfunc vectorcall;
} dictstruct____main___keys_DictStruct_objObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_env__;
} dictstruct____main___keys_DictStruct_genObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_self__;
    PyObject *_self;
    PyObject *_type;
    PyObject *_value;
    PyObject *_traceback;
    PyObject *_arg;
    CPyTagged ___mypyc_next_label__;
    PyObject *___mypyc_temp__4;
    CPyTagged ___mypyc_temp__5;
    PyObject *_key;
} dictstruct____main___items_DictStruct_envObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    vectorcallfunc vectorcall;
} dictstruct____main___items_DictStruct_objObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_env__;
} dictstruct____main___items_DictStruct_genObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_self__;
    PyObject *_self;
    PyObject *_type;
    PyObject *_value;
    PyObject *_traceback;
    PyObject *_arg;
    CPyTagged ___mypyc_next_label__;
    PyObject *___mypyc_temp__6;
    CPyTagged ___mypyc_temp__7;
    PyObject *_key;
} dictstruct____main___values_DictStruct_envObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    vectorcallfunc vectorcall;
} dictstruct____main___values_DictStruct_objObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_env__;
} dictstruct____main___values_DictStruct_genObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    vectorcallfunc vectorcall;
} dictstruct____main_____hash___3_DictStruct_objObject;


struct export_table_3ced3f117ec1f92cf484 {
    char (*CPyDef_dictstruct_____top_level__)(void);
    PyObject **CPyStatic__main___UNSET;
    PyObject **CPyStatic__main____getattribute;
    PyTypeObject **CPyType__main___DictStruct;
    PyTypeObject **CPyType__main_____bool___3_DictStruct_obj;
    PyObject *(*CPyDef__main_____bool___3_DictStruct_obj)(void);
    PyTypeObject **CPyType__main_____contains___3_DictStruct_obj;
    PyObject *(*CPyDef__main_____contains___3_DictStruct_obj)(void);
    PyTypeObject **CPyType__main___get_DictStruct_obj;
    PyObject *(*CPyDef__main___get_DictStruct_obj)(void);
    PyTypeObject **CPyType__main_____getitem___3_DictStruct_obj;
    PyObject *(*CPyDef__main_____getitem___3_DictStruct_obj)(void);
    PyTypeObject **CPyType__main_____getattribute___3_DictStruct_obj;
    PyObject *(*CPyDef__main_____getattribute___3_DictStruct_obj)(void);
    PyTypeObject **CPyType__main_____setitem___3_DictStruct_obj;
    PyObject *(*CPyDef__main_____setitem___3_DictStruct_obj)(void);
    PyTypeObject **CPyType__main_____iter___3_DictStruct_env;
    PyObject *(*CPyDef__main_____iter___3_DictStruct_env)(void);
    PyTypeObject **CPyType__main_____iter___3_DictStruct_obj;
    PyObject *(*CPyDef__main_____iter___3_DictStruct_obj)(void);
    PyTypeObject **CPyType__main_____iter___3_DictStruct_gen;
    PyObject *(*CPyDef__main_____iter___3_DictStruct_gen)(void);
    PyTypeObject **CPyType__main_____len___3_DictStruct_obj;
    PyObject *(*CPyDef__main_____len___3_DictStruct_obj)(void);
    PyTypeObject **CPyType__main___keys_DictStruct_env;
    PyObject *(*CPyDef__main___keys_DictStruct_env)(void);
    PyTypeObject **CPyType__main___keys_DictStruct_obj;
    PyObject *(*CPyDef__main___keys_DictStruct_obj)(void);
    PyTypeObject **CPyType__main___keys_DictStruct_gen;
    PyObject *(*CPyDef__main___keys_DictStruct_gen)(void);
    PyTypeObject **CPyType__main___items_DictStruct_env;
    PyObject *(*CPyDef__main___items_DictStruct_env)(void);
    PyTypeObject **CPyType__main___items_DictStruct_obj;
    PyObject *(*CPyDef__main___items_DictStruct_obj)(void);
    PyTypeObject **CPyType__main___items_DictStruct_gen;
    PyObject *(*CPyDef__main___items_DictStruct_gen)(void);
    PyTypeObject **CPyType__main___values_DictStruct_env;
    PyObject *(*CPyDef__main___values_DictStruct_env)(void);
    PyTypeObject **CPyType__main___values_DictStruct_obj;
    PyObject *(*CPyDef__main___values_DictStruct_obj)(void);
    PyTypeObject **CPyType__main___values_DictStruct_gen;
    PyObject *(*CPyDef__main___values_DictStruct_gen)(void);
    PyTypeObject **CPyType__main_____hash___3_DictStruct_obj;
    PyObject *(*CPyDef__main_____hash___3_DictStruct_obj)(void);
    PyObject *(*CPyDef__main_____bool___3_DictStruct_obj_____get__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner);
    char (*CPyDef__main_____bool___3_DictStruct_obj_____call__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_self);
    PyObject *(*CPyDef__main_____contains___3_DictStruct_obj_____get__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner);
    char (*CPyDef__main_____contains___3_DictStruct_obj_____call__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_self, PyObject *cpy_r_key);
    PyObject *(*CPyDef__main___get_DictStruct_obj_____get__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner);
    PyObject *(*CPyDef__main___get_DictStruct_obj_____call__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_self, PyObject *cpy_r_key, PyObject *cpy_r_default);
    PyObject *(*CPyDef__main_____getitem___3_DictStruct_obj_____get__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner);
    PyObject *(*CPyDef__main_____getitem___3_DictStruct_obj_____call__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_self, PyObject *cpy_r_attr);
    PyObject *(*CPyDef__main_____getattribute___3_DictStruct_obj_____get__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner);
    PyObject *(*CPyDef__main_____getattribute___3_DictStruct_obj_____call__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_self, PyObject *cpy_r_attr);
    PyObject *(*CPyDef__main_____setitem___3_DictStruct_obj_____get__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner);
    char (*CPyDef__main_____setitem___3_DictStruct_obj_____call__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_self, PyObject *cpy_r_attr, PyObject *cpy_r_value);
    PyObject *(*CPyDef__main_____iter___3_DictStruct_obj_____get__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner);
    PyObject *(*CPyDef__main_____iter___3_DictStruct_gen_____mypyc_generator_helper__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg);
    PyObject *(*CPyDef__main_____iter___3_DictStruct_gen_____next__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef__main_____iter___3_DictStruct_gen___send)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
    PyObject *(*CPyDef__main_____iter___3_DictStruct_gen_____iter__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef__main_____iter___3_DictStruct_gen___throw)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
    PyObject *(*CPyDef__main_____iter___3_DictStruct_gen___close)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef__main_____iter___3_DictStruct_obj_____call__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_self);
    PyObject *(*CPyDef__main_____len___3_DictStruct_obj_____get__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner);
    CPyTagged (*CPyDef__main_____len___3_DictStruct_obj_____call__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_self);
    PyObject *(*CPyDef__main___keys_DictStruct_obj_____get__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner);
    PyObject *(*CPyDef__main___keys_DictStruct_gen_____mypyc_generator_helper__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg);
    PyObject *(*CPyDef__main___keys_DictStruct_gen_____next__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef__main___keys_DictStruct_gen___send)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
    PyObject *(*CPyDef__main___keys_DictStruct_gen_____iter__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef__main___keys_DictStruct_gen___throw)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
    PyObject *(*CPyDef__main___keys_DictStruct_gen___close)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef__main___keys_DictStruct_obj_____call__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_self);
    PyObject *(*CPyDef__main___items_DictStruct_obj_____get__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner);
    PyObject *(*CPyDef__main___items_DictStruct_gen_____mypyc_generator_helper__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg);
    PyObject *(*CPyDef__main___items_DictStruct_gen_____next__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef__main___items_DictStruct_gen___send)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
    PyObject *(*CPyDef__main___items_DictStruct_gen_____iter__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef__main___items_DictStruct_gen___throw)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
    PyObject *(*CPyDef__main___items_DictStruct_gen___close)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef__main___items_DictStruct_obj_____call__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_self);
    PyObject *(*CPyDef__main___values_DictStruct_obj_____get__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner);
    PyObject *(*CPyDef__main___values_DictStruct_gen_____mypyc_generator_helper__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg);
    PyObject *(*CPyDef__main___values_DictStruct_gen_____next__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef__main___values_DictStruct_gen___send)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
    PyObject *(*CPyDef__main___values_DictStruct_gen_____iter__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef__main___values_DictStruct_gen___throw)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
    PyObject *(*CPyDef__main___values_DictStruct_gen___close)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef__main___values_DictStruct_obj_____call__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_self);
    PyObject *(*CPyDef__main_____hash___3_DictStruct_obj_____get__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner);
    CPyTagged (*CPyDef__main_____hash___3_DictStruct_obj_____call__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_self);
    char (*CPyDef__main_____top_level__)(void);
};
#endif

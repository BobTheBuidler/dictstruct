#include "init.c"
#include "getargs.c"
#include "getargsfast.c"
#include "int_ops.c"
#include "float_ops.c"
#include "str_ops.c"
#include "bytes_ops.c"
#include "list_ops.c"
#include "dict_ops.c"
#include "set_ops.c"
#include "tuple_ops.c"
#include "exc_ops.c"
#include "misc_ops.c"
#include "generic_ops.c"
#include "pythonsupport.c"
#include "__native_3ced3f117ec1f92cf484.h"
#include "__native_internal_3ced3f117ec1f92cf484.h"
static PyMethodDef dictstructmodule_methods[] = {
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef dictstructmodule = {
    PyModuleDef_HEAD_INIT,
    "dictstruct",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    dictstructmodule_methods
};

PyObject *CPyInit_dictstruct(void)
{
    PyObject* modname = NULL;
    if (CPyModule_dictstruct_internal) {
        Py_INCREF(CPyModule_dictstruct_internal);
        return CPyModule_dictstruct_internal;
    }
    CPyModule_dictstruct_internal = PyModule_Create(&dictstructmodule);
    if (unlikely(CPyModule_dictstruct_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_dictstruct_internal, "__name__");
    CPyStatic_dictstruct___globals = PyModule_GetDict(CPyModule_dictstruct_internal);
    if (unlikely(CPyStatic_dictstruct___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_dictstruct_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_dictstruct_internal;
    fail:
    Py_CLEAR(CPyModule_dictstruct_internal);
    Py_CLEAR(modname);
    return NULL;
}

char CPyDef_dictstruct_____top_level__(void) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    CPyPtr cpy_r_r16;
    CPyPtr cpy_r_r17;
    CPyPtr cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    int32_t cpy_r_r21;
    char cpy_r_r22;
    char cpy_r_r23;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("dictstruct/__init__.py", "<module>", -1, CPyStatic_dictstruct___globals);
        goto CPyL8;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[58]; /* ('LazyDictStruct',) */
    cpy_r_r6 = CPyStatics[5]; /* 'dictstruct._lazy' */
    cpy_r_r7 = CPyStatic_dictstruct___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("dictstruct/__init__.py", "<module>", 1, CPyStatic_dictstruct___globals);
        goto CPyL8;
    }
    CPyModule_dictstruct____lazy = cpy_r_r8;
    CPy_INCREF(CPyModule_dictstruct____lazy);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[59]; /* ('DictStruct',) */
    cpy_r_r10 = CPyStatics[7]; /* 'dictstruct._main' */
    cpy_r_r11 = CPyStatic_dictstruct___globals;
    cpy_r_r12 = CPyImport_ImportFromMany(cpy_r_r10, cpy_r_r9, cpy_r_r9, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("dictstruct/__init__.py", "<module>", 2, CPyStatic_dictstruct___globals);
        goto CPyL8;
    }
    CPyModule_dictstruct____main = cpy_r_r12;
    CPy_INCREF(CPyModule_dictstruct____main);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r13 = CPyStatics[6]; /* 'DictStruct' */
    cpy_r_r14 = CPyStatics[4]; /* 'LazyDictStruct' */
    cpy_r_r15 = PyList_New(2);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("dictstruct/__init__.py", "<module>", 4, CPyStatic_dictstruct___globals);
        goto CPyL8;
    }
    cpy_r_r16 = (CPyPtr)&((PyListObject *)cpy_r_r15)->ob_item;
    cpy_r_r17 = *(CPyPtr *)cpy_r_r16;
    CPy_INCREF(cpy_r_r13);
    *(PyObject * *)cpy_r_r17 = cpy_r_r13;
    CPy_INCREF(cpy_r_r14);
    cpy_r_r18 = cpy_r_r17 + 8;
    *(PyObject * *)cpy_r_r18 = cpy_r_r14;
    cpy_r_r19 = CPyStatic_dictstruct___globals;
    cpy_r_r20 = CPyStatics[8]; /* '__all__' */
    cpy_r_r21 = CPyDict_SetItem(cpy_r_r19, cpy_r_r20, cpy_r_r15);
    CPy_DECREF_NO_IMM(cpy_r_r15);
    cpy_r_r22 = cpy_r_r21 >= 0;
    if (unlikely(!cpy_r_r22)) {
        CPy_AddTraceback("dictstruct/__init__.py", "<module>", 4, CPyStatic_dictstruct___globals);
        goto CPyL8;
    }
    return 1;
CPyL8: ;
    cpy_r_r23 = 2;
    return cpy_r_r23;
}

static PyObject *CPyDunder___get___main_____bool___3_DictStruct_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef__main_____bool___3_DictStruct_obj_____get__(self, instance, owner);
}
static PyObject *_main_____bool___3_DictStruct_obj_setup(PyTypeObject *type);
PyObject *CPyDef__main_____bool___3_DictStruct_obj(void);

static PyObject *
_main_____bool___3_DictStruct_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType__main_____bool___3_DictStruct_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return _main_____bool___3_DictStruct_obj_setup(type);
}

static int
_main_____bool___3_DictStruct_obj_traverse(dictstruct____main_____bool___3_DictStruct_objObject *self, visitproc visit, void *arg)
{
    return 0;
}

static int
_main_____bool___3_DictStruct_obj_clear(dictstruct____main_____bool___3_DictStruct_objObject *self)
{
    return 0;
}

static void
_main_____bool___3_DictStruct_obj_dealloc(dictstruct____main_____bool___3_DictStruct_objObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, _main_____bool___3_DictStruct_obj_dealloc)
    _main_____bool___3_DictStruct_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem _main_____bool___3_DictStruct_obj_vtable[2];
static bool
CPyDef__main_____bool___3_DictStruct_obj_trait_vtable_setup(void)
{
    CPyVTableItem _main_____bool___3_DictStruct_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef__main_____bool___3_DictStruct_obj_____call__,
        (CPyVTableItem)CPyDef__main_____bool___3_DictStruct_obj_____get__,
    };
    memcpy(_main_____bool___3_DictStruct_obj_vtable, _main_____bool___3_DictStruct_obj_vtable_scratch, sizeof(_main_____bool___3_DictStruct_obj_vtable));
    return 1;
}

static PyMethodDef _main_____bool___3_DictStruct_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy__main_____bool___3_DictStruct_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy__main_____bool___3_DictStruct_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType__main_____bool___3_DictStruct_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "__bool___DictStruct_obj",
    .tp_new = _main_____bool___3_DictStruct_obj_new,
    .tp_dealloc = (destructor)_main_____bool___3_DictStruct_obj_dealloc,
    .tp_traverse = (traverseproc)_main_____bool___3_DictStruct_obj_traverse,
    .tp_clear = (inquiry)_main_____bool___3_DictStruct_obj_clear,
    .tp_methods = _main_____bool___3_DictStruct_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get___main_____bool___3_DictStruct_obj,
    .tp_basicsize = sizeof(dictstruct____main_____bool___3_DictStruct_objObject),
    .tp_vectorcall_offset = offsetof(dictstruct____main_____bool___3_DictStruct_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
};
static PyTypeObject *CPyType__main_____bool___3_DictStruct_obj_template = &CPyType__main_____bool___3_DictStruct_obj_template_;

static PyObject *
_main_____bool___3_DictStruct_obj_setup(PyTypeObject *type)
{
    dictstruct____main_____bool___3_DictStruct_objObject *self;
    self = (dictstruct____main_____bool___3_DictStruct_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = _main_____bool___3_DictStruct_obj_vtable;
    self->vectorcall = CPyPy__main_____bool___3_DictStruct_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef__main_____bool___3_DictStruct_obj(void)
{
    PyObject *self = _main_____bool___3_DictStruct_obj_setup(CPyType__main_____bool___3_DictStruct_obj);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get___main_____contains___3_DictStruct_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef__main_____contains___3_DictStruct_obj_____get__(self, instance, owner);
}
static PyObject *_main_____contains___3_DictStruct_obj_setup(PyTypeObject *type);
PyObject *CPyDef__main_____contains___3_DictStruct_obj(void);

static PyObject *
_main_____contains___3_DictStruct_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType__main_____contains___3_DictStruct_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return _main_____contains___3_DictStruct_obj_setup(type);
}

static int
_main_____contains___3_DictStruct_obj_traverse(dictstruct____main_____contains___3_DictStruct_objObject *self, visitproc visit, void *arg)
{
    return 0;
}

static int
_main_____contains___3_DictStruct_obj_clear(dictstruct____main_____contains___3_DictStruct_objObject *self)
{
    return 0;
}

static void
_main_____contains___3_DictStruct_obj_dealloc(dictstruct____main_____contains___3_DictStruct_objObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, _main_____contains___3_DictStruct_obj_dealloc)
    _main_____contains___3_DictStruct_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem _main_____contains___3_DictStruct_obj_vtable[2];
static bool
CPyDef__main_____contains___3_DictStruct_obj_trait_vtable_setup(void)
{
    CPyVTableItem _main_____contains___3_DictStruct_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef__main_____contains___3_DictStruct_obj_____call__,
        (CPyVTableItem)CPyDef__main_____contains___3_DictStruct_obj_____get__,
    };
    memcpy(_main_____contains___3_DictStruct_obj_vtable, _main_____contains___3_DictStruct_obj_vtable_scratch, sizeof(_main_____contains___3_DictStruct_obj_vtable));
    return 1;
}

static PyMethodDef _main_____contains___3_DictStruct_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy__main_____contains___3_DictStruct_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy__main_____contains___3_DictStruct_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType__main_____contains___3_DictStruct_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "__contains___DictStruct_obj",
    .tp_new = _main_____contains___3_DictStruct_obj_new,
    .tp_dealloc = (destructor)_main_____contains___3_DictStruct_obj_dealloc,
    .tp_traverse = (traverseproc)_main_____contains___3_DictStruct_obj_traverse,
    .tp_clear = (inquiry)_main_____contains___3_DictStruct_obj_clear,
    .tp_methods = _main_____contains___3_DictStruct_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get___main_____contains___3_DictStruct_obj,
    .tp_basicsize = sizeof(dictstruct____main_____contains___3_DictStruct_objObject),
    .tp_vectorcall_offset = offsetof(dictstruct____main_____contains___3_DictStruct_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
};
static PyTypeObject *CPyType__main_____contains___3_DictStruct_obj_template = &CPyType__main_____contains___3_DictStruct_obj_template_;

static PyObject *
_main_____contains___3_DictStruct_obj_setup(PyTypeObject *type)
{
    dictstruct____main_____contains___3_DictStruct_objObject *self;
    self = (dictstruct____main_____contains___3_DictStruct_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = _main_____contains___3_DictStruct_obj_vtable;
    self->vectorcall = CPyPy__main_____contains___3_DictStruct_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef__main_____contains___3_DictStruct_obj(void)
{
    PyObject *self = _main_____contains___3_DictStruct_obj_setup(CPyType__main_____contains___3_DictStruct_obj);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get___main___get_DictStruct_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef__main___get_DictStruct_obj_____get__(self, instance, owner);
}
static PyObject *_main___get_DictStruct_obj_setup(PyTypeObject *type);
PyObject *CPyDef__main___get_DictStruct_obj(void);

static PyObject *
_main___get_DictStruct_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType__main___get_DictStruct_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return _main___get_DictStruct_obj_setup(type);
}

static int
_main___get_DictStruct_obj_traverse(dictstruct____main___get_DictStruct_objObject *self, visitproc visit, void *arg)
{
    return 0;
}

static int
_main___get_DictStruct_obj_clear(dictstruct____main___get_DictStruct_objObject *self)
{
    return 0;
}

static void
_main___get_DictStruct_obj_dealloc(dictstruct____main___get_DictStruct_objObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, _main___get_DictStruct_obj_dealloc)
    _main___get_DictStruct_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem _main___get_DictStruct_obj_vtable[2];
static bool
CPyDef__main___get_DictStruct_obj_trait_vtable_setup(void)
{
    CPyVTableItem _main___get_DictStruct_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef__main___get_DictStruct_obj_____call__,
        (CPyVTableItem)CPyDef__main___get_DictStruct_obj_____get__,
    };
    memcpy(_main___get_DictStruct_obj_vtable, _main___get_DictStruct_obj_vtable_scratch, sizeof(_main___get_DictStruct_obj_vtable));
    return 1;
}

static PyMethodDef _main___get_DictStruct_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy__main___get_DictStruct_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy__main___get_DictStruct_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType__main___get_DictStruct_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "get_DictStruct_obj",
    .tp_new = _main___get_DictStruct_obj_new,
    .tp_dealloc = (destructor)_main___get_DictStruct_obj_dealloc,
    .tp_traverse = (traverseproc)_main___get_DictStruct_obj_traverse,
    .tp_clear = (inquiry)_main___get_DictStruct_obj_clear,
    .tp_methods = _main___get_DictStruct_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get___main___get_DictStruct_obj,
    .tp_basicsize = sizeof(dictstruct____main___get_DictStruct_objObject),
    .tp_vectorcall_offset = offsetof(dictstruct____main___get_DictStruct_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
};
static PyTypeObject *CPyType__main___get_DictStruct_obj_template = &CPyType__main___get_DictStruct_obj_template_;

static PyObject *
_main___get_DictStruct_obj_setup(PyTypeObject *type)
{
    dictstruct____main___get_DictStruct_objObject *self;
    self = (dictstruct____main___get_DictStruct_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = _main___get_DictStruct_obj_vtable;
    self->vectorcall = CPyPy__main___get_DictStruct_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef__main___get_DictStruct_obj(void)
{
    PyObject *self = _main___get_DictStruct_obj_setup(CPyType__main___get_DictStruct_obj);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get___main_____getitem___3_DictStruct_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef__main_____getitem___3_DictStruct_obj_____get__(self, instance, owner);
}
static PyObject *_main_____getitem___3_DictStruct_obj_setup(PyTypeObject *type);
PyObject *CPyDef__main_____getitem___3_DictStruct_obj(void);

static PyObject *
_main_____getitem___3_DictStruct_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType__main_____getitem___3_DictStruct_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return _main_____getitem___3_DictStruct_obj_setup(type);
}

static int
_main_____getitem___3_DictStruct_obj_traverse(dictstruct____main_____getitem___3_DictStruct_objObject *self, visitproc visit, void *arg)
{
    return 0;
}

static int
_main_____getitem___3_DictStruct_obj_clear(dictstruct____main_____getitem___3_DictStruct_objObject *self)
{
    return 0;
}

static void
_main_____getitem___3_DictStruct_obj_dealloc(dictstruct____main_____getitem___3_DictStruct_objObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, _main_____getitem___3_DictStruct_obj_dealloc)
    _main_____getitem___3_DictStruct_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem _main_____getitem___3_DictStruct_obj_vtable[2];
static bool
CPyDef__main_____getitem___3_DictStruct_obj_trait_vtable_setup(void)
{
    CPyVTableItem _main_____getitem___3_DictStruct_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef__main_____getitem___3_DictStruct_obj_____call__,
        (CPyVTableItem)CPyDef__main_____getitem___3_DictStruct_obj_____get__,
    };
    memcpy(_main_____getitem___3_DictStruct_obj_vtable, _main_____getitem___3_DictStruct_obj_vtable_scratch, sizeof(_main_____getitem___3_DictStruct_obj_vtable));
    return 1;
}

static PyMethodDef _main_____getitem___3_DictStruct_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy__main_____getitem___3_DictStruct_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy__main_____getitem___3_DictStruct_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType__main_____getitem___3_DictStruct_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "__getitem___DictStruct_obj",
    .tp_new = _main_____getitem___3_DictStruct_obj_new,
    .tp_dealloc = (destructor)_main_____getitem___3_DictStruct_obj_dealloc,
    .tp_traverse = (traverseproc)_main_____getitem___3_DictStruct_obj_traverse,
    .tp_clear = (inquiry)_main_____getitem___3_DictStruct_obj_clear,
    .tp_methods = _main_____getitem___3_DictStruct_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get___main_____getitem___3_DictStruct_obj,
    .tp_basicsize = sizeof(dictstruct____main_____getitem___3_DictStruct_objObject),
    .tp_vectorcall_offset = offsetof(dictstruct____main_____getitem___3_DictStruct_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
};
static PyTypeObject *CPyType__main_____getitem___3_DictStruct_obj_template = &CPyType__main_____getitem___3_DictStruct_obj_template_;

static PyObject *
_main_____getitem___3_DictStruct_obj_setup(PyTypeObject *type)
{
    dictstruct____main_____getitem___3_DictStruct_objObject *self;
    self = (dictstruct____main_____getitem___3_DictStruct_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = _main_____getitem___3_DictStruct_obj_vtable;
    self->vectorcall = CPyPy__main_____getitem___3_DictStruct_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef__main_____getitem___3_DictStruct_obj(void)
{
    PyObject *self = _main_____getitem___3_DictStruct_obj_setup(CPyType__main_____getitem___3_DictStruct_obj);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get___main_____getattribute___3_DictStruct_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef__main_____getattribute___3_DictStruct_obj_____get__(self, instance, owner);
}
static PyObject *_main_____getattribute___3_DictStruct_obj_setup(PyTypeObject *type);
PyObject *CPyDef__main_____getattribute___3_DictStruct_obj(void);

static PyObject *
_main_____getattribute___3_DictStruct_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType__main_____getattribute___3_DictStruct_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return _main_____getattribute___3_DictStruct_obj_setup(type);
}

static int
_main_____getattribute___3_DictStruct_obj_traverse(dictstruct____main_____getattribute___3_DictStruct_objObject *self, visitproc visit, void *arg)
{
    return 0;
}

static int
_main_____getattribute___3_DictStruct_obj_clear(dictstruct____main_____getattribute___3_DictStruct_objObject *self)
{
    return 0;
}

static void
_main_____getattribute___3_DictStruct_obj_dealloc(dictstruct____main_____getattribute___3_DictStruct_objObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, _main_____getattribute___3_DictStruct_obj_dealloc)
    _main_____getattribute___3_DictStruct_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem _main_____getattribute___3_DictStruct_obj_vtable[2];
static bool
CPyDef__main_____getattribute___3_DictStruct_obj_trait_vtable_setup(void)
{
    CPyVTableItem _main_____getattribute___3_DictStruct_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef__main_____getattribute___3_DictStruct_obj_____call__,
        (CPyVTableItem)CPyDef__main_____getattribute___3_DictStruct_obj_____get__,
    };
    memcpy(_main_____getattribute___3_DictStruct_obj_vtable, _main_____getattribute___3_DictStruct_obj_vtable_scratch, sizeof(_main_____getattribute___3_DictStruct_obj_vtable));
    return 1;
}

static PyMethodDef _main_____getattribute___3_DictStruct_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy__main_____getattribute___3_DictStruct_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy__main_____getattribute___3_DictStruct_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType__main_____getattribute___3_DictStruct_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "__getattribute___DictStruct_obj",
    .tp_new = _main_____getattribute___3_DictStruct_obj_new,
    .tp_dealloc = (destructor)_main_____getattribute___3_DictStruct_obj_dealloc,
    .tp_traverse = (traverseproc)_main_____getattribute___3_DictStruct_obj_traverse,
    .tp_clear = (inquiry)_main_____getattribute___3_DictStruct_obj_clear,
    .tp_methods = _main_____getattribute___3_DictStruct_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get___main_____getattribute___3_DictStruct_obj,
    .tp_basicsize = sizeof(dictstruct____main_____getattribute___3_DictStruct_objObject),
    .tp_vectorcall_offset = offsetof(dictstruct____main_____getattribute___3_DictStruct_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
};
static PyTypeObject *CPyType__main_____getattribute___3_DictStruct_obj_template = &CPyType__main_____getattribute___3_DictStruct_obj_template_;

static PyObject *
_main_____getattribute___3_DictStruct_obj_setup(PyTypeObject *type)
{
    dictstruct____main_____getattribute___3_DictStruct_objObject *self;
    self = (dictstruct____main_____getattribute___3_DictStruct_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = _main_____getattribute___3_DictStruct_obj_vtable;
    self->vectorcall = CPyPy__main_____getattribute___3_DictStruct_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef__main_____getattribute___3_DictStruct_obj(void)
{
    PyObject *self = _main_____getattribute___3_DictStruct_obj_setup(CPyType__main_____getattribute___3_DictStruct_obj);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get___main_____setitem___3_DictStruct_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef__main_____setitem___3_DictStruct_obj_____get__(self, instance, owner);
}
static PyObject *_main_____setitem___3_DictStruct_obj_setup(PyTypeObject *type);
PyObject *CPyDef__main_____setitem___3_DictStruct_obj(void);

static PyObject *
_main_____setitem___3_DictStruct_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType__main_____setitem___3_DictStruct_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return _main_____setitem___3_DictStruct_obj_setup(type);
}

static int
_main_____setitem___3_DictStruct_obj_traverse(dictstruct____main_____setitem___3_DictStruct_objObject *self, visitproc visit, void *arg)
{
    return 0;
}

static int
_main_____setitem___3_DictStruct_obj_clear(dictstruct____main_____setitem___3_DictStruct_objObject *self)
{
    return 0;
}

static void
_main_____setitem___3_DictStruct_obj_dealloc(dictstruct____main_____setitem___3_DictStruct_objObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, _main_____setitem___3_DictStruct_obj_dealloc)
    _main_____setitem___3_DictStruct_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem _main_____setitem___3_DictStruct_obj_vtable[2];
static bool
CPyDef__main_____setitem___3_DictStruct_obj_trait_vtable_setup(void)
{
    CPyVTableItem _main_____setitem___3_DictStruct_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef__main_____setitem___3_DictStruct_obj_____call__,
        (CPyVTableItem)CPyDef__main_____setitem___3_DictStruct_obj_____get__,
    };
    memcpy(_main_____setitem___3_DictStruct_obj_vtable, _main_____setitem___3_DictStruct_obj_vtable_scratch, sizeof(_main_____setitem___3_DictStruct_obj_vtable));
    return 1;
}

static PyMethodDef _main_____setitem___3_DictStruct_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy__main_____setitem___3_DictStruct_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy__main_____setitem___3_DictStruct_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType__main_____setitem___3_DictStruct_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "__setitem___DictStruct_obj",
    .tp_new = _main_____setitem___3_DictStruct_obj_new,
    .tp_dealloc = (destructor)_main_____setitem___3_DictStruct_obj_dealloc,
    .tp_traverse = (traverseproc)_main_____setitem___3_DictStruct_obj_traverse,
    .tp_clear = (inquiry)_main_____setitem___3_DictStruct_obj_clear,
    .tp_methods = _main_____setitem___3_DictStruct_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get___main_____setitem___3_DictStruct_obj,
    .tp_basicsize = sizeof(dictstruct____main_____setitem___3_DictStruct_objObject),
    .tp_vectorcall_offset = offsetof(dictstruct____main_____setitem___3_DictStruct_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
};
static PyTypeObject *CPyType__main_____setitem___3_DictStruct_obj_template = &CPyType__main_____setitem___3_DictStruct_obj_template_;

static PyObject *
_main_____setitem___3_DictStruct_obj_setup(PyTypeObject *type)
{
    dictstruct____main_____setitem___3_DictStruct_objObject *self;
    self = (dictstruct____main_____setitem___3_DictStruct_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = _main_____setitem___3_DictStruct_obj_vtable;
    self->vectorcall = CPyPy__main_____setitem___3_DictStruct_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef__main_____setitem___3_DictStruct_obj(void)
{
    PyObject *self = _main_____setitem___3_DictStruct_obj_setup(CPyType__main_____setitem___3_DictStruct_obj);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *_main_____iter___3_DictStruct_env_setup(PyTypeObject *type);
PyObject *CPyDef__main_____iter___3_DictStruct_env(void);

static PyObject *
_main_____iter___3_DictStruct_env_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType__main_____iter___3_DictStruct_env) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return _main_____iter___3_DictStruct_env_setup(type);
}

static int
_main_____iter___3_DictStruct_env_traverse(dictstruct____main_____iter___3_DictStruct_envObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_self__);
    Py_VISIT(self->_self);
    Py_VISIT(self->_type);
    Py_VISIT(self->_value);
    Py_VISIT(self->_traceback);
    Py_VISIT(self->_arg);
    if (CPyTagged_CheckLong(self->___mypyc_next_label__)) {
        Py_VISIT(CPyTagged_LongAsObject(self->___mypyc_next_label__));
    }
    Py_VISIT(self->___mypyc_temp__0);
    Py_VISIT(self->_field);
    return 0;
}

static int
_main_____iter___3_DictStruct_env_clear(dictstruct____main_____iter___3_DictStruct_envObject *self)
{
    Py_CLEAR(self->___mypyc_self__);
    Py_CLEAR(self->_self);
    Py_CLEAR(self->_type);
    Py_CLEAR(self->_value);
    Py_CLEAR(self->_traceback);
    Py_CLEAR(self->_arg);
    if (CPyTagged_CheckLong(self->___mypyc_next_label__)) {
        CPyTagged __tmp = self->___mypyc_next_label__;
        self->___mypyc_next_label__ = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    Py_CLEAR(self->___mypyc_temp__0);
    Py_CLEAR(self->_field);
    return 0;
}

static void
_main_____iter___3_DictStruct_env_dealloc(dictstruct____main_____iter___3_DictStruct_envObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, _main_____iter___3_DictStruct_env_dealloc)
    _main_____iter___3_DictStruct_env_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem _main_____iter___3_DictStruct_env_vtable[1];
static bool
CPyDef__main_____iter___3_DictStruct_env_trait_vtable_setup(void)
{
    CPyVTableItem _main_____iter___3_DictStruct_env_vtable_scratch[] = {
        NULL
    };
    memcpy(_main_____iter___3_DictStruct_env_vtable, _main_____iter___3_DictStruct_env_vtable_scratch, sizeof(_main_____iter___3_DictStruct_env_vtable));
    return 1;
}

static PyMethodDef _main_____iter___3_DictStruct_env_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType__main_____iter___3_DictStruct_env_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "__iter___DictStruct_env",
    .tp_new = _main_____iter___3_DictStruct_env_new,
    .tp_dealloc = (destructor)_main_____iter___3_DictStruct_env_dealloc,
    .tp_traverse = (traverseproc)_main_____iter___3_DictStruct_env_traverse,
    .tp_clear = (inquiry)_main_____iter___3_DictStruct_env_clear,
    .tp_methods = _main_____iter___3_DictStruct_env_methods,
    .tp_basicsize = sizeof(dictstruct____main_____iter___3_DictStruct_envObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType__main_____iter___3_DictStruct_env_template = &CPyType__main_____iter___3_DictStruct_env_template_;

static PyObject *
_main_____iter___3_DictStruct_env_setup(PyTypeObject *type)
{
    dictstruct____main_____iter___3_DictStruct_envObject *self;
    self = (dictstruct____main_____iter___3_DictStruct_envObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = _main_____iter___3_DictStruct_env_vtable;
    self->___mypyc_next_label__ = CPY_INT_TAG;
    self->___mypyc_temp__1 = CPY_INT_TAG;
    return (PyObject *)self;
}

PyObject *CPyDef__main_____iter___3_DictStruct_env(void)
{
    PyObject *self = _main_____iter___3_DictStruct_env_setup(CPyType__main_____iter___3_DictStruct_env);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get___main_____iter___3_DictStruct_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef__main_____iter___3_DictStruct_obj_____get__(self, instance, owner);
}
static PyObject *_main_____iter___3_DictStruct_obj_setup(PyTypeObject *type);
PyObject *CPyDef__main_____iter___3_DictStruct_obj(void);

static PyObject *
_main_____iter___3_DictStruct_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType__main_____iter___3_DictStruct_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return _main_____iter___3_DictStruct_obj_setup(type);
}

static int
_main_____iter___3_DictStruct_obj_traverse(dictstruct____main_____iter___3_DictStruct_objObject *self, visitproc visit, void *arg)
{
    return 0;
}

static int
_main_____iter___3_DictStruct_obj_clear(dictstruct____main_____iter___3_DictStruct_objObject *self)
{
    return 0;
}

static void
_main_____iter___3_DictStruct_obj_dealloc(dictstruct____main_____iter___3_DictStruct_objObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, _main_____iter___3_DictStruct_obj_dealloc)
    _main_____iter___3_DictStruct_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem _main_____iter___3_DictStruct_obj_vtable[2];
static bool
CPyDef__main_____iter___3_DictStruct_obj_trait_vtable_setup(void)
{
    CPyVTableItem _main_____iter___3_DictStruct_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef__main_____iter___3_DictStruct_obj_____call__,
        (CPyVTableItem)CPyDef__main_____iter___3_DictStruct_obj_____get__,
    };
    memcpy(_main_____iter___3_DictStruct_obj_vtable, _main_____iter___3_DictStruct_obj_vtable_scratch, sizeof(_main_____iter___3_DictStruct_obj_vtable));
    return 1;
}

static PyMethodDef _main_____iter___3_DictStruct_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy__main_____iter___3_DictStruct_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy__main_____iter___3_DictStruct_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType__main_____iter___3_DictStruct_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "__iter___DictStruct_obj",
    .tp_new = _main_____iter___3_DictStruct_obj_new,
    .tp_dealloc = (destructor)_main_____iter___3_DictStruct_obj_dealloc,
    .tp_traverse = (traverseproc)_main_____iter___3_DictStruct_obj_traverse,
    .tp_clear = (inquiry)_main_____iter___3_DictStruct_obj_clear,
    .tp_methods = _main_____iter___3_DictStruct_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get___main_____iter___3_DictStruct_obj,
    .tp_basicsize = sizeof(dictstruct____main_____iter___3_DictStruct_objObject),
    .tp_vectorcall_offset = offsetof(dictstruct____main_____iter___3_DictStruct_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
};
static PyTypeObject *CPyType__main_____iter___3_DictStruct_obj_template = &CPyType__main_____iter___3_DictStruct_obj_template_;

static PyObject *
_main_____iter___3_DictStruct_obj_setup(PyTypeObject *type)
{
    dictstruct____main_____iter___3_DictStruct_objObject *self;
    self = (dictstruct____main_____iter___3_DictStruct_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = _main_____iter___3_DictStruct_obj_vtable;
    self->vectorcall = CPyPy__main_____iter___3_DictStruct_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef__main_____iter___3_DictStruct_obj(void)
{
    PyObject *self = _main_____iter___3_DictStruct_obj_setup(CPyType__main_____iter___3_DictStruct_obj);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *_main_____iter___3_DictStruct_gen_setup(PyTypeObject *type);
PyObject *CPyDef__main_____iter___3_DictStruct_gen(void);

static PyObject *
_main_____iter___3_DictStruct_gen_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType__main_____iter___3_DictStruct_gen) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return _main_____iter___3_DictStruct_gen_setup(type);
}

static int
_main_____iter___3_DictStruct_gen_traverse(dictstruct____main_____iter___3_DictStruct_genObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    return 0;
}

static int
_main_____iter___3_DictStruct_gen_clear(dictstruct____main_____iter___3_DictStruct_genObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    return 0;
}

static void
_main_____iter___3_DictStruct_gen_dealloc(dictstruct____main_____iter___3_DictStruct_genObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, _main_____iter___3_DictStruct_gen_dealloc)
    _main_____iter___3_DictStruct_gen_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem _main_____iter___3_DictStruct_gen_vtable[6];
static bool
CPyDef__main_____iter___3_DictStruct_gen_trait_vtable_setup(void)
{
    CPyVTableItem _main_____iter___3_DictStruct_gen_vtable_scratch[] = {
        (CPyVTableItem)CPyDef__main_____iter___3_DictStruct_gen_____mypyc_generator_helper__,
        (CPyVTableItem)CPyDef__main_____iter___3_DictStruct_gen_____next__,
        (CPyVTableItem)CPyDef__main_____iter___3_DictStruct_gen___send,
        (CPyVTableItem)CPyDef__main_____iter___3_DictStruct_gen_____iter__,
        (CPyVTableItem)CPyDef__main_____iter___3_DictStruct_gen___throw,
        (CPyVTableItem)CPyDef__main_____iter___3_DictStruct_gen___close,
    };
    memcpy(_main_____iter___3_DictStruct_gen_vtable, _main_____iter___3_DictStruct_gen_vtable_scratch, sizeof(_main_____iter___3_DictStruct_gen_vtable));
    return 1;
}

static PyMethodDef _main_____iter___3_DictStruct_gen_methods[] = {
    {"__mypyc_generator_helper__",
     (PyCFunction)CPyPy__main_____iter___3_DictStruct_gen_____mypyc_generator_helper__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__next__",
     (PyCFunction)CPyPy__main_____iter___3_DictStruct_gen_____next__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"send",
     (PyCFunction)CPyPy__main_____iter___3_DictStruct_gen___send,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__iter__",
     (PyCFunction)CPyPy__main_____iter___3_DictStruct_gen_____iter__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"throw",
     (PyCFunction)CPyPy__main_____iter___3_DictStruct_gen___throw,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"close",
     (PyCFunction)CPyPy__main_____iter___3_DictStruct_gen___close,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType__main_____iter___3_DictStruct_gen_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "__iter___DictStruct_gen",
    .tp_new = _main_____iter___3_DictStruct_gen_new,
    .tp_dealloc = (destructor)_main_____iter___3_DictStruct_gen_dealloc,
    .tp_traverse = (traverseproc)_main_____iter___3_DictStruct_gen_traverse,
    .tp_clear = (inquiry)_main_____iter___3_DictStruct_gen_clear,
    .tp_methods = _main_____iter___3_DictStruct_gen_methods,
    .tp_iter = CPyDef__main_____iter___3_DictStruct_gen_____iter__,
    .tp_iternext = CPyDef__main_____iter___3_DictStruct_gen_____next__,
    .tp_basicsize = sizeof(dictstruct____main_____iter___3_DictStruct_genObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType__main_____iter___3_DictStruct_gen_template = &CPyType__main_____iter___3_DictStruct_gen_template_;

static PyObject *
_main_____iter___3_DictStruct_gen_setup(PyTypeObject *type)
{
    dictstruct____main_____iter___3_DictStruct_genObject *self;
    self = (dictstruct____main_____iter___3_DictStruct_genObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = _main_____iter___3_DictStruct_gen_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef__main_____iter___3_DictStruct_gen(void)
{
    PyObject *self = _main_____iter___3_DictStruct_gen_setup(CPyType__main_____iter___3_DictStruct_gen);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get___main_____len___3_DictStruct_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef__main_____len___3_DictStruct_obj_____get__(self, instance, owner);
}
static PyObject *_main_____len___3_DictStruct_obj_setup(PyTypeObject *type);
PyObject *CPyDef__main_____len___3_DictStruct_obj(void);

static PyObject *
_main_____len___3_DictStruct_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType__main_____len___3_DictStruct_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return _main_____len___3_DictStruct_obj_setup(type);
}

static int
_main_____len___3_DictStruct_obj_traverse(dictstruct____main_____len___3_DictStruct_objObject *self, visitproc visit, void *arg)
{
    return 0;
}

static int
_main_____len___3_DictStruct_obj_clear(dictstruct____main_____len___3_DictStruct_objObject *self)
{
    return 0;
}

static void
_main_____len___3_DictStruct_obj_dealloc(dictstruct____main_____len___3_DictStruct_objObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, _main_____len___3_DictStruct_obj_dealloc)
    _main_____len___3_DictStruct_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem _main_____len___3_DictStruct_obj_vtable[2];
static bool
CPyDef__main_____len___3_DictStruct_obj_trait_vtable_setup(void)
{
    CPyVTableItem _main_____len___3_DictStruct_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef__main_____len___3_DictStruct_obj_____call__,
        (CPyVTableItem)CPyDef__main_____len___3_DictStruct_obj_____get__,
    };
    memcpy(_main_____len___3_DictStruct_obj_vtable, _main_____len___3_DictStruct_obj_vtable_scratch, sizeof(_main_____len___3_DictStruct_obj_vtable));
    return 1;
}

static PyMethodDef _main_____len___3_DictStruct_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy__main_____len___3_DictStruct_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy__main_____len___3_DictStruct_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType__main_____len___3_DictStruct_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "__len___DictStruct_obj",
    .tp_new = _main_____len___3_DictStruct_obj_new,
    .tp_dealloc = (destructor)_main_____len___3_DictStruct_obj_dealloc,
    .tp_traverse = (traverseproc)_main_____len___3_DictStruct_obj_traverse,
    .tp_clear = (inquiry)_main_____len___3_DictStruct_obj_clear,
    .tp_methods = _main_____len___3_DictStruct_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get___main_____len___3_DictStruct_obj,
    .tp_basicsize = sizeof(dictstruct____main_____len___3_DictStruct_objObject),
    .tp_vectorcall_offset = offsetof(dictstruct____main_____len___3_DictStruct_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
};
static PyTypeObject *CPyType__main_____len___3_DictStruct_obj_template = &CPyType__main_____len___3_DictStruct_obj_template_;

static PyObject *
_main_____len___3_DictStruct_obj_setup(PyTypeObject *type)
{
    dictstruct____main_____len___3_DictStruct_objObject *self;
    self = (dictstruct____main_____len___3_DictStruct_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = _main_____len___3_DictStruct_obj_vtable;
    self->vectorcall = CPyPy__main_____len___3_DictStruct_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef__main_____len___3_DictStruct_obj(void)
{
    PyObject *self = _main_____len___3_DictStruct_obj_setup(CPyType__main_____len___3_DictStruct_obj);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *_main___keys_DictStruct_env_setup(PyTypeObject *type);
PyObject *CPyDef__main___keys_DictStruct_env(void);

static PyObject *
_main___keys_DictStruct_env_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType__main___keys_DictStruct_env) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return _main___keys_DictStruct_env_setup(type);
}

static int
_main___keys_DictStruct_env_traverse(dictstruct____main___keys_DictStruct_envObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_self__);
    Py_VISIT(self->_self);
    Py_VISIT(self->_type);
    Py_VISIT(self->_value);
    Py_VISIT(self->_traceback);
    Py_VISIT(self->_arg);
    if (CPyTagged_CheckLong(self->___mypyc_next_label__)) {
        Py_VISIT(CPyTagged_LongAsObject(self->___mypyc_next_label__));
    }
    Py_VISIT(self->___mypyc_temp__2);
    Py_VISIT(self->___mypyc_temp__3.f0);
    Py_VISIT(self->___mypyc_temp__3.f1);
    Py_VISIT(self->___mypyc_temp__3.f2);
    return 0;
}

static int
_main___keys_DictStruct_env_clear(dictstruct____main___keys_DictStruct_envObject *self)
{
    Py_CLEAR(self->___mypyc_self__);
    Py_CLEAR(self->_self);
    Py_CLEAR(self->_type);
    Py_CLEAR(self->_value);
    Py_CLEAR(self->_traceback);
    Py_CLEAR(self->_arg);
    if (CPyTagged_CheckLong(self->___mypyc_next_label__)) {
        CPyTagged __tmp = self->___mypyc_next_label__;
        self->___mypyc_next_label__ = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    Py_CLEAR(self->___mypyc_temp__2);
    Py_CLEAR(self->___mypyc_temp__3.f0);
    Py_CLEAR(self->___mypyc_temp__3.f1);
    Py_CLEAR(self->___mypyc_temp__3.f2);
    return 0;
}

static void
_main___keys_DictStruct_env_dealloc(dictstruct____main___keys_DictStruct_envObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, _main___keys_DictStruct_env_dealloc)
    _main___keys_DictStruct_env_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem _main___keys_DictStruct_env_vtable[1];
static bool
CPyDef__main___keys_DictStruct_env_trait_vtable_setup(void)
{
    CPyVTableItem _main___keys_DictStruct_env_vtable_scratch[] = {
        NULL
    };
    memcpy(_main___keys_DictStruct_env_vtable, _main___keys_DictStruct_env_vtable_scratch, sizeof(_main___keys_DictStruct_env_vtable));
    return 1;
}

static PyMethodDef _main___keys_DictStruct_env_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType__main___keys_DictStruct_env_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "keys_DictStruct_env",
    .tp_new = _main___keys_DictStruct_env_new,
    .tp_dealloc = (destructor)_main___keys_DictStruct_env_dealloc,
    .tp_traverse = (traverseproc)_main___keys_DictStruct_env_traverse,
    .tp_clear = (inquiry)_main___keys_DictStruct_env_clear,
    .tp_methods = _main___keys_DictStruct_env_methods,
    .tp_basicsize = sizeof(dictstruct____main___keys_DictStruct_envObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType__main___keys_DictStruct_env_template = &CPyType__main___keys_DictStruct_env_template_;

static PyObject *
_main___keys_DictStruct_env_setup(PyTypeObject *type)
{
    dictstruct____main___keys_DictStruct_envObject *self;
    self = (dictstruct____main___keys_DictStruct_envObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = _main___keys_DictStruct_env_vtable;
    self->___mypyc_next_label__ = CPY_INT_TAG;
    self->___mypyc_temp__3 = (tuple_T3OOO) { NULL, NULL, NULL };
    return (PyObject *)self;
}

PyObject *CPyDef__main___keys_DictStruct_env(void)
{
    PyObject *self = _main___keys_DictStruct_env_setup(CPyType__main___keys_DictStruct_env);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get___main___keys_DictStruct_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef__main___keys_DictStruct_obj_____get__(self, instance, owner);
}
static PyObject *_main___keys_DictStruct_obj_setup(PyTypeObject *type);
PyObject *CPyDef__main___keys_DictStruct_obj(void);

static PyObject *
_main___keys_DictStruct_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType__main___keys_DictStruct_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return _main___keys_DictStruct_obj_setup(type);
}

static int
_main___keys_DictStruct_obj_traverse(dictstruct____main___keys_DictStruct_objObject *self, visitproc visit, void *arg)
{
    return 0;
}

static int
_main___keys_DictStruct_obj_clear(dictstruct____main___keys_DictStruct_objObject *self)
{
    return 0;
}

static void
_main___keys_DictStruct_obj_dealloc(dictstruct____main___keys_DictStruct_objObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, _main___keys_DictStruct_obj_dealloc)
    _main___keys_DictStruct_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem _main___keys_DictStruct_obj_vtable[2];
static bool
CPyDef__main___keys_DictStruct_obj_trait_vtable_setup(void)
{
    CPyVTableItem _main___keys_DictStruct_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef__main___keys_DictStruct_obj_____call__,
        (CPyVTableItem)CPyDef__main___keys_DictStruct_obj_____get__,
    };
    memcpy(_main___keys_DictStruct_obj_vtable, _main___keys_DictStruct_obj_vtable_scratch, sizeof(_main___keys_DictStruct_obj_vtable));
    return 1;
}

static PyMethodDef _main___keys_DictStruct_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy__main___keys_DictStruct_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy__main___keys_DictStruct_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType__main___keys_DictStruct_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "keys_DictStruct_obj",
    .tp_new = _main___keys_DictStruct_obj_new,
    .tp_dealloc = (destructor)_main___keys_DictStruct_obj_dealloc,
    .tp_traverse = (traverseproc)_main___keys_DictStruct_obj_traverse,
    .tp_clear = (inquiry)_main___keys_DictStruct_obj_clear,
    .tp_methods = _main___keys_DictStruct_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get___main___keys_DictStruct_obj,
    .tp_basicsize = sizeof(dictstruct____main___keys_DictStruct_objObject),
    .tp_vectorcall_offset = offsetof(dictstruct____main___keys_DictStruct_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
};
static PyTypeObject *CPyType__main___keys_DictStruct_obj_template = &CPyType__main___keys_DictStruct_obj_template_;

static PyObject *
_main___keys_DictStruct_obj_setup(PyTypeObject *type)
{
    dictstruct____main___keys_DictStruct_objObject *self;
    self = (dictstruct____main___keys_DictStruct_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = _main___keys_DictStruct_obj_vtable;
    self->vectorcall = CPyPy__main___keys_DictStruct_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef__main___keys_DictStruct_obj(void)
{
    PyObject *self = _main___keys_DictStruct_obj_setup(CPyType__main___keys_DictStruct_obj);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *_main___keys_DictStruct_gen_setup(PyTypeObject *type);
PyObject *CPyDef__main___keys_DictStruct_gen(void);

static PyObject *
_main___keys_DictStruct_gen_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType__main___keys_DictStruct_gen) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return _main___keys_DictStruct_gen_setup(type);
}

static int
_main___keys_DictStruct_gen_traverse(dictstruct____main___keys_DictStruct_genObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    return 0;
}

static int
_main___keys_DictStruct_gen_clear(dictstruct____main___keys_DictStruct_genObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    return 0;
}

static void
_main___keys_DictStruct_gen_dealloc(dictstruct____main___keys_DictStruct_genObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, _main___keys_DictStruct_gen_dealloc)
    _main___keys_DictStruct_gen_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem _main___keys_DictStruct_gen_vtable[6];
static bool
CPyDef__main___keys_DictStruct_gen_trait_vtable_setup(void)
{
    CPyVTableItem _main___keys_DictStruct_gen_vtable_scratch[] = {
        (CPyVTableItem)CPyDef__main___keys_DictStruct_gen_____mypyc_generator_helper__,
        (CPyVTableItem)CPyDef__main___keys_DictStruct_gen_____next__,
        (CPyVTableItem)CPyDef__main___keys_DictStruct_gen___send,
        (CPyVTableItem)CPyDef__main___keys_DictStruct_gen_____iter__,
        (CPyVTableItem)CPyDef__main___keys_DictStruct_gen___throw,
        (CPyVTableItem)CPyDef__main___keys_DictStruct_gen___close,
    };
    memcpy(_main___keys_DictStruct_gen_vtable, _main___keys_DictStruct_gen_vtable_scratch, sizeof(_main___keys_DictStruct_gen_vtable));
    return 1;
}

static PyMethodDef _main___keys_DictStruct_gen_methods[] = {
    {"__mypyc_generator_helper__",
     (PyCFunction)CPyPy__main___keys_DictStruct_gen_____mypyc_generator_helper__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__next__",
     (PyCFunction)CPyPy__main___keys_DictStruct_gen_____next__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"send",
     (PyCFunction)CPyPy__main___keys_DictStruct_gen___send,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__iter__",
     (PyCFunction)CPyPy__main___keys_DictStruct_gen_____iter__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"throw",
     (PyCFunction)CPyPy__main___keys_DictStruct_gen___throw,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"close",
     (PyCFunction)CPyPy__main___keys_DictStruct_gen___close,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType__main___keys_DictStruct_gen_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "keys_DictStruct_gen",
    .tp_new = _main___keys_DictStruct_gen_new,
    .tp_dealloc = (destructor)_main___keys_DictStruct_gen_dealloc,
    .tp_traverse = (traverseproc)_main___keys_DictStruct_gen_traverse,
    .tp_clear = (inquiry)_main___keys_DictStruct_gen_clear,
    .tp_methods = _main___keys_DictStruct_gen_methods,
    .tp_iter = CPyDef__main___keys_DictStruct_gen_____iter__,
    .tp_iternext = CPyDef__main___keys_DictStruct_gen_____next__,
    .tp_basicsize = sizeof(dictstruct____main___keys_DictStruct_genObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType__main___keys_DictStruct_gen_template = &CPyType__main___keys_DictStruct_gen_template_;

static PyObject *
_main___keys_DictStruct_gen_setup(PyTypeObject *type)
{
    dictstruct____main___keys_DictStruct_genObject *self;
    self = (dictstruct____main___keys_DictStruct_genObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = _main___keys_DictStruct_gen_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef__main___keys_DictStruct_gen(void)
{
    PyObject *self = _main___keys_DictStruct_gen_setup(CPyType__main___keys_DictStruct_gen);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *_main___items_DictStruct_env_setup(PyTypeObject *type);
PyObject *CPyDef__main___items_DictStruct_env(void);

static PyObject *
_main___items_DictStruct_env_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType__main___items_DictStruct_env) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return _main___items_DictStruct_env_setup(type);
}

static int
_main___items_DictStruct_env_traverse(dictstruct____main___items_DictStruct_envObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_self__);
    Py_VISIT(self->_self);
    Py_VISIT(self->_type);
    Py_VISIT(self->_value);
    Py_VISIT(self->_traceback);
    Py_VISIT(self->_arg);
    if (CPyTagged_CheckLong(self->___mypyc_next_label__)) {
        Py_VISIT(CPyTagged_LongAsObject(self->___mypyc_next_label__));
    }
    Py_VISIT(self->___mypyc_temp__4);
    Py_VISIT(self->_key);
    return 0;
}

static int
_main___items_DictStruct_env_clear(dictstruct____main___items_DictStruct_envObject *self)
{
    Py_CLEAR(self->___mypyc_self__);
    Py_CLEAR(self->_self);
    Py_CLEAR(self->_type);
    Py_CLEAR(self->_value);
    Py_CLEAR(self->_traceback);
    Py_CLEAR(self->_arg);
    if (CPyTagged_CheckLong(self->___mypyc_next_label__)) {
        CPyTagged __tmp = self->___mypyc_next_label__;
        self->___mypyc_next_label__ = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    Py_CLEAR(self->___mypyc_temp__4);
    Py_CLEAR(self->_key);
    return 0;
}

static void
_main___items_DictStruct_env_dealloc(dictstruct____main___items_DictStruct_envObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, _main___items_DictStruct_env_dealloc)
    _main___items_DictStruct_env_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem _main___items_DictStruct_env_vtable[1];
static bool
CPyDef__main___items_DictStruct_env_trait_vtable_setup(void)
{
    CPyVTableItem _main___items_DictStruct_env_vtable_scratch[] = {
        NULL
    };
    memcpy(_main___items_DictStruct_env_vtable, _main___items_DictStruct_env_vtable_scratch, sizeof(_main___items_DictStruct_env_vtable));
    return 1;
}

static PyMethodDef _main___items_DictStruct_env_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType__main___items_DictStruct_env_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "items_DictStruct_env",
    .tp_new = _main___items_DictStruct_env_new,
    .tp_dealloc = (destructor)_main___items_DictStruct_env_dealloc,
    .tp_traverse = (traverseproc)_main___items_DictStruct_env_traverse,
    .tp_clear = (inquiry)_main___items_DictStruct_env_clear,
    .tp_methods = _main___items_DictStruct_env_methods,
    .tp_basicsize = sizeof(dictstruct____main___items_DictStruct_envObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType__main___items_DictStruct_env_template = &CPyType__main___items_DictStruct_env_template_;

static PyObject *
_main___items_DictStruct_env_setup(PyTypeObject *type)
{
    dictstruct____main___items_DictStruct_envObject *self;
    self = (dictstruct____main___items_DictStruct_envObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = _main___items_DictStruct_env_vtable;
    self->___mypyc_next_label__ = CPY_INT_TAG;
    self->___mypyc_temp__5 = CPY_INT_TAG;
    return (PyObject *)self;
}

PyObject *CPyDef__main___items_DictStruct_env(void)
{
    PyObject *self = _main___items_DictStruct_env_setup(CPyType__main___items_DictStruct_env);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get___main___items_DictStruct_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef__main___items_DictStruct_obj_____get__(self, instance, owner);
}
static PyObject *_main___items_DictStruct_obj_setup(PyTypeObject *type);
PyObject *CPyDef__main___items_DictStruct_obj(void);

static PyObject *
_main___items_DictStruct_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType__main___items_DictStruct_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return _main___items_DictStruct_obj_setup(type);
}

static int
_main___items_DictStruct_obj_traverse(dictstruct____main___items_DictStruct_objObject *self, visitproc visit, void *arg)
{
    return 0;
}

static int
_main___items_DictStruct_obj_clear(dictstruct____main___items_DictStruct_objObject *self)
{
    return 0;
}

static void
_main___items_DictStruct_obj_dealloc(dictstruct____main___items_DictStruct_objObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, _main___items_DictStruct_obj_dealloc)
    _main___items_DictStruct_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem _main___items_DictStruct_obj_vtable[2];
static bool
CPyDef__main___items_DictStruct_obj_trait_vtable_setup(void)
{
    CPyVTableItem _main___items_DictStruct_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef__main___items_DictStruct_obj_____call__,
        (CPyVTableItem)CPyDef__main___items_DictStruct_obj_____get__,
    };
    memcpy(_main___items_DictStruct_obj_vtable, _main___items_DictStruct_obj_vtable_scratch, sizeof(_main___items_DictStruct_obj_vtable));
    return 1;
}

static PyMethodDef _main___items_DictStruct_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy__main___items_DictStruct_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy__main___items_DictStruct_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType__main___items_DictStruct_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "items_DictStruct_obj",
    .tp_new = _main___items_DictStruct_obj_new,
    .tp_dealloc = (destructor)_main___items_DictStruct_obj_dealloc,
    .tp_traverse = (traverseproc)_main___items_DictStruct_obj_traverse,
    .tp_clear = (inquiry)_main___items_DictStruct_obj_clear,
    .tp_methods = _main___items_DictStruct_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get___main___items_DictStruct_obj,
    .tp_basicsize = sizeof(dictstruct____main___items_DictStruct_objObject),
    .tp_vectorcall_offset = offsetof(dictstruct____main___items_DictStruct_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
};
static PyTypeObject *CPyType__main___items_DictStruct_obj_template = &CPyType__main___items_DictStruct_obj_template_;

static PyObject *
_main___items_DictStruct_obj_setup(PyTypeObject *type)
{
    dictstruct____main___items_DictStruct_objObject *self;
    self = (dictstruct____main___items_DictStruct_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = _main___items_DictStruct_obj_vtable;
    self->vectorcall = CPyPy__main___items_DictStruct_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef__main___items_DictStruct_obj(void)
{
    PyObject *self = _main___items_DictStruct_obj_setup(CPyType__main___items_DictStruct_obj);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *_main___items_DictStruct_gen_setup(PyTypeObject *type);
PyObject *CPyDef__main___items_DictStruct_gen(void);

static PyObject *
_main___items_DictStruct_gen_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType__main___items_DictStruct_gen) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return _main___items_DictStruct_gen_setup(type);
}

static int
_main___items_DictStruct_gen_traverse(dictstruct____main___items_DictStruct_genObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    return 0;
}

static int
_main___items_DictStruct_gen_clear(dictstruct____main___items_DictStruct_genObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    return 0;
}

static void
_main___items_DictStruct_gen_dealloc(dictstruct____main___items_DictStruct_genObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, _main___items_DictStruct_gen_dealloc)
    _main___items_DictStruct_gen_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem _main___items_DictStruct_gen_vtable[6];
static bool
CPyDef__main___items_DictStruct_gen_trait_vtable_setup(void)
{
    CPyVTableItem _main___items_DictStruct_gen_vtable_scratch[] = {
        (CPyVTableItem)CPyDef__main___items_DictStruct_gen_____mypyc_generator_helper__,
        (CPyVTableItem)CPyDef__main___items_DictStruct_gen_____next__,
        (CPyVTableItem)CPyDef__main___items_DictStruct_gen___send,
        (CPyVTableItem)CPyDef__main___items_DictStruct_gen_____iter__,
        (CPyVTableItem)CPyDef__main___items_DictStruct_gen___throw,
        (CPyVTableItem)CPyDef__main___items_DictStruct_gen___close,
    };
    memcpy(_main___items_DictStruct_gen_vtable, _main___items_DictStruct_gen_vtable_scratch, sizeof(_main___items_DictStruct_gen_vtable));
    return 1;
}

static PyMethodDef _main___items_DictStruct_gen_methods[] = {
    {"__mypyc_generator_helper__",
     (PyCFunction)CPyPy__main___items_DictStruct_gen_____mypyc_generator_helper__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__next__",
     (PyCFunction)CPyPy__main___items_DictStruct_gen_____next__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"send",
     (PyCFunction)CPyPy__main___items_DictStruct_gen___send,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__iter__",
     (PyCFunction)CPyPy__main___items_DictStruct_gen_____iter__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"throw",
     (PyCFunction)CPyPy__main___items_DictStruct_gen___throw,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"close",
     (PyCFunction)CPyPy__main___items_DictStruct_gen___close,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType__main___items_DictStruct_gen_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "items_DictStruct_gen",
    .tp_new = _main___items_DictStruct_gen_new,
    .tp_dealloc = (destructor)_main___items_DictStruct_gen_dealloc,
    .tp_traverse = (traverseproc)_main___items_DictStruct_gen_traverse,
    .tp_clear = (inquiry)_main___items_DictStruct_gen_clear,
    .tp_methods = _main___items_DictStruct_gen_methods,
    .tp_iter = CPyDef__main___items_DictStruct_gen_____iter__,
    .tp_iternext = CPyDef__main___items_DictStruct_gen_____next__,
    .tp_basicsize = sizeof(dictstruct____main___items_DictStruct_genObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType__main___items_DictStruct_gen_template = &CPyType__main___items_DictStruct_gen_template_;

static PyObject *
_main___items_DictStruct_gen_setup(PyTypeObject *type)
{
    dictstruct____main___items_DictStruct_genObject *self;
    self = (dictstruct____main___items_DictStruct_genObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = _main___items_DictStruct_gen_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef__main___items_DictStruct_gen(void)
{
    PyObject *self = _main___items_DictStruct_gen_setup(CPyType__main___items_DictStruct_gen);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *_main___values_DictStruct_env_setup(PyTypeObject *type);
PyObject *CPyDef__main___values_DictStruct_env(void);

static PyObject *
_main___values_DictStruct_env_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType__main___values_DictStruct_env) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return _main___values_DictStruct_env_setup(type);
}

static int
_main___values_DictStruct_env_traverse(dictstruct____main___values_DictStruct_envObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_self__);
    Py_VISIT(self->_self);
    Py_VISIT(self->_type);
    Py_VISIT(self->_value);
    Py_VISIT(self->_traceback);
    Py_VISIT(self->_arg);
    if (CPyTagged_CheckLong(self->___mypyc_next_label__)) {
        Py_VISIT(CPyTagged_LongAsObject(self->___mypyc_next_label__));
    }
    Py_VISIT(self->___mypyc_temp__6);
    Py_VISIT(self->_key);
    return 0;
}

static int
_main___values_DictStruct_env_clear(dictstruct____main___values_DictStruct_envObject *self)
{
    Py_CLEAR(self->___mypyc_self__);
    Py_CLEAR(self->_self);
    Py_CLEAR(self->_type);
    Py_CLEAR(self->_value);
    Py_CLEAR(self->_traceback);
    Py_CLEAR(self->_arg);
    if (CPyTagged_CheckLong(self->___mypyc_next_label__)) {
        CPyTagged __tmp = self->___mypyc_next_label__;
        self->___mypyc_next_label__ = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    Py_CLEAR(self->___mypyc_temp__6);
    Py_CLEAR(self->_key);
    return 0;
}

static void
_main___values_DictStruct_env_dealloc(dictstruct____main___values_DictStruct_envObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, _main___values_DictStruct_env_dealloc)
    _main___values_DictStruct_env_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem _main___values_DictStruct_env_vtable[1];
static bool
CPyDef__main___values_DictStruct_env_trait_vtable_setup(void)
{
    CPyVTableItem _main___values_DictStruct_env_vtable_scratch[] = {
        NULL
    };
    memcpy(_main___values_DictStruct_env_vtable, _main___values_DictStruct_env_vtable_scratch, sizeof(_main___values_DictStruct_env_vtable));
    return 1;
}

static PyMethodDef _main___values_DictStruct_env_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType__main___values_DictStruct_env_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "values_DictStruct_env",
    .tp_new = _main___values_DictStruct_env_new,
    .tp_dealloc = (destructor)_main___values_DictStruct_env_dealloc,
    .tp_traverse = (traverseproc)_main___values_DictStruct_env_traverse,
    .tp_clear = (inquiry)_main___values_DictStruct_env_clear,
    .tp_methods = _main___values_DictStruct_env_methods,
    .tp_basicsize = sizeof(dictstruct____main___values_DictStruct_envObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType__main___values_DictStruct_env_template = &CPyType__main___values_DictStruct_env_template_;

static PyObject *
_main___values_DictStruct_env_setup(PyTypeObject *type)
{
    dictstruct____main___values_DictStruct_envObject *self;
    self = (dictstruct____main___values_DictStruct_envObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = _main___values_DictStruct_env_vtable;
    self->___mypyc_next_label__ = CPY_INT_TAG;
    self->___mypyc_temp__7 = CPY_INT_TAG;
    return (PyObject *)self;
}

PyObject *CPyDef__main___values_DictStruct_env(void)
{
    PyObject *self = _main___values_DictStruct_env_setup(CPyType__main___values_DictStruct_env);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get___main___values_DictStruct_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef__main___values_DictStruct_obj_____get__(self, instance, owner);
}
static PyObject *_main___values_DictStruct_obj_setup(PyTypeObject *type);
PyObject *CPyDef__main___values_DictStruct_obj(void);

static PyObject *
_main___values_DictStruct_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType__main___values_DictStruct_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return _main___values_DictStruct_obj_setup(type);
}

static int
_main___values_DictStruct_obj_traverse(dictstruct____main___values_DictStruct_objObject *self, visitproc visit, void *arg)
{
    return 0;
}

static int
_main___values_DictStruct_obj_clear(dictstruct____main___values_DictStruct_objObject *self)
{
    return 0;
}

static void
_main___values_DictStruct_obj_dealloc(dictstruct____main___values_DictStruct_objObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, _main___values_DictStruct_obj_dealloc)
    _main___values_DictStruct_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem _main___values_DictStruct_obj_vtable[2];
static bool
CPyDef__main___values_DictStruct_obj_trait_vtable_setup(void)
{
    CPyVTableItem _main___values_DictStruct_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef__main___values_DictStruct_obj_____call__,
        (CPyVTableItem)CPyDef__main___values_DictStruct_obj_____get__,
    };
    memcpy(_main___values_DictStruct_obj_vtable, _main___values_DictStruct_obj_vtable_scratch, sizeof(_main___values_DictStruct_obj_vtable));
    return 1;
}

static PyMethodDef _main___values_DictStruct_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy__main___values_DictStruct_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy__main___values_DictStruct_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType__main___values_DictStruct_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "values_DictStruct_obj",
    .tp_new = _main___values_DictStruct_obj_new,
    .tp_dealloc = (destructor)_main___values_DictStruct_obj_dealloc,
    .tp_traverse = (traverseproc)_main___values_DictStruct_obj_traverse,
    .tp_clear = (inquiry)_main___values_DictStruct_obj_clear,
    .tp_methods = _main___values_DictStruct_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get___main___values_DictStruct_obj,
    .tp_basicsize = sizeof(dictstruct____main___values_DictStruct_objObject),
    .tp_vectorcall_offset = offsetof(dictstruct____main___values_DictStruct_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
};
static PyTypeObject *CPyType__main___values_DictStruct_obj_template = &CPyType__main___values_DictStruct_obj_template_;

static PyObject *
_main___values_DictStruct_obj_setup(PyTypeObject *type)
{
    dictstruct____main___values_DictStruct_objObject *self;
    self = (dictstruct____main___values_DictStruct_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = _main___values_DictStruct_obj_vtable;
    self->vectorcall = CPyPy__main___values_DictStruct_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef__main___values_DictStruct_obj(void)
{
    PyObject *self = _main___values_DictStruct_obj_setup(CPyType__main___values_DictStruct_obj);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *_main___values_DictStruct_gen_setup(PyTypeObject *type);
PyObject *CPyDef__main___values_DictStruct_gen(void);

static PyObject *
_main___values_DictStruct_gen_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType__main___values_DictStruct_gen) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return _main___values_DictStruct_gen_setup(type);
}

static int
_main___values_DictStruct_gen_traverse(dictstruct____main___values_DictStruct_genObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    return 0;
}

static int
_main___values_DictStruct_gen_clear(dictstruct____main___values_DictStruct_genObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    return 0;
}

static void
_main___values_DictStruct_gen_dealloc(dictstruct____main___values_DictStruct_genObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, _main___values_DictStruct_gen_dealloc)
    _main___values_DictStruct_gen_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem _main___values_DictStruct_gen_vtable[6];
static bool
CPyDef__main___values_DictStruct_gen_trait_vtable_setup(void)
{
    CPyVTableItem _main___values_DictStruct_gen_vtable_scratch[] = {
        (CPyVTableItem)CPyDef__main___values_DictStruct_gen_____mypyc_generator_helper__,
        (CPyVTableItem)CPyDef__main___values_DictStruct_gen_____next__,
        (CPyVTableItem)CPyDef__main___values_DictStruct_gen___send,
        (CPyVTableItem)CPyDef__main___values_DictStruct_gen_____iter__,
        (CPyVTableItem)CPyDef__main___values_DictStruct_gen___throw,
        (CPyVTableItem)CPyDef__main___values_DictStruct_gen___close,
    };
    memcpy(_main___values_DictStruct_gen_vtable, _main___values_DictStruct_gen_vtable_scratch, sizeof(_main___values_DictStruct_gen_vtable));
    return 1;
}

static PyMethodDef _main___values_DictStruct_gen_methods[] = {
    {"__mypyc_generator_helper__",
     (PyCFunction)CPyPy__main___values_DictStruct_gen_____mypyc_generator_helper__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__next__",
     (PyCFunction)CPyPy__main___values_DictStruct_gen_____next__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"send",
     (PyCFunction)CPyPy__main___values_DictStruct_gen___send,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__iter__",
     (PyCFunction)CPyPy__main___values_DictStruct_gen_____iter__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"throw",
     (PyCFunction)CPyPy__main___values_DictStruct_gen___throw,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"close",
     (PyCFunction)CPyPy__main___values_DictStruct_gen___close,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType__main___values_DictStruct_gen_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "values_DictStruct_gen",
    .tp_new = _main___values_DictStruct_gen_new,
    .tp_dealloc = (destructor)_main___values_DictStruct_gen_dealloc,
    .tp_traverse = (traverseproc)_main___values_DictStruct_gen_traverse,
    .tp_clear = (inquiry)_main___values_DictStruct_gen_clear,
    .tp_methods = _main___values_DictStruct_gen_methods,
    .tp_iter = CPyDef__main___values_DictStruct_gen_____iter__,
    .tp_iternext = CPyDef__main___values_DictStruct_gen_____next__,
    .tp_basicsize = sizeof(dictstruct____main___values_DictStruct_genObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType__main___values_DictStruct_gen_template = &CPyType__main___values_DictStruct_gen_template_;

static PyObject *
_main___values_DictStruct_gen_setup(PyTypeObject *type)
{
    dictstruct____main___values_DictStruct_genObject *self;
    self = (dictstruct____main___values_DictStruct_genObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = _main___values_DictStruct_gen_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef__main___values_DictStruct_gen(void)
{
    PyObject *self = _main___values_DictStruct_gen_setup(CPyType__main___values_DictStruct_gen);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get___main_____hash___3_DictStruct_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef__main_____hash___3_DictStruct_obj_____get__(self, instance, owner);
}
static PyObject *_main_____hash___3_DictStruct_obj_setup(PyTypeObject *type);
PyObject *CPyDef__main_____hash___3_DictStruct_obj(void);

static PyObject *
_main_____hash___3_DictStruct_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType__main_____hash___3_DictStruct_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return _main_____hash___3_DictStruct_obj_setup(type);
}

static int
_main_____hash___3_DictStruct_obj_traverse(dictstruct____main_____hash___3_DictStruct_objObject *self, visitproc visit, void *arg)
{
    return 0;
}

static int
_main_____hash___3_DictStruct_obj_clear(dictstruct____main_____hash___3_DictStruct_objObject *self)
{
    return 0;
}

static void
_main_____hash___3_DictStruct_obj_dealloc(dictstruct____main_____hash___3_DictStruct_objObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, _main_____hash___3_DictStruct_obj_dealloc)
    _main_____hash___3_DictStruct_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem _main_____hash___3_DictStruct_obj_vtable[2];
static bool
CPyDef__main_____hash___3_DictStruct_obj_trait_vtable_setup(void)
{
    CPyVTableItem _main_____hash___3_DictStruct_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef__main_____hash___3_DictStruct_obj_____call__,
        (CPyVTableItem)CPyDef__main_____hash___3_DictStruct_obj_____get__,
    };
    memcpy(_main_____hash___3_DictStruct_obj_vtable, _main_____hash___3_DictStruct_obj_vtable_scratch, sizeof(_main_____hash___3_DictStruct_obj_vtable));
    return 1;
}

static PyMethodDef _main_____hash___3_DictStruct_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy__main_____hash___3_DictStruct_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy__main_____hash___3_DictStruct_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType__main_____hash___3_DictStruct_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "__hash___DictStruct_obj",
    .tp_new = _main_____hash___3_DictStruct_obj_new,
    .tp_dealloc = (destructor)_main_____hash___3_DictStruct_obj_dealloc,
    .tp_traverse = (traverseproc)_main_____hash___3_DictStruct_obj_traverse,
    .tp_clear = (inquiry)_main_____hash___3_DictStruct_obj_clear,
    .tp_methods = _main_____hash___3_DictStruct_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get___main_____hash___3_DictStruct_obj,
    .tp_basicsize = sizeof(dictstruct____main_____hash___3_DictStruct_objObject),
    .tp_vectorcall_offset = offsetof(dictstruct____main_____hash___3_DictStruct_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
};
static PyTypeObject *CPyType__main_____hash___3_DictStruct_obj_template = &CPyType__main_____hash___3_DictStruct_obj_template_;

static PyObject *
_main_____hash___3_DictStruct_obj_setup(PyTypeObject *type)
{
    dictstruct____main_____hash___3_DictStruct_objObject *self;
    self = (dictstruct____main_____hash___3_DictStruct_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = _main_____hash___3_DictStruct_obj_vtable;
    self->vectorcall = CPyPy__main_____hash___3_DictStruct_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef__main_____hash___3_DictStruct_obj(void)
{
    PyObject *self = _main_____hash___3_DictStruct_obj_setup(CPyType__main_____hash___3_DictStruct_obj);
    if (self == NULL)
        return NULL;
    return self;
}

static PyMethodDef _mainmodule_methods[] = {
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef _mainmodule = {
    PyModuleDef_HEAD_INIT,
    "dictstruct._main",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    _mainmodule_methods
};

PyObject *CPyInit_dictstruct____main(void)
{
    PyObject* modname = NULL;
    if (CPyModule_dictstruct____main_internal) {
        Py_INCREF(CPyModule_dictstruct____main_internal);
        return CPyModule_dictstruct____main_internal;
    }
    CPyModule_dictstruct____main_internal = PyModule_Create(&_mainmodule);
    if (unlikely(CPyModule_dictstruct____main_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_dictstruct____main_internal, "__name__");
    CPyStatic__main___globals = PyModule_GetDict(CPyModule_dictstruct____main_internal);
    if (unlikely(CPyStatic__main___globals == NULL))
        goto fail;
    CPyType__main_____bool___3_DictStruct_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType__main_____bool___3_DictStruct_obj_template, NULL, modname);
    if (unlikely(!CPyType__main_____bool___3_DictStruct_obj))
        goto fail;
    CPyType__main_____contains___3_DictStruct_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType__main_____contains___3_DictStruct_obj_template, NULL, modname);
    if (unlikely(!CPyType__main_____contains___3_DictStruct_obj))
        goto fail;
    CPyType__main___get_DictStruct_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType__main___get_DictStruct_obj_template, NULL, modname);
    if (unlikely(!CPyType__main___get_DictStruct_obj))
        goto fail;
    CPyType__main_____getitem___3_DictStruct_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType__main_____getitem___3_DictStruct_obj_template, NULL, modname);
    if (unlikely(!CPyType__main_____getitem___3_DictStruct_obj))
        goto fail;
    CPyType__main_____getattribute___3_DictStruct_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType__main_____getattribute___3_DictStruct_obj_template, NULL, modname);
    if (unlikely(!CPyType__main_____getattribute___3_DictStruct_obj))
        goto fail;
    CPyType__main_____setitem___3_DictStruct_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType__main_____setitem___3_DictStruct_obj_template, NULL, modname);
    if (unlikely(!CPyType__main_____setitem___3_DictStruct_obj))
        goto fail;
    CPyType__main_____iter___3_DictStruct_env = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType__main_____iter___3_DictStruct_env_template, NULL, modname);
    if (unlikely(!CPyType__main_____iter___3_DictStruct_env))
        goto fail;
    CPyType__main_____iter___3_DictStruct_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType__main_____iter___3_DictStruct_obj_template, NULL, modname);
    if (unlikely(!CPyType__main_____iter___3_DictStruct_obj))
        goto fail;
    CPyType__main_____iter___3_DictStruct_gen = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType__main_____iter___3_DictStruct_gen_template, NULL, modname);
    if (unlikely(!CPyType__main_____iter___3_DictStruct_gen))
        goto fail;
    CPyType__main_____len___3_DictStruct_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType__main_____len___3_DictStruct_obj_template, NULL, modname);
    if (unlikely(!CPyType__main_____len___3_DictStruct_obj))
        goto fail;
    CPyType__main___keys_DictStruct_env = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType__main___keys_DictStruct_env_template, NULL, modname);
    if (unlikely(!CPyType__main___keys_DictStruct_env))
        goto fail;
    CPyType__main___keys_DictStruct_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType__main___keys_DictStruct_obj_template, NULL, modname);
    if (unlikely(!CPyType__main___keys_DictStruct_obj))
        goto fail;
    CPyType__main___keys_DictStruct_gen = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType__main___keys_DictStruct_gen_template, NULL, modname);
    if (unlikely(!CPyType__main___keys_DictStruct_gen))
        goto fail;
    CPyType__main___items_DictStruct_env = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType__main___items_DictStruct_env_template, NULL, modname);
    if (unlikely(!CPyType__main___items_DictStruct_env))
        goto fail;
    CPyType__main___items_DictStruct_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType__main___items_DictStruct_obj_template, NULL, modname);
    if (unlikely(!CPyType__main___items_DictStruct_obj))
        goto fail;
    CPyType__main___items_DictStruct_gen = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType__main___items_DictStruct_gen_template, NULL, modname);
    if (unlikely(!CPyType__main___items_DictStruct_gen))
        goto fail;
    CPyType__main___values_DictStruct_env = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType__main___values_DictStruct_env_template, NULL, modname);
    if (unlikely(!CPyType__main___values_DictStruct_env))
        goto fail;
    CPyType__main___values_DictStruct_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType__main___values_DictStruct_obj_template, NULL, modname);
    if (unlikely(!CPyType__main___values_DictStruct_obj))
        goto fail;
    CPyType__main___values_DictStruct_gen = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType__main___values_DictStruct_gen_template, NULL, modname);
    if (unlikely(!CPyType__main___values_DictStruct_gen))
        goto fail;
    CPyType__main_____hash___3_DictStruct_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType__main_____hash___3_DictStruct_obj_template, NULL, modname);
    if (unlikely(!CPyType__main_____hash___3_DictStruct_obj))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef__main_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_dictstruct____main_internal;
    fail:
    Py_CLEAR(CPyModule_dictstruct____main_internal);
    Py_CLEAR(modname);
    CPy_XDECREF(CPyStatic__main___UNSET);
    CPyStatic__main___UNSET = NULL;
    CPy_XDECREF(CPyStatic__main____getattribute);
    CPyStatic__main____getattribute = NULL;
    Py_CLEAR(CPyType__main___DictStruct);
    Py_CLEAR(CPyType__main_____bool___3_DictStruct_obj);
    Py_CLEAR(CPyType__main_____contains___3_DictStruct_obj);
    Py_CLEAR(CPyType__main___get_DictStruct_obj);
    Py_CLEAR(CPyType__main_____getitem___3_DictStruct_obj);
    Py_CLEAR(CPyType__main_____getattribute___3_DictStruct_obj);
    Py_CLEAR(CPyType__main_____setitem___3_DictStruct_obj);
    Py_CLEAR(CPyType__main_____iter___3_DictStruct_env);
    Py_CLEAR(CPyType__main_____iter___3_DictStruct_obj);
    Py_CLEAR(CPyType__main_____iter___3_DictStruct_gen);
    Py_CLEAR(CPyType__main_____len___3_DictStruct_obj);
    Py_CLEAR(CPyType__main___keys_DictStruct_env);
    Py_CLEAR(CPyType__main___keys_DictStruct_obj);
    Py_CLEAR(CPyType__main___keys_DictStruct_gen);
    Py_CLEAR(CPyType__main___items_DictStruct_env);
    Py_CLEAR(CPyType__main___items_DictStruct_obj);
    Py_CLEAR(CPyType__main___items_DictStruct_gen);
    Py_CLEAR(CPyType__main___values_DictStruct_env);
    Py_CLEAR(CPyType__main___values_DictStruct_obj);
    Py_CLEAR(CPyType__main___values_DictStruct_gen);
    Py_CLEAR(CPyType__main_____hash___3_DictStruct_obj);
    return NULL;
}

PyObject *CPyDef__main_____bool___3_DictStruct_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = cpy_r_instance == cpy_r_r0;
    if (!cpy_r_r1) goto CPyL2;
    CPy_INCREF(cpy_r___mypyc_self__);
    return cpy_r___mypyc_self__;
CPyL2: ;
    cpy_r_r2 = PyMethod_New(cpy_r___mypyc_self__, cpy_r_instance);
    if (cpy_r_r2 == NULL) goto CPyL4;
    return cpy_r_r2;
CPyL4: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy__main_____bool___3_DictStruct_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"instance", "owner", 0};
    static CPyArg_Parser parser = {"OO:__get__", kwlist, 0};
    PyObject *obj_instance;
    PyObject *obj_owner;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_instance, &obj_owner)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_instance = obj_instance;
    PyObject *arg_owner = obj_owner;
    PyObject *retval = CPyDef__main_____bool___3_DictStruct_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("dictstruct/_main.py", "__get__", -1, CPyStatic__main___globals);
    return NULL;
}

char CPyDef__main_____bool___3_DictStruct_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_self) {
    return 1;
}

PyObject *CPyPy__main_____bool___3_DictStruct_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"self", 0};
    static CPyArg_Parser parser = {"O:__call__", kwlist, 0};
    PyObject *obj_self;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, PyVectorcall_NARGS(nargs), kwnames, &parser, &obj_self)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType__main___DictStruct))
        arg_self = obj_self;
    else {
        CPy_TypeError("dictstruct._main.DictStruct", obj_self); 
        goto fail;
    }
    char retval = CPyDef__main_____bool___3_DictStruct_obj_____call__(arg___mypyc_self__, arg_self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("dictstruct/_main.py", "__bool__", 44, CPyStatic__main___globals);
    return NULL;
}

PyObject *CPyDef__main_____contains___3_DictStruct_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = cpy_r_instance == cpy_r_r0;
    if (!cpy_r_r1) goto CPyL2;
    CPy_INCREF(cpy_r___mypyc_self__);
    return cpy_r___mypyc_self__;
CPyL2: ;
    cpy_r_r2 = PyMethod_New(cpy_r___mypyc_self__, cpy_r_instance);
    if (cpy_r_r2 == NULL) goto CPyL4;
    return cpy_r_r2;
CPyL4: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy__main_____contains___3_DictStruct_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"instance", "owner", 0};
    static CPyArg_Parser parser = {"OO:__get__", kwlist, 0};
    PyObject *obj_instance;
    PyObject *obj_owner;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_instance, &obj_owner)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_instance = obj_instance;
    PyObject *arg_owner = obj_owner;
    PyObject *retval = CPyDef__main_____contains___3_DictStruct_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("dictstruct/_main.py", "__get__", -1, CPyStatic__main___globals);
    return NULL;
}

char CPyDef__main_____contains___3_DictStruct_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_self, PyObject *cpy_r_key) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    int32_t cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_r13;
    char cpy_r_r14;
    cpy_r_r0 = CPyStatics[9]; /* '__struct_fields__' */
    cpy_r_r1 = CPyObject_GetAttr(cpy_r_self, cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("dictstruct/_main.py", "__contains__", 74, CPyStatic__main___globals);
        goto CPyL14;
    }
    if (likely(PyTuple_Check(cpy_r_r1)))
        cpy_r_r2 = cpy_r_r1;
    else {
        CPy_TypeErrorTraceback("dictstruct/_main.py", "__contains__", 74, CPyStatic__main___globals, "tuple", cpy_r_r1);
        goto CPyL14;
    }
    cpy_r_r3 = PySequence_Contains(cpy_r_r2, cpy_r_key);
    CPy_DECREF(cpy_r_r2);
    cpy_r_r4 = cpy_r_r3 >= 0;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("dictstruct/_main.py", "__contains__", 74, CPyStatic__main___globals);
        goto CPyL14;
    }
    cpy_r_r5 = cpy_r_r3;
    if (cpy_r_r5) goto CPyL5;
    cpy_r_r6 = cpy_r_r5;
    goto CPyL13;
CPyL5: ;
    cpy_r_r7 = CPyStatic__main___UNSET;
    if (likely(cpy_r_r7 != NULL)) goto CPyL8;
    PyErr_SetString(PyExc_NameError, "value for final name \"UNSET\" was not set");
    cpy_r_r8 = 0;
    if (unlikely(!cpy_r_r8)) {
        CPy_AddTraceback("dictstruct/_main.py", "__contains__", 74, CPyStatic__main___globals);
        goto CPyL14;
    }
    CPy_Unreachable();
CPyL8: ;
    cpy_r_r9 = CPyObject_GetAttr3(cpy_r_self, cpy_r_key, cpy_r_r7);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("dictstruct/_main.py", "__contains__", 74, CPyStatic__main___globals);
        goto CPyL14;
    }
    cpy_r_r10 = CPyStatic__main___UNSET;
    if (unlikely(cpy_r_r10 == NULL)) {
        goto CPyL15;
    } else
        goto CPyL12;
CPyL10: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"UNSET\" was not set");
    cpy_r_r11 = 0;
    if (unlikely(!cpy_r_r11)) {
        CPy_AddTraceback("dictstruct/_main.py", "__contains__", 74, CPyStatic__main___globals);
        goto CPyL14;
    }
    CPy_Unreachable();
CPyL12: ;
    cpy_r_r12 = cpy_r_r9 == cpy_r_r10;
    CPy_DECREF(cpy_r_r9);
    cpy_r_r13 = cpy_r_r12 ^ 1;
    cpy_r_r6 = cpy_r_r13;
CPyL13: ;
    return cpy_r_r6;
CPyL14: ;
    cpy_r_r14 = 2;
    return cpy_r_r14;
CPyL15: ;
    CPy_DecRef(cpy_r_r9);
    goto CPyL10;
}

PyObject *CPyPy__main_____contains___3_DictStruct_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"self", "key", 0};
    static CPyArg_Parser parser = {"OO:__call__", kwlist, 0};
    PyObject *obj_self;
    PyObject *obj_key;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, PyVectorcall_NARGS(nargs), kwnames, &parser, &obj_self, &obj_key)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType__main___DictStruct))
        arg_self = obj_self;
    else {
        CPy_TypeError("dictstruct._main.DictStruct", obj_self); 
        goto fail;
    }
    PyObject *arg_key;
    if (likely(PyUnicode_Check(obj_key)))
        arg_key = obj_key;
    else {
        CPy_TypeError("str", obj_key); 
        goto fail;
    }
    char retval = CPyDef__main_____contains___3_DictStruct_obj_____call__(arg___mypyc_self__, arg_self, arg_key);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("dictstruct/_main.py", "__contains__", 55, CPyStatic__main___globals);
    return NULL;
}

PyObject *CPyDef__main___get_DictStruct_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = cpy_r_instance == cpy_r_r0;
    if (!cpy_r_r1) goto CPyL2;
    CPy_INCREF(cpy_r___mypyc_self__);
    return cpy_r___mypyc_self__;
CPyL2: ;
    cpy_r_r2 = PyMethod_New(cpy_r___mypyc_self__, cpy_r_instance);
    if (cpy_r_r2 == NULL) goto CPyL4;
    return cpy_r_r2;
CPyL4: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy__main___get_DictStruct_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"instance", "owner", 0};
    static CPyArg_Parser parser = {"OO:__get__", kwlist, 0};
    PyObject *obj_instance;
    PyObject *obj_owner;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_instance, &obj_owner)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_instance = obj_instance;
    PyObject *arg_owner = obj_owner;
    PyObject *retval = CPyDef__main___get_DictStruct_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("dictstruct/_main.py", "__get__", -1, CPyStatic__main___globals);
    return NULL;
}

PyObject *CPyDef__main___get_DictStruct_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_self, PyObject *cpy_r_key, PyObject *cpy_r_default) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    if (cpy_r_default != NULL) goto CPyL5;
    cpy_r_r0 = Py_None;
    cpy_r_default = cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = CPyObject_GetAttr3(cpy_r_self, cpy_r_key, cpy_r_default);
    CPy_DECREF(cpy_r_default);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("dictstruct/_main.py", "get", 93, CPyStatic__main___globals);
        goto CPyL4;
    }
    return cpy_r_r1;
CPyL4: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
CPyL5: ;
    CPy_INCREF(cpy_r_default);
    goto CPyL2;
}

PyObject *CPyPy__main___get_DictStruct_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"self", "key", "default", 0};
    static CPyArg_Parser parser = {"OO|O:__call__", kwlist, 0};
    PyObject *obj_self;
    PyObject *obj_key;
    PyObject *obj_default = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, PyVectorcall_NARGS(nargs), kwnames, &parser, &obj_self, &obj_key, &obj_default)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType__main___DictStruct))
        arg_self = obj_self;
    else {
        CPy_TypeError("dictstruct._main.DictStruct", obj_self); 
        goto fail;
    }
    PyObject *arg_key;
    if (likely(PyUnicode_Check(obj_key)))
        arg_key = obj_key;
    else {
        CPy_TypeError("str", obj_key); 
        goto fail;
    }
    PyObject *arg_default;
    if (obj_default == NULL) {
        arg_default = NULL;
    } else {
        arg_default = obj_default; 
    }
    PyObject *retval = CPyDef__main___get_DictStruct_obj_____call__(arg___mypyc_self__, arg_self, arg_key, arg_default);
    return retval;
fail: ;
    CPy_AddTraceback("dictstruct/_main.py", "get", 76, CPyStatic__main___globals);
    return NULL;
}

PyObject *CPyDef__main_____getitem___3_DictStruct_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = cpy_r_instance == cpy_r_r0;
    if (!cpy_r_r1) goto CPyL2;
    CPy_INCREF(cpy_r___mypyc_self__);
    return cpy_r___mypyc_self__;
CPyL2: ;
    cpy_r_r2 = PyMethod_New(cpy_r___mypyc_self__, cpy_r_instance);
    if (cpy_r_r2 == NULL) goto CPyL4;
    return cpy_r_r2;
CPyL4: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy__main_____getitem___3_DictStruct_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"instance", "owner", 0};
    static CPyArg_Parser parser = {"OO:__get__", kwlist, 0};
    PyObject *obj_instance;
    PyObject *obj_owner;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_instance, &obj_owner)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_instance = obj_instance;
    PyObject *arg_owner = obj_owner;
    PyObject *retval = CPyDef__main_____getitem___3_DictStruct_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("dictstruct/_main.py", "__get__", -1, CPyStatic__main___globals);
    return NULL;
}

PyObject *CPyDef__main_____getitem___3_DictStruct_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_self, PyObject *cpy_r_attr) {
    PyObject *cpy_r_r0;
    tuple_T3OOO cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject **cpy_r_r11;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    cpy_r_r0 = CPyObject_GetAttr(cpy_r_self, cpy_r_attr);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("dictstruct/_main.py", "__getitem__", 117, CPyStatic__main___globals);
        goto CPyL3;
    }
    return cpy_r_r0;
CPyL3: ;
    cpy_r_r1 = CPy_CatchError();
    cpy_r_r2 = CPyModule_builtins;
    cpy_r_r3 = CPyStatics[10]; /* 'AttributeError' */
    cpy_r_r4 = CPyObject_GetAttr(cpy_r_r2, cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("dictstruct/_main.py", "__getitem__", 118, CPyStatic__main___globals);
        goto CPyL11;
    }
    cpy_r_r5 = CPy_ExceptionMatches(cpy_r_r4);
    CPy_DecRef(cpy_r_r4);
    if (!cpy_r_r5) goto CPyL9;
    cpy_r_r6 = CPy_GetExcValue();
    CPy_DecRef(cpy_r_r6);
    cpy_r_r7 = CPyModule_builtins;
    cpy_r_r8 = CPyStatics[11]; /* 'KeyError' */
    cpy_r_r9 = CPyObject_GetAttr(cpy_r_r7, cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("dictstruct/_main.py", "__getitem__", 119, CPyStatic__main___globals);
        goto CPyL11;
    }
    PyObject *cpy_r_r10[2] = {cpy_r_attr, cpy_r_self};
    cpy_r_r11 = (PyObject **)&cpy_r_r10;
    cpy_r_r12 = PyObject_Vectorcall(cpy_r_r9, cpy_r_r11, 2, 0);
    CPy_DecRef(cpy_r_r9);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("dictstruct/_main.py", "__getitem__", 119, CPyStatic__main___globals);
        goto CPyL11;
    }
    CPy_Raise(cpy_r_r12);
    CPy_DecRef(cpy_r_r12);
    if (unlikely(!0)) {
        CPy_AddTraceback("dictstruct/_main.py", "__getitem__", 119, CPyStatic__main___globals);
        goto CPyL11;
    } else
        goto CPyL14;
CPyL8: ;
    CPy_Unreachable();
CPyL9: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL11;
    } else
        goto CPyL15;
CPyL10: ;
    CPy_Unreachable();
CPyL11: ;
    CPy_RestoreExcInfo(cpy_r_r1);
    CPy_DecRef(cpy_r_r1.f0);
    CPy_DecRef(cpy_r_r1.f1);
    CPy_DecRef(cpy_r_r1.f2);
    cpy_r_r13 = CPy_KeepPropagating();
    if (!cpy_r_r13) goto CPyL13;
    CPy_Unreachable();
CPyL13: ;
    cpy_r_r14 = NULL;
    return cpy_r_r14;
CPyL14: ;
    CPy_DecRef(cpy_r_r1.f0);
    CPy_DecRef(cpy_r_r1.f1);
    CPy_DecRef(cpy_r_r1.f2);
    goto CPyL8;
CPyL15: ;
    CPy_DecRef(cpy_r_r1.f0);
    CPy_DecRef(cpy_r_r1.f1);
    CPy_DecRef(cpy_r_r1.f2);
    goto CPyL10;
}

PyObject *CPyPy__main_____getitem___3_DictStruct_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"self", "attr", 0};
    static CPyArg_Parser parser = {"OO:__call__", kwlist, 0};
    PyObject *obj_self;
    PyObject *obj_attr;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, PyVectorcall_NARGS(nargs), kwnames, &parser, &obj_self, &obj_attr)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType__main___DictStruct))
        arg_self = obj_self;
    else {
        CPy_TypeError("dictstruct._main.DictStruct", obj_self); 
        goto fail;
    }
    PyObject *arg_attr;
    if (likely(PyUnicode_Check(obj_attr)))
        arg_attr = obj_attr;
    else {
        CPy_TypeError("str", obj_attr); 
        goto fail;
    }
    PyObject *retval = CPyDef__main_____getitem___3_DictStruct_obj_____call__(arg___mypyc_self__, arg_self, arg_attr);
    return retval;
fail: ;
    CPy_AddTraceback("dictstruct/_main.py", "__getitem__", 95, CPyStatic__main___globals);
    return NULL;
}

PyObject *CPyDef__main_____getattribute___3_DictStruct_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = cpy_r_instance == cpy_r_r0;
    if (!cpy_r_r1) goto CPyL2;
    CPy_INCREF(cpy_r___mypyc_self__);
    return cpy_r___mypyc_self__;
CPyL2: ;
    cpy_r_r2 = PyMethod_New(cpy_r___mypyc_self__, cpy_r_instance);
    if (cpy_r_r2 == NULL) goto CPyL4;
    return cpy_r_r2;
CPyL4: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy__main_____getattribute___3_DictStruct_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"instance", "owner", 0};
    static CPyArg_Parser parser = {"OO:__get__", kwlist, 0};
    PyObject *obj_instance;
    PyObject *obj_owner;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_instance, &obj_owner)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_instance = obj_instance;
    PyObject *arg_owner = obj_owner;
    PyObject *retval = CPyDef__main_____getattribute___3_DictStruct_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("dictstruct/_main.py", "__get__", -1, CPyStatic__main___globals);
    return NULL;
}

PyObject *CPyDef__main_____getattribute___3_DictStruct_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_self, PyObject *cpy_r_attr) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject **cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject **cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    cpy_r_r0 = CPyStatic__main____getattribute;
    if (likely(cpy_r_r0 != NULL)) goto CPyL3;
    PyErr_SetString(PyExc_NameError, "value for final name \"_getattribute\" was not set");
    cpy_r_r1 = 0;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("dictstruct/_main.py", "__getattribute__", 143, CPyStatic__main___globals);
        goto CPyL16;
    }
    CPy_Unreachable();
CPyL3: ;
    PyObject *cpy_r_r2[2] = {cpy_r_self, cpy_r_attr};
    cpy_r_r3 = (PyObject **)&cpy_r_r2;
    cpy_r_r4 = PyObject_Vectorcall(cpy_r_r0, cpy_r_r3, 2, 0);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("dictstruct/_main.py", "__getattribute__", 143, CPyStatic__main___globals);
        goto CPyL16;
    }
    cpy_r_r5 = CPyStatic__main___UNSET;
    if (unlikely(cpy_r_r5 == NULL)) {
        goto CPyL17;
    } else
        goto CPyL7;
CPyL5: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"UNSET\" was not set");
    cpy_r_r6 = 0;
    if (unlikely(!cpy_r_r6)) {
        CPy_AddTraceback("dictstruct/_main.py", "__getattribute__", 144, CPyStatic__main___globals);
        goto CPyL16;
    }
    CPy_Unreachable();
CPyL7: ;
    cpy_r_r7 = cpy_r_r4 == cpy_r_r5;
    if (cpy_r_r7) {
        goto CPyL18;
    } else
        goto CPyL15;
CPyL8: ;
    cpy_r_r8 = CPyStatics[12]; /* "'" */
    cpy_r_r9 = PyObject_Type(cpy_r_self);
    cpy_r_r10 = CPyStatics[13]; /* '__name__' */
    cpy_r_r11 = CPyObject_GetAttr(cpy_r_r9, cpy_r_r10);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("dictstruct/_main.py", "__getattribute__", 146, CPyStatic__main___globals);
        goto CPyL16;
    }
    if (likely(PyUnicode_Check(cpy_r_r11)))
        cpy_r_r12 = cpy_r_r11;
    else {
        CPy_TypeErrorTraceback("dictstruct/_main.py", "__getattribute__", 146, CPyStatic__main___globals, "str", cpy_r_r11);
        goto CPyL16;
    }
    cpy_r_r13 = CPyStatics[14]; /* "' object has no attribute '" */
    cpy_r_r14 = CPyStatics[12]; /* "'" */
    cpy_r_r15 = CPyStr_Build(5, cpy_r_r8, cpy_r_r12, cpy_r_r13, cpy_r_attr, cpy_r_r14);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("dictstruct/_main.py", "__getattribute__", 146, CPyStatic__main___globals);
        goto CPyL16;
    }
    cpy_r_r16 = CPyModule_builtins;
    cpy_r_r17 = CPyStatics[10]; /* 'AttributeError' */
    cpy_r_r18 = CPyObject_GetAttr(cpy_r_r16, cpy_r_r17);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("dictstruct/_main.py", "__getattribute__", 145, CPyStatic__main___globals);
        goto CPyL19;
    }
    PyObject *cpy_r_r19[1] = {cpy_r_r15};
    cpy_r_r20 = (PyObject **)&cpy_r_r19;
    cpy_r_r21 = PyObject_Vectorcall(cpy_r_r18, cpy_r_r20, 1, 0);
    CPy_DECREF(cpy_r_r18);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("dictstruct/_main.py", "__getattribute__", 145, CPyStatic__main___globals);
        goto CPyL19;
    }
    CPy_DECREF(cpy_r_r15);
    CPy_Raise(cpy_r_r21);
    CPy_DECREF(cpy_r_r21);
    if (unlikely(!0)) {
        CPy_AddTraceback("dictstruct/_main.py", "__getattribute__", 145, CPyStatic__main___globals);
        goto CPyL16;
    }
    CPy_Unreachable();
CPyL15: ;
    return cpy_r_r4;
CPyL16: ;
    cpy_r_r22 = NULL;
    return cpy_r_r22;
CPyL17: ;
    CPy_DecRef(cpy_r_r4);
    goto CPyL5;
CPyL18: ;
    CPy_DECREF(cpy_r_r4);
    goto CPyL8;
CPyL19: ;
    CPy_DecRef(cpy_r_r15);
    goto CPyL16;
}

PyObject *CPyPy__main_____getattribute___3_DictStruct_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"self", "attr", 0};
    static CPyArg_Parser parser = {"OO:__call__", kwlist, 0};
    PyObject *obj_self;
    PyObject *obj_attr;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, PyVectorcall_NARGS(nargs), kwnames, &parser, &obj_self, &obj_attr)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType__main___DictStruct))
        arg_self = obj_self;
    else {
        CPy_TypeError("dictstruct._main.DictStruct", obj_self); 
        goto fail;
    }
    PyObject *arg_attr;
    if (likely(PyUnicode_Check(obj_attr)))
        arg_attr = obj_attr;
    else {
        CPy_TypeError("str", obj_attr); 
        goto fail;
    }
    PyObject *retval = CPyDef__main_____getattribute___3_DictStruct_obj_____call__(arg___mypyc_self__, arg_self, arg_attr);
    return retval;
fail: ;
    CPy_AddTraceback("dictstruct/_main.py", "__getattribute__", 121, CPyStatic__main___globals);
    return NULL;
}

PyObject *CPyDef__main_____setitem___3_DictStruct_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = cpy_r_instance == cpy_r_r0;
    if (!cpy_r_r1) goto CPyL2;
    CPy_INCREF(cpy_r___mypyc_self__);
    return cpy_r___mypyc_self__;
CPyL2: ;
    cpy_r_r2 = PyMethod_New(cpy_r___mypyc_self__, cpy_r_instance);
    if (cpy_r_r2 == NULL) goto CPyL4;
    return cpy_r_r2;
CPyL4: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy__main_____setitem___3_DictStruct_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"instance", "owner", 0};
    static CPyArg_Parser parser = {"OO:__get__", kwlist, 0};
    PyObject *obj_instance;
    PyObject *obj_owner;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_instance, &obj_owner)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_instance = obj_instance;
    PyObject *arg_owner = obj_owner;
    PyObject *retval = CPyDef__main_____setitem___3_DictStruct_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("dictstruct/_main.py", "__get__", -1, CPyStatic__main___globals);
    return NULL;
}

char CPyDef__main_____setitem___3_DictStruct_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_self, PyObject *cpy_r_attr, PyObject *cpy_r_value) {
    int32_t cpy_r_r0;
    char cpy_r_r1;
    tuple_T3OOO cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    char cpy_r_r20;
    cpy_r_r0 = PyObject_SetAttr(cpy_r_self, cpy_r_attr, cpy_r_value);
    cpy_r_r1 = cpy_r_r0 >= 0;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("dictstruct/_main.py", "__setitem__", 176, CPyStatic__main___globals);
    } else
        goto CPyL18;
    cpy_r_r2 = CPy_CatchError();
    cpy_r_r3 = CPyModule_builtins;
    cpy_r_r4 = CPyStatics[10]; /* 'AttributeError' */
    cpy_r_r5 = CPyObject_GetAttr(cpy_r_r3, cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("dictstruct/_main.py", "__setitem__", 177, CPyStatic__main___globals);
        goto CPyL16;
    }
    cpy_r_r6 = CPy_ExceptionMatches(cpy_r_r5);
    CPy_DecRef(cpy_r_r5);
    if (!cpy_r_r6) goto CPyL14;
    cpy_r_r7 = CPy_GetExcValue();
    cpy_r_r8 = CPyStatics[15]; /* 'args' */
    cpy_r_r9 = CPyObject_GetAttr(cpy_r_r7, cpy_r_r8);
    CPy_DecRef(cpy_r_r7);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("dictstruct/_main.py", "__setitem__", 178, CPyStatic__main___globals);
        goto CPyL16;
    }
    if (likely(PyTuple_Check(cpy_r_r9)))
        cpy_r_r10 = cpy_r_r9;
    else {
        CPy_TypeErrorTraceback("dictstruct/_main.py", "__setitem__", 178, CPyStatic__main___globals, "tuple", cpy_r_r9);
        goto CPyL16;
    }
    cpy_r_r11 = CPyModule_builtins;
    cpy_r_r12 = CPyStatics[16]; /* 'TypeError' */
    cpy_r_r13 = CPyObject_GetAttr(cpy_r_r11, cpy_r_r12);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("dictstruct/_main.py", "__setitem__", 178, CPyStatic__main___globals);
        goto CPyL20;
    }
    cpy_r_r14 = PyList_New(0);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("dictstruct/_main.py", "__setitem__", 178, CPyStatic__main___globals);
        goto CPyL21;
    }
    cpy_r_r15 = CPyList_Extend(cpy_r_r14, cpy_r_r10);
    CPy_DecRef(cpy_r_r10);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("dictstruct/_main.py", "__setitem__", 178, CPyStatic__main___globals);
        goto CPyL22;
    } else
        goto CPyL23;
CPyL9: ;
    cpy_r_r16 = PyList_AsTuple(cpy_r_r14);
    CPy_DecRef(cpy_r_r14);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("dictstruct/_main.py", "__setitem__", 178, CPyStatic__main___globals);
        goto CPyL24;
    }
    cpy_r_r17 = PyDict_New();
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("dictstruct/_main.py", "__setitem__", 178, CPyStatic__main___globals);
        goto CPyL25;
    }
    cpy_r_r18 = PyObject_Call(cpy_r_r13, cpy_r_r16, cpy_r_r17);
    CPy_DecRef(cpy_r_r13);
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_r17);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("dictstruct/_main.py", "__setitem__", 178, CPyStatic__main___globals);
        goto CPyL16;
    }
    CPy_Raise(cpy_r_r18);
    CPy_DecRef(cpy_r_r18);
    if (unlikely(!0)) {
        CPy_AddTraceback("dictstruct/_main.py", "__setitem__", 178, CPyStatic__main___globals);
        goto CPyL16;
    } else
        goto CPyL26;
CPyL13: ;
    CPy_Unreachable();
CPyL14: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL16;
    } else
        goto CPyL27;
CPyL15: ;
    CPy_Unreachable();
CPyL16: ;
    CPy_RestoreExcInfo(cpy_r_r2);
    CPy_DecRef(cpy_r_r2.f0);
    CPy_DecRef(cpy_r_r2.f1);
    CPy_DecRef(cpy_r_r2.f2);
    cpy_r_r19 = CPy_KeepPropagating();
    if (!cpy_r_r19) goto CPyL19;
    CPy_Unreachable();
CPyL18: ;
    return 1;
CPyL19: ;
    cpy_r_r20 = 2;
    return cpy_r_r20;
CPyL20: ;
    CPy_DecRef(cpy_r_r10);
    goto CPyL16;
CPyL21: ;
    CPy_DecRef(cpy_r_r10);
    CPy_DecRef(cpy_r_r13);
    goto CPyL16;
CPyL22: ;
    CPy_DecRef(cpy_r_r13);
    CPy_DecRef(cpy_r_r14);
    goto CPyL16;
CPyL23: ;
    CPy_DecRef(cpy_r_r15);
    goto CPyL9;
CPyL24: ;
    CPy_DecRef(cpy_r_r13);
    goto CPyL16;
CPyL25: ;
    CPy_DecRef(cpy_r_r13);
    CPy_DecRef(cpy_r_r16);
    goto CPyL16;
CPyL26: ;
    CPy_DecRef(cpy_r_r2.f0);
    CPy_DecRef(cpy_r_r2.f1);
    CPy_DecRef(cpy_r_r2.f2);
    goto CPyL13;
CPyL27: ;
    CPy_DecRef(cpy_r_r2.f0);
    CPy_DecRef(cpy_r_r2.f1);
    CPy_DecRef(cpy_r_r2.f2);
    goto CPyL15;
}

PyObject *CPyPy__main_____setitem___3_DictStruct_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"self", "attr", "value", 0};
    static CPyArg_Parser parser = {"OOO:__call__", kwlist, 0};
    PyObject *obj_self;
    PyObject *obj_attr;
    PyObject *obj_value;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, PyVectorcall_NARGS(nargs), kwnames, &parser, &obj_self, &obj_attr, &obj_value)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType__main___DictStruct))
        arg_self = obj_self;
    else {
        CPy_TypeError("dictstruct._main.DictStruct", obj_self); 
        goto fail;
    }
    PyObject *arg_attr;
    if (likely(PyUnicode_Check(obj_attr)))
        arg_attr = obj_attr;
    else {
        CPy_TypeError("str", obj_attr); 
        goto fail;
    }
    PyObject *arg_value = obj_value;
    char retval = CPyDef__main_____setitem___3_DictStruct_obj_____call__(arg___mypyc_self__, arg_self, arg_attr, arg_value);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("dictstruct/_main.py", "__setitem__", 150, CPyStatic__main___globals);
    return NULL;
}

PyObject *CPyDef__main_____iter___3_DictStruct_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = cpy_r_instance == cpy_r_r0;
    if (!cpy_r_r1) goto CPyL2;
    CPy_INCREF(cpy_r___mypyc_self__);
    return cpy_r___mypyc_self__;
CPyL2: ;
    cpy_r_r2 = PyMethod_New(cpy_r___mypyc_self__, cpy_r_instance);
    if (cpy_r_r2 == NULL) goto CPyL4;
    return cpy_r_r2;
CPyL4: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy__main_____iter___3_DictStruct_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"instance", "owner", 0};
    static CPyArg_Parser parser = {"OO:__get__", kwlist, 0};
    PyObject *obj_instance;
    PyObject *obj_owner;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_instance, &obj_owner)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_instance = obj_instance;
    PyObject *arg_owner = obj_owner;
    PyObject *retval = CPyDef__main_____iter___3_DictStruct_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("dictstruct/_main.py", "__get__", -1, CPyStatic__main___globals);
    return NULL;
}

PyObject *CPyDef__main_____iter___3_DictStruct_gen_____mypyc_generator_helper__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    CPyPtr cpy_r_r11;
    int64_t cpy_r_r12;
    CPyTagged cpy_r_r13;
    CPyTagged cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    CPyTagged cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    char cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    char cpy_r_r29;
    char cpy_r_r30;
    char cpy_r_r31;
    PyObject *cpy_r_r32;
    char cpy_r_r33;
    PyObject *cpy_r_r34;
    char cpy_r_r35;
    CPyTagged cpy_r_r36;
    CPyTagged cpy_r_r37;
    char cpy_r_r38;
    PyObject *cpy_r_r39;
    char cpy_r_r40;
    char cpy_r_r41;
    char cpy_r_r42;
    char cpy_r_r43;
    PyObject *cpy_r_r44;
    cpy_r_r0 = ((dictstruct____main_____iter___3_DictStruct_genObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("dictstruct/_main.py", "__iter__", "__iter___DictStruct_gen", "__mypyc_env__", 180, CPyStatic__main___globals);
        goto CPyL45;
    }
    CPy_INCREF_NO_IMM(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((dictstruct____main_____iter___3_DictStruct_envObject *)cpy_r_r0)->___mypyc_next_label__;
    if (unlikely(cpy_r_r1 == CPY_INT_TAG)) {
        CPy_AttributeError("dictstruct/_main.py", "__iter__", "__iter___DictStruct_env", "__mypyc_next_label__", 180, CPyStatic__main___globals);
        goto CPyL46;
    }
    CPyTagged_INCREF(cpy_r_r1);
    goto CPyL41;
CPyL2: ;
    cpy_r_r2 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r3 = cpy_r_type != cpy_r_r2;
    if (cpy_r_r3) {
        goto CPyL47;
    } else
        goto CPyL5;
CPyL3: ;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("dictstruct/_main.py", "__iter__", 180, CPyStatic__main___globals);
        goto CPyL45;
    }
    CPy_Unreachable();
CPyL5: ;
    cpy_r_r4 = ((dictstruct____main_____iter___3_DictStruct_envObject *)cpy_r_r0)->_self;
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AttributeError("dictstruct/_main.py", "__iter__", "__iter___DictStruct_env", "self", 195, CPyStatic__main___globals);
        goto CPyL46;
    }
    CPy_INCREF_NO_IMM(cpy_r_r4);
CPyL6: ;
    cpy_r_r5 = CPyStatics[9]; /* '__struct_fields__' */
    cpy_r_r6 = CPyObject_GetAttr(cpy_r_r4, cpy_r_r5);
    CPy_DECREF_NO_IMM(cpy_r_r4);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("dictstruct/_main.py", "__iter__", 195, CPyStatic__main___globals);
        goto CPyL46;
    }
    if (likely(PyTuple_Check(cpy_r_r6)))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("dictstruct/_main.py", "__iter__", 195, CPyStatic__main___globals, "tuple", cpy_r_r6);
        goto CPyL46;
    }
    if (((dictstruct____main_____iter___3_DictStruct_envObject *)cpy_r_r0)->___mypyc_temp__0 != NULL) {
        CPy_DECREF(((dictstruct____main_____iter___3_DictStruct_envObject *)cpy_r_r0)->___mypyc_temp__0);
    }
    ((dictstruct____main_____iter___3_DictStruct_envObject *)cpy_r_r0)->___mypyc_temp__0 = cpy_r_r7;
    cpy_r_r8 = 1;
    if (unlikely(!cpy_r_r8)) {
        CPy_AddTraceback("dictstruct/_main.py", "__iter__", -1, CPyStatic__main___globals);
        goto CPyL46;
    }
    ((dictstruct____main_____iter___3_DictStruct_envObject *)cpy_r_r0)->___mypyc_temp__1 = 0;
    cpy_r_r9 = 1;
    if (unlikely(!cpy_r_r9)) {
        CPy_AddTraceback("dictstruct/_main.py", "__iter__", -1, CPyStatic__main___globals);
        goto CPyL46;
    }
CPyL10: ;
    cpy_r_r10 = ((dictstruct____main_____iter___3_DictStruct_envObject *)cpy_r_r0)->___mypyc_temp__0;
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AttributeError("dictstruct/_main.py", "__iter__", "__iter___DictStruct_env", "__mypyc_temp__0", 195, CPyStatic__main___globals);
        goto CPyL46;
    }
    CPy_INCREF(cpy_r_r10);
CPyL11: ;
    cpy_r_r11 = (CPyPtr)&((PyVarObject *)cpy_r_r10)->ob_size;
    cpy_r_r12 = *(int64_t *)cpy_r_r11;
    CPy_DECREF(cpy_r_r10);
    cpy_r_r13 = cpy_r_r12 << 1;
    cpy_r_r14 = ((dictstruct____main_____iter___3_DictStruct_envObject *)cpy_r_r0)->___mypyc_temp__1;
    if (unlikely(cpy_r_r14 == CPY_INT_TAG)) {
        CPy_AttributeError("dictstruct/_main.py", "__iter__", "__iter___DictStruct_env", "__mypyc_temp__1", 195, CPyStatic__main___globals);
        goto CPyL46;
    }
CPyL12: ;
    cpy_r_r15 = (Py_ssize_t)cpy_r_r14 < (Py_ssize_t)cpy_r_r13;
    if (!cpy_r_r15) goto CPyL38;
    cpy_r_r16 = ((dictstruct____main_____iter___3_DictStruct_envObject *)cpy_r_r0)->___mypyc_temp__0;
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AttributeError("dictstruct/_main.py", "__iter__", "__iter___DictStruct_env", "__mypyc_temp__0", 195, CPyStatic__main___globals);
        goto CPyL46;
    }
    CPy_INCREF(cpy_r_r16);
CPyL14: ;
    cpy_r_r17 = ((dictstruct____main_____iter___3_DictStruct_envObject *)cpy_r_r0)->___mypyc_temp__1;
    if (unlikely(cpy_r_r17 == CPY_INT_TAG)) {
        CPy_AttributeError("dictstruct/_main.py", "__iter__", "__iter___DictStruct_env", "__mypyc_temp__1", 195, CPyStatic__main___globals);
        goto CPyL48;
    }
CPyL15: ;
    cpy_r_r18 = CPySequenceTuple_GetItem(cpy_r_r16, cpy_r_r17);
    CPy_DECREF(cpy_r_r16);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("dictstruct/_main.py", "__iter__", 195, CPyStatic__main___globals);
        goto CPyL46;
    }
    if (likely(PyUnicode_Check(cpy_r_r18)))
        cpy_r_r19 = cpy_r_r18;
    else {
        CPy_TypeErrorTraceback("dictstruct/_main.py", "__iter__", 195, CPyStatic__main___globals, "str", cpy_r_r18);
        goto CPyL46;
    }
    if (((dictstruct____main_____iter___3_DictStruct_envObject *)cpy_r_r0)->_field != NULL) {
        CPy_DECREF(((dictstruct____main_____iter___3_DictStruct_envObject *)cpy_r_r0)->_field);
    }
    ((dictstruct____main_____iter___3_DictStruct_envObject *)cpy_r_r0)->_field = cpy_r_r19;
    cpy_r_r20 = 1;
    if (unlikely(!cpy_r_r20)) {
        CPy_AddTraceback("dictstruct/_main.py", "__iter__", 195, CPyStatic__main___globals);
        goto CPyL46;
    }
    cpy_r_r21 = ((dictstruct____main_____iter___3_DictStruct_envObject *)cpy_r_r0)->_self;
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AttributeError("dictstruct/_main.py", "__iter__", "__iter___DictStruct_env", "self", 196, CPyStatic__main___globals);
        goto CPyL46;
    }
    CPy_INCREF_NO_IMM(cpy_r_r21);
CPyL19: ;
    cpy_r_r22 = ((dictstruct____main_____iter___3_DictStruct_envObject *)cpy_r_r0)->_field;
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AttributeError("dictstruct/_main.py", "__iter__", "__iter___DictStruct_env", "field", 196, CPyStatic__main___globals);
        goto CPyL49;
    }
    CPy_INCREF(cpy_r_r22);
CPyL20: ;
    cpy_r_r23 = CPyStatic__main___UNSET;
    if (unlikely(cpy_r_r23 == NULL)) {
        goto CPyL50;
    } else
        goto CPyL23;
CPyL21: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"UNSET\" was not set");
    cpy_r_r24 = 0;
    if (unlikely(!cpy_r_r24)) {
        CPy_AddTraceback("dictstruct/_main.py", "__iter__", 196, CPyStatic__main___globals);
        goto CPyL45;
    }
    CPy_Unreachable();
CPyL23: ;
    cpy_r_r25 = CPyObject_GetAttr3(cpy_r_r21, cpy_r_r22, cpy_r_r23);
    CPy_DECREF_NO_IMM(cpy_r_r21);
    CPy_DECREF(cpy_r_r22);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("dictstruct/_main.py", "__iter__", 196, CPyStatic__main___globals);
        goto CPyL46;
    }
    if (((dictstruct____main_____iter___3_DictStruct_envObject *)cpy_r_r0)->_value != NULL) {
        CPy_DECREF(((dictstruct____main_____iter___3_DictStruct_envObject *)cpy_r_r0)->_value);
    }
    ((dictstruct____main_____iter___3_DictStruct_envObject *)cpy_r_r0)->_value = cpy_r_r25;
    cpy_r_r26 = 1;
    if (unlikely(!cpy_r_r26)) {
        CPy_AddTraceback("dictstruct/_main.py", "__iter__", 196, CPyStatic__main___globals);
        goto CPyL46;
    }
    cpy_r_r27 = ((dictstruct____main_____iter___3_DictStruct_envObject *)cpy_r_r0)->_value;
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AttributeError("dictstruct/_main.py", "__iter__", "__iter___DictStruct_env", "value", 197, CPyStatic__main___globals);
        goto CPyL46;
    }
    CPy_INCREF(cpy_r_r27);
CPyL26: ;
    cpy_r_r28 = CPyStatic__main___UNSET;
    if (unlikely(cpy_r_r28 == NULL)) {
        goto CPyL51;
    } else
        goto CPyL29;
CPyL27: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"UNSET\" was not set");
    cpy_r_r29 = 0;
    if (unlikely(!cpy_r_r29)) {
        CPy_AddTraceback("dictstruct/_main.py", "__iter__", 197, CPyStatic__main___globals);
        goto CPyL45;
    }
    CPy_Unreachable();
CPyL29: ;
    cpy_r_r30 = cpy_r_r27 == cpy_r_r28;
    CPy_DECREF(cpy_r_r27);
    cpy_r_r31 = cpy_r_r30 ^ 1;
    if (!cpy_r_r31) goto CPyL36;
    cpy_r_r32 = ((dictstruct____main_____iter___3_DictStruct_envObject *)cpy_r_r0)->_field;
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AttributeError("dictstruct/_main.py", "__iter__", "__iter___DictStruct_env", "field", 198, CPyStatic__main___globals);
        goto CPyL46;
    }
    CPy_INCREF(cpy_r_r32);
CPyL31: ;
    if (((dictstruct____main_____iter___3_DictStruct_envObject *)cpy_r_r0)->___mypyc_next_label__ != CPY_INT_TAG) {
        CPyTagged_DECREF(((dictstruct____main_____iter___3_DictStruct_envObject *)cpy_r_r0)->___mypyc_next_label__);
    }
    ((dictstruct____main_____iter___3_DictStruct_envObject *)cpy_r_r0)->___mypyc_next_label__ = 2;
    cpy_r_r33 = 1;
    CPy_DECREF_NO_IMM(cpy_r_r0);
    if (unlikely(!cpy_r_r33)) {
        CPy_AddTraceback("dictstruct/_main.py", "__iter__", 198, CPyStatic__main___globals);
        goto CPyL52;
    }
    return cpy_r_r32;
CPyL33: ;
    cpy_r_r34 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r35 = cpy_r_type != cpy_r_r34;
    if (cpy_r_r35) {
        goto CPyL53;
    } else
        goto CPyL36;
CPyL34: ;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("dictstruct/_main.py", "__iter__", 198, CPyStatic__main___globals);
        goto CPyL45;
    }
    CPy_Unreachable();
CPyL36: ;
    cpy_r_r36 = ((dictstruct____main_____iter___3_DictStruct_envObject *)cpy_r_r0)->___mypyc_temp__1;
    if (unlikely(cpy_r_r36 == CPY_INT_TAG)) {
        CPy_AttributeError("dictstruct/_main.py", "__iter__", "__iter___DictStruct_env", "__mypyc_temp__1", 195, CPyStatic__main___globals);
        goto CPyL46;
    }
CPyL37: ;
    cpy_r_r37 = cpy_r_r36 + 2;
    ((dictstruct____main_____iter___3_DictStruct_envObject *)cpy_r_r0)->___mypyc_temp__1 = cpy_r_r37;
    cpy_r_r38 = 1;
    if (unlikely(!cpy_r_r38)) {
        CPy_AddTraceback("dictstruct/_main.py", "__iter__", 195, CPyStatic__main___globals);
        goto CPyL46;
    } else
        goto CPyL10;
CPyL38: ;
    cpy_r_r39 = Py_None;
    if (((dictstruct____main_____iter___3_DictStruct_envObject *)cpy_r_r0)->___mypyc_next_label__ != CPY_INT_TAG) {
        CPyTagged_DECREF(((dictstruct____main_____iter___3_DictStruct_envObject *)cpy_r_r0)->___mypyc_next_label__);
    }
    ((dictstruct____main_____iter___3_DictStruct_envObject *)cpy_r_r0)->___mypyc_next_label__ = -2;
    cpy_r_r40 = 1;
    CPy_DECREF_NO_IMM(cpy_r_r0);
    if (unlikely(!cpy_r_r40)) {
        CPy_AddTraceback("dictstruct/_main.py", "__iter__", 180, CPyStatic__main___globals);
        goto CPyL45;
    }
    CPyGen_SetStopIterationValue(cpy_r_r39);
    if (!0) goto CPyL45;
    CPy_Unreachable();
CPyL41: ;
    cpy_r_r41 = cpy_r_r1 == 0;
    if (cpy_r_r41) goto CPyL54;
    cpy_r_r42 = cpy_r_r1 == 2;
    CPyTagged_DECREF(cpy_r_r1);
    if (cpy_r_r42) {
        goto CPyL33;
    } else
        goto CPyL55;
CPyL43: ;
    PyErr_SetNone(PyExc_StopIteration);
    cpy_r_r43 = 0;
    if (unlikely(!cpy_r_r43)) {
        CPy_AddTraceback("dictstruct/_main.py", "__iter__", 180, CPyStatic__main___globals);
        goto CPyL45;
    }
    CPy_Unreachable();
CPyL45: ;
    cpy_r_r44 = NULL;
    return cpy_r_r44;
CPyL46: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL45;
CPyL47: ;
    CPy_DECREF_NO_IMM(cpy_r_r0);
    goto CPyL3;
CPyL48: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r16);
    goto CPyL45;
CPyL49: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r21);
    goto CPyL45;
CPyL50: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r21);
    CPy_DecRef(cpy_r_r22);
    goto CPyL21;
CPyL51: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r27);
    goto CPyL27;
CPyL52: ;
    CPy_DecRef(cpy_r_r32);
    goto CPyL45;
CPyL53: ;
    CPy_DECREF_NO_IMM(cpy_r_r0);
    goto CPyL34;
CPyL54: ;
    CPyTagged_DECREF(cpy_r_r1);
    goto CPyL2;
CPyL55: ;
    CPy_DECREF_NO_IMM(cpy_r_r0);
    goto CPyL43;
}

PyObject *CPyPy__main_____iter___3_DictStruct_gen_____mypyc_generator_helper__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"type", "value", "traceback", "arg", 0};
    static CPyArg_Parser parser = {"OOOO:__mypyc_generator_helper__", kwlist, 0};
    PyObject *obj_type;
    PyObject *obj_value;
    PyObject *obj_traceback;
    PyObject *obj_arg;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_type, &obj_value, &obj_traceback, &obj_arg)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_type = obj_type;
    PyObject *arg_value = obj_value;
    PyObject *arg_traceback = obj_traceback;
    PyObject *arg_arg = obj_arg;
    PyObject *retval = CPyDef__main_____iter___3_DictStruct_gen_____mypyc_generator_helper__(arg___mypyc_self__, arg_type, arg_value, arg_traceback, arg_arg);
    return retval;
fail: ;
    CPy_AddTraceback("dictstruct/_main.py", "__iter__", 180, CPyStatic__main___globals);
    return NULL;
}

PyObject *CPyDef__main_____iter___3_DictStruct_gen_____next__(PyObject *cpy_r___mypyc_self__) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = CPyDef__main_____iter___3_DictStruct_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_r0, cpy_r_r0, cpy_r_r0, cpy_r_r0);
    if (cpy_r_r1 == NULL) goto CPyL2;
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy__main_____iter___3_DictStruct_gen_____next__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__next__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType__main_____iter___3_DictStruct_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("dictstruct._main.__iter___DictStruct_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef__main_____iter___3_DictStruct_gen_____next__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("dictstruct/_main.py", "__next__", -1, CPyStatic__main___globals);
    return NULL;
}

PyObject *CPyDef__main_____iter___3_DictStruct_gen___send(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = CPyDef__main_____iter___3_DictStruct_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_r0, cpy_r_r0, cpy_r_r0, cpy_r_arg);
    if (cpy_r_r1 == NULL) goto CPyL2;
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy__main_____iter___3_DictStruct_gen___send(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"arg", 0};
    static CPyArg_Parser parser = {"O:send", kwlist, 0};
    PyObject *obj_arg;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_arg)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType__main_____iter___3_DictStruct_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("dictstruct._main.__iter___DictStruct_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *arg_arg = obj_arg;
    PyObject *retval = CPyDef__main_____iter___3_DictStruct_gen___send(arg___mypyc_self__, arg_arg);
    return retval;
fail: ;
    CPy_AddTraceback("dictstruct/_main.py", "send", -1, CPyStatic__main___globals);
    return NULL;
}

PyObject *CPyDef__main_____iter___3_DictStruct_gen_____iter__(PyObject *cpy_r___mypyc_self__) {
    CPy_INCREF_NO_IMM(cpy_r___mypyc_self__);
    return cpy_r___mypyc_self__;
}

PyObject *CPyPy__main_____iter___3_DictStruct_gen_____iter__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__iter__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType__main_____iter___3_DictStruct_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("dictstruct._main.__iter___DictStruct_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef__main_____iter___3_DictStruct_gen_____iter__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("dictstruct/_main.py", "__iter__", -1, CPyStatic__main___globals);
    return NULL;
}

PyObject *CPyDef__main_____iter___3_DictStruct_gen___throw(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    if (cpy_r_value != NULL) goto CPyL7;
    CPy_INCREF(cpy_r_r0);
    cpy_r_value = cpy_r_r0;
CPyL2: ;
    if (cpy_r_traceback != NULL) goto CPyL8;
    CPy_INCREF(cpy_r_r0);
    cpy_r_traceback = cpy_r_r0;
CPyL4: ;
    cpy_r_r1 = CPyDef__main_____iter___3_DictStruct_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_type, cpy_r_value, cpy_r_traceback, cpy_r_r0);
    CPy_DECREF(cpy_r_value);
    CPy_DECREF(cpy_r_traceback);
    if (cpy_r_r1 == NULL) goto CPyL6;
    return cpy_r_r1;
CPyL6: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
CPyL7: ;
    CPy_INCREF(cpy_r_value);
    goto CPyL2;
CPyL8: ;
    CPy_INCREF(cpy_r_traceback);
    goto CPyL4;
}

PyObject *CPyPy__main_____iter___3_DictStruct_gen___throw(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"type", "value", "traceback", 0};
    static CPyArg_Parser parser = {"O|OO:throw", kwlist, 0};
    PyObject *obj_type;
    PyObject *obj_value = NULL;
    PyObject *obj_traceback = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_type, &obj_value, &obj_traceback)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType__main_____iter___3_DictStruct_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("dictstruct._main.__iter___DictStruct_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *arg_type = obj_type;
    PyObject *arg_value;
    if (obj_value == NULL) {
        arg_value = NULL;
    } else {
        arg_value = obj_value; 
    }
    PyObject *arg_traceback;
    if (obj_traceback == NULL) {
        arg_traceback = NULL;
    } else {
        arg_traceback = obj_traceback; 
    }
    PyObject *retval = CPyDef__main_____iter___3_DictStruct_gen___throw(arg___mypyc_self__, arg_type, arg_value, arg_traceback);
    return retval;
fail: ;
    CPy_AddTraceback("dictstruct/_main.py", "throw", -1, CPyStatic__main___globals);
    return NULL;
}

PyObject *CPyDef__main_____iter___3_DictStruct_gen___close(PyObject *cpy_r___mypyc_self__) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    tuple_T3OOO cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    tuple_T2OO cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = CPyStatics[17]; /* 'GeneratorExit' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (cpy_r_r2 == NULL) goto CPyL3;
    cpy_r_r3 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r4 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r5 = CPyDef__main_____iter___3_DictStruct_gen___throw(cpy_r___mypyc_self__, cpy_r_r2, cpy_r_r3, cpy_r_r4);
    if (cpy_r_r5 != NULL) goto CPyL11;
CPyL3: ;
    cpy_r_r6 = CPy_CatchError();
    cpy_r_r7 = CPyModule_builtins;
    cpy_r_r8 = CPyStatics[18]; /* 'StopIteration' */
    cpy_r_r9 = CPyObject_GetAttr(cpy_r_r7, cpy_r_r8);
    if (cpy_r_r9 == NULL) goto CPyL12;
    cpy_r_r10.f0 = cpy_r_r2;
    cpy_r_r10.f1 = cpy_r_r9;
    cpy_r_r11 = PyTuple_New(2);
    if (unlikely(cpy_r_r11 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp1 = cpy_r_r10.f0;
    PyTuple_SET_ITEM(cpy_r_r11, 0, __tmp1);
    PyObject *__tmp2 = cpy_r_r10.f1;
    PyTuple_SET_ITEM(cpy_r_r11, 1, __tmp2);
    cpy_r_r12 = CPy_ExceptionMatches(cpy_r_r11);
    CPy_DECREF(cpy_r_r11);
    if (!cpy_r_r12) goto CPyL13;
    CPy_RestoreExcInfo(cpy_r_r6);
    CPy_DECREF(cpy_r_r6.f0);
    CPy_DECREF(cpy_r_r6.f1);
    CPy_DECREF(cpy_r_r6.f2);
    cpy_r_r13 = (PyObject *)&_Py_NoneStruct;
    CPy_INCREF(cpy_r_r13);
    return cpy_r_r13;
CPyL6: ;
    CPy_Reraise();
    if (!0) goto CPyL10;
    CPy_Unreachable();
CPyL8: ;
    PyErr_SetString(PyExc_RuntimeError, "generator ignored GeneratorExit");
    cpy_r_r14 = 0;
    if (!cpy_r_r14) goto CPyL10;
    CPy_Unreachable();
CPyL10: ;
    cpy_r_r15 = NULL;
    return cpy_r_r15;
CPyL11: ;
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r5);
    goto CPyL8;
CPyL12: ;
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r6.f0);
    CPy_DECREF(cpy_r_r6.f1);
    CPy_DECREF(cpy_r_r6.f2);
    goto CPyL10;
CPyL13: ;
    CPy_DECREF(cpy_r_r6.f0);
    CPy_DECREF(cpy_r_r6.f1);
    CPy_DECREF(cpy_r_r6.f2);
    goto CPyL6;
}

PyObject *CPyPy__main_____iter___3_DictStruct_gen___close(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":close", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType__main_____iter___3_DictStruct_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("dictstruct._main.__iter___DictStruct_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef__main_____iter___3_DictStruct_gen___close(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("dictstruct/_main.py", "close", -1, CPyStatic__main___globals);
    return NULL;
}

PyObject *CPyDef__main_____iter___3_DictStruct_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    cpy_r_r0 = CPyDef__main_____iter___3_DictStruct_env();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("dictstruct/_main.py", "__iter__", 180, CPyStatic__main___globals);
        goto CPyL6;
    }
    CPy_INCREF_NO_IMM(cpy_r_self);
    if (((dictstruct____main_____iter___3_DictStruct_envObject *)cpy_r_r0)->_self != NULL) {
        CPy_DECREF_NO_IMM(((dictstruct____main_____iter___3_DictStruct_envObject *)cpy_r_r0)->_self);
    }
    ((dictstruct____main_____iter___3_DictStruct_envObject *)cpy_r_r0)->_self = cpy_r_self;
    cpy_r_r1 = 1;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("dictstruct/_main.py", "__iter__", 180, CPyStatic__main___globals);
        goto CPyL7;
    }
    cpy_r_r2 = CPyDef__main_____iter___3_DictStruct_gen();
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("dictstruct/_main.py", "__iter__", 180, CPyStatic__main___globals);
        goto CPyL7;
    }
    CPy_INCREF_NO_IMM(cpy_r_r0);
    if (((dictstruct____main_____iter___3_DictStruct_genObject *)cpy_r_r2)->___mypyc_env__ != NULL) {
        CPy_DECREF_NO_IMM(((dictstruct____main_____iter___3_DictStruct_genObject *)cpy_r_r2)->___mypyc_env__);
    }
    ((dictstruct____main_____iter___3_DictStruct_genObject *)cpy_r_r2)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r3 = 1;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("dictstruct/_main.py", "__iter__", 180, CPyStatic__main___globals);
        goto CPyL8;
    }
    if (((dictstruct____main_____iter___3_DictStruct_envObject *)cpy_r_r0)->___mypyc_next_label__ != CPY_INT_TAG) {
        CPyTagged_DECREF(((dictstruct____main_____iter___3_DictStruct_envObject *)cpy_r_r0)->___mypyc_next_label__);
    }
    ((dictstruct____main_____iter___3_DictStruct_envObject *)cpy_r_r0)->___mypyc_next_label__ = 0;
    cpy_r_r4 = 1;
    CPy_DECREF_NO_IMM(cpy_r_r0);
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("dictstruct/_main.py", "__iter__", 180, CPyStatic__main___globals);
        goto CPyL9;
    }
    return cpy_r_r2;
CPyL6: ;
    cpy_r_r5 = NULL;
    return cpy_r_r5;
CPyL7: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL6;
CPyL8: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r2);
    goto CPyL6;
CPyL9: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL6;
}

PyObject *CPyPy__main_____iter___3_DictStruct_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"self", 0};
    static CPyArg_Parser parser = {"O:__call__", kwlist, 0};
    PyObject *obj_self;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, PyVectorcall_NARGS(nargs), kwnames, &parser, &obj_self)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType__main___DictStruct))
        arg_self = obj_self;
    else {
        CPy_TypeError("dictstruct._main.DictStruct", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef__main_____iter___3_DictStruct_obj_____call__(arg___mypyc_self__, arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("dictstruct/_main.py", "__iter__", 180, CPyStatic__main___globals);
    return NULL;
}

PyObject *CPyDef__main_____len___3_DictStruct_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = cpy_r_instance == cpy_r_r0;
    if (!cpy_r_r1) goto CPyL2;
    CPy_INCREF(cpy_r___mypyc_self__);
    return cpy_r___mypyc_self__;
CPyL2: ;
    cpy_r_r2 = PyMethod_New(cpy_r___mypyc_self__, cpy_r_instance);
    if (cpy_r_r2 == NULL) goto CPyL4;
    return cpy_r_r2;
CPyL4: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy__main_____len___3_DictStruct_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"instance", "owner", 0};
    static CPyArg_Parser parser = {"OO:__get__", kwlist, 0};
    PyObject *obj_instance;
    PyObject *obj_owner;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_instance, &obj_owner)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_instance = obj_instance;
    PyObject *arg_owner = obj_owner;
    PyObject *retval = CPyDef__main_____len___3_DictStruct_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("dictstruct/_main.py", "__get__", -1, CPyStatic__main___globals);
    return NULL;
}

CPyTagged CPyDef__main_____len___3_DictStruct_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    int32_t cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    CPyPtr cpy_r_r7;
    int64_t cpy_r_r8;
    CPyTagged cpy_r_r9;
    CPyTagged cpy_r_r10;
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("dictstruct/_main.py", "__len__", 212, CPyStatic__main___globals);
        goto CPyL7;
    }
    cpy_r_r1 = PyObject_GetIter(cpy_r_self);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("dictstruct/_main.py", "__len__", 212, CPyStatic__main___globals);
        goto CPyL8;
    }
CPyL2: ;
    cpy_r_r2 = PyIter_Next(cpy_r_r1);
    if (cpy_r_r2 == NULL) goto CPyL9;
    if (likely(PyUnicode_Check(cpy_r_r2)))
        cpy_r_r3 = cpy_r_r2;
    else {
        CPy_TypeErrorTraceback("dictstruct/_main.py", "__len__", 212, CPyStatic__main___globals, "str", cpy_r_r2);
        goto CPyL10;
    }
    CPy_INCREF(cpy_r_r3);
    CPy_DECREF(cpy_r_r2);
    cpy_r_r4 = PyList_Append(cpy_r_r0, cpy_r_r3);
    CPy_DECREF(cpy_r_r3);
    cpy_r_r5 = cpy_r_r4 >= 0;
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("dictstruct/_main.py", "__len__", 212, CPyStatic__main___globals);
        goto CPyL11;
    } else
        goto CPyL2;
CPyL5: ;
    cpy_r_r6 = CPy_NoErrOccurred();
    if (unlikely(!cpy_r_r6)) {
        CPy_AddTraceback("dictstruct/_main.py", "__len__", 212, CPyStatic__main___globals);
        goto CPyL8;
    }
    cpy_r_r7 = (CPyPtr)&((PyVarObject *)cpy_r_r0)->ob_size;
    cpy_r_r8 = *(int64_t *)cpy_r_r7;
    CPy_DECREF_NO_IMM(cpy_r_r0);
    cpy_r_r9 = cpy_r_r8 << 1;
    return cpy_r_r9;
CPyL7: ;
    cpy_r_r10 = CPY_INT_TAG;
    return cpy_r_r10;
CPyL8: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL7;
CPyL9: ;
    CPy_DECREF(cpy_r_r1);
    goto CPyL5;
CPyL10: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r2);
    goto CPyL7;
CPyL11: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r1);
    goto CPyL7;
}

PyObject *CPyPy__main_____len___3_DictStruct_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"self", 0};
    static CPyArg_Parser parser = {"O:__call__", kwlist, 0};
    PyObject *obj_self;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, PyVectorcall_NARGS(nargs), kwnames, &parser, &obj_self)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType__main___DictStruct))
        arg_self = obj_self;
    else {
        CPy_TypeError("dictstruct._main.DictStruct", obj_self); 
        goto fail;
    }
    CPyTagged retval = CPyDef__main_____len___3_DictStruct_obj_____call__(arg___mypyc_self__, arg_self);
    if (retval == CPY_INT_TAG) {
        return NULL;
    }
    PyObject *retbox = CPyTagged_StealAsObject(retval);
    return retbox;
fail: ;
    CPy_AddTraceback("dictstruct/_main.py", "__len__", 200, CPyStatic__main___globals);
    return NULL;
}

PyObject *CPyDef__main___keys_DictStruct_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = cpy_r_instance == cpy_r_r0;
    if (!cpy_r_r1) goto CPyL2;
    CPy_INCREF(cpy_r___mypyc_self__);
    return cpy_r___mypyc_self__;
CPyL2: ;
    cpy_r_r2 = PyMethod_New(cpy_r___mypyc_self__, cpy_r_instance);
    if (cpy_r_r2 == NULL) goto CPyL4;
    return cpy_r_r2;
CPyL4: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy__main___keys_DictStruct_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"instance", "owner", 0};
    static CPyArg_Parser parser = {"OO:__get__", kwlist, 0};
    PyObject *obj_instance;
    PyObject *obj_owner;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_instance, &obj_owner)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_instance = obj_instance;
    PyObject *arg_owner = obj_owner;
    PyObject *retval = CPyDef__main___keys_DictStruct_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("dictstruct/_main.py", "__get__", -1, CPyStatic__main___globals);
    return NULL;
}

PyObject *CPyDef__main___keys_DictStruct_gen_____mypyc_generator_helper__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    CPyTagged cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    char cpy_r_r16;
    tuple_T3OOO cpy_r_r17;
    char cpy_r_r18;
    PyObject **cpy_r_r19;
    PyObject *cpy_r_r20;
    char cpy_r_r21;
    tuple_T3OOO cpy_r_r22;
    tuple_T3OOO cpy_r_r23;
    tuple_T3OOO cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    char cpy_r_r30;
    char cpy_r_r31;
    char cpy_r_r32;
    char cpy_r_r33;
    PyObject *cpy_r_r34;
    cpy_r_r0 = NULL;
    cpy_r_r1 = cpy_r_r0;
    cpy_r_r2 = ((dictstruct____main___keys_DictStruct_genObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AttributeError("dictstruct/_main.py", "keys", "keys_DictStruct_gen", "__mypyc_env__", 214, CPyStatic__main___globals);
        goto CPyL43;
    }
    CPy_INCREF_NO_IMM(cpy_r_r2);
CPyL1: ;
    cpy_r_r3 = ((dictstruct____main___keys_DictStruct_envObject *)cpy_r_r2)->___mypyc_next_label__;
    if (unlikely(cpy_r_r3 == CPY_INT_TAG)) {
        CPy_AttributeError("dictstruct/_main.py", "keys", "keys_DictStruct_env", "__mypyc_next_label__", 214, CPyStatic__main___globals);
        goto CPyL44;
    }
    CPyTagged_INCREF(cpy_r_r3);
    goto CPyL38;
CPyL2: ;
    cpy_r_r4 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r5 = cpy_r_type != cpy_r_r4;
    if (cpy_r_r5) {
        goto CPyL45;
    } else
        goto CPyL5;
CPyL3: ;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("dictstruct/_main.py", "keys", 214, CPyStatic__main___globals);
        goto CPyL42;
    }
    CPy_Unreachable();
CPyL5: ;
    cpy_r_r6 = ((dictstruct____main___keys_DictStruct_envObject *)cpy_r_r2)->_self;
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AttributeError("dictstruct/_main.py", "keys", "keys_DictStruct_env", "self", 226, CPyStatic__main___globals);
        goto CPyL44;
    }
    CPy_INCREF_NO_IMM(cpy_r_r6);
CPyL6: ;
    cpy_r_r7 = PyObject_GetIter(cpy_r_r6);
    CPy_DECREF_NO_IMM(cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("dictstruct/_main.py", "keys", 226, CPyStatic__main___globals);
        goto CPyL44;
    }
    if (((dictstruct____main___keys_DictStruct_envObject *)cpy_r_r2)->___mypyc_temp__2 != NULL) {
        CPy_DECREF(((dictstruct____main___keys_DictStruct_envObject *)cpy_r_r2)->___mypyc_temp__2);
    }
    ((dictstruct____main___keys_DictStruct_envObject *)cpy_r_r2)->___mypyc_temp__2 = cpy_r_r7;
    cpy_r_r8 = 1;
    if (unlikely(!cpy_r_r8)) {
        CPy_AddTraceback("dictstruct/_main.py", "keys", -1, CPyStatic__main___globals);
        goto CPyL44;
    }
    cpy_r_r9 = ((dictstruct____main___keys_DictStruct_envObject *)cpy_r_r2)->___mypyc_temp__2;
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AttributeError("dictstruct/_main.py", "keys", "keys_DictStruct_env", "__mypyc_temp__2", -1, CPyStatic__main___globals);
        goto CPyL44;
    }
    CPy_INCREF(cpy_r_r9);
CPyL9: ;
    cpy_r_r10 = CPyIter_Next(cpy_r_r9);
    CPy_DECREF(cpy_r_r9);
    if (cpy_r_r10 == NULL) {
        goto CPyL46;
    } else
        goto CPyL12;
CPyL10: ;
    cpy_r_r11 = CPy_FetchStopIterationValue();
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("dictstruct/_main.py", "keys", 226, CPyStatic__main___globals);
        goto CPyL47;
    }
    cpy_r_r12 = cpy_r_r11;
    CPy_DECREF(cpy_r_r12);
    goto CPyL35;
CPyL12: ;
    cpy_r_r13 = cpy_r_r10;
CPyL13: ;
    if (((dictstruct____main___keys_DictStruct_envObject *)cpy_r_r2)->___mypyc_next_label__ != CPY_INT_TAG) {
        CPyTagged_DECREF(((dictstruct____main___keys_DictStruct_envObject *)cpy_r_r2)->___mypyc_next_label__);
    }
    ((dictstruct____main___keys_DictStruct_envObject *)cpy_r_r2)->___mypyc_next_label__ = 2;
    cpy_r_r14 = 1;
    if (unlikely(!cpy_r_r14)) {
        CPy_AddTraceback("dictstruct/_main.py", "keys", 226, CPyStatic__main___globals);
        goto CPyL48;
    } else
        goto CPyL49;
CPyL14: ;
    return cpy_r_r13;
CPyL15: ;
    cpy_r_r15 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r16 = cpy_r_type != cpy_r_r15;
    if (!cpy_r_r16) goto CPyL18;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("dictstruct/_main.py", "keys", 226, CPyStatic__main___globals);
        goto CPyL19;
    } else
        goto CPyL50;
CPyL17: ;
    CPy_Unreachable();
CPyL18: ;
    CPy_INCREF(cpy_r_arg);
    goto CPyL30;
CPyL19: ;
    cpy_r_r17 = CPy_CatchError();
    if (((dictstruct____main___keys_DictStruct_envObject *)cpy_r_r2)->___mypyc_temp__3.f0 != NULL) {
        CPy_DECREF(((dictstruct____main___keys_DictStruct_envObject *)cpy_r_r2)->___mypyc_temp__3.f0);
        CPy_DECREF(((dictstruct____main___keys_DictStruct_envObject *)cpy_r_r2)->___mypyc_temp__3.f1);
        CPy_DECREF(((dictstruct____main___keys_DictStruct_envObject *)cpy_r_r2)->___mypyc_temp__3.f2);
    }
    ((dictstruct____main___keys_DictStruct_envObject *)cpy_r_r2)->___mypyc_temp__3 = cpy_r_r17;
    cpy_r_r18 = 1;
    if (unlikely(!cpy_r_r18)) {
        CPy_AddTraceback("dictstruct/_main.py", "keys", -1, CPyStatic__main___globals);
        goto CPyL51;
    }
    cpy_r_r19 = (PyObject **)&cpy_r_r1;
    cpy_r_r20 = ((dictstruct____main___keys_DictStruct_envObject *)cpy_r_r2)->___mypyc_temp__2;
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AttributeError("dictstruct/_main.py", "keys", "keys_DictStruct_env", "__mypyc_temp__2", -1, CPyStatic__main___globals);
        goto CPyL51;
    }
    CPy_INCREF(cpy_r_r20);
CPyL21: ;
    cpy_r_r21 = CPy_YieldFromErrorHandle(cpy_r_r20, cpy_r_r19);
    CPy_DecRef(cpy_r_r20);
    if (unlikely(cpy_r_r21 == 2)) {
        CPy_AddTraceback("dictstruct/_main.py", "keys", 226, CPyStatic__main___globals);
        goto CPyL51;
    }
    if (cpy_r_r21) goto CPyL25;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r13 = cpy_r_r1;
    cpy_r_r22 = ((dictstruct____main___keys_DictStruct_envObject *)cpy_r_r2)->___mypyc_temp__3;
    if (unlikely(cpy_r_r22.f0 == NULL)) {
        CPy_AttributeError("dictstruct/_main.py", "keys", "keys_DictStruct_env", "__mypyc_temp__3", -1, CPyStatic__main___globals);
        goto CPyL52;
    }
    CPy_INCREF(cpy_r_r22.f0);
    CPy_INCREF(cpy_r_r22.f1);
    CPy_INCREF(cpy_r_r22.f2);
CPyL24: ;
    CPy_RestoreExcInfo(cpy_r_r22);
    CPy_DecRef(cpy_r_r22.f0);
    CPy_DecRef(cpy_r_r22.f1);
    CPy_DecRef(cpy_r_r22.f2);
    goto CPyL13;
CPyL25: ;
    cpy_r_r12 = cpy_r_r1;
    CPy_DecRef(cpy_r_r12);
    cpy_r_r23 = ((dictstruct____main___keys_DictStruct_envObject *)cpy_r_r2)->___mypyc_temp__3;
    if (unlikely(cpy_r_r23.f0 == NULL)) {
        CPy_AttributeError("dictstruct/_main.py", "keys", "keys_DictStruct_env", "__mypyc_temp__3", -1, CPyStatic__main___globals);
        goto CPyL27;
    }
    CPy_INCREF(cpy_r_r23.f0);
    CPy_INCREF(cpy_r_r23.f1);
    CPy_INCREF(cpy_r_r23.f2);
CPyL26: ;
    CPy_RestoreExcInfo(cpy_r_r23);
    CPy_DecRef(cpy_r_r23.f0);
    CPy_DecRef(cpy_r_r23.f1);
    CPy_DecRef(cpy_r_r23.f2);
    goto CPyL35;
CPyL27: ;
    cpy_r_r24 = ((dictstruct____main___keys_DictStruct_envObject *)cpy_r_r2)->___mypyc_temp__3;
    if (unlikely(cpy_r_r24.f0 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute '__mypyc_temp__3' of 'keys_DictStruct_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r24.f0);
        CPy_INCREF(cpy_r_r24.f1);
        CPy_INCREF(cpy_r_r24.f2);
    }
    CPy_DecRef(cpy_r_r2);
    if (unlikely(cpy_r_r24.f0 == NULL)) {
        CPy_AddTraceback("dictstruct/_main.py", "keys", -1, CPyStatic__main___globals);
        goto CPyL42;
    }
CPyL28: ;
    CPy_RestoreExcInfo(cpy_r_r24);
    CPy_DecRef(cpy_r_r24.f0);
    CPy_DecRef(cpy_r_r24.f1);
    CPy_DecRef(cpy_r_r24.f2);
    cpy_r_r25 = CPy_KeepPropagating();
    if (!cpy_r_r25) goto CPyL42;
    CPy_Unreachable();
CPyL30: ;
    cpy_r_r26 = ((dictstruct____main___keys_DictStruct_envObject *)cpy_r_r2)->___mypyc_temp__2;
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AttributeError("dictstruct/_main.py", "keys", "keys_DictStruct_env", "__mypyc_temp__2", -1, CPyStatic__main___globals);
        goto CPyL53;
    }
    CPy_INCREF(cpy_r_r26);
CPyL31: ;
    cpy_r_r27 = CPyIter_Send(cpy_r_r26, cpy_r_arg);
    CPy_DECREF(cpy_r_r26);
    CPy_DECREF(cpy_r_arg);
    if (cpy_r_r27 == NULL) goto CPyL54;
    cpy_r_r13 = cpy_r_r27;
    goto CPyL13;
CPyL33: ;
    cpy_r_r28 = CPy_FetchStopIterationValue();
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("dictstruct/_main.py", "keys", 226, CPyStatic__main___globals);
        goto CPyL47;
    }
    cpy_r_r12 = cpy_r_r28;
    CPy_DECREF(cpy_r_r12);
CPyL35: ;
    cpy_r_r29 = Py_None;
    if (((dictstruct____main___keys_DictStruct_envObject *)cpy_r_r2)->___mypyc_next_label__ != CPY_INT_TAG) {
        CPyTagged_DECREF(((dictstruct____main___keys_DictStruct_envObject *)cpy_r_r2)->___mypyc_next_label__);
    }
    ((dictstruct____main___keys_DictStruct_envObject *)cpy_r_r2)->___mypyc_next_label__ = -2;
    cpy_r_r30 = 1;
    CPy_DECREF_NO_IMM(cpy_r_r2);
    if (unlikely(!cpy_r_r30)) {
        CPy_AddTraceback("dictstruct/_main.py", "keys", 214, CPyStatic__main___globals);
        goto CPyL42;
    }
    CPyGen_SetStopIterationValue(cpy_r_r29);
    if (!0) goto CPyL42;
    CPy_Unreachable();
CPyL38: ;
    cpy_r_r31 = cpy_r_r3 == 0;
    if (cpy_r_r31) goto CPyL55;
    cpy_r_r32 = cpy_r_r3 == 2;
    CPyTagged_DECREF(cpy_r_r3);
    if (cpy_r_r32) {
        goto CPyL15;
    } else
        goto CPyL56;
CPyL40: ;
    PyErr_SetNone(PyExc_StopIteration);
    cpy_r_r33 = 0;
    if (unlikely(!cpy_r_r33)) {
        CPy_AddTraceback("dictstruct/_main.py", "keys", 214, CPyStatic__main___globals);
        goto CPyL42;
    }
    CPy_Unreachable();
CPyL42: ;
    cpy_r_r34 = NULL;
    return cpy_r_r34;
CPyL43: ;
    CPy_XDecRef(cpy_r_r1);
    goto CPyL42;
CPyL44: ;
    CPy_XDecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r2);
    goto CPyL42;
CPyL45: ;
    CPy_XDECREF(cpy_r_r1);
    CPy_DECREF_NO_IMM(cpy_r_r2);
    goto CPyL3;
CPyL46: ;
    CPy_XDECREF(cpy_r_r1);
    goto CPyL10;
CPyL47: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL42;
CPyL48: ;
    CPy_DecRef(cpy_r_r13);
    goto CPyL19;
CPyL49: ;
    CPy_XDECREF(cpy_r_r1);
    CPy_DECREF_NO_IMM(cpy_r_r2);
    goto CPyL14;
CPyL50: ;
    CPy_XDECREF(cpy_r_r1);
    CPy_DECREF_NO_IMM(cpy_r_r2);
    goto CPyL17;
CPyL51: ;
    CPy_XDecRef(cpy_r_r1);
    goto CPyL27;
CPyL52: ;
    CPy_XDecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r13);
    goto CPyL27;
CPyL53: ;
    CPy_XDecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_arg);
    goto CPyL42;
CPyL54: ;
    CPy_XDECREF(cpy_r_r1);
    goto CPyL33;
CPyL55: ;
    CPyTagged_DECREF(cpy_r_r3);
    goto CPyL2;
CPyL56: ;
    CPy_XDECREF(cpy_r_r1);
    CPy_DECREF_NO_IMM(cpy_r_r2);
    goto CPyL40;
}

PyObject *CPyPy__main___keys_DictStruct_gen_____mypyc_generator_helper__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"type", "value", "traceback", "arg", 0};
    static CPyArg_Parser parser = {"OOOO:__mypyc_generator_helper__", kwlist, 0};
    PyObject *obj_type;
    PyObject *obj_value;
    PyObject *obj_traceback;
    PyObject *obj_arg;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_type, &obj_value, &obj_traceback, &obj_arg)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_type = obj_type;
    PyObject *arg_value = obj_value;
    PyObject *arg_traceback = obj_traceback;
    PyObject *arg_arg = obj_arg;
    PyObject *retval = CPyDef__main___keys_DictStruct_gen_____mypyc_generator_helper__(arg___mypyc_self__, arg_type, arg_value, arg_traceback, arg_arg);
    return retval;
fail: ;
    CPy_AddTraceback("dictstruct/_main.py", "keys", 214, CPyStatic__main___globals);
    return NULL;
}

PyObject *CPyDef__main___keys_DictStruct_gen_____next__(PyObject *cpy_r___mypyc_self__) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = CPyDef__main___keys_DictStruct_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_r0, cpy_r_r0, cpy_r_r0, cpy_r_r0);
    if (cpy_r_r1 == NULL) goto CPyL2;
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy__main___keys_DictStruct_gen_____next__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__next__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType__main___keys_DictStruct_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("dictstruct._main.keys_DictStruct_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef__main___keys_DictStruct_gen_____next__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("dictstruct/_main.py", "__next__", -1, CPyStatic__main___globals);
    return NULL;
}

PyObject *CPyDef__main___keys_DictStruct_gen___send(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = CPyDef__main___keys_DictStruct_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_r0, cpy_r_r0, cpy_r_r0, cpy_r_arg);
    if (cpy_r_r1 == NULL) goto CPyL2;
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy__main___keys_DictStruct_gen___send(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"arg", 0};
    static CPyArg_Parser parser = {"O:send", kwlist, 0};
    PyObject *obj_arg;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_arg)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType__main___keys_DictStruct_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("dictstruct._main.keys_DictStruct_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *arg_arg = obj_arg;
    PyObject *retval = CPyDef__main___keys_DictStruct_gen___send(arg___mypyc_self__, arg_arg);
    return retval;
fail: ;
    CPy_AddTraceback("dictstruct/_main.py", "send", -1, CPyStatic__main___globals);
    return NULL;
}

PyObject *CPyDef__main___keys_DictStruct_gen_____iter__(PyObject *cpy_r___mypyc_self__) {
    CPy_INCREF_NO_IMM(cpy_r___mypyc_self__);
    return cpy_r___mypyc_self__;
}

PyObject *CPyPy__main___keys_DictStruct_gen_____iter__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__iter__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType__main___keys_DictStruct_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("dictstruct._main.keys_DictStruct_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef__main___keys_DictStruct_gen_____iter__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("dictstruct/_main.py", "__iter__", -1, CPyStatic__main___globals);
    return NULL;
}

PyObject *CPyDef__main___keys_DictStruct_gen___throw(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    if (cpy_r_value != NULL) goto CPyL7;
    CPy_INCREF(cpy_r_r0);
    cpy_r_value = cpy_r_r0;
CPyL2: ;
    if (cpy_r_traceback != NULL) goto CPyL8;
    CPy_INCREF(cpy_r_r0);
    cpy_r_traceback = cpy_r_r0;
CPyL4: ;
    cpy_r_r1 = CPyDef__main___keys_DictStruct_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_type, cpy_r_value, cpy_r_traceback, cpy_r_r0);
    CPy_DECREF(cpy_r_value);
    CPy_DECREF(cpy_r_traceback);
    if (cpy_r_r1 == NULL) goto CPyL6;
    return cpy_r_r1;
CPyL6: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
CPyL7: ;
    CPy_INCREF(cpy_r_value);
    goto CPyL2;
CPyL8: ;
    CPy_INCREF(cpy_r_traceback);
    goto CPyL4;
}

PyObject *CPyPy__main___keys_DictStruct_gen___throw(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"type", "value", "traceback", 0};
    static CPyArg_Parser parser = {"O|OO:throw", kwlist, 0};
    PyObject *obj_type;
    PyObject *obj_value = NULL;
    PyObject *obj_traceback = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_type, &obj_value, &obj_traceback)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType__main___keys_DictStruct_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("dictstruct._main.keys_DictStruct_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *arg_type = obj_type;
    PyObject *arg_value;
    if (obj_value == NULL) {
        arg_value = NULL;
    } else {
        arg_value = obj_value; 
    }
    PyObject *arg_traceback;
    if (obj_traceback == NULL) {
        arg_traceback = NULL;
    } else {
        arg_traceback = obj_traceback; 
    }
    PyObject *retval = CPyDef__main___keys_DictStruct_gen___throw(arg___mypyc_self__, arg_type, arg_value, arg_traceback);
    return retval;
fail: ;
    CPy_AddTraceback("dictstruct/_main.py", "throw", -1, CPyStatic__main___globals);
    return NULL;
}

PyObject *CPyDef__main___keys_DictStruct_gen___close(PyObject *cpy_r___mypyc_self__) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    tuple_T3OOO cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    tuple_T2OO cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = CPyStatics[17]; /* 'GeneratorExit' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (cpy_r_r2 == NULL) goto CPyL3;
    cpy_r_r3 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r4 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r5 = CPyDef__main___keys_DictStruct_gen___throw(cpy_r___mypyc_self__, cpy_r_r2, cpy_r_r3, cpy_r_r4);
    if (cpy_r_r5 != NULL) goto CPyL11;
CPyL3: ;
    cpy_r_r6 = CPy_CatchError();
    cpy_r_r7 = CPyModule_builtins;
    cpy_r_r8 = CPyStatics[18]; /* 'StopIteration' */
    cpy_r_r9 = CPyObject_GetAttr(cpy_r_r7, cpy_r_r8);
    if (cpy_r_r9 == NULL) goto CPyL12;
    cpy_r_r10.f0 = cpy_r_r2;
    cpy_r_r10.f1 = cpy_r_r9;
    cpy_r_r11 = PyTuple_New(2);
    if (unlikely(cpy_r_r11 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp3 = cpy_r_r10.f0;
    PyTuple_SET_ITEM(cpy_r_r11, 0, __tmp3);
    PyObject *__tmp4 = cpy_r_r10.f1;
    PyTuple_SET_ITEM(cpy_r_r11, 1, __tmp4);
    cpy_r_r12 = CPy_ExceptionMatches(cpy_r_r11);
    CPy_DECREF(cpy_r_r11);
    if (!cpy_r_r12) goto CPyL13;
    CPy_RestoreExcInfo(cpy_r_r6);
    CPy_DECREF(cpy_r_r6.f0);
    CPy_DECREF(cpy_r_r6.f1);
    CPy_DECREF(cpy_r_r6.f2);
    cpy_r_r13 = (PyObject *)&_Py_NoneStruct;
    CPy_INCREF(cpy_r_r13);
    return cpy_r_r13;
CPyL6: ;
    CPy_Reraise();
    if (!0) goto CPyL10;
    CPy_Unreachable();
CPyL8: ;
    PyErr_SetString(PyExc_RuntimeError, "generator ignored GeneratorExit");
    cpy_r_r14 = 0;
    if (!cpy_r_r14) goto CPyL10;
    CPy_Unreachable();
CPyL10: ;
    cpy_r_r15 = NULL;
    return cpy_r_r15;
CPyL11: ;
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r5);
    goto CPyL8;
CPyL12: ;
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r6.f0);
    CPy_DECREF(cpy_r_r6.f1);
    CPy_DECREF(cpy_r_r6.f2);
    goto CPyL10;
CPyL13: ;
    CPy_DECREF(cpy_r_r6.f0);
    CPy_DECREF(cpy_r_r6.f1);
    CPy_DECREF(cpy_r_r6.f2);
    goto CPyL6;
}

PyObject *CPyPy__main___keys_DictStruct_gen___close(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":close", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType__main___keys_DictStruct_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("dictstruct._main.keys_DictStruct_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef__main___keys_DictStruct_gen___close(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("dictstruct/_main.py", "close", -1, CPyStatic__main___globals);
    return NULL;
}

PyObject *CPyDef__main___keys_DictStruct_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    cpy_r_r0 = CPyDef__main___keys_DictStruct_env();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("dictstruct/_main.py", "keys", 214, CPyStatic__main___globals);
        goto CPyL6;
    }
    CPy_INCREF_NO_IMM(cpy_r_self);
    if (((dictstruct____main___keys_DictStruct_envObject *)cpy_r_r0)->_self != NULL) {
        CPy_DECREF_NO_IMM(((dictstruct____main___keys_DictStruct_envObject *)cpy_r_r0)->_self);
    }
    ((dictstruct____main___keys_DictStruct_envObject *)cpy_r_r0)->_self = cpy_r_self;
    cpy_r_r1 = 1;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("dictstruct/_main.py", "keys", 214, CPyStatic__main___globals);
        goto CPyL7;
    }
    cpy_r_r2 = CPyDef__main___keys_DictStruct_gen();
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("dictstruct/_main.py", "keys", 214, CPyStatic__main___globals);
        goto CPyL7;
    }
    CPy_INCREF_NO_IMM(cpy_r_r0);
    if (((dictstruct____main___keys_DictStruct_genObject *)cpy_r_r2)->___mypyc_env__ != NULL) {
        CPy_DECREF_NO_IMM(((dictstruct____main___keys_DictStruct_genObject *)cpy_r_r2)->___mypyc_env__);
    }
    ((dictstruct____main___keys_DictStruct_genObject *)cpy_r_r2)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r3 = 1;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("dictstruct/_main.py", "keys", 214, CPyStatic__main___globals);
        goto CPyL8;
    }
    if (((dictstruct____main___keys_DictStruct_envObject *)cpy_r_r0)->___mypyc_next_label__ != CPY_INT_TAG) {
        CPyTagged_DECREF(((dictstruct____main___keys_DictStruct_envObject *)cpy_r_r0)->___mypyc_next_label__);
    }
    ((dictstruct____main___keys_DictStruct_envObject *)cpy_r_r0)->___mypyc_next_label__ = 0;
    cpy_r_r4 = 1;
    CPy_DECREF_NO_IMM(cpy_r_r0);
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("dictstruct/_main.py", "keys", 214, CPyStatic__main___globals);
        goto CPyL9;
    }
    return cpy_r_r2;
CPyL6: ;
    cpy_r_r5 = NULL;
    return cpy_r_r5;
CPyL7: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL6;
CPyL8: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r2);
    goto CPyL6;
CPyL9: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL6;
}

PyObject *CPyPy__main___keys_DictStruct_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"self", 0};
    static CPyArg_Parser parser = {"O:__call__", kwlist, 0};
    PyObject *obj_self;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, PyVectorcall_NARGS(nargs), kwnames, &parser, &obj_self)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType__main___DictStruct))
        arg_self = obj_self;
    else {
        CPy_TypeError("dictstruct._main.DictStruct", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef__main___keys_DictStruct_obj_____call__(arg___mypyc_self__, arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("dictstruct/_main.py", "keys", 214, CPyStatic__main___globals);
    return NULL;
}

PyObject *CPyDef__main___items_DictStruct_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = cpy_r_instance == cpy_r_r0;
    if (!cpy_r_r1) goto CPyL2;
    CPy_INCREF(cpy_r___mypyc_self__);
    return cpy_r___mypyc_self__;
CPyL2: ;
    cpy_r_r2 = PyMethod_New(cpy_r___mypyc_self__, cpy_r_instance);
    if (cpy_r_r2 == NULL) goto CPyL4;
    return cpy_r_r2;
CPyL4: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy__main___items_DictStruct_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"instance", "owner", 0};
    static CPyArg_Parser parser = {"OO:__get__", kwlist, 0};
    PyObject *obj_instance;
    PyObject *obj_owner;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_instance, &obj_owner)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_instance = obj_instance;
    PyObject *arg_owner = obj_owner;
    PyObject *retval = CPyDef__main___items_DictStruct_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("dictstruct/_main.py", "__get__", -1, CPyStatic__main___globals);
    return NULL;
}

PyObject *CPyDef__main___items_DictStruct_gen_____mypyc_generator_helper__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    CPyPtr cpy_r_r11;
    int64_t cpy_r_r12;
    CPyTagged cpy_r_r13;
    CPyTagged cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    CPyTagged cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    char cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    char cpy_r_r29;
    char cpy_r_r30;
    char cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    tuple_T2OO cpy_r_r34;
    PyObject *cpy_r_r35;
    char cpy_r_r36;
    PyObject *cpy_r_r37;
    char cpy_r_r38;
    CPyTagged cpy_r_r39;
    CPyTagged cpy_r_r40;
    char cpy_r_r41;
    PyObject *cpy_r_r42;
    char cpy_r_r43;
    char cpy_r_r44;
    char cpy_r_r45;
    char cpy_r_r46;
    PyObject *cpy_r_r47;
    cpy_r_r0 = ((dictstruct____main___items_DictStruct_genObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("dictstruct/_main.py", "items", "items_DictStruct_gen", "__mypyc_env__", 228, CPyStatic__main___globals);
        goto CPyL46;
    }
    CPy_INCREF_NO_IMM(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((dictstruct____main___items_DictStruct_envObject *)cpy_r_r0)->___mypyc_next_label__;
    if (unlikely(cpy_r_r1 == CPY_INT_TAG)) {
        CPy_AttributeError("dictstruct/_main.py", "items", "items_DictStruct_env", "__mypyc_next_label__", 228, CPyStatic__main___globals);
        goto CPyL47;
    }
    CPyTagged_INCREF(cpy_r_r1);
    goto CPyL42;
CPyL2: ;
    cpy_r_r2 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r3 = cpy_r_type != cpy_r_r2;
    if (cpy_r_r3) {
        goto CPyL48;
    } else
        goto CPyL5;
CPyL3: ;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("dictstruct/_main.py", "items", 228, CPyStatic__main___globals);
        goto CPyL46;
    }
    CPy_Unreachable();
CPyL5: ;
    cpy_r_r4 = ((dictstruct____main___items_DictStruct_envObject *)cpy_r_r0)->_self;
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AttributeError("dictstruct/_main.py", "items", "items_DictStruct_env", "self", 240, CPyStatic__main___globals);
        goto CPyL47;
    }
    CPy_INCREF_NO_IMM(cpy_r_r4);
CPyL6: ;
    cpy_r_r5 = CPyStatics[9]; /* '__struct_fields__' */
    cpy_r_r6 = CPyObject_GetAttr(cpy_r_r4, cpy_r_r5);
    CPy_DECREF_NO_IMM(cpy_r_r4);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("dictstruct/_main.py", "items", 240, CPyStatic__main___globals);
        goto CPyL47;
    }
    if (likely(PyTuple_Check(cpy_r_r6)))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("dictstruct/_main.py", "items", 240, CPyStatic__main___globals, "tuple", cpy_r_r6);
        goto CPyL47;
    }
    if (((dictstruct____main___items_DictStruct_envObject *)cpy_r_r0)->___mypyc_temp__4 != NULL) {
        CPy_DECREF(((dictstruct____main___items_DictStruct_envObject *)cpy_r_r0)->___mypyc_temp__4);
    }
    ((dictstruct____main___items_DictStruct_envObject *)cpy_r_r0)->___mypyc_temp__4 = cpy_r_r7;
    cpy_r_r8 = 1;
    if (unlikely(!cpy_r_r8)) {
        CPy_AddTraceback("dictstruct/_main.py", "items", -1, CPyStatic__main___globals);
        goto CPyL47;
    }
    ((dictstruct____main___items_DictStruct_envObject *)cpy_r_r0)->___mypyc_temp__5 = 0;
    cpy_r_r9 = 1;
    if (unlikely(!cpy_r_r9)) {
        CPy_AddTraceback("dictstruct/_main.py", "items", -1, CPyStatic__main___globals);
        goto CPyL47;
    }
CPyL10: ;
    cpy_r_r10 = ((dictstruct____main___items_DictStruct_envObject *)cpy_r_r0)->___mypyc_temp__4;
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AttributeError("dictstruct/_main.py", "items", "items_DictStruct_env", "__mypyc_temp__4", 240, CPyStatic__main___globals);
        goto CPyL47;
    }
    CPy_INCREF(cpy_r_r10);
CPyL11: ;
    cpy_r_r11 = (CPyPtr)&((PyVarObject *)cpy_r_r10)->ob_size;
    cpy_r_r12 = *(int64_t *)cpy_r_r11;
    CPy_DECREF(cpy_r_r10);
    cpy_r_r13 = cpy_r_r12 << 1;
    cpy_r_r14 = ((dictstruct____main___items_DictStruct_envObject *)cpy_r_r0)->___mypyc_temp__5;
    if (unlikely(cpy_r_r14 == CPY_INT_TAG)) {
        CPy_AttributeError("dictstruct/_main.py", "items", "items_DictStruct_env", "__mypyc_temp__5", 240, CPyStatic__main___globals);
        goto CPyL47;
    }
CPyL12: ;
    cpy_r_r15 = (Py_ssize_t)cpy_r_r14 < (Py_ssize_t)cpy_r_r13;
    if (!cpy_r_r15) goto CPyL39;
    cpy_r_r16 = ((dictstruct____main___items_DictStruct_envObject *)cpy_r_r0)->___mypyc_temp__4;
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AttributeError("dictstruct/_main.py", "items", "items_DictStruct_env", "__mypyc_temp__4", 240, CPyStatic__main___globals);
        goto CPyL47;
    }
    CPy_INCREF(cpy_r_r16);
CPyL14: ;
    cpy_r_r17 = ((dictstruct____main___items_DictStruct_envObject *)cpy_r_r0)->___mypyc_temp__5;
    if (unlikely(cpy_r_r17 == CPY_INT_TAG)) {
        CPy_AttributeError("dictstruct/_main.py", "items", "items_DictStruct_env", "__mypyc_temp__5", 240, CPyStatic__main___globals);
        goto CPyL49;
    }
CPyL15: ;
    cpy_r_r18 = CPySequenceTuple_GetItem(cpy_r_r16, cpy_r_r17);
    CPy_DECREF(cpy_r_r16);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("dictstruct/_main.py", "items", 240, CPyStatic__main___globals);
        goto CPyL47;
    }
    if (likely(PyUnicode_Check(cpy_r_r18)))
        cpy_r_r19 = cpy_r_r18;
    else {
        CPy_TypeErrorTraceback("dictstruct/_main.py", "items", 240, CPyStatic__main___globals, "str", cpy_r_r18);
        goto CPyL47;
    }
    if (((dictstruct____main___items_DictStruct_envObject *)cpy_r_r0)->_key != NULL) {
        CPy_DECREF(((dictstruct____main___items_DictStruct_envObject *)cpy_r_r0)->_key);
    }
    ((dictstruct____main___items_DictStruct_envObject *)cpy_r_r0)->_key = cpy_r_r19;
    cpy_r_r20 = 1;
    if (unlikely(!cpy_r_r20)) {
        CPy_AddTraceback("dictstruct/_main.py", "items", 240, CPyStatic__main___globals);
        goto CPyL47;
    }
    cpy_r_r21 = ((dictstruct____main___items_DictStruct_envObject *)cpy_r_r0)->_self;
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AttributeError("dictstruct/_main.py", "items", "items_DictStruct_env", "self", 241, CPyStatic__main___globals);
        goto CPyL47;
    }
    CPy_INCREF_NO_IMM(cpy_r_r21);
CPyL19: ;
    cpy_r_r22 = ((dictstruct____main___items_DictStruct_envObject *)cpy_r_r0)->_key;
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AttributeError("dictstruct/_main.py", "items", "items_DictStruct_env", "key", 241, CPyStatic__main___globals);
        goto CPyL50;
    }
    CPy_INCREF(cpy_r_r22);
CPyL20: ;
    cpy_r_r23 = CPyStatic__main___UNSET;
    if (unlikely(cpy_r_r23 == NULL)) {
        goto CPyL51;
    } else
        goto CPyL23;
CPyL21: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"UNSET\" was not set");
    cpy_r_r24 = 0;
    if (unlikely(!cpy_r_r24)) {
        CPy_AddTraceback("dictstruct/_main.py", "items", 241, CPyStatic__main___globals);
        goto CPyL46;
    }
    CPy_Unreachable();
CPyL23: ;
    cpy_r_r25 = CPyObject_GetAttr3(cpy_r_r21, cpy_r_r22, cpy_r_r23);
    CPy_DECREF_NO_IMM(cpy_r_r21);
    CPy_DECREF(cpy_r_r22);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("dictstruct/_main.py", "items", 241, CPyStatic__main___globals);
        goto CPyL47;
    }
    if (((dictstruct____main___items_DictStruct_envObject *)cpy_r_r0)->_value != NULL) {
        CPy_DECREF(((dictstruct____main___items_DictStruct_envObject *)cpy_r_r0)->_value);
    }
    ((dictstruct____main___items_DictStruct_envObject *)cpy_r_r0)->_value = cpy_r_r25;
    cpy_r_r26 = 1;
    if (unlikely(!cpy_r_r26)) {
        CPy_AddTraceback("dictstruct/_main.py", "items", 241, CPyStatic__main___globals);
        goto CPyL47;
    }
    cpy_r_r27 = ((dictstruct____main___items_DictStruct_envObject *)cpy_r_r0)->_value;
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AttributeError("dictstruct/_main.py", "items", "items_DictStruct_env", "value", 242, CPyStatic__main___globals);
        goto CPyL47;
    }
    CPy_INCREF(cpy_r_r27);
CPyL26: ;
    cpy_r_r28 = CPyStatic__main___UNSET;
    if (unlikely(cpy_r_r28 == NULL)) {
        goto CPyL52;
    } else
        goto CPyL29;
CPyL27: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"UNSET\" was not set");
    cpy_r_r29 = 0;
    if (unlikely(!cpy_r_r29)) {
        CPy_AddTraceback("dictstruct/_main.py", "items", 242, CPyStatic__main___globals);
        goto CPyL46;
    }
    CPy_Unreachable();
CPyL29: ;
    cpy_r_r30 = cpy_r_r27 == cpy_r_r28;
    CPy_DECREF(cpy_r_r27);
    cpy_r_r31 = cpy_r_r30 ^ 1;
    if (!cpy_r_r31) goto CPyL37;
    cpy_r_r32 = ((dictstruct____main___items_DictStruct_envObject *)cpy_r_r0)->_key;
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AttributeError("dictstruct/_main.py", "items", "items_DictStruct_env", "key", 243, CPyStatic__main___globals);
        goto CPyL47;
    }
    CPy_INCREF(cpy_r_r32);
CPyL31: ;
    cpy_r_r33 = ((dictstruct____main___items_DictStruct_envObject *)cpy_r_r0)->_value;
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AttributeError("dictstruct/_main.py", "items", "items_DictStruct_env", "value", 243, CPyStatic__main___globals);
        goto CPyL53;
    }
    CPy_INCREF(cpy_r_r33);
CPyL32: ;
    cpy_r_r34.f0 = cpy_r_r32;
    cpy_r_r34.f1 = cpy_r_r33;
    cpy_r_r35 = PyTuple_New(2);
    if (unlikely(cpy_r_r35 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp5 = cpy_r_r34.f0;
    PyTuple_SET_ITEM(cpy_r_r35, 0, __tmp5);
    PyObject *__tmp6 = cpy_r_r34.f1;
    PyTuple_SET_ITEM(cpy_r_r35, 1, __tmp6);
    if (((dictstruct____main___items_DictStruct_envObject *)cpy_r_r0)->___mypyc_next_label__ != CPY_INT_TAG) {
        CPyTagged_DECREF(((dictstruct____main___items_DictStruct_envObject *)cpy_r_r0)->___mypyc_next_label__);
    }
    ((dictstruct____main___items_DictStruct_envObject *)cpy_r_r0)->___mypyc_next_label__ = 2;
    cpy_r_r36 = 1;
    CPy_DECREF_NO_IMM(cpy_r_r0);
    if (unlikely(!cpy_r_r36)) {
        CPy_AddTraceback("dictstruct/_main.py", "items", 243, CPyStatic__main___globals);
        goto CPyL54;
    }
    return cpy_r_r35;
CPyL34: ;
    cpy_r_r37 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r38 = cpy_r_type != cpy_r_r37;
    if (cpy_r_r38) {
        goto CPyL55;
    } else
        goto CPyL37;
CPyL35: ;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("dictstruct/_main.py", "items", 243, CPyStatic__main___globals);
        goto CPyL46;
    }
    CPy_Unreachable();
CPyL37: ;
    cpy_r_r39 = ((dictstruct____main___items_DictStruct_envObject *)cpy_r_r0)->___mypyc_temp__5;
    if (unlikely(cpy_r_r39 == CPY_INT_TAG)) {
        CPy_AttributeError("dictstruct/_main.py", "items", "items_DictStruct_env", "__mypyc_temp__5", 240, CPyStatic__main___globals);
        goto CPyL47;
    }
CPyL38: ;
    cpy_r_r40 = cpy_r_r39 + 2;
    ((dictstruct____main___items_DictStruct_envObject *)cpy_r_r0)->___mypyc_temp__5 = cpy_r_r40;
    cpy_r_r41 = 1;
    if (unlikely(!cpy_r_r41)) {
        CPy_AddTraceback("dictstruct/_main.py", "items", 240, CPyStatic__main___globals);
        goto CPyL47;
    } else
        goto CPyL10;
CPyL39: ;
    cpy_r_r42 = Py_None;
    if (((dictstruct____main___items_DictStruct_envObject *)cpy_r_r0)->___mypyc_next_label__ != CPY_INT_TAG) {
        CPyTagged_DECREF(((dictstruct____main___items_DictStruct_envObject *)cpy_r_r0)->___mypyc_next_label__);
    }
    ((dictstruct____main___items_DictStruct_envObject *)cpy_r_r0)->___mypyc_next_label__ = -2;
    cpy_r_r43 = 1;
    CPy_DECREF_NO_IMM(cpy_r_r0);
    if (unlikely(!cpy_r_r43)) {
        CPy_AddTraceback("dictstruct/_main.py", "items", 228, CPyStatic__main___globals);
        goto CPyL46;
    }
    CPyGen_SetStopIterationValue(cpy_r_r42);
    if (!0) goto CPyL46;
    CPy_Unreachable();
CPyL42: ;
    cpy_r_r44 = cpy_r_r1 == 0;
    if (cpy_r_r44) goto CPyL56;
    cpy_r_r45 = cpy_r_r1 == 2;
    CPyTagged_DECREF(cpy_r_r1);
    if (cpy_r_r45) {
        goto CPyL34;
    } else
        goto CPyL57;
CPyL44: ;
    PyErr_SetNone(PyExc_StopIteration);
    cpy_r_r46 = 0;
    if (unlikely(!cpy_r_r46)) {
        CPy_AddTraceback("dictstruct/_main.py", "items", 228, CPyStatic__main___globals);
        goto CPyL46;
    }
    CPy_Unreachable();
CPyL46: ;
    cpy_r_r47 = NULL;
    return cpy_r_r47;
CPyL47: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL46;
CPyL48: ;
    CPy_DECREF_NO_IMM(cpy_r_r0);
    goto CPyL3;
CPyL49: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r16);
    goto CPyL46;
CPyL50: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r21);
    goto CPyL46;
CPyL51: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r21);
    CPy_DecRef(cpy_r_r22);
    goto CPyL21;
CPyL52: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r27);
    goto CPyL27;
CPyL53: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r32);
    goto CPyL46;
CPyL54: ;
    CPy_DecRef(cpy_r_r35);
    goto CPyL46;
CPyL55: ;
    CPy_DECREF_NO_IMM(cpy_r_r0);
    goto CPyL35;
CPyL56: ;
    CPyTagged_DECREF(cpy_r_r1);
    goto CPyL2;
CPyL57: ;
    CPy_DECREF_NO_IMM(cpy_r_r0);
    goto CPyL44;
}

PyObject *CPyPy__main___items_DictStruct_gen_____mypyc_generator_helper__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"type", "value", "traceback", "arg", 0};
    static CPyArg_Parser parser = {"OOOO:__mypyc_generator_helper__", kwlist, 0};
    PyObject *obj_type;
    PyObject *obj_value;
    PyObject *obj_traceback;
    PyObject *obj_arg;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_type, &obj_value, &obj_traceback, &obj_arg)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_type = obj_type;
    PyObject *arg_value = obj_value;
    PyObject *arg_traceback = obj_traceback;
    PyObject *arg_arg = obj_arg;
    PyObject *retval = CPyDef__main___items_DictStruct_gen_____mypyc_generator_helper__(arg___mypyc_self__, arg_type, arg_value, arg_traceback, arg_arg);
    return retval;
fail: ;
    CPy_AddTraceback("dictstruct/_main.py", "items", 228, CPyStatic__main___globals);
    return NULL;
}

PyObject *CPyDef__main___items_DictStruct_gen_____next__(PyObject *cpy_r___mypyc_self__) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = CPyDef__main___items_DictStruct_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_r0, cpy_r_r0, cpy_r_r0, cpy_r_r0);
    if (cpy_r_r1 == NULL) goto CPyL2;
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy__main___items_DictStruct_gen_____next__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__next__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType__main___items_DictStruct_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("dictstruct._main.items_DictStruct_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef__main___items_DictStruct_gen_____next__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("dictstruct/_main.py", "__next__", -1, CPyStatic__main___globals);
    return NULL;
}

PyObject *CPyDef__main___items_DictStruct_gen___send(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = CPyDef__main___items_DictStruct_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_r0, cpy_r_r0, cpy_r_r0, cpy_r_arg);
    if (cpy_r_r1 == NULL) goto CPyL2;
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy__main___items_DictStruct_gen___send(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"arg", 0};
    static CPyArg_Parser parser = {"O:send", kwlist, 0};
    PyObject *obj_arg;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_arg)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType__main___items_DictStruct_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("dictstruct._main.items_DictStruct_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *arg_arg = obj_arg;
    PyObject *retval = CPyDef__main___items_DictStruct_gen___send(arg___mypyc_self__, arg_arg);
    return retval;
fail: ;
    CPy_AddTraceback("dictstruct/_main.py", "send", -1, CPyStatic__main___globals);
    return NULL;
}

PyObject *CPyDef__main___items_DictStruct_gen_____iter__(PyObject *cpy_r___mypyc_self__) {
    CPy_INCREF_NO_IMM(cpy_r___mypyc_self__);
    return cpy_r___mypyc_self__;
}

PyObject *CPyPy__main___items_DictStruct_gen_____iter__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__iter__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType__main___items_DictStruct_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("dictstruct._main.items_DictStruct_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef__main___items_DictStruct_gen_____iter__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("dictstruct/_main.py", "__iter__", -1, CPyStatic__main___globals);
    return NULL;
}

PyObject *CPyDef__main___items_DictStruct_gen___throw(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    if (cpy_r_value != NULL) goto CPyL7;
    CPy_INCREF(cpy_r_r0);
    cpy_r_value = cpy_r_r0;
CPyL2: ;
    if (cpy_r_traceback != NULL) goto CPyL8;
    CPy_INCREF(cpy_r_r0);
    cpy_r_traceback = cpy_r_r0;
CPyL4: ;
    cpy_r_r1 = CPyDef__main___items_DictStruct_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_type, cpy_r_value, cpy_r_traceback, cpy_r_r0);
    CPy_DECREF(cpy_r_value);
    CPy_DECREF(cpy_r_traceback);
    if (cpy_r_r1 == NULL) goto CPyL6;
    return cpy_r_r1;
CPyL6: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
CPyL7: ;
    CPy_INCREF(cpy_r_value);
    goto CPyL2;
CPyL8: ;
    CPy_INCREF(cpy_r_traceback);
    goto CPyL4;
}

PyObject *CPyPy__main___items_DictStruct_gen___throw(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"type", "value", "traceback", 0};
    static CPyArg_Parser parser = {"O|OO:throw", kwlist, 0};
    PyObject *obj_type;
    PyObject *obj_value = NULL;
    PyObject *obj_traceback = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_type, &obj_value, &obj_traceback)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType__main___items_DictStruct_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("dictstruct._main.items_DictStruct_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *arg_type = obj_type;
    PyObject *arg_value;
    if (obj_value == NULL) {
        arg_value = NULL;
    } else {
        arg_value = obj_value; 
    }
    PyObject *arg_traceback;
    if (obj_traceback == NULL) {
        arg_traceback = NULL;
    } else {
        arg_traceback = obj_traceback; 
    }
    PyObject *retval = CPyDef__main___items_DictStruct_gen___throw(arg___mypyc_self__, arg_type, arg_value, arg_traceback);
    return retval;
fail: ;
    CPy_AddTraceback("dictstruct/_main.py", "throw", -1, CPyStatic__main___globals);
    return NULL;
}

PyObject *CPyDef__main___items_DictStruct_gen___close(PyObject *cpy_r___mypyc_self__) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    tuple_T3OOO cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    tuple_T2OO cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = CPyStatics[17]; /* 'GeneratorExit' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (cpy_r_r2 == NULL) goto CPyL3;
    cpy_r_r3 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r4 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r5 = CPyDef__main___items_DictStruct_gen___throw(cpy_r___mypyc_self__, cpy_r_r2, cpy_r_r3, cpy_r_r4);
    if (cpy_r_r5 != NULL) goto CPyL11;
CPyL3: ;
    cpy_r_r6 = CPy_CatchError();
    cpy_r_r7 = CPyModule_builtins;
    cpy_r_r8 = CPyStatics[18]; /* 'StopIteration' */
    cpy_r_r9 = CPyObject_GetAttr(cpy_r_r7, cpy_r_r8);
    if (cpy_r_r9 == NULL) goto CPyL12;
    cpy_r_r10.f0 = cpy_r_r2;
    cpy_r_r10.f1 = cpy_r_r9;
    cpy_r_r11 = PyTuple_New(2);
    if (unlikely(cpy_r_r11 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp7 = cpy_r_r10.f0;
    PyTuple_SET_ITEM(cpy_r_r11, 0, __tmp7);
    PyObject *__tmp8 = cpy_r_r10.f1;
    PyTuple_SET_ITEM(cpy_r_r11, 1, __tmp8);
    cpy_r_r12 = CPy_ExceptionMatches(cpy_r_r11);
    CPy_DECREF(cpy_r_r11);
    if (!cpy_r_r12) goto CPyL13;
    CPy_RestoreExcInfo(cpy_r_r6);
    CPy_DECREF(cpy_r_r6.f0);
    CPy_DECREF(cpy_r_r6.f1);
    CPy_DECREF(cpy_r_r6.f2);
    cpy_r_r13 = (PyObject *)&_Py_NoneStruct;
    CPy_INCREF(cpy_r_r13);
    return cpy_r_r13;
CPyL6: ;
    CPy_Reraise();
    if (!0) goto CPyL10;
    CPy_Unreachable();
CPyL8: ;
    PyErr_SetString(PyExc_RuntimeError, "generator ignored GeneratorExit");
    cpy_r_r14 = 0;
    if (!cpy_r_r14) goto CPyL10;
    CPy_Unreachable();
CPyL10: ;
    cpy_r_r15 = NULL;
    return cpy_r_r15;
CPyL11: ;
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r5);
    goto CPyL8;
CPyL12: ;
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r6.f0);
    CPy_DECREF(cpy_r_r6.f1);
    CPy_DECREF(cpy_r_r6.f2);
    goto CPyL10;
CPyL13: ;
    CPy_DECREF(cpy_r_r6.f0);
    CPy_DECREF(cpy_r_r6.f1);
    CPy_DECREF(cpy_r_r6.f2);
    goto CPyL6;
}

PyObject *CPyPy__main___items_DictStruct_gen___close(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":close", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType__main___items_DictStruct_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("dictstruct._main.items_DictStruct_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef__main___items_DictStruct_gen___close(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("dictstruct/_main.py", "close", -1, CPyStatic__main___globals);
    return NULL;
}

PyObject *CPyDef__main___items_DictStruct_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    cpy_r_r0 = CPyDef__main___items_DictStruct_env();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("dictstruct/_main.py", "items", 228, CPyStatic__main___globals);
        goto CPyL6;
    }
    CPy_INCREF_NO_IMM(cpy_r_self);
    if (((dictstruct____main___items_DictStruct_envObject *)cpy_r_r0)->_self != NULL) {
        CPy_DECREF_NO_IMM(((dictstruct____main___items_DictStruct_envObject *)cpy_r_r0)->_self);
    }
    ((dictstruct____main___items_DictStruct_envObject *)cpy_r_r0)->_self = cpy_r_self;
    cpy_r_r1 = 1;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("dictstruct/_main.py", "items", 228, CPyStatic__main___globals);
        goto CPyL7;
    }
    cpy_r_r2 = CPyDef__main___items_DictStruct_gen();
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("dictstruct/_main.py", "items", 228, CPyStatic__main___globals);
        goto CPyL7;
    }
    CPy_INCREF_NO_IMM(cpy_r_r0);
    if (((dictstruct____main___items_DictStruct_genObject *)cpy_r_r2)->___mypyc_env__ != NULL) {
        CPy_DECREF_NO_IMM(((dictstruct____main___items_DictStruct_genObject *)cpy_r_r2)->___mypyc_env__);
    }
    ((dictstruct____main___items_DictStruct_genObject *)cpy_r_r2)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r3 = 1;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("dictstruct/_main.py", "items", 228, CPyStatic__main___globals);
        goto CPyL8;
    }
    if (((dictstruct____main___items_DictStruct_envObject *)cpy_r_r0)->___mypyc_next_label__ != CPY_INT_TAG) {
        CPyTagged_DECREF(((dictstruct____main___items_DictStruct_envObject *)cpy_r_r0)->___mypyc_next_label__);
    }
    ((dictstruct____main___items_DictStruct_envObject *)cpy_r_r0)->___mypyc_next_label__ = 0;
    cpy_r_r4 = 1;
    CPy_DECREF_NO_IMM(cpy_r_r0);
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("dictstruct/_main.py", "items", 228, CPyStatic__main___globals);
        goto CPyL9;
    }
    return cpy_r_r2;
CPyL6: ;
    cpy_r_r5 = NULL;
    return cpy_r_r5;
CPyL7: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL6;
CPyL8: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r2);
    goto CPyL6;
CPyL9: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL6;
}

PyObject *CPyPy__main___items_DictStruct_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"self", 0};
    static CPyArg_Parser parser = {"O:__call__", kwlist, 0};
    PyObject *obj_self;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, PyVectorcall_NARGS(nargs), kwnames, &parser, &obj_self)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType__main___DictStruct))
        arg_self = obj_self;
    else {
        CPy_TypeError("dictstruct._main.DictStruct", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef__main___items_DictStruct_obj_____call__(arg___mypyc_self__, arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("dictstruct/_main.py", "items", 228, CPyStatic__main___globals);
    return NULL;
}

PyObject *CPyDef__main___values_DictStruct_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = cpy_r_instance == cpy_r_r0;
    if (!cpy_r_r1) goto CPyL2;
    CPy_INCREF(cpy_r___mypyc_self__);
    return cpy_r___mypyc_self__;
CPyL2: ;
    cpy_r_r2 = PyMethod_New(cpy_r___mypyc_self__, cpy_r_instance);
    if (cpy_r_r2 == NULL) goto CPyL4;
    return cpy_r_r2;
CPyL4: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy__main___values_DictStruct_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"instance", "owner", 0};
    static CPyArg_Parser parser = {"OO:__get__", kwlist, 0};
    PyObject *obj_instance;
    PyObject *obj_owner;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_instance, &obj_owner)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_instance = obj_instance;
    PyObject *arg_owner = obj_owner;
    PyObject *retval = CPyDef__main___values_DictStruct_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("dictstruct/_main.py", "__get__", -1, CPyStatic__main___globals);
    return NULL;
}

PyObject *CPyDef__main___values_DictStruct_gen_____mypyc_generator_helper__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    CPyPtr cpy_r_r11;
    int64_t cpy_r_r12;
    CPyTagged cpy_r_r13;
    CPyTagged cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    CPyTagged cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    char cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    char cpy_r_r29;
    char cpy_r_r30;
    char cpy_r_r31;
    PyObject *cpy_r_r32;
    char cpy_r_r33;
    PyObject *cpy_r_r34;
    char cpy_r_r35;
    CPyTagged cpy_r_r36;
    CPyTagged cpy_r_r37;
    char cpy_r_r38;
    PyObject *cpy_r_r39;
    char cpy_r_r40;
    char cpy_r_r41;
    char cpy_r_r42;
    char cpy_r_r43;
    PyObject *cpy_r_r44;
    cpy_r_r0 = ((dictstruct____main___values_DictStruct_genObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("dictstruct/_main.py", "values", "values_DictStruct_gen", "__mypyc_env__", 245, CPyStatic__main___globals);
        goto CPyL45;
    }
    CPy_INCREF_NO_IMM(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((dictstruct____main___values_DictStruct_envObject *)cpy_r_r0)->___mypyc_next_label__;
    if (unlikely(cpy_r_r1 == CPY_INT_TAG)) {
        CPy_AttributeError("dictstruct/_main.py", "values", "values_DictStruct_env", "__mypyc_next_label__", 245, CPyStatic__main___globals);
        goto CPyL46;
    }
    CPyTagged_INCREF(cpy_r_r1);
    goto CPyL41;
CPyL2: ;
    cpy_r_r2 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r3 = cpy_r_type != cpy_r_r2;
    if (cpy_r_r3) {
        goto CPyL47;
    } else
        goto CPyL5;
CPyL3: ;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("dictstruct/_main.py", "values", 245, CPyStatic__main___globals);
        goto CPyL45;
    }
    CPy_Unreachable();
CPyL5: ;
    cpy_r_r4 = ((dictstruct____main___values_DictStruct_envObject *)cpy_r_r0)->_self;
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AttributeError("dictstruct/_main.py", "values", "values_DictStruct_env", "self", 257, CPyStatic__main___globals);
        goto CPyL46;
    }
    CPy_INCREF_NO_IMM(cpy_r_r4);
CPyL6: ;
    cpy_r_r5 = CPyStatics[9]; /* '__struct_fields__' */
    cpy_r_r6 = CPyObject_GetAttr(cpy_r_r4, cpy_r_r5);
    CPy_DECREF_NO_IMM(cpy_r_r4);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("dictstruct/_main.py", "values", 257, CPyStatic__main___globals);
        goto CPyL46;
    }
    if (likely(PyTuple_Check(cpy_r_r6)))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("dictstruct/_main.py", "values", 257, CPyStatic__main___globals, "tuple", cpy_r_r6);
        goto CPyL46;
    }
    if (((dictstruct____main___values_DictStruct_envObject *)cpy_r_r0)->___mypyc_temp__6 != NULL) {
        CPy_DECREF(((dictstruct____main___values_DictStruct_envObject *)cpy_r_r0)->___mypyc_temp__6);
    }
    ((dictstruct____main___values_DictStruct_envObject *)cpy_r_r0)->___mypyc_temp__6 = cpy_r_r7;
    cpy_r_r8 = 1;
    if (unlikely(!cpy_r_r8)) {
        CPy_AddTraceback("dictstruct/_main.py", "values", -1, CPyStatic__main___globals);
        goto CPyL46;
    }
    ((dictstruct____main___values_DictStruct_envObject *)cpy_r_r0)->___mypyc_temp__7 = 0;
    cpy_r_r9 = 1;
    if (unlikely(!cpy_r_r9)) {
        CPy_AddTraceback("dictstruct/_main.py", "values", -1, CPyStatic__main___globals);
        goto CPyL46;
    }
CPyL10: ;
    cpy_r_r10 = ((dictstruct____main___values_DictStruct_envObject *)cpy_r_r0)->___mypyc_temp__6;
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AttributeError("dictstruct/_main.py", "values", "values_DictStruct_env", "__mypyc_temp__6", 257, CPyStatic__main___globals);
        goto CPyL46;
    }
    CPy_INCREF(cpy_r_r10);
CPyL11: ;
    cpy_r_r11 = (CPyPtr)&((PyVarObject *)cpy_r_r10)->ob_size;
    cpy_r_r12 = *(int64_t *)cpy_r_r11;
    CPy_DECREF(cpy_r_r10);
    cpy_r_r13 = cpy_r_r12 << 1;
    cpy_r_r14 = ((dictstruct____main___values_DictStruct_envObject *)cpy_r_r0)->___mypyc_temp__7;
    if (unlikely(cpy_r_r14 == CPY_INT_TAG)) {
        CPy_AttributeError("dictstruct/_main.py", "values", "values_DictStruct_env", "__mypyc_temp__7", 257, CPyStatic__main___globals);
        goto CPyL46;
    }
CPyL12: ;
    cpy_r_r15 = (Py_ssize_t)cpy_r_r14 < (Py_ssize_t)cpy_r_r13;
    if (!cpy_r_r15) goto CPyL38;
    cpy_r_r16 = ((dictstruct____main___values_DictStruct_envObject *)cpy_r_r0)->___mypyc_temp__6;
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AttributeError("dictstruct/_main.py", "values", "values_DictStruct_env", "__mypyc_temp__6", 257, CPyStatic__main___globals);
        goto CPyL46;
    }
    CPy_INCREF(cpy_r_r16);
CPyL14: ;
    cpy_r_r17 = ((dictstruct____main___values_DictStruct_envObject *)cpy_r_r0)->___mypyc_temp__7;
    if (unlikely(cpy_r_r17 == CPY_INT_TAG)) {
        CPy_AttributeError("dictstruct/_main.py", "values", "values_DictStruct_env", "__mypyc_temp__7", 257, CPyStatic__main___globals);
        goto CPyL48;
    }
CPyL15: ;
    cpy_r_r18 = CPySequenceTuple_GetItem(cpy_r_r16, cpy_r_r17);
    CPy_DECREF(cpy_r_r16);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("dictstruct/_main.py", "values", 257, CPyStatic__main___globals);
        goto CPyL46;
    }
    if (likely(PyUnicode_Check(cpy_r_r18)))
        cpy_r_r19 = cpy_r_r18;
    else {
        CPy_TypeErrorTraceback("dictstruct/_main.py", "values", 257, CPyStatic__main___globals, "str", cpy_r_r18);
        goto CPyL46;
    }
    if (((dictstruct____main___values_DictStruct_envObject *)cpy_r_r0)->_key != NULL) {
        CPy_DECREF(((dictstruct____main___values_DictStruct_envObject *)cpy_r_r0)->_key);
    }
    ((dictstruct____main___values_DictStruct_envObject *)cpy_r_r0)->_key = cpy_r_r19;
    cpy_r_r20 = 1;
    if (unlikely(!cpy_r_r20)) {
        CPy_AddTraceback("dictstruct/_main.py", "values", 257, CPyStatic__main___globals);
        goto CPyL46;
    }
    cpy_r_r21 = ((dictstruct____main___values_DictStruct_envObject *)cpy_r_r0)->_self;
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AttributeError("dictstruct/_main.py", "values", "values_DictStruct_env", "self", 258, CPyStatic__main___globals);
        goto CPyL46;
    }
    CPy_INCREF_NO_IMM(cpy_r_r21);
CPyL19: ;
    cpy_r_r22 = ((dictstruct____main___values_DictStruct_envObject *)cpy_r_r0)->_key;
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AttributeError("dictstruct/_main.py", "values", "values_DictStruct_env", "key", 258, CPyStatic__main___globals);
        goto CPyL49;
    }
    CPy_INCREF(cpy_r_r22);
CPyL20: ;
    cpy_r_r23 = CPyStatic__main___UNSET;
    if (unlikely(cpy_r_r23 == NULL)) {
        goto CPyL50;
    } else
        goto CPyL23;
CPyL21: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"UNSET\" was not set");
    cpy_r_r24 = 0;
    if (unlikely(!cpy_r_r24)) {
        CPy_AddTraceback("dictstruct/_main.py", "values", 258, CPyStatic__main___globals);
        goto CPyL45;
    }
    CPy_Unreachable();
CPyL23: ;
    cpy_r_r25 = CPyObject_GetAttr3(cpy_r_r21, cpy_r_r22, cpy_r_r23);
    CPy_DECREF_NO_IMM(cpy_r_r21);
    CPy_DECREF(cpy_r_r22);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("dictstruct/_main.py", "values", 258, CPyStatic__main___globals);
        goto CPyL46;
    }
    if (((dictstruct____main___values_DictStruct_envObject *)cpy_r_r0)->_value != NULL) {
        CPy_DECREF(((dictstruct____main___values_DictStruct_envObject *)cpy_r_r0)->_value);
    }
    ((dictstruct____main___values_DictStruct_envObject *)cpy_r_r0)->_value = cpy_r_r25;
    cpy_r_r26 = 1;
    if (unlikely(!cpy_r_r26)) {
        CPy_AddTraceback("dictstruct/_main.py", "values", 258, CPyStatic__main___globals);
        goto CPyL46;
    }
    cpy_r_r27 = ((dictstruct____main___values_DictStruct_envObject *)cpy_r_r0)->_value;
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AttributeError("dictstruct/_main.py", "values", "values_DictStruct_env", "value", 259, CPyStatic__main___globals);
        goto CPyL46;
    }
    CPy_INCREF(cpy_r_r27);
CPyL26: ;
    cpy_r_r28 = CPyStatic__main___UNSET;
    if (unlikely(cpy_r_r28 == NULL)) {
        goto CPyL51;
    } else
        goto CPyL29;
CPyL27: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"UNSET\" was not set");
    cpy_r_r29 = 0;
    if (unlikely(!cpy_r_r29)) {
        CPy_AddTraceback("dictstruct/_main.py", "values", 259, CPyStatic__main___globals);
        goto CPyL45;
    }
    CPy_Unreachable();
CPyL29: ;
    cpy_r_r30 = cpy_r_r27 == cpy_r_r28;
    CPy_DECREF(cpy_r_r27);
    cpy_r_r31 = cpy_r_r30 ^ 1;
    if (!cpy_r_r31) goto CPyL36;
    cpy_r_r32 = ((dictstruct____main___values_DictStruct_envObject *)cpy_r_r0)->_value;
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AttributeError("dictstruct/_main.py", "values", "values_DictStruct_env", "value", 260, CPyStatic__main___globals);
        goto CPyL46;
    }
    CPy_INCREF(cpy_r_r32);
CPyL31: ;
    if (((dictstruct____main___values_DictStruct_envObject *)cpy_r_r0)->___mypyc_next_label__ != CPY_INT_TAG) {
        CPyTagged_DECREF(((dictstruct____main___values_DictStruct_envObject *)cpy_r_r0)->___mypyc_next_label__);
    }
    ((dictstruct____main___values_DictStruct_envObject *)cpy_r_r0)->___mypyc_next_label__ = 2;
    cpy_r_r33 = 1;
    CPy_DECREF_NO_IMM(cpy_r_r0);
    if (unlikely(!cpy_r_r33)) {
        CPy_AddTraceback("dictstruct/_main.py", "values", 260, CPyStatic__main___globals);
        goto CPyL52;
    }
    return cpy_r_r32;
CPyL33: ;
    cpy_r_r34 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r35 = cpy_r_type != cpy_r_r34;
    if (cpy_r_r35) {
        goto CPyL53;
    } else
        goto CPyL36;
CPyL34: ;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("dictstruct/_main.py", "values", 260, CPyStatic__main___globals);
        goto CPyL45;
    }
    CPy_Unreachable();
CPyL36: ;
    cpy_r_r36 = ((dictstruct____main___values_DictStruct_envObject *)cpy_r_r0)->___mypyc_temp__7;
    if (unlikely(cpy_r_r36 == CPY_INT_TAG)) {
        CPy_AttributeError("dictstruct/_main.py", "values", "values_DictStruct_env", "__mypyc_temp__7", 257, CPyStatic__main___globals);
        goto CPyL46;
    }
CPyL37: ;
    cpy_r_r37 = cpy_r_r36 + 2;
    ((dictstruct____main___values_DictStruct_envObject *)cpy_r_r0)->___mypyc_temp__7 = cpy_r_r37;
    cpy_r_r38 = 1;
    if (unlikely(!cpy_r_r38)) {
        CPy_AddTraceback("dictstruct/_main.py", "values", 257, CPyStatic__main___globals);
        goto CPyL46;
    } else
        goto CPyL10;
CPyL38: ;
    cpy_r_r39 = Py_None;
    if (((dictstruct____main___values_DictStruct_envObject *)cpy_r_r0)->___mypyc_next_label__ != CPY_INT_TAG) {
        CPyTagged_DECREF(((dictstruct____main___values_DictStruct_envObject *)cpy_r_r0)->___mypyc_next_label__);
    }
    ((dictstruct____main___values_DictStruct_envObject *)cpy_r_r0)->___mypyc_next_label__ = -2;
    cpy_r_r40 = 1;
    CPy_DECREF_NO_IMM(cpy_r_r0);
    if (unlikely(!cpy_r_r40)) {
        CPy_AddTraceback("dictstruct/_main.py", "values", 245, CPyStatic__main___globals);
        goto CPyL45;
    }
    CPyGen_SetStopIterationValue(cpy_r_r39);
    if (!0) goto CPyL45;
    CPy_Unreachable();
CPyL41: ;
    cpy_r_r41 = cpy_r_r1 == 0;
    if (cpy_r_r41) goto CPyL54;
    cpy_r_r42 = cpy_r_r1 == 2;
    CPyTagged_DECREF(cpy_r_r1);
    if (cpy_r_r42) {
        goto CPyL33;
    } else
        goto CPyL55;
CPyL43: ;
    PyErr_SetNone(PyExc_StopIteration);
    cpy_r_r43 = 0;
    if (unlikely(!cpy_r_r43)) {
        CPy_AddTraceback("dictstruct/_main.py", "values", 245, CPyStatic__main___globals);
        goto CPyL45;
    }
    CPy_Unreachable();
CPyL45: ;
    cpy_r_r44 = NULL;
    return cpy_r_r44;
CPyL46: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL45;
CPyL47: ;
    CPy_DECREF_NO_IMM(cpy_r_r0);
    goto CPyL3;
CPyL48: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r16);
    goto CPyL45;
CPyL49: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r21);
    goto CPyL45;
CPyL50: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r21);
    CPy_DecRef(cpy_r_r22);
    goto CPyL21;
CPyL51: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r27);
    goto CPyL27;
CPyL52: ;
    CPy_DecRef(cpy_r_r32);
    goto CPyL45;
CPyL53: ;
    CPy_DECREF_NO_IMM(cpy_r_r0);
    goto CPyL34;
CPyL54: ;
    CPyTagged_DECREF(cpy_r_r1);
    goto CPyL2;
CPyL55: ;
    CPy_DECREF_NO_IMM(cpy_r_r0);
    goto CPyL43;
}

PyObject *CPyPy__main___values_DictStruct_gen_____mypyc_generator_helper__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"type", "value", "traceback", "arg", 0};
    static CPyArg_Parser parser = {"OOOO:__mypyc_generator_helper__", kwlist, 0};
    PyObject *obj_type;
    PyObject *obj_value;
    PyObject *obj_traceback;
    PyObject *obj_arg;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_type, &obj_value, &obj_traceback, &obj_arg)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_type = obj_type;
    PyObject *arg_value = obj_value;
    PyObject *arg_traceback = obj_traceback;
    PyObject *arg_arg = obj_arg;
    PyObject *retval = CPyDef__main___values_DictStruct_gen_____mypyc_generator_helper__(arg___mypyc_self__, arg_type, arg_value, arg_traceback, arg_arg);
    return retval;
fail: ;
    CPy_AddTraceback("dictstruct/_main.py", "values", 245, CPyStatic__main___globals);
    return NULL;
}

PyObject *CPyDef__main___values_DictStruct_gen_____next__(PyObject *cpy_r___mypyc_self__) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = CPyDef__main___values_DictStruct_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_r0, cpy_r_r0, cpy_r_r0, cpy_r_r0);
    if (cpy_r_r1 == NULL) goto CPyL2;
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy__main___values_DictStruct_gen_____next__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__next__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType__main___values_DictStruct_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("dictstruct._main.values_DictStruct_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef__main___values_DictStruct_gen_____next__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("dictstruct/_main.py", "__next__", -1, CPyStatic__main___globals);
    return NULL;
}

PyObject *CPyDef__main___values_DictStruct_gen___send(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = CPyDef__main___values_DictStruct_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_r0, cpy_r_r0, cpy_r_r0, cpy_r_arg);
    if (cpy_r_r1 == NULL) goto CPyL2;
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy__main___values_DictStruct_gen___send(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"arg", 0};
    static CPyArg_Parser parser = {"O:send", kwlist, 0};
    PyObject *obj_arg;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_arg)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType__main___values_DictStruct_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("dictstruct._main.values_DictStruct_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *arg_arg = obj_arg;
    PyObject *retval = CPyDef__main___values_DictStruct_gen___send(arg___mypyc_self__, arg_arg);
    return retval;
fail: ;
    CPy_AddTraceback("dictstruct/_main.py", "send", -1, CPyStatic__main___globals);
    return NULL;
}

PyObject *CPyDef__main___values_DictStruct_gen_____iter__(PyObject *cpy_r___mypyc_self__) {
    CPy_INCREF_NO_IMM(cpy_r___mypyc_self__);
    return cpy_r___mypyc_self__;
}

PyObject *CPyPy__main___values_DictStruct_gen_____iter__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__iter__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType__main___values_DictStruct_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("dictstruct._main.values_DictStruct_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef__main___values_DictStruct_gen_____iter__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("dictstruct/_main.py", "__iter__", -1, CPyStatic__main___globals);
    return NULL;
}

PyObject *CPyDef__main___values_DictStruct_gen___throw(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    if (cpy_r_value != NULL) goto CPyL7;
    CPy_INCREF(cpy_r_r0);
    cpy_r_value = cpy_r_r0;
CPyL2: ;
    if (cpy_r_traceback != NULL) goto CPyL8;
    CPy_INCREF(cpy_r_r0);
    cpy_r_traceback = cpy_r_r0;
CPyL4: ;
    cpy_r_r1 = CPyDef__main___values_DictStruct_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_type, cpy_r_value, cpy_r_traceback, cpy_r_r0);
    CPy_DECREF(cpy_r_value);
    CPy_DECREF(cpy_r_traceback);
    if (cpy_r_r1 == NULL) goto CPyL6;
    return cpy_r_r1;
CPyL6: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
CPyL7: ;
    CPy_INCREF(cpy_r_value);
    goto CPyL2;
CPyL8: ;
    CPy_INCREF(cpy_r_traceback);
    goto CPyL4;
}

PyObject *CPyPy__main___values_DictStruct_gen___throw(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"type", "value", "traceback", 0};
    static CPyArg_Parser parser = {"O|OO:throw", kwlist, 0};
    PyObject *obj_type;
    PyObject *obj_value = NULL;
    PyObject *obj_traceback = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_type, &obj_value, &obj_traceback)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType__main___values_DictStruct_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("dictstruct._main.values_DictStruct_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *arg_type = obj_type;
    PyObject *arg_value;
    if (obj_value == NULL) {
        arg_value = NULL;
    } else {
        arg_value = obj_value; 
    }
    PyObject *arg_traceback;
    if (obj_traceback == NULL) {
        arg_traceback = NULL;
    } else {
        arg_traceback = obj_traceback; 
    }
    PyObject *retval = CPyDef__main___values_DictStruct_gen___throw(arg___mypyc_self__, arg_type, arg_value, arg_traceback);
    return retval;
fail: ;
    CPy_AddTraceback("dictstruct/_main.py", "throw", -1, CPyStatic__main___globals);
    return NULL;
}

PyObject *CPyDef__main___values_DictStruct_gen___close(PyObject *cpy_r___mypyc_self__) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    tuple_T3OOO cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    tuple_T2OO cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = CPyStatics[17]; /* 'GeneratorExit' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (cpy_r_r2 == NULL) goto CPyL3;
    cpy_r_r3 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r4 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r5 = CPyDef__main___values_DictStruct_gen___throw(cpy_r___mypyc_self__, cpy_r_r2, cpy_r_r3, cpy_r_r4);
    if (cpy_r_r5 != NULL) goto CPyL11;
CPyL3: ;
    cpy_r_r6 = CPy_CatchError();
    cpy_r_r7 = CPyModule_builtins;
    cpy_r_r8 = CPyStatics[18]; /* 'StopIteration' */
    cpy_r_r9 = CPyObject_GetAttr(cpy_r_r7, cpy_r_r8);
    if (cpy_r_r9 == NULL) goto CPyL12;
    cpy_r_r10.f0 = cpy_r_r2;
    cpy_r_r10.f1 = cpy_r_r9;
    cpy_r_r11 = PyTuple_New(2);
    if (unlikely(cpy_r_r11 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9 = cpy_r_r10.f0;
    PyTuple_SET_ITEM(cpy_r_r11, 0, __tmp9);
    PyObject *__tmp10 = cpy_r_r10.f1;
    PyTuple_SET_ITEM(cpy_r_r11, 1, __tmp10);
    cpy_r_r12 = CPy_ExceptionMatches(cpy_r_r11);
    CPy_DECREF(cpy_r_r11);
    if (!cpy_r_r12) goto CPyL13;
    CPy_RestoreExcInfo(cpy_r_r6);
    CPy_DECREF(cpy_r_r6.f0);
    CPy_DECREF(cpy_r_r6.f1);
    CPy_DECREF(cpy_r_r6.f2);
    cpy_r_r13 = (PyObject *)&_Py_NoneStruct;
    CPy_INCREF(cpy_r_r13);
    return cpy_r_r13;
CPyL6: ;
    CPy_Reraise();
    if (!0) goto CPyL10;
    CPy_Unreachable();
CPyL8: ;
    PyErr_SetString(PyExc_RuntimeError, "generator ignored GeneratorExit");
    cpy_r_r14 = 0;
    if (!cpy_r_r14) goto CPyL10;
    CPy_Unreachable();
CPyL10: ;
    cpy_r_r15 = NULL;
    return cpy_r_r15;
CPyL11: ;
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r5);
    goto CPyL8;
CPyL12: ;
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r6.f0);
    CPy_DECREF(cpy_r_r6.f1);
    CPy_DECREF(cpy_r_r6.f2);
    goto CPyL10;
CPyL13: ;
    CPy_DECREF(cpy_r_r6.f0);
    CPy_DECREF(cpy_r_r6.f1);
    CPy_DECREF(cpy_r_r6.f2);
    goto CPyL6;
}

PyObject *CPyPy__main___values_DictStruct_gen___close(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":close", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType__main___values_DictStruct_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("dictstruct._main.values_DictStruct_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef__main___values_DictStruct_gen___close(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("dictstruct/_main.py", "close", -1, CPyStatic__main___globals);
    return NULL;
}

PyObject *CPyDef__main___values_DictStruct_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    cpy_r_r0 = CPyDef__main___values_DictStruct_env();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("dictstruct/_main.py", "values", 245, CPyStatic__main___globals);
        goto CPyL6;
    }
    CPy_INCREF_NO_IMM(cpy_r_self);
    if (((dictstruct____main___values_DictStruct_envObject *)cpy_r_r0)->_self != NULL) {
        CPy_DECREF_NO_IMM(((dictstruct____main___values_DictStruct_envObject *)cpy_r_r0)->_self);
    }
    ((dictstruct____main___values_DictStruct_envObject *)cpy_r_r0)->_self = cpy_r_self;
    cpy_r_r1 = 1;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("dictstruct/_main.py", "values", 245, CPyStatic__main___globals);
        goto CPyL7;
    }
    cpy_r_r2 = CPyDef__main___values_DictStruct_gen();
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("dictstruct/_main.py", "values", 245, CPyStatic__main___globals);
        goto CPyL7;
    }
    CPy_INCREF_NO_IMM(cpy_r_r0);
    if (((dictstruct____main___values_DictStruct_genObject *)cpy_r_r2)->___mypyc_env__ != NULL) {
        CPy_DECREF_NO_IMM(((dictstruct____main___values_DictStruct_genObject *)cpy_r_r2)->___mypyc_env__);
    }
    ((dictstruct____main___values_DictStruct_genObject *)cpy_r_r2)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r3 = 1;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("dictstruct/_main.py", "values", 245, CPyStatic__main___globals);
        goto CPyL8;
    }
    if (((dictstruct____main___values_DictStruct_envObject *)cpy_r_r0)->___mypyc_next_label__ != CPY_INT_TAG) {
        CPyTagged_DECREF(((dictstruct____main___values_DictStruct_envObject *)cpy_r_r0)->___mypyc_next_label__);
    }
    ((dictstruct____main___values_DictStruct_envObject *)cpy_r_r0)->___mypyc_next_label__ = 0;
    cpy_r_r4 = 1;
    CPy_DECREF_NO_IMM(cpy_r_r0);
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("dictstruct/_main.py", "values", 245, CPyStatic__main___globals);
        goto CPyL9;
    }
    return cpy_r_r2;
CPyL6: ;
    cpy_r_r5 = NULL;
    return cpy_r_r5;
CPyL7: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL6;
CPyL8: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r2);
    goto CPyL6;
CPyL9: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL6;
}

PyObject *CPyPy__main___values_DictStruct_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"self", 0};
    static CPyArg_Parser parser = {"O:__call__", kwlist, 0};
    PyObject *obj_self;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, PyVectorcall_NARGS(nargs), kwnames, &parser, &obj_self)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType__main___DictStruct))
        arg_self = obj_self;
    else {
        CPy_TypeError("dictstruct._main.DictStruct", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef__main___values_DictStruct_obj_____call__(arg___mypyc_self__, arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("dictstruct/_main.py", "values", 245, CPyStatic__main___globals);
    return NULL;
}

PyObject *CPyDef__main_____hash___3_DictStruct_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = cpy_r_instance == cpy_r_r0;
    if (!cpy_r_r1) goto CPyL2;
    CPy_INCREF(cpy_r___mypyc_self__);
    return cpy_r___mypyc_self__;
CPyL2: ;
    cpy_r_r2 = PyMethod_New(cpy_r___mypyc_self__, cpy_r_instance);
    if (cpy_r_r2 == NULL) goto CPyL4;
    return cpy_r_r2;
CPyL4: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy__main_____hash___3_DictStruct_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"instance", "owner", 0};
    static CPyArg_Parser parser = {"OO:__get__", kwlist, 0};
    PyObject *obj_instance;
    PyObject *obj_owner;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_instance, &obj_owner)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_instance = obj_instance;
    PyObject *arg_owner = obj_owner;
    PyObject *retval = CPyDef__main_____hash___3_DictStruct_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("dictstruct/_main.py", "__get__", -1, CPyStatic__main___globals);
    return NULL;
}

CPyTagged CPyDef__main_____hash___3_DictStruct_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject **cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_cached_hash;
    int32_t cpy_r_r23;
    char cpy_r_r24;
    char cpy_r_r25;
    CPyTagged cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    CPyPtr cpy_r_r30;
    int64_t cpy_r_r31;
    PyObject *cpy_r_r32;
    CPyTagged cpy_r_r33;
    CPyPtr cpy_r_r34;
    int64_t cpy_r_r35;
    CPyTagged cpy_r_r36;
    char cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    char cpy_r_r41;
    PyObject **cpy_r_r43;
    PyObject *cpy_r_r44;
    char cpy_r_r45;
    CPyTagged cpy_r_r46;
    PyObject *cpy_r_r47;
    CPyTagged cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    int32_t cpy_r_r54;
    char cpy_r_r55;
    tuple_T3OOO cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    char cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    int32_t cpy_r_r65;
    char cpy_r_r66;
    char cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    int32_t cpy_r_r71;
    char cpy_r_r72;
    char cpy_r_r73;
    PyObject *cpy_r_r74;
    CPyTagged cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    int32_t cpy_r_r81;
    char cpy_r_r82;
    char cpy_r_r83;
    tuple_T3OOO cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    char cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_r95;
    int32_t cpy_r_r96;
    char cpy_r_r97;
    PyObject *cpy_r_r98;
    PyObject *cpy_r_r99;
    int32_t cpy_r_r100;
    char cpy_r_r101;
    char cpy_r_r102;
    PyObject *cpy_r_r103;
    PyObject *cpy_r_r104;
    PyObject *cpy_r_r105;
    PyObject *cpy_r_r106;
    PyObject *cpy_r_r107;
    CPyTagged cpy_r_r108;
    CPyTagged cpy_r_r109;
    cpy_r_r0 = CPyStatics[19]; /* '__struct_config__' */
    cpy_r_r1 = CPyObject_GetAttr(cpy_r_self, cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("dictstruct/_main.py", "__hash__", 279, CPyStatic__main___globals);
        goto CPyL79;
    }
    cpy_r_r2 = CPyStatics[20]; /* 'frozen' */
    cpy_r_r3 = CPyObject_GetAttr(cpy_r_r1, cpy_r_r2);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("dictstruct/_main.py", "__hash__", 279, CPyStatic__main___globals);
        goto CPyL79;
    }
    if (unlikely(!PyBool_Check(cpy_r_r3))) {
        CPy_TypeError("bool", cpy_r_r3); cpy_r_r4 = 2;
    } else
        cpy_r_r4 = cpy_r_r3 == Py_True;
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == 2)) {
        CPy_AddTraceback("dictstruct/_main.py", "__hash__", 279, CPyStatic__main___globals);
        goto CPyL79;
    }
    if (cpy_r_r4) goto CPyL11;
    cpy_r_r5 = CPyStatics[21]; /* "unhashable type: '" */
    cpy_r_r6 = PyObject_Type(cpy_r_self);
    cpy_r_r7 = CPyStatics[13]; /* '__name__' */
    cpy_r_r8 = CPyObject_GetAttr(cpy_r_r6, cpy_r_r7);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("dictstruct/_main.py", "__hash__", 280, CPyStatic__main___globals);
        goto CPyL79;
    }
    if (likely(PyUnicode_Check(cpy_r_r8)))
        cpy_r_r9 = cpy_r_r8;
    else {
        CPy_TypeErrorTraceback("dictstruct/_main.py", "__hash__", 280, CPyStatic__main___globals, "str", cpy_r_r8);
        goto CPyL79;
    }
    cpy_r_r10 = CPyStatics[12]; /* "'" */
    cpy_r_r11 = CPyStr_Build(3, cpy_r_r5, cpy_r_r9, cpy_r_r10);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("dictstruct/_main.py", "__hash__", 280, CPyStatic__main___globals);
        goto CPyL79;
    }
    cpy_r_r12 = CPyModule_builtins;
    cpy_r_r13 = CPyStatics[16]; /* 'TypeError' */
    cpy_r_r14 = CPyObject_GetAttr(cpy_r_r12, cpy_r_r13);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("dictstruct/_main.py", "__hash__", 280, CPyStatic__main___globals);
        goto CPyL80;
    }
    PyObject *cpy_r_r15[1] = {cpy_r_r11};
    cpy_r_r16 = (PyObject **)&cpy_r_r15;
    cpy_r_r17 = PyObject_Vectorcall(cpy_r_r14, cpy_r_r16, 1, 0);
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("dictstruct/_main.py", "__hash__", 280, CPyStatic__main___globals);
        goto CPyL80;
    }
    CPy_DECREF(cpy_r_r11);
    CPy_Raise(cpy_r_r17);
    CPy_DECREF(cpy_r_r17);
    if (unlikely(!0)) {
        CPy_AddTraceback("dictstruct/_main.py", "__hash__", 280, CPyStatic__main___globals);
        goto CPyL79;
    }
    CPy_Unreachable();
CPyL11: ;
    cpy_r_r18 = CPyStatics[22]; /* '__dict__' */
    cpy_r_r19 = CPyObject_GetAttr(cpy_r_self, cpy_r_r18);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("dictstruct/_main.py", "__hash__", 281, CPyStatic__main___globals);
        goto CPyL79;
    }
    if (likely(PyDict_Check(cpy_r_r19)))
        cpy_r_r20 = cpy_r_r19;
    else {
        CPy_TypeErrorTraceback("dictstruct/_main.py", "__hash__", 281, CPyStatic__main___globals, "dict", cpy_r_r19);
        goto CPyL79;
    }
    cpy_r_r21 = CPyStatics[23]; /* '__hash__' */
    cpy_r_r22 = CPyDict_GetWithNone(cpy_r_r20, cpy_r_r21);
    CPy_DECREF(cpy_r_r20);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("dictstruct/_main.py", "__hash__", 281, CPyStatic__main___globals);
        goto CPyL79;
    }
    CPy_INCREF(cpy_r_r22);
    cpy_r_cached_hash = cpy_r_r22;
    cpy_r_r23 = PyObject_IsTrue(cpy_r_r22);
    CPy_DECREF(cpy_r_r22);
    cpy_r_r24 = cpy_r_r23 >= 0;
    if (unlikely(!cpy_r_r24)) {
        CPy_AddTraceback("dictstruct/_main.py", "__hash__", 281, CPyStatic__main___globals);
        goto CPyL81;
    }
    cpy_r_r25 = cpy_r_r23;
    if (!cpy_r_r25) goto CPyL82;
    if (likely(PyLong_Check(cpy_r_cached_hash)))
        cpy_r_r26 = CPyTagged_FromObject(cpy_r_cached_hash);
    else {
        CPy_TypeError("int", cpy_r_cached_hash); cpy_r_r26 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_cached_hash);
    if (unlikely(cpy_r_r26 == CPY_INT_TAG)) {
        CPy_AddTraceback("dictstruct/_main.py", "__hash__", 282, CPyStatic__main___globals);
        goto CPyL79;
    }
    return cpy_r_r26;
CPyL18: ;
    cpy_r_r27 = CPyStatics[9]; /* '__struct_fields__' */
    cpy_r_r28 = CPyObject_GetAttr(cpy_r_self, cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("dictstruct/_main.py", "__hash__", 284, CPyStatic__main___globals);
        goto CPyL79;
    }
    if (likely(PyTuple_Check(cpy_r_r28)))
        cpy_r_r29 = cpy_r_r28;
    else {
        CPy_TypeErrorTraceback("dictstruct/_main.py", "__hash__", 284, CPyStatic__main___globals, "tuple", cpy_r_r28);
        goto CPyL79;
    }
    cpy_r_r30 = (CPyPtr)&((PyVarObject *)cpy_r_r29)->ob_size;
    cpy_r_r31 = *(int64_t *)cpy_r_r30;
    cpy_r_r32 = PyList_New(cpy_r_r31);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("dictstruct/_main.py", "__hash__", 283, CPyStatic__main___globals);
        goto CPyL83;
    }
    cpy_r_r33 = 0;
CPyL22: ;
    cpy_r_r34 = (CPyPtr)&((PyVarObject *)cpy_r_r29)->ob_size;
    cpy_r_r35 = *(int64_t *)cpy_r_r34;
    cpy_r_r36 = cpy_r_r35 << 1;
    cpy_r_r37 = (Py_ssize_t)cpy_r_r33 < (Py_ssize_t)cpy_r_r36;
    if (!cpy_r_r37) goto CPyL84;
    cpy_r_r38 = CPySequenceTuple_GetItem(cpy_r_r29, cpy_r_r33);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("dictstruct/_main.py", "__hash__", 283, CPyStatic__main___globals);
        goto CPyL85;
    }
    if (likely(PyUnicode_Check(cpy_r_r38)))
        cpy_r_r39 = cpy_r_r38;
    else {
        CPy_TypeErrorTraceback("dictstruct/_main.py", "__hash__", 283, CPyStatic__main___globals, "str", cpy_r_r38);
        goto CPyL85;
    }
    cpy_r_r40 = CPyStatic__main____getattribute;
    if (unlikely(cpy_r_r40 == NULL)) {
        goto CPyL86;
    } else
        goto CPyL28;
CPyL26: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"_getattribute\" was not set");
    cpy_r_r41 = 0;
    if (unlikely(!cpy_r_r41)) {
        CPy_AddTraceback("dictstruct/_main.py", "__hash__", 284, CPyStatic__main___globals);
        goto CPyL79;
    }
    CPy_Unreachable();
CPyL28: ;
    PyObject *cpy_r_r42[2] = {cpy_r_self, cpy_r_r39};
    cpy_r_r43 = (PyObject **)&cpy_r_r42;
    cpy_r_r44 = PyObject_Vectorcall(cpy_r_r40, cpy_r_r43, 2, 0);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("dictstruct/_main.py", "__hash__", 284, CPyStatic__main___globals);
        goto CPyL87;
    }
    CPy_DECREF(cpy_r_r39);
    cpy_r_r45 = CPyList_SetItemUnsafe(cpy_r_r32, cpy_r_r33, cpy_r_r44);
    if (unlikely(!cpy_r_r45)) {
        CPy_AddTraceback("dictstruct/_main.py", "__hash__", 283, CPyStatic__main___globals);
        goto CPyL85;
    }
    cpy_r_r46 = cpy_r_r33 + 2;
    cpy_r_r33 = cpy_r_r46;
    goto CPyL22;
CPyL31: ;
    cpy_r_r47 = PyObject_GetIter(cpy_r_r32);
    CPy_DECREF_NO_IMM(cpy_r_r32);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("dictstruct/_main.py", "__hash__", 283, CPyStatic__main___globals);
        goto CPyL79;
    }
    cpy_r_r48 = CPyObject_Hash(cpy_r_r47);
    if (unlikely(cpy_r_r48 == CPY_INT_TAG)) {
        CPy_AddTraceback("dictstruct/_main.py", "__hash__", 289, CPyStatic__main___globals);
        goto CPyL37;
    }
    cpy_r_r49 = CPyStatics[22]; /* '__dict__' */
    cpy_r_r50 = CPyObject_GetAttr(cpy_r_self, cpy_r_r49);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("dictstruct/_main.py", "__hash__", 289, CPyStatic__main___globals);
        goto CPyL88;
    }
    if (likely(PyDict_Check(cpy_r_r50)))
        cpy_r_r51 = cpy_r_r50;
    else {
        CPy_TypeErrorTraceback("dictstruct/_main.py", "__hash__", 289, CPyStatic__main___globals, "dict", cpy_r_r50);
        goto CPyL88;
    }
    cpy_r_r52 = CPyStatics[23]; /* '__hash__' */
    cpy_r_r53 = CPyTagged_StealAsObject(cpy_r_r48);
    cpy_r_r54 = CPyDict_SetItem(cpy_r_r51, cpy_r_r52, cpy_r_r53);
    CPy_DECREF(cpy_r_r51);
    CPy_DECREF(cpy_r_r53);
    cpy_r_r55 = cpy_r_r54 >= 0;
    if (unlikely(!cpy_r_r55)) {
        CPy_AddTraceback("dictstruct/_main.py", "__hash__", 289, CPyStatic__main___globals);
    } else
        goto CPyL89;
CPyL37: ;
    cpy_r_r56 = CPy_CatchError();
    cpy_r_r57 = CPyModule_builtins;
    cpy_r_r58 = CPyStatics[16]; /* 'TypeError' */
    cpy_r_r59 = CPyObject_GetAttr(cpy_r_r57, cpy_r_r58);
    if (unlikely(cpy_r_r59 == NULL)) {
        CPy_AddTraceback("dictstruct/_main.py", "__hash__", 290, CPyStatic__main___globals);
        goto CPyL90;
    }
    cpy_r_r60 = CPy_ExceptionMatches(cpy_r_r59);
    CPy_DecRef(cpy_r_r59);
    if (!cpy_r_r60) goto CPyL91;
    cpy_r_r61 = PyList_New(0);
    if (unlikely(cpy_r_r61 == NULL)) {
        CPy_AddTraceback("dictstruct/_main.py", "__hash__", 291, CPyStatic__main___globals);
        goto CPyL90;
    }
    cpy_r_r62 = PyObject_GetIter(cpy_r_r47);
    CPy_DecRef(cpy_r_r47);
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AddTraceback("dictstruct/_main.py", "__hash__", 291, CPyStatic__main___globals);
        goto CPyL92;
    }
CPyL41: ;
    cpy_r_r63 = PyIter_Next(cpy_r_r62);
    if (cpy_r_r63 == NULL) goto CPyL93;
    cpy_r_r64 = (PyObject *)&PyList_Type;
    cpy_r_r65 = PyObject_IsInstance(cpy_r_r63, cpy_r_r64);
    cpy_r_r66 = cpy_r_r65 >= 0;
    if (unlikely(!cpy_r_r66)) {
        CPy_AddTraceback("dictstruct/_main.py", "__hash__", 292, CPyStatic__main___globals);
        goto CPyL94;
    }
    cpy_r_r67 = cpy_r_r65;
    if (!cpy_r_r67) goto CPyL47;
    if (likely(PyList_Check(cpy_r_r63)))
        cpy_r_r68 = cpy_r_r63;
    else {
        CPy_TypeErrorTraceback("dictstruct/_main.py", "__hash__", 292, CPyStatic__main___globals, "list", cpy_r_r63);
        goto CPyL95;
    }
    cpy_r_r69 = PyList_AsTuple(cpy_r_r68);
    CPy_DecRef(cpy_r_r68);
    if (unlikely(cpy_r_r69 == NULL)) {
        CPy_AddTraceback("dictstruct/_main.py", "__hash__", 292, CPyStatic__main___globals);
        goto CPyL95;
    }
    cpy_r_r70 = cpy_r_r69;
    goto CPyL48;
CPyL47: ;
    cpy_r_r70 = cpy_r_r63;
CPyL48: ;
    cpy_r_r71 = PyList_Append(cpy_r_r61, cpy_r_r70);
    CPy_DecRef(cpy_r_r70);
    cpy_r_r72 = cpy_r_r71 >= 0;
    if (unlikely(!cpy_r_r72)) {
        CPy_AddTraceback("dictstruct/_main.py", "__hash__", 291, CPyStatic__main___globals);
        goto CPyL95;
    } else
        goto CPyL41;
CPyL49: ;
    cpy_r_r73 = CPy_NoErrOccurred();
    if (unlikely(!cpy_r_r73)) {
        CPy_AddTraceback("dictstruct/_main.py", "__hash__", 291, CPyStatic__main___globals);
        goto CPyL92;
    }
    cpy_r_r74 = PyObject_GetIter(cpy_r_r61);
    CPy_DecRef(cpy_r_r61);
    if (unlikely(cpy_r_r74 == NULL)) {
        CPy_AddTraceback("dictstruct/_main.py", "__hash__", 291, CPyStatic__main___globals);
        goto CPyL58;
    }
    cpy_r_r75 = CPyObject_Hash(cpy_r_r74);
    CPy_DecRef(cpy_r_r74);
    if (unlikely(cpy_r_r75 == CPY_INT_TAG)) {
        CPy_AddTraceback("dictstruct/_main.py", "__hash__", 291, CPyStatic__main___globals);
        goto CPyL58;
    }
    cpy_r_r76 = CPyStatics[22]; /* '__dict__' */
    cpy_r_r77 = CPyObject_GetAttr(cpy_r_self, cpy_r_r76);
    if (unlikely(cpy_r_r77 == NULL)) {
        CPy_AddTraceback("dictstruct/_main.py", "__hash__", 291, CPyStatic__main___globals);
        goto CPyL96;
    }
    if (likely(PyDict_Check(cpy_r_r77)))
        cpy_r_r78 = cpy_r_r77;
    else {
        CPy_TypeErrorTraceback("dictstruct/_main.py", "__hash__", 291, CPyStatic__main___globals, "dict", cpy_r_r77);
        goto CPyL96;
    }
    cpy_r_r79 = CPyStatics[23]; /* '__hash__' */
    cpy_r_r80 = CPyTagged_StealAsObject(cpy_r_r75);
    cpy_r_r81 = CPyDict_SetItem(cpy_r_r78, cpy_r_r79, cpy_r_r80);
    CPy_DecRef(cpy_r_r78);
    CPy_DecRef(cpy_r_r80);
    cpy_r_r82 = cpy_r_r81 >= 0;
    if (unlikely(!cpy_r_r82)) {
        CPy_AddTraceback("dictstruct/_main.py", "__hash__", 291, CPyStatic__main___globals);
        goto CPyL58;
    } else
        goto CPyL57;
CPyL55: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL58;
    } else
        goto CPyL97;
CPyL56: ;
    CPy_Unreachable();
CPyL57: ;
    CPy_RestoreExcInfo(cpy_r_r56);
    CPy_DecRef(cpy_r_r56.f0);
    CPy_DecRef(cpy_r_r56.f1);
    CPy_DecRef(cpy_r_r56.f2);
    goto CPyL74;
CPyL58: ;
    CPy_RestoreExcInfo(cpy_r_r56);
    CPy_DecRef(cpy_r_r56.f0);
    CPy_DecRef(cpy_r_r56.f1);
    CPy_DecRef(cpy_r_r56.f2);
    cpy_r_r83 = CPy_KeepPropagating();
    if (!cpy_r_r83) goto CPyL60;
    CPy_Unreachable();
CPyL60: ;
    cpy_r_r84 = CPy_CatchError();
    cpy_r_r85 = CPyModule_builtins;
    cpy_r_r86 = CPyStatics[24]; /* 'Exception' */
    cpy_r_r87 = CPyObject_GetAttr(cpy_r_r85, cpy_r_r86);
    if (unlikely(cpy_r_r87 == NULL)) {
        CPy_AddTraceback("dictstruct/_main.py", "__hash__", 294, CPyStatic__main___globals);
        goto CPyL72;
    }
    cpy_r_r88 = CPy_ExceptionMatches(cpy_r_r87);
    CPy_DecRef(cpy_r_r87);
    if (!cpy_r_r88) goto CPyL69;
    cpy_r_r89 = CPy_GetExcValue();
    cpy_r_r90 = CPyStatics[15]; /* 'args' */
    cpy_r_r91 = CPyObject_GetAttr(cpy_r_r89, cpy_r_r90);
    if (unlikely(cpy_r_r91 == NULL)) {
        CPy_AddTraceback("dictstruct/_main.py", "__hash__", 295, CPyStatic__main___globals);
        goto CPyL98;
    }
    if (likely(PyTuple_Check(cpy_r_r91)))
        cpy_r_r92 = cpy_r_r91;
    else {
        CPy_TypeErrorTraceback("dictstruct/_main.py", "__hash__", 295, CPyStatic__main___globals, "tuple", cpy_r_r91);
        goto CPyL98;
    }
    cpy_r_r93 = CPyStatics[25]; /* 'recursed in hash fn' */
    cpy_r_r94 = PyList_New(0);
    if (unlikely(cpy_r_r94 == NULL)) {
        CPy_AddTraceback("dictstruct/_main.py", "__hash__", 295, CPyStatic__main___globals);
        goto CPyL99;
    }
    cpy_r_r95 = CPyList_Extend(cpy_r_r94, cpy_r_r92);
    CPy_DecRef(cpy_r_r92);
    if (unlikely(cpy_r_r95 == NULL)) {
        CPy_AddTraceback("dictstruct/_main.py", "__hash__", 295, CPyStatic__main___globals);
        goto CPyL100;
    } else
        goto CPyL101;
CPyL66: ;
    cpy_r_r96 = PyList_Append(cpy_r_r94, cpy_r_r93);
    cpy_r_r97 = cpy_r_r96 >= 0;
    if (unlikely(!cpy_r_r97)) {
        CPy_AddTraceback("dictstruct/_main.py", "__hash__", 295, CPyStatic__main___globals);
        goto CPyL100;
    }
    cpy_r_r98 = PyList_AsTuple(cpy_r_r94);
    CPy_DecRef(cpy_r_r94);
    if (unlikely(cpy_r_r98 == NULL)) {
        CPy_AddTraceback("dictstruct/_main.py", "__hash__", 295, CPyStatic__main___globals);
        goto CPyL98;
    }
    cpy_r_r99 = CPyStatics[15]; /* 'args' */
    cpy_r_r100 = PyObject_SetAttr(cpy_r_r89, cpy_r_r99, cpy_r_r98);
    CPy_DecRef(cpy_r_r89);
    CPy_DecRef(cpy_r_r98);
    cpy_r_r101 = cpy_r_r100 >= 0;
    if (unlikely(!cpy_r_r101)) {
        CPy_AddTraceback("dictstruct/_main.py", "__hash__", 295, CPyStatic__main___globals);
        goto CPyL72;
    } else
        goto CPyL71;
CPyL69: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL72;
    } else
        goto CPyL102;
CPyL70: ;
    CPy_Unreachable();
CPyL71: ;
    CPy_RestoreExcInfo(cpy_r_r84);
    CPy_DecRef(cpy_r_r84.f0);
    CPy_DecRef(cpy_r_r84.f1);
    CPy_DecRef(cpy_r_r84.f2);
    goto CPyL74;
CPyL72: ;
    CPy_RestoreExcInfo(cpy_r_r84);
    CPy_DecRef(cpy_r_r84.f0);
    CPy_DecRef(cpy_r_r84.f1);
    CPy_DecRef(cpy_r_r84.f2);
    cpy_r_r102 = CPy_KeepPropagating();
    if (!cpy_r_r102) goto CPyL79;
    CPy_Unreachable();
CPyL74: ;
    cpy_r_r103 = CPyStatics[22]; /* '__dict__' */
    cpy_r_r104 = CPyObject_GetAttr(cpy_r_self, cpy_r_r103);
    if (unlikely(cpy_r_r104 == NULL)) {
        CPy_AddTraceback("dictstruct/_main.py", "__hash__", 296, CPyStatic__main___globals);
        goto CPyL79;
    }
    if (likely(PyDict_Check(cpy_r_r104)))
        cpy_r_r105 = cpy_r_r104;
    else {
        CPy_TypeErrorTraceback("dictstruct/_main.py", "__hash__", 296, CPyStatic__main___globals, "dict", cpy_r_r104);
        goto CPyL79;
    }
    cpy_r_r106 = CPyStatics[23]; /* '__hash__' */
    cpy_r_r107 = CPyDict_GetItem(cpy_r_r105, cpy_r_r106);
    CPy_DECREF(cpy_r_r105);
    if (unlikely(cpy_r_r107 == NULL)) {
        CPy_AddTraceback("dictstruct/_main.py", "__hash__", 296, CPyStatic__main___globals);
        goto CPyL79;
    }
    if (likely(PyLong_Check(cpy_r_r107)))
        cpy_r_r108 = CPyTagged_FromObject(cpy_r_r107);
    else {
        CPy_TypeError("int", cpy_r_r107); cpy_r_r108 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r107);
    if (unlikely(cpy_r_r108 == CPY_INT_TAG)) {
        CPy_AddTraceback("dictstruct/_main.py", "__hash__", 296, CPyStatic__main___globals);
        goto CPyL79;
    }
    return cpy_r_r108;
CPyL79: ;
    cpy_r_r109 = CPY_INT_TAG;
    return cpy_r_r109;
CPyL80: ;
    CPy_DecRef(cpy_r_r11);
    goto CPyL79;
CPyL81: ;
    CPy_DecRef(cpy_r_cached_hash);
    goto CPyL79;
CPyL82: ;
    CPy_DECREF(cpy_r_cached_hash);
    goto CPyL18;
CPyL83: ;
    CPy_DecRef(cpy_r_r29);
    goto CPyL79;
CPyL84: ;
    CPy_DECREF(cpy_r_r29);
    goto CPyL31;
CPyL85: ;
    CPy_DecRef(cpy_r_r29);
    CPy_DecRef(cpy_r_r32);
    goto CPyL79;
CPyL86: ;
    CPy_DecRef(cpy_r_r29);
    CPy_DecRef(cpy_r_r32);
    CPy_DecRef(cpy_r_r39);
    goto CPyL26;
CPyL87: ;
    CPy_DecRef(cpy_r_r29);
    CPy_DecRef(cpy_r_r32);
    CPy_DecRef(cpy_r_r39);
    goto CPyL79;
CPyL88: ;
    CPyTagged_DecRef(cpy_r_r48);
    goto CPyL37;
CPyL89: ;
    CPy_DECREF(cpy_r_r47);
    goto CPyL74;
CPyL90: ;
    CPy_DecRef(cpy_r_r47);
    goto CPyL58;
CPyL91: ;
    CPy_DecRef(cpy_r_r47);
    goto CPyL55;
CPyL92: ;
    CPy_DecRef(cpy_r_r61);
    goto CPyL58;
CPyL93: ;
    CPy_DecRef(cpy_r_r62);
    goto CPyL49;
CPyL94: ;
    CPy_DecRef(cpy_r_r61);
    CPy_DecRef(cpy_r_r62);
    CPy_DecRef(cpy_r_r63);
    goto CPyL58;
CPyL95: ;
    CPy_DecRef(cpy_r_r61);
    CPy_DecRef(cpy_r_r62);
    goto CPyL58;
CPyL96: ;
    CPyTagged_DecRef(cpy_r_r75);
    goto CPyL58;
CPyL97: ;
    CPy_DecRef(cpy_r_r56.f0);
    CPy_DecRef(cpy_r_r56.f1);
    CPy_DecRef(cpy_r_r56.f2);
    goto CPyL56;
CPyL98: ;
    CPy_DecRef(cpy_r_r89);
    goto CPyL72;
CPyL99: ;
    CPy_DecRef(cpy_r_r89);
    CPy_DecRef(cpy_r_r92);
    goto CPyL72;
CPyL100: ;
    CPy_DecRef(cpy_r_r89);
    CPy_DecRef(cpy_r_r94);
    goto CPyL72;
CPyL101: ;
    CPy_DecRef(cpy_r_r95);
    goto CPyL66;
CPyL102: ;
    CPy_DecRef(cpy_r_r84.f0);
    CPy_DecRef(cpy_r_r84.f1);
    CPy_DecRef(cpy_r_r84.f2);
    goto CPyL70;
}

PyObject *CPyPy__main_____hash___3_DictStruct_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"self", 0};
    static CPyArg_Parser parser = {"O:__call__", kwlist, 0};
    PyObject *obj_self;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, PyVectorcall_NARGS(nargs), kwnames, &parser, &obj_self)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType__main___DictStruct))
        arg_self = obj_self;
    else {
        CPy_TypeError("dictstruct._main.DictStruct", obj_self); 
        goto fail;
    }
    CPyTagged retval = CPyDef__main_____hash___3_DictStruct_obj_____call__(arg___mypyc_self__, arg_self);
    if (retval == CPY_INT_TAG) {
        return NULL;
    }
    PyObject *retbox = CPyTagged_StealAsObject(retval);
    return retbox;
fail: ;
    CPy_AddTraceback("dictstruct/_main.py", "__hash__", 262, CPyStatic__main___globals);
    return NULL;
}

char CPyDef__main_____top_level__(void) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject **cpy_r_r9;
    void *cpy_r_r11;
    void *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    int32_t cpy_r_r28;
    char cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    int32_t cpy_r_r37;
    char cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    char cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject **cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    int32_t cpy_r_r59;
    char cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    int32_t cpy_r_r63;
    char cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    int32_t cpy_r_r67;
    char cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    int32_t cpy_r_r71;
    char cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    int32_t cpy_r_r75;
    char cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    int32_t cpy_r_r79;
    char cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    int32_t cpy_r_r83;
    char cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    int32_t cpy_r_r87;
    char cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    int32_t cpy_r_r91;
    char cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    int32_t cpy_r_r95;
    char cpy_r_r96;
    PyObject *cpy_r_r97;
    PyObject *cpy_r_r98;
    int32_t cpy_r_r99;
    char cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject *cpy_r_r102;
    int32_t cpy_r_r103;
    char cpy_r_r104;
    PyObject *cpy_r_r105;
    PyObject *cpy_r_r106;
    int32_t cpy_r_r107;
    char cpy_r_r108;
    PyObject *cpy_r_r109;
    PyObject *cpy_r_r110;
    int32_t cpy_r_r111;
    char cpy_r_r112;
    PyObject *cpy_r_r113;
    PyObject *cpy_r_r114;
    int32_t cpy_r_r115;
    char cpy_r_r116;
    PyObject **cpy_r_r118;
    PyObject *cpy_r_r119;
    PyObject *cpy_r_r120;
    PyObject *cpy_r_r121;
    PyObject *cpy_r_r122;
    PyObject *cpy_r_r123;
    PyObject **cpy_r_r125;
    PyObject *cpy_r_r126;
    PyObject *cpy_r_r127;
    PyObject **cpy_r_r129;
    PyObject *cpy_r_r130;
    PyObject *cpy_r_r131;
    PyObject *cpy_r_r132;
    int32_t cpy_r_r133;
    char cpy_r_r134;
    PyObject *cpy_r_r135;
    char cpy_r_r136;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("dictstruct/_main.py", "<module>", -1, CPyStatic__main___globals);
        goto CPyL55;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[60]; /* ('Any', 'Final', 'Iterator', 'Literal', 'Tuple') */
    cpy_r_r6 = CPyStatics[31]; /* 'typing' */
    cpy_r_r7 = CPyStatic__main___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("dictstruct/_main.py", "<module>", 1, CPyStatic__main___globals);
        goto CPyL55;
    }
    CPyModule_typing = cpy_r_r8;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = (PyObject **)&CPyModule_msgspec;
    PyObject **cpy_r_r10[1] = {cpy_r_r9};
    cpy_r_r11 = (void *)&cpy_r_r10;
    int64_t cpy_r_r12[1] = {3};
    cpy_r_r13 = (void *)&cpy_r_r12;
    cpy_r_r14 = CPyStatics[62]; /* (('msgspec', 'msgspec', 'msgspec'),) */
    cpy_r_r15 = CPyStatic__main___globals;
    cpy_r_r16 = CPyStatics[33]; /* 'dictstruct/_main.py' */
    cpy_r_r17 = CPyStatics[34]; /* '<module>' */
    cpy_r_r18 = CPyImport_ImportMany(cpy_r_r14, cpy_r_r11, cpy_r_r15, cpy_r_r16, cpy_r_r17, cpy_r_r13);
    if (!cpy_r_r18) goto CPyL55;
    cpy_r_r19 = CPyStatics[63]; /* ('mypyc_attr',) */
    cpy_r_r20 = CPyStatics[36]; /* 'mypy_extensions' */
    cpy_r_r21 = CPyStatic__main___globals;
    cpy_r_r22 = CPyImport_ImportFromMany(cpy_r_r20, cpy_r_r19, cpy_r_r19, cpy_r_r21);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("dictstruct/_main.py", "<module>", 4, CPyStatic__main___globals);
        goto CPyL55;
    }
    CPyModule_mypy_extensions = cpy_r_r22;
    CPy_INCREF(CPyModule_mypy_extensions);
    CPy_DECREF(cpy_r_r22);
    cpy_r_r23 = CPyModule_msgspec;
    cpy_r_r24 = CPyStatics[37]; /* 'UNSET' */
    cpy_r_r25 = CPyObject_GetAttr(cpy_r_r23, cpy_r_r24);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("dictstruct/_main.py", "<module>", 7, CPyStatic__main___globals);
        goto CPyL55;
    }
    CPyStatic__main___UNSET = cpy_r_r25;
    CPy_INCREF(CPyStatic__main___UNSET);
    cpy_r_r26 = CPyStatic__main___globals;
    cpy_r_r27 = CPyStatics[37]; /* 'UNSET' */
    cpy_r_r28 = CPyDict_SetItem(cpy_r_r26, cpy_r_r27, cpy_r_r25);
    CPy_DECREF(cpy_r_r25);
    cpy_r_r29 = cpy_r_r28 >= 0;
    if (unlikely(!cpy_r_r29)) {
        CPy_AddTraceback("dictstruct/_main.py", "<module>", 7, CPyStatic__main___globals);
        goto CPyL55;
    }
    cpy_r_r30 = CPyModule_builtins;
    cpy_r_r31 = CPyStatics[38]; /* 'object' */
    cpy_r_r32 = CPyObject_GetAttr(cpy_r_r30, cpy_r_r31);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("dictstruct/_main.py", "<module>", 9, CPyStatic__main___globals);
        goto CPyL55;
    }
    cpy_r_r33 = CPyStatics[39]; /* '__getattribute__' */
    cpy_r_r34 = CPyObject_GetAttr(cpy_r_r32, cpy_r_r33);
    CPy_DECREF(cpy_r_r32);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("dictstruct/_main.py", "<module>", 9, CPyStatic__main___globals);
        goto CPyL55;
    }
    CPyStatic__main____getattribute = cpy_r_r34;
    CPy_INCREF(CPyStatic__main____getattribute);
    cpy_r_r35 = CPyStatic__main___globals;
    cpy_r_r36 = CPyStatics[40]; /* '_getattribute' */
    cpy_r_r37 = CPyDict_SetItem(cpy_r_r35, cpy_r_r36, cpy_r_r34);
    CPy_DECREF(cpy_r_r34);
    cpy_r_r38 = cpy_r_r37 >= 0;
    if (unlikely(!cpy_r_r38)) {
        CPy_AddTraceback("dictstruct/_main.py", "<module>", 9, CPyStatic__main___globals);
        goto CPyL55;
    }
    cpy_r_r39 = CPyModule_msgspec;
    cpy_r_r40 = CPyStatics[41]; /* 'Struct' */
    cpy_r_r41 = CPyObject_GetAttr(cpy_r_r39, cpy_r_r40);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("dictstruct/_main.py", "<module>", 13, CPyStatic__main___globals);
        goto CPyL55;
    }
    cpy_r_r42 = PyTuple_Pack(1, cpy_r_r41);
    CPy_DECREF(cpy_r_r41);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("dictstruct/_main.py", "<module>", 13, CPyStatic__main___globals);
        goto CPyL55;
    }
    cpy_r_r43 = (PyObject *)&PyType_Type;
    cpy_r_r44 = CPy_CalculateMetaclass(cpy_r_r43, cpy_r_r42);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("dictstruct/_main.py", "<module>", 13, CPyStatic__main___globals);
        goto CPyL56;
    }
    cpy_r_r45 = CPyStatics[42]; /* '__prepare__' */
    cpy_r_r46 = PyObject_HasAttr(cpy_r_r44, cpy_r_r45);
    if (!cpy_r_r46) goto CPyL19;
    cpy_r_r47 = CPyStatics[6]; /* 'DictStruct' */
    cpy_r_r48 = CPyStatics[42]; /* '__prepare__' */
    cpy_r_r49 = CPyObject_GetAttr(cpy_r_r44, cpy_r_r48);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("dictstruct/_main.py", "<module>", 13, CPyStatic__main___globals);
        goto CPyL56;
    }
    PyObject *cpy_r_r50[2] = {cpy_r_r47, cpy_r_r42};
    cpy_r_r51 = (PyObject **)&cpy_r_r50;
    cpy_r_r52 = PyObject_Vectorcall(cpy_r_r49, cpy_r_r51, 2, 0);
    CPy_DECREF(cpy_r_r49);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("dictstruct/_main.py", "<module>", 13, CPyStatic__main___globals);
        goto CPyL56;
    }
    if (likely(PyDict_Check(cpy_r_r52)))
        cpy_r_r53 = cpy_r_r52;
    else {
        CPy_TypeErrorTraceback("dictstruct/_main.py", "<module>", 13, CPyStatic__main___globals, "dict", cpy_r_r52);
        goto CPyL56;
    }
    cpy_r_r54 = cpy_r_r53;
    goto CPyL21;
CPyL19: ;
    cpy_r_r55 = PyDict_New();
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AddTraceback("dictstruct/_main.py", "<module>", 13, CPyStatic__main___globals);
        goto CPyL56;
    }
    cpy_r_r54 = cpy_r_r55;
CPyL21: ;
    cpy_r_r56 = PyDict_New();
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AddTraceback("dictstruct/_main.py", "<module>", 13, CPyStatic__main___globals);
        goto CPyL57;
    }
    cpy_r_r57 = CPyDef__main_____bool___3_DictStruct_obj();
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AddTraceback("dictstruct/_main.py", "<module>", 44, CPyStatic__main___globals);
        goto CPyL58;
    }
    cpy_r_r58 = CPyStatics[43]; /* '__bool__' */
    cpy_r_r59 = CPyDict_SetItem(cpy_r_r54, cpy_r_r58, cpy_r_r57);
    CPy_DECREF_NO_IMM(cpy_r_r57);
    cpy_r_r60 = cpy_r_r59 >= 0;
    if (unlikely(!cpy_r_r60)) {
        CPy_AddTraceback("dictstruct/_main.py", "<module>", 44, CPyStatic__main___globals);
        goto CPyL58;
    }
    cpy_r_r61 = CPyDef__main_____contains___3_DictStruct_obj();
    if (unlikely(cpy_r_r61 == NULL)) {
        CPy_AddTraceback("dictstruct/_main.py", "<module>", 55, CPyStatic__main___globals);
        goto CPyL58;
    }
    cpy_r_r62 = CPyStatics[44]; /* '__contains__' */
    cpy_r_r63 = CPyDict_SetItem(cpy_r_r54, cpy_r_r62, cpy_r_r61);
    CPy_DECREF_NO_IMM(cpy_r_r61);
    cpy_r_r64 = cpy_r_r63 >= 0;
    if (unlikely(!cpy_r_r64)) {
        CPy_AddTraceback("dictstruct/_main.py", "<module>", 55, CPyStatic__main___globals);
        goto CPyL58;
    }
    cpy_r_r65 = CPyDef__main___get_DictStruct_obj();
    if (unlikely(cpy_r_r65 == NULL)) {
        CPy_AddTraceback("dictstruct/_main.py", "<module>", 76, CPyStatic__main___globals);
        goto CPyL58;
    }
    cpy_r_r66 = CPyStatics[45]; /* 'get' */
    cpy_r_r67 = CPyDict_SetItem(cpy_r_r54, cpy_r_r66, cpy_r_r65);
    CPy_DECREF_NO_IMM(cpy_r_r65);
    cpy_r_r68 = cpy_r_r67 >= 0;
    if (unlikely(!cpy_r_r68)) {
        CPy_AddTraceback("dictstruct/_main.py", "<module>", 76, CPyStatic__main___globals);
        goto CPyL58;
    }
    cpy_r_r69 = CPyDef__main_____getitem___3_DictStruct_obj();
    if (unlikely(cpy_r_r69 == NULL)) {
        CPy_AddTraceback("dictstruct/_main.py", "<module>", 95, CPyStatic__main___globals);
        goto CPyL58;
    }
    cpy_r_r70 = CPyStatics[46]; /* '__getitem__' */
    cpy_r_r71 = CPyDict_SetItem(cpy_r_r54, cpy_r_r70, cpy_r_r69);
    CPy_DECREF_NO_IMM(cpy_r_r69);
    cpy_r_r72 = cpy_r_r71 >= 0;
    if (unlikely(!cpy_r_r72)) {
        CPy_AddTraceback("dictstruct/_main.py", "<module>", 95, CPyStatic__main___globals);
        goto CPyL58;
    }
    cpy_r_r73 = CPyDef__main_____getattribute___3_DictStruct_obj();
    if (unlikely(cpy_r_r73 == NULL)) {
        CPy_AddTraceback("dictstruct/_main.py", "<module>", 121, CPyStatic__main___globals);
        goto CPyL58;
    }
    cpy_r_r74 = CPyStatics[39]; /* '__getattribute__' */
    cpy_r_r75 = CPyDict_SetItem(cpy_r_r54, cpy_r_r74, cpy_r_r73);
    CPy_DECREF_NO_IMM(cpy_r_r73);
    cpy_r_r76 = cpy_r_r75 >= 0;
    if (unlikely(!cpy_r_r76)) {
        CPy_AddTraceback("dictstruct/_main.py", "<module>", 121, CPyStatic__main___globals);
        goto CPyL58;
    }
    cpy_r_r77 = CPyDef__main_____setitem___3_DictStruct_obj();
    if (unlikely(cpy_r_r77 == NULL)) {
        CPy_AddTraceback("dictstruct/_main.py", "<module>", 150, CPyStatic__main___globals);
        goto CPyL58;
    }
    cpy_r_r78 = CPyStatics[47]; /* '__setitem__' */
    cpy_r_r79 = CPyDict_SetItem(cpy_r_r54, cpy_r_r78, cpy_r_r77);
    CPy_DECREF_NO_IMM(cpy_r_r77);
    cpy_r_r80 = cpy_r_r79 >= 0;
    if (unlikely(!cpy_r_r80)) {
        CPy_AddTraceback("dictstruct/_main.py", "<module>", 150, CPyStatic__main___globals);
        goto CPyL58;
    }
    cpy_r_r81 = CPyDef__main_____iter___3_DictStruct_obj();
    if (unlikely(cpy_r_r81 == NULL)) {
        CPy_AddTraceback("dictstruct/_main.py", "<module>", 180, CPyStatic__main___globals);
        goto CPyL58;
    }
    cpy_r_r82 = CPyStatics[48]; /* '__iter__' */
    cpy_r_r83 = CPyDict_SetItem(cpy_r_r54, cpy_r_r82, cpy_r_r81);
    CPy_DECREF_NO_IMM(cpy_r_r81);
    cpy_r_r84 = cpy_r_r83 >= 0;
    if (unlikely(!cpy_r_r84)) {
        CPy_AddTraceback("dictstruct/_main.py", "<module>", 180, CPyStatic__main___globals);
        goto CPyL58;
    }
    cpy_r_r85 = CPyDef__main_____len___3_DictStruct_obj();
    if (unlikely(cpy_r_r85 == NULL)) {
        CPy_AddTraceback("dictstruct/_main.py", "<module>", 200, CPyStatic__main___globals);
        goto CPyL58;
    }
    cpy_r_r86 = CPyStatics[49]; /* '__len__' */
    cpy_r_r87 = CPyDict_SetItem(cpy_r_r54, cpy_r_r86, cpy_r_r85);
    CPy_DECREF_NO_IMM(cpy_r_r85);
    cpy_r_r88 = cpy_r_r87 >= 0;
    if (unlikely(!cpy_r_r88)) {
        CPy_AddTraceback("dictstruct/_main.py", "<module>", 200, CPyStatic__main___globals);
        goto CPyL58;
    }
    cpy_r_r89 = CPyDef__main___keys_DictStruct_obj();
    if (unlikely(cpy_r_r89 == NULL)) {
        CPy_AddTraceback("dictstruct/_main.py", "<module>", 214, CPyStatic__main___globals);
        goto CPyL58;
    }
    cpy_r_r90 = CPyStatics[50]; /* 'keys' */
    cpy_r_r91 = CPyDict_SetItem(cpy_r_r54, cpy_r_r90, cpy_r_r89);
    CPy_DECREF_NO_IMM(cpy_r_r89);
    cpy_r_r92 = cpy_r_r91 >= 0;
    if (unlikely(!cpy_r_r92)) {
        CPy_AddTraceback("dictstruct/_main.py", "<module>", 214, CPyStatic__main___globals);
        goto CPyL58;
    }
    cpy_r_r93 = CPyDef__main___items_DictStruct_obj();
    if (unlikely(cpy_r_r93 == NULL)) {
        CPy_AddTraceback("dictstruct/_main.py", "<module>", 228, CPyStatic__main___globals);
        goto CPyL58;
    }
    cpy_r_r94 = CPyStatics[51]; /* 'items' */
    cpy_r_r95 = CPyDict_SetItem(cpy_r_r54, cpy_r_r94, cpy_r_r93);
    CPy_DECREF_NO_IMM(cpy_r_r93);
    cpy_r_r96 = cpy_r_r95 >= 0;
    if (unlikely(!cpy_r_r96)) {
        CPy_AddTraceback("dictstruct/_main.py", "<module>", 228, CPyStatic__main___globals);
        goto CPyL58;
    }
    cpy_r_r97 = CPyDef__main___values_DictStruct_obj();
    if (unlikely(cpy_r_r97 == NULL)) {
        CPy_AddTraceback("dictstruct/_main.py", "<module>", 245, CPyStatic__main___globals);
        goto CPyL58;
    }
    cpy_r_r98 = CPyStatics[52]; /* 'values' */
    cpy_r_r99 = CPyDict_SetItem(cpy_r_r54, cpy_r_r98, cpy_r_r97);
    CPy_DECREF_NO_IMM(cpy_r_r97);
    cpy_r_r100 = cpy_r_r99 >= 0;
    if (unlikely(!cpy_r_r100)) {
        CPy_AddTraceback("dictstruct/_main.py", "<module>", 245, CPyStatic__main___globals);
        goto CPyL58;
    }
    cpy_r_r101 = CPyDef__main_____hash___3_DictStruct_obj();
    if (unlikely(cpy_r_r101 == NULL)) {
        CPy_AddTraceback("dictstruct/_main.py", "<module>", 262, CPyStatic__main___globals);
        goto CPyL58;
    }
    cpy_r_r102 = CPyStatics[23]; /* '__hash__' */
    cpy_r_r103 = CPyDict_SetItem(cpy_r_r54, cpy_r_r102, cpy_r_r101);
    CPy_DECREF_NO_IMM(cpy_r_r101);
    cpy_r_r104 = cpy_r_r103 >= 0;
    if (unlikely(!cpy_r_r104)) {
        CPy_AddTraceback("dictstruct/_main.py", "<module>", 262, CPyStatic__main___globals);
        goto CPyL58;
    }
    cpy_r_r105 = CPyStatics[6]; /* 'DictStruct' */
    cpy_r_r106 = CPyStatics[53]; /* '__annotations__' */
    cpy_r_r107 = CPyDict_SetItem(cpy_r_r54, cpy_r_r106, cpy_r_r56);
    CPy_DECREF(cpy_r_r56);
    cpy_r_r108 = cpy_r_r107 >= 0;
    if (unlikely(!cpy_r_r108)) {
        CPy_AddTraceback("dictstruct/_main.py", "<module>", 13, CPyStatic__main___globals);
        goto CPyL57;
    }
    cpy_r_r109 = CPyStatics[54]; /* 'mypyc filler docstring' */
    cpy_r_r110 = CPyStatics[55]; /* '__doc__' */
    cpy_r_r111 = CPyDict_SetItem(cpy_r_r54, cpy_r_r110, cpy_r_r109);
    cpy_r_r112 = cpy_r_r111 >= 0;
    if (unlikely(!cpy_r_r112)) {
        CPy_AddTraceback("dictstruct/_main.py", "<module>", 13, CPyStatic__main___globals);
        goto CPyL57;
    }
    cpy_r_r113 = CPyStatics[7]; /* 'dictstruct._main' */
    cpy_r_r114 = CPyStatics[56]; /* '__module__' */
    cpy_r_r115 = CPyDict_SetItem(cpy_r_r54, cpy_r_r114, cpy_r_r113);
    cpy_r_r116 = cpy_r_r115 >= 0;
    if (unlikely(!cpy_r_r116)) {
        CPy_AddTraceback("dictstruct/_main.py", "<module>", 13, CPyStatic__main___globals);
        goto CPyL57;
    }
    PyObject *cpy_r_r117[3] = {cpy_r_r105, cpy_r_r42, cpy_r_r54};
    cpy_r_r118 = (PyObject **)&cpy_r_r117;
    cpy_r_r119 = PyObject_Vectorcall(cpy_r_r44, cpy_r_r118, 3, 0);
    if (unlikely(cpy_r_r119 == NULL)) {
        CPy_AddTraceback("dictstruct/_main.py", "<module>", 13, CPyStatic__main___globals);
        goto CPyL57;
    }
    CPy_DECREF(cpy_r_r54);
    CPy_DECREF(cpy_r_r42);
    cpy_r_r120 = CPyStatic__main___globals;
    cpy_r_r121 = CPyStatics[35]; /* 'mypyc_attr' */
    cpy_r_r122 = CPyDict_GetItem(cpy_r_r120, cpy_r_r121);
    if (unlikely(cpy_r_r122 == NULL)) {
        CPy_AddTraceback("dictstruct/_main.py", "<module>", 12, CPyStatic__main___globals);
        goto CPyL59;
    }
    cpy_r_r123 = 0 ? Py_True : Py_False;
    PyObject *cpy_r_r124[1] = {cpy_r_r123};
    cpy_r_r125 = (PyObject **)&cpy_r_r124;
    cpy_r_r126 = CPyStatics[64]; /* ('native_class',) */
    cpy_r_r127 = PyObject_Vectorcall(cpy_r_r122, cpy_r_r125, 0, cpy_r_r126);
    CPy_DECREF(cpy_r_r122);
    if (unlikely(cpy_r_r127 == NULL)) {
        CPy_AddTraceback("dictstruct/_main.py", "<module>", 12, CPyStatic__main___globals);
        goto CPyL59;
    }
    PyObject *cpy_r_r128[1] = {cpy_r_r119};
    cpy_r_r129 = (PyObject **)&cpy_r_r128;
    cpy_r_r130 = PyObject_Vectorcall(cpy_r_r127, cpy_r_r129, 1, 0);
    CPy_DECREF(cpy_r_r127);
    if (unlikely(cpy_r_r130 == NULL)) {
        CPy_AddTraceback("dictstruct/_main.py", "<module>", 13, CPyStatic__main___globals);
        goto CPyL59;
    }
    CPy_DECREF(cpy_r_r119);
    CPyType__main___DictStruct = (PyTypeObject *)cpy_r_r130;
    CPy_INCREF(CPyType__main___DictStruct);
    cpy_r_r131 = CPyStatic__main___globals;
    cpy_r_r132 = CPyStatics[6]; /* 'DictStruct' */
    cpy_r_r133 = CPyDict_SetItem(cpy_r_r131, cpy_r_r132, cpy_r_r130);
    CPy_DECREF(cpy_r_r130);
    cpy_r_r134 = cpy_r_r133 >= 0;
    if (unlikely(!cpy_r_r134)) {
        CPy_AddTraceback("dictstruct/_main.py", "<module>", 13, CPyStatic__main___globals);
        goto CPyL55;
    }
    cpy_r_r135 = (PyObject *)CPyType__main___DictStruct;
    return 1;
CPyL55: ;
    cpy_r_r136 = 2;
    return cpy_r_r136;
CPyL56: ;
    CPy_DecRef(cpy_r_r42);
    goto CPyL55;
CPyL57: ;
    CPy_DecRef(cpy_r_r42);
    CPy_DecRef(cpy_r_r54);
    goto CPyL55;
CPyL58: ;
    CPy_DecRef(cpy_r_r42);
    CPy_DecRef(cpy_r_r54);
    CPy_DecRef(cpy_r_r56);
    goto CPyL55;
CPyL59: ;
    CPy_DecRef(cpy_r_r119);
    goto CPyL55;
}

int CPyGlobalsInit(void)
{
    static int is_initialized = 0;
    if (is_initialized) return 0;
    
    CPy_Init();
    CPyModule_dictstruct = Py_None;
    CPyModule_builtins = Py_None;
    CPyModule_dictstruct____lazy = Py_None;
    CPyModule_dictstruct____main = Py_None;
    CPyModule_dictstruct____main = Py_None;
    CPyModule_builtins = Py_None;
    CPyModule_typing = Py_None;
    CPyModule_msgspec = Py_None;
    CPyModule_mypy_extensions = Py_None;
    if (CPyStatics_Initialize(CPyStatics, CPyLit_Str, CPyLit_Bytes, CPyLit_Int, CPyLit_Float, CPyLit_Complex, CPyLit_Tuple, CPyLit_FrozenSet) < 0) {
        return -1;
    }
    is_initialized = 1;
    return 0;
}

PyObject *CPyStatics[65];
const char * const CPyLit_Str[] = {
    "\005\bbuiltins\016LazyDictStruct\020dictstruct._lazy\nDictStruct\020dictstruct._main",
    "\006\a__all__\021__struct_fields__\016AttributeError\bKeyError\001\'\b__name__",
    "\004\033\' object has no attribute \'\004args\tTypeError\rGeneratorExit",
    "\005\rStopIteration\021__struct_config__\006frozen\022unhashable type: \'\b__dict__",
    "\a\b__hash__\tException\023recursed in hash fn\003Any\005Final\bIterator\aLiteral",
    "\006\005Tuple\006typing\amsgspec\023dictstruct/_main.py\b<module>\nmypyc_attr",
    "\006\017mypy_extensions\005UNSET\006object\020__getattribute__\r_getattribute\006Struct",
    "\006\v__prepare__\b__bool__\f__contains__\003get\v__getitem__\v__setitem__",
    "\006\b__iter__\a__len__\004keys\005items\006values\017__annotations__",
    "\004\026mypyc filler docstring\a__doc__\n__module__\fnative_class",
    "",
};
const char * const CPyLit_Bytes[] = {
    "",
};
const char * const CPyLit_Int[] = {
    "",
};
const double CPyLit_Float[] = {0};
const double CPyLit_Complex[] = {0};
const int CPyLit_Tuple[] = {
    7, 1, 4, 1, 6, 5, 26, 27, 28, 29, 30, 3, 32, 32, 32, 1, 61, 1, 35,
    1, 57
};
const int CPyLit_FrozenSet[] = {0};
CPyModule *CPyModule_dictstruct_internal = NULL;
CPyModule *CPyModule_dictstruct;
PyObject *CPyStatic_dictstruct___globals;
CPyModule *CPyModule_builtins;
CPyModule *CPyModule_dictstruct____lazy;
CPyModule *CPyModule_dictstruct____main_internal = NULL;
CPyModule *CPyModule_dictstruct____main;
PyObject *CPyStatic__main___globals;
CPyModule *CPyModule_typing;
CPyModule *CPyModule_msgspec;
CPyModule *CPyModule_mypy_extensions;
char CPyDef_dictstruct_____top_level__(void);
PyObject *CPyStatic__main___UNSET = NULL;
PyObject *CPyStatic__main____getattribute = NULL;
PyTypeObject *CPyType__main___DictStruct;
PyTypeObject *CPyType__main_____bool___3_DictStruct_obj;
PyObject *CPyDef__main_____bool___3_DictStruct_obj(void);
PyTypeObject *CPyType__main_____contains___3_DictStruct_obj;
PyObject *CPyDef__main_____contains___3_DictStruct_obj(void);
PyTypeObject *CPyType__main___get_DictStruct_obj;
PyObject *CPyDef__main___get_DictStruct_obj(void);
PyTypeObject *CPyType__main_____getitem___3_DictStruct_obj;
PyObject *CPyDef__main_____getitem___3_DictStruct_obj(void);
PyTypeObject *CPyType__main_____getattribute___3_DictStruct_obj;
PyObject *CPyDef__main_____getattribute___3_DictStruct_obj(void);
PyTypeObject *CPyType__main_____setitem___3_DictStruct_obj;
PyObject *CPyDef__main_____setitem___3_DictStruct_obj(void);
PyTypeObject *CPyType__main_____iter___3_DictStruct_env;
PyObject *CPyDef__main_____iter___3_DictStruct_env(void);
PyTypeObject *CPyType__main_____iter___3_DictStruct_obj;
PyObject *CPyDef__main_____iter___3_DictStruct_obj(void);
PyTypeObject *CPyType__main_____iter___3_DictStruct_gen;
PyObject *CPyDef__main_____iter___3_DictStruct_gen(void);
PyTypeObject *CPyType__main_____len___3_DictStruct_obj;
PyObject *CPyDef__main_____len___3_DictStruct_obj(void);
PyTypeObject *CPyType__main___keys_DictStruct_env;
PyObject *CPyDef__main___keys_DictStruct_env(void);
PyTypeObject *CPyType__main___keys_DictStruct_obj;
PyObject *CPyDef__main___keys_DictStruct_obj(void);
PyTypeObject *CPyType__main___keys_DictStruct_gen;
PyObject *CPyDef__main___keys_DictStruct_gen(void);
PyTypeObject *CPyType__main___items_DictStruct_env;
PyObject *CPyDef__main___items_DictStruct_env(void);
PyTypeObject *CPyType__main___items_DictStruct_obj;
PyObject *CPyDef__main___items_DictStruct_obj(void);
PyTypeObject *CPyType__main___items_DictStruct_gen;
PyObject *CPyDef__main___items_DictStruct_gen(void);
PyTypeObject *CPyType__main___values_DictStruct_env;
PyObject *CPyDef__main___values_DictStruct_env(void);
PyTypeObject *CPyType__main___values_DictStruct_obj;
PyObject *CPyDef__main___values_DictStruct_obj(void);
PyTypeObject *CPyType__main___values_DictStruct_gen;
PyObject *CPyDef__main___values_DictStruct_gen(void);
PyTypeObject *CPyType__main_____hash___3_DictStruct_obj;
PyObject *CPyDef__main_____hash___3_DictStruct_obj(void);
PyObject *CPyDef__main_____bool___3_DictStruct_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner);
PyObject *CPyPy__main_____bool___3_DictStruct_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef__main_____bool___3_DictStruct_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_self);
PyObject *CPyPy__main_____bool___3_DictStruct_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef__main_____contains___3_DictStruct_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner);
PyObject *CPyPy__main_____contains___3_DictStruct_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef__main_____contains___3_DictStruct_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_self, PyObject *cpy_r_key);
PyObject *CPyPy__main_____contains___3_DictStruct_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef__main___get_DictStruct_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner);
PyObject *CPyPy__main___get_DictStruct_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef__main___get_DictStruct_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_self, PyObject *cpy_r_key, PyObject *cpy_r_default);
PyObject *CPyPy__main___get_DictStruct_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef__main_____getitem___3_DictStruct_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner);
PyObject *CPyPy__main_____getitem___3_DictStruct_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef__main_____getitem___3_DictStruct_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_self, PyObject *cpy_r_attr);
PyObject *CPyPy__main_____getitem___3_DictStruct_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef__main_____getattribute___3_DictStruct_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner);
PyObject *CPyPy__main_____getattribute___3_DictStruct_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef__main_____getattribute___3_DictStruct_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_self, PyObject *cpy_r_attr);
PyObject *CPyPy__main_____getattribute___3_DictStruct_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef__main_____setitem___3_DictStruct_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner);
PyObject *CPyPy__main_____setitem___3_DictStruct_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef__main_____setitem___3_DictStruct_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_self, PyObject *cpy_r_attr, PyObject *cpy_r_value);
PyObject *CPyPy__main_____setitem___3_DictStruct_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef__main_____iter___3_DictStruct_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner);
PyObject *CPyPy__main_____iter___3_DictStruct_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef__main_____iter___3_DictStruct_gen_____mypyc_generator_helper__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg);
PyObject *CPyPy__main_____iter___3_DictStruct_gen_____mypyc_generator_helper__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef__main_____iter___3_DictStruct_gen_____next__(PyObject *cpy_r___mypyc_self__);
PyObject *CPyPy__main_____iter___3_DictStruct_gen_____next__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef__main_____iter___3_DictStruct_gen___send(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
PyObject *CPyPy__main_____iter___3_DictStruct_gen___send(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef__main_____iter___3_DictStruct_gen_____iter__(PyObject *cpy_r___mypyc_self__);
PyObject *CPyPy__main_____iter___3_DictStruct_gen_____iter__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef__main_____iter___3_DictStruct_gen___throw(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
PyObject *CPyPy__main_____iter___3_DictStruct_gen___throw(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef__main_____iter___3_DictStruct_gen___close(PyObject *cpy_r___mypyc_self__);
PyObject *CPyPy__main_____iter___3_DictStruct_gen___close(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef__main_____iter___3_DictStruct_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_self);
PyObject *CPyPy__main_____iter___3_DictStruct_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef__main_____len___3_DictStruct_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner);
PyObject *CPyPy__main_____len___3_DictStruct_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
CPyTagged CPyDef__main_____len___3_DictStruct_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_self);
PyObject *CPyPy__main_____len___3_DictStruct_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef__main___keys_DictStruct_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner);
PyObject *CPyPy__main___keys_DictStruct_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef__main___keys_DictStruct_gen_____mypyc_generator_helper__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg);
PyObject *CPyPy__main___keys_DictStruct_gen_____mypyc_generator_helper__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef__main___keys_DictStruct_gen_____next__(PyObject *cpy_r___mypyc_self__);
PyObject *CPyPy__main___keys_DictStruct_gen_____next__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef__main___keys_DictStruct_gen___send(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
PyObject *CPyPy__main___keys_DictStruct_gen___send(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef__main___keys_DictStruct_gen_____iter__(PyObject *cpy_r___mypyc_self__);
PyObject *CPyPy__main___keys_DictStruct_gen_____iter__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef__main___keys_DictStruct_gen___throw(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
PyObject *CPyPy__main___keys_DictStruct_gen___throw(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef__main___keys_DictStruct_gen___close(PyObject *cpy_r___mypyc_self__);
PyObject *CPyPy__main___keys_DictStruct_gen___close(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef__main___keys_DictStruct_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_self);
PyObject *CPyPy__main___keys_DictStruct_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef__main___items_DictStruct_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner);
PyObject *CPyPy__main___items_DictStruct_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef__main___items_DictStruct_gen_____mypyc_generator_helper__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg);
PyObject *CPyPy__main___items_DictStruct_gen_____mypyc_generator_helper__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef__main___items_DictStruct_gen_____next__(PyObject *cpy_r___mypyc_self__);
PyObject *CPyPy__main___items_DictStruct_gen_____next__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef__main___items_DictStruct_gen___send(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
PyObject *CPyPy__main___items_DictStruct_gen___send(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef__main___items_DictStruct_gen_____iter__(PyObject *cpy_r___mypyc_self__);
PyObject *CPyPy__main___items_DictStruct_gen_____iter__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef__main___items_DictStruct_gen___throw(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
PyObject *CPyPy__main___items_DictStruct_gen___throw(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef__main___items_DictStruct_gen___close(PyObject *cpy_r___mypyc_self__);
PyObject *CPyPy__main___items_DictStruct_gen___close(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef__main___items_DictStruct_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_self);
PyObject *CPyPy__main___items_DictStruct_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef__main___values_DictStruct_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner);
PyObject *CPyPy__main___values_DictStruct_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef__main___values_DictStruct_gen_____mypyc_generator_helper__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg);
PyObject *CPyPy__main___values_DictStruct_gen_____mypyc_generator_helper__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef__main___values_DictStruct_gen_____next__(PyObject *cpy_r___mypyc_self__);
PyObject *CPyPy__main___values_DictStruct_gen_____next__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef__main___values_DictStruct_gen___send(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
PyObject *CPyPy__main___values_DictStruct_gen___send(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef__main___values_DictStruct_gen_____iter__(PyObject *cpy_r___mypyc_self__);
PyObject *CPyPy__main___values_DictStruct_gen_____iter__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef__main___values_DictStruct_gen___throw(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
PyObject *CPyPy__main___values_DictStruct_gen___throw(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef__main___values_DictStruct_gen___close(PyObject *cpy_r___mypyc_self__);
PyObject *CPyPy__main___values_DictStruct_gen___close(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef__main___values_DictStruct_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_self);
PyObject *CPyPy__main___values_DictStruct_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef__main_____hash___3_DictStruct_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner);
PyObject *CPyPy__main_____hash___3_DictStruct_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
CPyTagged CPyDef__main_____hash___3_DictStruct_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_self);
PyObject *CPyPy__main_____hash___3_DictStruct_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef__main_____top_level__(void);

static struct export_table_3ced3f117ec1f92cf484 exports = {
    &CPyDef_dictstruct_____top_level__,
    &CPyStatic__main___UNSET,
    &CPyStatic__main____getattribute,
    &CPyType__main___DictStruct,
    &CPyType__main_____bool___3_DictStruct_obj,
    &CPyDef__main_____bool___3_DictStruct_obj,
    &CPyType__main_____contains___3_DictStruct_obj,
    &CPyDef__main_____contains___3_DictStruct_obj,
    &CPyType__main___get_DictStruct_obj,
    &CPyDef__main___get_DictStruct_obj,
    &CPyType__main_____getitem___3_DictStruct_obj,
    &CPyDef__main_____getitem___3_DictStruct_obj,
    &CPyType__main_____getattribute___3_DictStruct_obj,
    &CPyDef__main_____getattribute___3_DictStruct_obj,
    &CPyType__main_____setitem___3_DictStruct_obj,
    &CPyDef__main_____setitem___3_DictStruct_obj,
    &CPyType__main_____iter___3_DictStruct_env,
    &CPyDef__main_____iter___3_DictStruct_env,
    &CPyType__main_____iter___3_DictStruct_obj,
    &CPyDef__main_____iter___3_DictStruct_obj,
    &CPyType__main_____iter___3_DictStruct_gen,
    &CPyDef__main_____iter___3_DictStruct_gen,
    &CPyType__main_____len___3_DictStruct_obj,
    &CPyDef__main_____len___3_DictStruct_obj,
    &CPyType__main___keys_DictStruct_env,
    &CPyDef__main___keys_DictStruct_env,
    &CPyType__main___keys_DictStruct_obj,
    &CPyDef__main___keys_DictStruct_obj,
    &CPyType__main___keys_DictStruct_gen,
    &CPyDef__main___keys_DictStruct_gen,
    &CPyType__main___items_DictStruct_env,
    &CPyDef__main___items_DictStruct_env,
    &CPyType__main___items_DictStruct_obj,
    &CPyDef__main___items_DictStruct_obj,
    &CPyType__main___items_DictStruct_gen,
    &CPyDef__main___items_DictStruct_gen,
    &CPyType__main___values_DictStruct_env,
    &CPyDef__main___values_DictStruct_env,
    &CPyType__main___values_DictStruct_obj,
    &CPyDef__main___values_DictStruct_obj,
    &CPyType__main___values_DictStruct_gen,
    &CPyDef__main___values_DictStruct_gen,
    &CPyType__main_____hash___3_DictStruct_obj,
    &CPyDef__main_____hash___3_DictStruct_obj,
    &CPyDef__main_____bool___3_DictStruct_obj_____get__,
    &CPyDef__main_____bool___3_DictStruct_obj_____call__,
    &CPyDef__main_____contains___3_DictStruct_obj_____get__,
    &CPyDef__main_____contains___3_DictStruct_obj_____call__,
    &CPyDef__main___get_DictStruct_obj_____get__,
    &CPyDef__main___get_DictStruct_obj_____call__,
    &CPyDef__main_____getitem___3_DictStruct_obj_____get__,
    &CPyDef__main_____getitem___3_DictStruct_obj_____call__,
    &CPyDef__main_____getattribute___3_DictStruct_obj_____get__,
    &CPyDef__main_____getattribute___3_DictStruct_obj_____call__,
    &CPyDef__main_____setitem___3_DictStruct_obj_____get__,
    &CPyDef__main_____setitem___3_DictStruct_obj_____call__,
    &CPyDef__main_____iter___3_DictStruct_obj_____get__,
    &CPyDef__main_____iter___3_DictStruct_gen_____mypyc_generator_helper__,
    &CPyDef__main_____iter___3_DictStruct_gen_____next__,
    &CPyDef__main_____iter___3_DictStruct_gen___send,
    &CPyDef__main_____iter___3_DictStruct_gen_____iter__,
    &CPyDef__main_____iter___3_DictStruct_gen___throw,
    &CPyDef__main_____iter___3_DictStruct_gen___close,
    &CPyDef__main_____iter___3_DictStruct_obj_____call__,
    &CPyDef__main_____len___3_DictStruct_obj_____get__,
    &CPyDef__main_____len___3_DictStruct_obj_____call__,
    &CPyDef__main___keys_DictStruct_obj_____get__,
    &CPyDef__main___keys_DictStruct_gen_____mypyc_generator_helper__,
    &CPyDef__main___keys_DictStruct_gen_____next__,
    &CPyDef__main___keys_DictStruct_gen___send,
    &CPyDef__main___keys_DictStruct_gen_____iter__,
    &CPyDef__main___keys_DictStruct_gen___throw,
    &CPyDef__main___keys_DictStruct_gen___close,
    &CPyDef__main___keys_DictStruct_obj_____call__,
    &CPyDef__main___items_DictStruct_obj_____get__,
    &CPyDef__main___items_DictStruct_gen_____mypyc_generator_helper__,
    &CPyDef__main___items_DictStruct_gen_____next__,
    &CPyDef__main___items_DictStruct_gen___send,
    &CPyDef__main___items_DictStruct_gen_____iter__,
    &CPyDef__main___items_DictStruct_gen___throw,
    &CPyDef__main___items_DictStruct_gen___close,
    &CPyDef__main___items_DictStruct_obj_____call__,
    &CPyDef__main___values_DictStruct_obj_____get__,
    &CPyDef__main___values_DictStruct_gen_____mypyc_generator_helper__,
    &CPyDef__main___values_DictStruct_gen_____next__,
    &CPyDef__main___values_DictStruct_gen___send,
    &CPyDef__main___values_DictStruct_gen_____iter__,
    &CPyDef__main___values_DictStruct_gen___throw,
    &CPyDef__main___values_DictStruct_gen___close,
    &CPyDef__main___values_DictStruct_obj_____call__,
    &CPyDef__main_____hash___3_DictStruct_obj_____get__,
    &CPyDef__main_____hash___3_DictStruct_obj_____call__,
    &CPyDef__main_____top_level__,
};

PyMODINIT_FUNC PyInit_3ced3f117ec1f92cf484__mypyc(void)
{
    static PyModuleDef def = { PyModuleDef_HEAD_INIT, "3ced3f117ec1f92cf484__mypyc", NULL, -1, NULL, NULL };
    int res;
    PyObject *capsule;
    PyObject *tmp;
    static PyObject *module;
    if (module) {
        Py_INCREF(module);
        return module;
    }
    module = PyModule_Create(&def);
    if (!module) {
        goto fail;
    }
    
    capsule = PyCapsule_New(&exports, "3ced3f117ec1f92cf484__mypyc.exports", NULL);
    if (!capsule) {
        goto fail;
    }
    res = PyObject_SetAttrString(module, "exports", capsule);
    Py_DECREF(capsule);
    if (res < 0) {
        goto fail;
    }
    
    extern PyObject *CPyInit_dictstruct(void);
    capsule = PyCapsule_New((void *)CPyInit_dictstruct, "3ced3f117ec1f92cf484__mypyc.init_dictstruct", NULL);
    if (!capsule) {
        goto fail;
    }
    res = PyObject_SetAttrString(module, "init_dictstruct", capsule);
    Py_DECREF(capsule);
    if (res < 0) {
        goto fail;
    }
    
    extern PyObject *CPyInit_dictstruct____main(void);
    capsule = PyCapsule_New((void *)CPyInit_dictstruct____main, "3ced3f117ec1f92cf484__mypyc.init_dictstruct____main", NULL);
    if (!capsule) {
        goto fail;
    }
    res = PyObject_SetAttrString(module, "init_dictstruct____main", capsule);
    Py_DECREF(capsule);
    if (res < 0) {
        goto fail;
    }
    
    return module;
    fail:
    Py_XDECREF(module);
    return NULL;
}

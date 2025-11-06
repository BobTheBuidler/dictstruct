#include <Python.h>

PyMODINIT_FUNC
PyInit__main(void)
{
    PyObject *tmp;
    if (!(tmp = PyImport_ImportModule("3403aec91595b6bd21e1__mypyc"))) return NULL;
    PyObject *capsule = PyObject_GetAttrString(tmp, "init_dictstruct____main");
    Py_DECREF(tmp);
    if (capsule == NULL) return NULL;
    void *init_func = PyCapsule_GetPointer(capsule, "3403aec91595b6bd21e1__mypyc.init_dictstruct____main");
    Py_DECREF(capsule);
    if (!init_func) {
        return NULL;
    }
    return ((PyObject *(*)(void))init_func)();
}

// distutils sometimes spuriously tells cl to export CPyInit___init__,
// so provide that so it chills out
PyMODINIT_FUNC PyInit___init__(void) { return PyInit__main(); }

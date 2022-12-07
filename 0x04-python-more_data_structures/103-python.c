#include <stdio.h>

#include <Python.h>



/**

 * print_python_bytes - Prints bytes information

 *

 * @p: Python Object

 * Return: no return

 */

void print_python_bytes(PyObject *p)

{

char *string;

long int size, i, limit;



printf([.] bytes object infon);


{

printf( [ERROR] Invalid Bytes Objectn);

return;

}



size = ((PyVarObject *)(p))->ob_size;

string = ((PyBytesObject *)p)->ob_sval;



printf( size: %ldn, size);

printf( trying string: %sn, string);



if (size >= 10)

limit = 10;

else

limit = size + 1;



printf( first %ld bytes:, limit);



for (i = 0; i < limit; i++)

if (string[i] >= 0)

printf( %02x, string[i]);

else

printf( %02x, 256 + string[i]);



printf(n);

}



/**

 * print_python_list - Prints list information

 *

 * @p: Python Object

 * Return: no return

 */

void print_python_list(PyObject *p)

{

long int size, i;

PyListObject *list;

PyObject *obj;



size = ((PyVarObject *)(p))->ob_size;

list = (PyListObject *)p;



printf([*] Python list infon);

printf([*] Size of the Python List = %ldn, size);

printf([*] Allocated = %ldn, list->allocated);



for (i = 0; i < size; i++)

{

obj = ((PyListObject *)p)->ob_item[i];

printf(Element %ld: %sn, i, ((obj)->ob_type)->tp_name);

if (PyBytes_Check(obj))

print_python_bytes(obj);

}

}

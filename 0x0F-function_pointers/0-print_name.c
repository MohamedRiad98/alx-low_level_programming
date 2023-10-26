#include <stdio.h>
#include "main.h"

/**
 * print_name - Print a name from a function pointer.
 * @name - char string.
 * @f - function pointer that take a string as argument.
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}

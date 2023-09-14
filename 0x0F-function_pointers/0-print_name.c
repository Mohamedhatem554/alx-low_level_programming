#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - entry point
 * @name: char
 * @f: function
*/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL && f == NULL)
	return (NULL);
	f(name);
}

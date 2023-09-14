#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - print name
 * @name: char
 * @f: pointer to function
 * Return: NOTHING
*/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	return;
	f(name);
}

#include "main.h"


/**
 * _puts_recursion - Write a function that prints a string.
 * @s: the string
*/
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	if (*s == '\0')
	_putchar('\n');
}

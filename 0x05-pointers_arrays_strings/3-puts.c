#include "main.h"
#include <stdio.h>

/**
 * _puts - entry point
 * @str: character
 * Return: Nothing
*/
void _puts(char *str)
{
	int i;

	for (i = 0; i < 62; i++)
	{
		_putchar(*str + i);
	}
	_putchar('\n');
}

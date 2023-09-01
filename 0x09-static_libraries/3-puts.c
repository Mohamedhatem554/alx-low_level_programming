#include "main.h"
#include <stdio.h>

/**
 * _puts - entry point
 * @str: character
 * Return: Nothing
*/
void _puts(char *str)
{

	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}

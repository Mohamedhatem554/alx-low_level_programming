#include <stdio.h>
#include "main.h"

/**
 * print_numbers - entry point
 * Return: Nothing
*/
void print_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}

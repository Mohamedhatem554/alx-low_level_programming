#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - entry point
 * @n: number of diagonal lines
 * Return: nothing
*/
void print_diagonal(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('\\');
	}
	_putchar('\n');
}

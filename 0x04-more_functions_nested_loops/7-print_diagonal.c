#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - entry point
 * @n: number of diagonal lines
 * Return: nothing
*/
void print_diagonal(int n)
{
	int i, s;

	for (i = 0; i < n; i++)
	{
		for (s = 0; s < i; s++)
		{
			if (i != 0)
			{
				_putchar(' ');
			}
		}

		_putchar('\\');
		_putchar('\n');
	}
}

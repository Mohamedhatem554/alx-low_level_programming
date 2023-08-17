#include <stdio.h>
#include "main.h"

/**
 * print_square - entry point
 * @size: the size of the square
 * Return: nothing
*/
void print_square(int size)
{
	int i, s;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (i = 0; i < size; i++)
	{
		for (s = 0; s < size; s++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}

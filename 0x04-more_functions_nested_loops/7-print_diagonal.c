#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - entry point
 * @n: number of diagonal lines
 * Return: nothing
*/
void print_diagonal(int n)
{
	int i, s = 0;

	for (i = 0; i < n; i++)
	{

		putchar('\\');
		putchar('\n');

		for (s = 0; s <= i; s++)
		{
			putchar(' ');
		}



	}
}

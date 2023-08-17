#include <stdio.h>
#include "main.h"

/**
 * print_line - entry point
 * @n: numbers of lines
 * Return: nothing
*/
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		putchar('_');
	}
	putchar('\n');
}

#include "main.h"

/**
 * print_to_98 - entry point
 * @n: Number to be counted
*/
void print_to_98(int n)
{
	int sr;

	for (sr = n; sr <= 98; sr++)
	{
		if (sr == 98)
		{
			_putchar(sr + '0');
			_putchar('\n');
		}
		else
		{
			_putchar(sr + '0');
			_putchar(',');
			_putchar(' ');
		}
	}
}
#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - entry point
 * @n: Number to be counted
*/
void print_to_98(int n)
{

	for (; n > 98; n--)
	{

		printf("%d", n);
		printf(",");
		printf(" ");
	}

	for (; n < 98; n++)
	{

		printf("%d", n);
		printf(",");
		printf(" ");
	}

	if (n == 98)
	{
		printf("%d", n);
		printf("\n");
	}
}

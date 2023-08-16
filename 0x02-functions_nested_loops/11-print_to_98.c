#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - entry point
 * @n: Number to be counted
*/
void print_to_98(int n)
{
	int sr;

	for (sr = n; sr > 98; sr--)
	{

			printf("%d", sr);
			printf(",");
			printf(" ");
	}

	for (sr = n; sr < 98; sr++)
	{

			printf("%d", sr);
			printf(",");
			printf(" ");
	}

	if (sr == 98)
	{
		printf("%d", sr);
		printf("\n");
	}
}
#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - entry point
 * @a: int
 * @size: int
*/
void print_diagsums(int *a, int size)
{
	int i, l1 = 0, l2 = 0;

	for (i = 0; i < size; i++)
	{
		l1 = l1 + a[i * (size + 1)];
		l2 = l1 + a[(i + 1) * (size - 1)];
	}
	printf("%d, ", l1);
	printf("%d", l2);
	printf("\n");
}

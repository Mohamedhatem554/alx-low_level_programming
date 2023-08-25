#include "main.h"

/**
 * reverse_array - entry point
 * @a: int
 * @n: int
*/
void reverse_array(int *a, int n)
{
	int i, o = 0, swap;

	for (i = n - 1; o < i; i--)
	{
		swap = *(a + o);
		*(a + o) = *(a + i);
		*(a + i) = swap;
		o++;
	}

	
}

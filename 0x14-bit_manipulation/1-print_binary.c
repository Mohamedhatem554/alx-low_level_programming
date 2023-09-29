#include "main.h"
#include <math.h>

/**
 * print_binary - print binary
 * @n: num
*/
void print_binary(unsigned long int n)
{
	unsigned long int div, ch;
	char b;

	b = 0;
	div = pow(2, sizeof(unsigned long int) * 8 - 1);
	for (; div != 0; div >>= 1)
	{
		ch = n & div;
		if (ch == div)
		{
		b = 1;
		printf("1");
		}
		else if (b == 1 || div == 1)
		{
			printf("0");
		}
	}
}

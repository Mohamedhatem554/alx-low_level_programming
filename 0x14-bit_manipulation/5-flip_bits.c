#include "main.h"

/**
 * flip_bits - flib bits
 * @n: number
 * @m: second number
 * Return: or
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int or;
	unsigned int c = 0;

	or = n ^ m;
	while (or != 0)
	{
		if ((or & 1) == 1)
		c++;
		or >>= 1;
	}
	return (or);
}

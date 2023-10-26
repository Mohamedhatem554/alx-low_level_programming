#include "main.h"

/**
 * get_bit - get bit
 * @n: num
 * @index: index
 * Return: 1
*/
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (sizeof(n) * 8))
		return (-1);
		n >>= index;
		if (n & 1)
		return (1);
	else
		return (0);
}

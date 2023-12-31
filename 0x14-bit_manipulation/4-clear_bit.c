#include "main.h"

/**
 * clear_bit - clear
 * @n: num
 * @index: index
 * Return: 1
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(*n) * 8))
	return (-1);
	*n &= ~(1 << index);
	return (1);
}

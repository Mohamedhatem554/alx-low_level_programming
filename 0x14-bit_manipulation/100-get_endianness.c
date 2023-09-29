#include "main.h"

/**
 * get_endianness - return the endianness
 * Return: endianness
*/
int get_endianness(void)
{
	int n;

	n = 1;
	return (*((char *) &n) + '0');
}

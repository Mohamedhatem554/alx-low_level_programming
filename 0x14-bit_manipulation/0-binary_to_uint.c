#include "main.h"

/**
 * binary_to_uint - binary to unit
 * @b: string
 * Return: decimal number
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int dec, n;

	for (dec = 0, n = 0; b[n] != '\0'; n++)
	{
		if (b[n] == '1')
		{
			dec = (dec << 1) | 1;
		}
		else if (b[n] == '0')
		{
			dec <<= 1;
		}
		else
		return (0);
	}
	return (dec);
}

#include "main.h"

/**
 * _memcpy - entry point
 * @dest: char
 * @src: char
 * @n: unsigned int
 * Return: dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*dest++ = *src++;
	}
	return (dest);
}

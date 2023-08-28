#include "main.h"

/**
 * _memset - entry point
 * @s: pointer
 * @b: character
 * @n: number of characters
 * Return: s if success
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *start = s;

	for (i = 0; i < n; i++)
	{
		*s++ = b;
	}
	return (start);
}

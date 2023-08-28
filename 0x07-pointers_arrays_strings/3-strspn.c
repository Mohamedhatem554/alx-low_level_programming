#include "main.h"

/**
 * _strspn - entry point
 * @s: char
 * @accept: char
 * Return: i
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
	j = 0;

	for (; accept[j] != '\0' && s[i] != accept[j]; j++)
	;
	if (accept[j] == '\0')
	return (i);
	}
	return (i);
}

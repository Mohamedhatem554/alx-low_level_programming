#include "main.h"


/**
 * _strpbrk - entry point
 * @s: char
 * @accept: char
 * Return: '\0'
*/
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{

		for (j = 0; accept[j] != '\0' && accept[j] != s[i]; j++)
		;
		if (accept[j] == s[i])
		return (s + i);


	}
	return ('\0');
}

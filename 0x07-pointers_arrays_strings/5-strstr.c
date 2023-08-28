#include "main.h"

/**
 * _strstr - entry point
 * @haystack: char
 * @needle: char
 * Return: NULL
*/
char *_strstr(char *haystack, char *needle)
{
	int i;

	for (i = 0; haystack[i] != '\0' && haystack[i] != *needle; i++)
	;
	if (haystack[i] == *needle)
	{
		return (haystack + i);
	}
	return ('\0');
}

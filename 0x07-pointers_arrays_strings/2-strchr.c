#include "main.h"
#include <stdio.h>

/**
 * _strchr - entry point
 * @s: char
 * @c: char
 * Return: NULL if failed
*/
char *_strchr(char *s, char c)
{
	int i = 0;

	while (*(s + i))
	{
		if (*(s + i) == c)
			return (s + i);
		i++;
	}
	if (*(s + i) == c)
		return (s + i);
	return (NULL);
}

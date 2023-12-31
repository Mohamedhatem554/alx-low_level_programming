#include "main.h"

/**
 * _strcmp - entry point
 * @s1: char
 * @s2: char
 * Return: (s1 - s2) or (0)
*/
int _strcmp(char *s1, char *s2)
{
	while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);

}

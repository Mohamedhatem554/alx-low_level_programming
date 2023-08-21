#include "main.h"

/**
 * _strlen - entry point
 * @s: character to be counted
 * Return: l
*/
int _strlen(char *s)
{
	int l;

	for(; *s != '\0'; s++)
	{
		l++;
	}
	return (l);
}

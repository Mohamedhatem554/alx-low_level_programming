#include "main.h"

/**
 * _strcpy - entry point
 * @dest: char
 * @src: source
 * Return: dest if success
*/
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	dest[i] = src[i];

	return (dest);
}
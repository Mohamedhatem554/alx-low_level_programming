#include "main.h"

/**
 * _strncat - entry point
 * @dest: char
 * @src: char
 * @n: int
 * Return: dest if success
*/
char *_strncat(char *dest, char *src, int n)
{
	int destlen = _strlen(dest);
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	dest[destlen + i] = src[i];
	dest[destlen + i] = '\0';

	return (dest);
}

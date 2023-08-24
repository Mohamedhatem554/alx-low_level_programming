#include "main.h"


/**
 * _strlen - entry point
 * @s: char
 * Return: l
*/
int _strlen(char *s)
{
	int l;

	for (l = 0; *s != '\0'; s++)
	{
		l++;
	}
	return (l);
}

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

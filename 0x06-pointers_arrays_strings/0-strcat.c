#include "main.h"

/**
 * _strcat - entry point
 * @dest: char
 * @src: char
 * Return: dest
*/
int _strlen(char *s);

char *_strcat(char *dest, char *src)
{
	int destlen = _strlen(dest);
	int i;

	for (i = 0; src[i] != '\0'; i++)
	dest[destlen + i] = src[i];
	dest[destlen + i] = '\0';

	return (dest);
}

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

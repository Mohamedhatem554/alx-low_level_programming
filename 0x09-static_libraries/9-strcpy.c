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

	i = 0;

	while (src[i] != '\0')
	{

		dest[i] = src[i];
		i++;

	}
	dest[i] = src[i];

	return (dest);
}

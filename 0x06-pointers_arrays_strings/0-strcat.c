#include "main.h"


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


int _strlen(char *s)
{
	int l;

	for (l = 0; *s != '\0'; s++)
	{
		l++;
	}
	return (l);
}

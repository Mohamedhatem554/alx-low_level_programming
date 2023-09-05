#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - entry point
 * @str: char
 * Return: Null
*/
char *_strdup(char *str)
{
	unsigned int i;
	char *newstr = NULL;
	int n;

	if (str == NULL)
	return (NULL);

	for (n = 0; str[n] != '\0'; n++)
	;
	newstr = (char *)malloc(n + 1 * sizeof(char));
	if (newstr != NULL)
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			newstr[i] = str[i];
		}
	}
	else
	return (NULL);
	newstr[i] = '\0';
	return (newstr);

}

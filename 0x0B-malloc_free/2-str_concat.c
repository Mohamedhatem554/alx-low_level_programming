#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - entry point
 * @s1: char
 * @s2: char
 * Return: newstr
*/
char *str_concat(char *s1, char *s2)
{
	char *newstr = NULL;
	unsigned int i;
	int i2;
	int n1;
	int n2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (n1 = 0; s1[n1] != '\0'; n1++)
	;
	for (n2 = 0; s2[n2] != '\0'; n2++)
	;
	newstr = (char *)malloc((n1 + n2 + 1) * sizeof(char));
	if (newstr == NULL)
	return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
	newstr[i] = s1[i];
	for (i2 = 0; s2[i2] != '\0'; i++)
	{
		newstr[i] = s2[i2];
		i2++;
	}
	return (newstr);
}

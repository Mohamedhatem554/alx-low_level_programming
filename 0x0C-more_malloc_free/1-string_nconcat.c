#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - entry point
 * @s1: char
 * @s2: char
 * @n: int
 * Return: to the pointer
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	int l1, l2, sign = n;
	int c1, c2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (l1 = 0; s1[l1] != '\0'; l1++)
	;
	for (l2 = 0; s2[l2] != '\0'; l2++)
	;

	if (sign >= l2)
	{
		sign = l2;
		p = malloc(sizeof(char) * (l1 + l2 + 1));
	}
	else
	p = malloc(sizeof(char) * (l1 + n + 1));

	if (p == NULL)
	return (NULL);

	for (c1 = 0; c1 < l1; c1++)
	{
		p[c1] = s1[c1];
	}
	for (c2 = 0; c2 < sign; c2++)
	{
		p[c1] = s2[c2];
		c1++;
	}
	p[c1] = '\0';

		return (p);

}

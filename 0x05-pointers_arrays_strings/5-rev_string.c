#include "main.h"

void rev_string(char *s)
{
	int c, i, j;
	char *a, aux;

	c = 0;
	
	while (s[c] != '\0')
	{
		c++;
	}

	for (j = 1; j < c; j++)
	{
		a++;
	}

	for (i = 0; i < (c / 2); i++)
	{
		aux = s[i];
		s[i] = *a;
		*a = aux;
		a--;
	}
}

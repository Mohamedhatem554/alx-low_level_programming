#include "main.h"

void rev_string(char *s)
{
	int c, i;
	char *a, aux;

	c = 0;
	
	while (s[c] != '\0')
	{
		c++;
	}

	a = c - 1;

	for (i = 0; i < (c / 2); i++)
	{
		aux = s[i];
		s[i] = *a;
		*a = aux;
		a--;
	}
}

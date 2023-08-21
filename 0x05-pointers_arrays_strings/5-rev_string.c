#include "main.h"

void rev_string(char *s)
{
	int c, i, j;
	char a;

	c = 0;
	
	while (s[c] != '\0')
	{
		c++;
	}

	j = c - 1;

	for (i = 0; i <= c; i++)
	{
		s[i] = a[j];
		j--;
	}
}

#include "main.h"

void rev_string(char *s)
{
	int c, i, j;
	char a[1000];

	c = 0;
	a = s;
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

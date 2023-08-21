#include "main.h"

void rev_string(char *s)
{
	int c, i, j;
	char rev[1000];

	c = 0;
	while (s[c] != '\0')
	{
		c++;
	}

	j = c - 1;

	for (i = 0; i < c; i++)
	{
		rev[i] = s[j];
		j--;
	}
}

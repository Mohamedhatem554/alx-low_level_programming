#include "main.h"

void rev_string(char *s)
{
	int c, i, j;
	char rev[1000], str[1000];

	c = 0;
	s = str;
	
	while (s[c] != '\0')
	{
		c++;
	}

	j = c - 1;

	for (i = 0; i <= c; i++)
	{
		rev[i] = str[j];
		j--;
		s[i] = rev[i];
	}
}

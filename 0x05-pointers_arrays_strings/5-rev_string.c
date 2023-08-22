#include "main.h"

/**
 * rev_string - entry point
 * @s: number
*/
void rev_string(char *s)
{
	int i, k, tmp, j;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	k = 0;
	j = i;
	i--;
	while (k < j / 2)
	{
		tmp = s[k];
		s[k] = s[i];
		s[i] = tmp;
		i--;
		k++;
	}
}

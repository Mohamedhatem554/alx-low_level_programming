#include <stdio.h>

/**
 * main - entry point
 * Return: 0 success
*/
int main()
{
	int i, s;

	s = 0;
	for (i = 0; i <= 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
		{
			s += i;
		}

	}
			printf("%d", s);
			printf("\n");s
			return (0);
}
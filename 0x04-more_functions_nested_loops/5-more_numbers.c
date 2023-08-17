#include <stdio.h>
#include "main.h"

/**
 * more_numbers - entry point
 * Return: Nothing
*/
int main()
{
	int i, n;

	for (i = 0; i < 10; i++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n > 9)
			{
				putchar(n / 10 + '0');
			}
		putchar(n % 10 + '0');

		}
		putchar('\n');
	}
}

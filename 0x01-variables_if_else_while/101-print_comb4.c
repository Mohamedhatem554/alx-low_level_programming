#include <stdio.h>

/**
 * main - print numbers
 * Return: 0 always.
*/
int main(void)
{
	int a, b, c;

	for (a = 0; a < 10; a++)
	{
	   for (c = a + 1; c <=9; c++)
	   {

		for (b = c + 1; b <= 9; b++)
		{
			putchar(a + '0');
			putchar(c + '0');
			putchar(b + '0');

			if (a < 7 || b < 9 || c < 8)
			{
				putchar(',');
				putchar(' ');
			}

		}
	   }
	}
	putchar('\n');
	return (0);
}


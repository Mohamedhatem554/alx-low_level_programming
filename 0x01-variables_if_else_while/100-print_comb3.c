#include <stdio.h>

/**
 * main - print double numbers
 * Return: 0 always.
*/
int main()
{
	int a, b;
	
	for (a = 0; a < 10; a++)
	{
		for (b = a + 1; b < 10; b++)
		{
			putchar(a + '0');
			putchar(b + '0');

			if (a < 8 || b < 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}


	putchar('\n');
	return 0;
}
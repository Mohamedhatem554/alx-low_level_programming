#include <stdio.h>
#include "main.h"

/**
 * print_number - entry point
 * @n: number to be print
*/
void print_number(int n)
{
	int i;

	i = n;
	 if (i <= 9)
    {
        _putchar(i + '0');
    }
	if (i == 0)
	{
		_putchar(i + '0');
	}
	if (i < 0)
	{
		_putchar('-');
		_putchar(i * -1 + '0');
	}
	if (i > 9 && i < 99)
	{
		_putchar(i / 10 + '0');
		_putchar(i % 10 + '0');
	}
	if (i > 99 && i < 999)
	{
		_putchar(i / 100 + '0');
		i = i / 10;
		_putchar(i % 10 + '0');
		i = n;
		_putchar(i % 10 + '0');
	}
	if (i > 999 && i < 9999)
		{
			_putchar(i / 1000 + '0');
			i = i / 100;
			_putchar(i % 10 + '0');
			i = n;
			i = i / 10;
			_putchar(i % 10 + '0');
			i = n;
			_putchar(i % 10 + '0');
		}
}

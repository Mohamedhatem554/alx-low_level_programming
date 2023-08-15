#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - entry point
 * @i: number to be checked
 * Return: Lastdigit
*/
int print_last_digit(int i)
{
	int lastdigit;

	lastdigit = i % 10;

	if (lastdigit < 0)
	{
		lastdigit = lastdigit * -1;
	}
	_putchar(lastdigit + '0');

	return (lastdigit);
}

#include "main.h"

/**
 * print_rev - entry point
 * @s: reversed
 * Return: Nothing
*/
void print_rev(char *s)
{
	int c;

	c = 0;

	while (s[c] != '\0')
	{
		c++;
	}

	for (c -= 1; c >= 0; c--)
	{
		_putchar(s[c]);
	}
	_putchar('\n');
}

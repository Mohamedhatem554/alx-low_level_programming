#include "main.h"

/**
 * puts_half - entry point
 * @str: string
 * Return: Nothing
*/
void puts_half(char *str)
{
	int c, i;

	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	for (c = i / 2; str[c] != '\0'; c++)
	{
		_putchar(str[c]);
	}
}

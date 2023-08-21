#include "main.h"

void print_rev(char *s)
{

    for (*s -= '\0'; *s >= s[0]; s--)
	{
		_putchar(*s);
	}
	_putchar('\n');
}
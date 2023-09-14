#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - print numbers
 * @n: int
 * @separator: char
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int done;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{

		done = va_arg(args, int);

		printf("%d", done);

		if (separator != NULL && i != n - 1)
		{
		printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}

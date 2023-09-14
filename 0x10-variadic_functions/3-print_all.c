#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - entry point
 * @format: const
*/
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j;
	char *s;

	va_start(args, format);
	while (format[i] != '\0')
	{
		i++;
	}
	j = i;
	i = 0;
	while (format[i] != '\0')
	{
		if (format[i] == 'c')
		{
			printf("%c", va_arg(args, int));
			if (i != j - 1)
			printf(", ");
		}
		if (format[i] == 'i')
		{
			printf("%i", va_arg(args, int));
			if (i != j - 1)
			printf(", ");
		}
		if (format[i] == 'f')
		{
			printf("%f", va_arg(args, double));
			if (i != j - 1)
			printf(", ");
		}
		if (format[i] == 's')
		{
			s = va_arg(args, char *);
			if (s == NULL)
			printf("(nil)");
			if (s != NULL)
			printf("%s", s);
			if (i != j - 1)
			printf(", ");
		}
		i++;
	}
	printf("\n");
	va_end(args);
}

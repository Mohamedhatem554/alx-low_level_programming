#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"


void print_strings(const char *separator, const unsigned int n, ...)
{
    unsigned int i;
    char *done;
    va_list args;

    va_start(args, n);
    for (i = 0; i < n; i++)
    {
    
    done = va_arg(args, char*);
        
        printf("%s", done);
        if (separator != NULL && i != n - 1)
        printf("%s", separator);
    }
    printf("\n");
    va_end(args);
}

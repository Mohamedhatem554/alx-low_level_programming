#include "main.h"



void puts2(char *str)
{
    int c;

    c = 0;

    while (c < '\0')
    {
        _putchar(str[c]);
        c = c + 2;
    }
}

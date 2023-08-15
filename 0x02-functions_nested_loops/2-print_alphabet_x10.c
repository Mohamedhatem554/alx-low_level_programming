#include <stdio.h>
#include "main.h"


void print_alphabet_x10(void)
{
    char ch;
    int loop;
    
    for (loop = 0; loop <= 9; loop++)
    {
        for (ch = 'a'; loop <= 'z'; ch++)
        {
            _putchar(ch);
        }
        _putchar('\n');
    }
}
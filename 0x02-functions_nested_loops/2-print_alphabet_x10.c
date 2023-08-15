#include <stdio.h>
#include "main.h"


void print_alphabet_x10(void)
{
    char ch;
    int loop;
    
    for (ch = 'a'; ch <= 'z'; ch++)
    {
        for (loop = 0; loop <= 9; loop++)
        {
            _putchar(ch);
        }
    }
}
#include "main.h"

/**
 * print_sign - entry point
 * @n: Number to be checked
 * Return: 1 if n positive
*/
int print_sign(int n)
{
    if (n > 0)
    {
        _putchar('+');
        return (1);
    }
    else if (n < 0)
    {
        _putchar('-');
        return (-1);
    }
    else 
    {
        _putchar(48);
        return (0);
    }
}


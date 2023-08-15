#include "main.h"

/**
 * _abs - entry point
 * Return: abs if i is negative
*/
int _abs(int)
{
    int i;

    int abs;
    
    if (i < 0)
    {
        abs = i * -1;
        return(abs);
    }
    return (i);
}
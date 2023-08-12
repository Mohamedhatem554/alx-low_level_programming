#include <stdio.h>

/**
 * main - main Function
 *
 * Return: 0
 */
int main(void)
{
int i, c;

i = 48;
c = 97;
while (i <= 57)
{
putchar(i);
i++;
}
while (c <= 102)
{
putchar(c);
c++;
}
putchar('\n');
return (0);
}

#include <stdio.h>

/**
 * main - Prints the lowercase alphabet in reverse.
 *
 * Return: Always 0.
 */
int main(void)
{
int ch;

ch = 122;
while (ch >= 97)
{
putchar(ch);
ch--;
}
putchar('\n');
return (0);
}

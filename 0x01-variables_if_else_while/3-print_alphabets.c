#include <stdio.h>

/**
 * main - main
 * Description: prints the alphabet in lowercase, and then in uppercase
 * Return: 0 
*/
int main(void)
{
int a, A;

a = 97;
A = 65;

while (a < 123, A < 91)
{
putchar(a);
putchar(A);
a++;
A++;
}
putchar("\n");
return (0);
}
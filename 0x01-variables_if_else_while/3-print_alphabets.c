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

while (a < 123)
{
putchar(a);
a++;
}
while (A < 91)
{
putchar(A);
A++;
}
putchar('\n');
return (0);
}

#include <stdio.h>
/**
  * main - prints out size
  * Return: 0
**/
int main(void)
{
	printf(sizeof(char), "Size of a char: %d byte(s)\n");
	printf(sizeof(int), "Size of an int: %d byte(s)\n");
	printf(sizeof(long), "Size of a long int: %d byte(s)\n");
	printf(sizeof(long long), "Size of a long long int: %d byte(s)\n");
	printf(sizeof(float), "Size of a float: %d byte(s)\n");
	return (0);
}

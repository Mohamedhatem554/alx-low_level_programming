#include <stdio.h>
#include <unistd.h>

/**
 * main - write command
 * return: 1
*/
int main()
{


	write(2, "and that piece of art is useful - Dora Korpar, 2015-10-19\n", 58);

	return (1);
}
#include "main.h"
#include <stdio.h>

/**
 * main - main entry point
 * Return: 0 always
*/
int main(void)
{

	

	void print_alphabet(void)
	{
		char ch;
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);

		}
		_putchar('\n');
	}
	return 0;
}
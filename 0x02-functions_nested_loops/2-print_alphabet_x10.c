#include <stdio.h>
#include "main.h"


void print_alphabet_x10(void)
{
	int ch;
	int loop;

	for (loop = 0; loop <= 9; loop++)
	{
		for (ch = 97; ch <= 122; ch++)
		{
			putchar(ch);

		}
	   putchar('\n');

	}


}



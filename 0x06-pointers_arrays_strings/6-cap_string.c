#include "main.h"

/**
 * cap_string - entry point
 * @str: string
 * Return: (str) if success
*/
char *cap_string(char *str)
{
	int n;

	n = 0;
	while (str[n] != '\0')
	{
		if (str[n] == ' '
		|| str[n] == '\t'
		|| str[n] == '\n'
		|| str[n] == ','
		|| str[n] == ';'
		|| str[n] == '.'
		|| str[n] == '!'
		|| str[n] == '?'
		|| str[n] == '"'
		|| str[n] == '('
		|| str[n] == ')'
		|| str[n] == '{'
		|| str[n] == '}'
		)
		{

			if (str[n + 1] >= 'a' && str[n + 1] <= 'z')
		{
			str[n + 1] = str[n + 1] - 32;
		}
		}

		n++;
	}
	return (str);
}

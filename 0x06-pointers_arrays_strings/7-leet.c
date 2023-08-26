#include "main.h"

/**
 * leet - entry point
 * @str: char
 * Return: str if success
*/
char *leet(char *str)
{
	char l[] = "aAeEoOtTlL";
	char num[] = "4433007711";
	int count, i;

count = 0;
	while (str[count] != '\0')
	{
	i = 0;
		while (i < 10)
		{
			if (str[count] == l[i])
			{
				str[count] = num[i];
			}
			i++;
		}
	count++;
	}
	return (str);
}

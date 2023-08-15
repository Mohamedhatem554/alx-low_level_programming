#include "main.h"

/**
 * _isalpha - entry point
 * @c: character to be checked
 * Return: 1 if success
*/
int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else if (c >= 97 && c <= 122)
	{
	return (1);
	}
	return (0);
}

#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_file - create file
 * @filename: filename
 * @text_content: text
 * Return: 1
*/
int create_file(const char *filename, char *text_content)
{
	int i, file;

	if (filename == NULL)
	return (-1);

	if (text_content == NULL)
	text_content = "";

	for (i = 0; text_content[i] != '\0'; i++)
	;

	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file == -1)
	return (-1);

	write(file, text_content, i);
	return (1);

}

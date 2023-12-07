#include "main.h"

/**
 * append_text_to_file - add text
 * @filename: file name
 * @text_content: text
 * Return: (1);
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int count, file;

	if (filename == NULL)
	return (-1);
	if (text_content == NULL)
	text_content = "";

	for (count = 0; text_content[count] != '\0'; count++)
	;
	file = open(filename, O_WRONLY | O_APPEND);

	if (file == -1)
	return (-1);
	write(file, text_content, count);
	return (1);
}

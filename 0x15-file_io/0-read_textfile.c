#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: the file
 * @letters: number of characters
 * Return: write
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t op, bytes, wr;
	char *text;

	text = malloc(letters);

	if (text == NULL)
	return (0);
	if (filename == NULL)
	return (0);

	op = open(filename, O_RDONLY);

	if (op == -1)
	{
		free(text);
		return (0);
	}

	bytes = read(op, text, letters);
	wr = write(STDOUT_FILENO, text, bytes);

	close(op);
	return (wr);
}

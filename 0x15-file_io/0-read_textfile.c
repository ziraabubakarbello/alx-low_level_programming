#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file to  be read
 * @letters: number of letters to be read
 * Return: (w) actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *tmp;
	ssize_t fp;
	ssize_t w;
	ssize_t t;

	fp = open(filename, O_RDONLY);
	if (fp == -1)
		return (0);
	tmp = malloc(sizeof(char) * letters);
	t = read(fp, tmp, letters);
	w = write(STDOUT_FILENO, tmp, t);

	free(tmp);
	close(fp);
	return (w);
}

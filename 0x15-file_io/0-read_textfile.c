#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: A pointer to the name of the file
 * @letters: The number of letters the func should read and
 * print
 *
 * Return: If the func fails or filename is NULL - 0
 * else - the actual number  of bytes the func can read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	size_t o, r, w;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	if ((signed)o == -1 || (signed)r == -1 || (signed)w == -1 || w != r)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(o);

	return (w);
}

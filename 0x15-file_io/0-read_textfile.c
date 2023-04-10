#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - a function that reads a text file and
 * prints it to POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters the function should read and print.
 *
 * Return: the actual number of letters it could read and print, 0 if the
 * file cannot be open, read or written and also when filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t x, y, z;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	x = open(filename, O_RDONLY);
	y = read(x, buffer, letters);
	z = write(STDOUT_FILENO, buffer, y);

	if (x == -1 || y == -1 || z == -1 || z != y)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(x);

	return (z);
}

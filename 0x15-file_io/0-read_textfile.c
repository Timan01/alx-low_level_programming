#include "main.h"
#include <stdlib.h>

/**
 * read_textfile -a function that reads a text file
 * and prints it to POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @letters: The number of character a function should read and print.
 *
 * Return: actual number of letters it can read and print, 0 when file
 * cannot be opened, read and written and when filename is NULL.
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

#include "main.h"

/**
 * read_textfile - function that reads a text file and prints it to the
 * POSTX standard output
 * @filename: a pointer to the name of the file
 * @letters: the number of letters the function should read and print
 *
 * Return: return 0 if file can not be opned or read, 0 if filename is NULL
 * and 0 if write fails or does not write the expected amount of bytes.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t x, y, z;
	char *buffer;

	if (filename == NULL)
		return (0);

	x = open(filename, O_RDONLY);

	if (x == -1)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
		return (0);
	y = read(x, buffer, letters);

	if (y == -1)
	{
		free(buffer);
		return (0);
	}
	z = write(STDOUT_FILENO, buffer, y);

	if (x == -1 || z != y)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(x);

	return (y);
}

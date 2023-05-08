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
	if (filename == NULL)
	{
		return (0);
	}

	int fd = open(filename, 0_RDONLY);

	if (fd == -1)
	{
		return (0);
	}
	char *buffer = (char *) malloc(sizeof(char) * (letters + 1));

	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}
	ssize_t bytes_read = read(fd, buffer, letters);

	if (bytes_read == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	buffer[bytes_read] = '\0';
	ssize_t bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

	if (bytes_written == -1 || bytes_written != bytes_read)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	free(buffer);
	close(fd);

	return (bytes_read);
}

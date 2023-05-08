#include "main.h"
#include <fcntl.h>

/**
 * read_textfile - Reads a text file and prints it to the POSIX stdout.
 * @filename: Name of the file.
 * @letters: Number of letters to read and print.
 *
 * Return: If the function fails or filename is NULL - 0.
 * Otherwise - the actual number of bytes function could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, read_result, write_result;
	char *buffer;

	if (!filename)
		return (0);

	buffer = malloc(sizeof(char) * (letters + 1));
	if (!buffer)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buffer);
		return (0);
	}

	read_result = read(fd, buffer, letters);
	if (read_result == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	buffer[read_result] = '\0';

	write_result = write(STDOUT_FILENO, buffer, read_result);
	if (write_result == -1 || (ssize_t)read_result != write_result)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	free(buffer);
	close(fd);
	return (read_result);
}


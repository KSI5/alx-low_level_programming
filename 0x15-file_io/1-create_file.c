#include "main.h"
#include <fcntl.h>

/**
 * create_file - creates a file with specific permissions and writes
 *               some content to it
 *
 * @filename: name of the file to create
 * @text_content: content to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, write_result, length = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[length])
			length++;

		write_result = write(fd, text_content, length);
		if (write_result == -1 || write_result != length)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}


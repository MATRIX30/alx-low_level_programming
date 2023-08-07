#include "main.h"
#include <stdlib.h>
#include <aio.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
/**
* create_file - function to create file and write content to it
* @filename: name of file to be created
* @text_content: content to write to file
* Return:  1 on success -1 on failure
*/

int create_file(const char *filename, char *text_content)
{
	size_t bytes_written;
	int fd;

	if (filename == NULL)
	{
		return (-1);
	}

	/* Handling case where text_content == NULL */
	if (text_content == NULL)
	{
		fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 400);
		if (fd == -1)
		{
			return (-1);
		}
		close(fd);
		return (1);
	}

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 400);
	if (fd == -1)
	{
		return (-1);
	}

	bytes_written = write(fd, text_content, strlen(text_content));
	if (bytes_written != strlen(text_content))
	{
		return (-1);
	}
	close(fd);
	return (1);
}

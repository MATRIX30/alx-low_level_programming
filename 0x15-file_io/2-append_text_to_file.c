#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
/**
* append_text_to_file - this function appends text to file
* @filename: name of the file
* @text_content: content to append to file
* Return: 1 on success and -1 otherwise
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	size_t written_bytes;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		return (1);
	}
	fd = open(filename, O_APPEND);
	if (fd == -1)
	{
		return (-1);
	}
	written_bytes = write(fd, text_content, strlen(text_content));
	if (written_bytes != strlen(text_content))
	{
		return (-1);
	}
	close(fd);
	return (1);
}

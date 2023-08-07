#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
/**
* read_textfile - function to read a text file
* @filename: the name of the file to be read
* @letters: the number of letters to be read from the file
* Return: the number of letters it could read and print
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd;
	ssize_t write_len;
	ssize_t read_code;
	char *buffer = NULL;

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	if (filename == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	read_code = read(fd, buffer, letters);
	if (read_code == -1)
	{
		return (0);
	}
	write_len = write(STDOUT_FILENO, buffer, letters);
	if (write_len == -1)
	{
		return (0);
	}
	if (write_len != read_code)
	{
		return (0);
	}
	free(buffer);
	close(fd);
	return (write_len);
}

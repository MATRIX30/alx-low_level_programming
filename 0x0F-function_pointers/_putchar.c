#include <unistd.h>
/**
* _putchar - main function to print a character on stdout
* @c: character to print
* Return: number of bytes writen
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}

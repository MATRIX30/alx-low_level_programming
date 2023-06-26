#include <unistd.h>
/**
* _putchar - prints the character to stdout
* @c: param
* Return: integer number of bytes written
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}

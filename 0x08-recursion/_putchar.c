#include <unistd.h>
/**
* _putchar - prints a charater
* @c: character to be printed
* Return: number of bytes written to std output
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}

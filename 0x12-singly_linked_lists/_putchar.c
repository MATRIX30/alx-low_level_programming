#include <unistd.h>
/**
* _putchar - function to print a character
* @c: character to print
* Return: int number of bytes printed
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}

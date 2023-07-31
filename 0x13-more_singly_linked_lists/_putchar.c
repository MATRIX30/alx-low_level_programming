#include <unistd.h>
/**
* _putchar - This function prints a character
* @c: character to be printed
* Return: number of bytes written
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}

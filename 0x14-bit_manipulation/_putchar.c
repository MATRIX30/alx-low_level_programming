#include <unistd.h>
/**
* _putchar - function to print a character
* @c: character to be printed
* Return: number of characters printed
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}

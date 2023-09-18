#include <unistd.h>
/**
* _putchar - main function
* @c: main param
* Return: number of bytes written
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}

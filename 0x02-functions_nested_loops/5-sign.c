#include "main.h"
/**
* print_sign - this function retuns a vaue and prints the sign
* of its parameter n if it is pos,neg or eq zero
* @n: this parameter is the number we want to check its sign
* Return: 0, 1 or -1
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}

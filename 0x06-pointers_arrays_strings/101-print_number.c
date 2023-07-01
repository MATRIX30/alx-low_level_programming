#include "main.h"

/**
* print_number - a number
* @n: param
* Return: a pinter
*/

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
	}
	if (n / 10)
	{
		print_number(n / 10);
	}
	_putchar(n % 10 + '0');
}

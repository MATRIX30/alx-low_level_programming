#include "main.h"
/**
* print_last_digit - prints the last digit fo c
* @c: the int value for which we ant to print its last digit
* Return: The last value of c
*/

int print_last_digit(int c)
{
	int absc;
	int rem;
	int base;

	if (c >= 0)
	{
		absc = c;
	}
	else
	{
		absc = -1 * c;
	}
	rem = absc % 10;
	base = 48;

	base += rem;
	_putchar(base);
	return (rem);
}

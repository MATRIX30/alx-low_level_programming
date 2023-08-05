#include "main.h"

/**
* int_to_char - convert int to char
* @n: integer to be converted to char
* @Return: char representation for n
*/

char int_to_char(int n)
{
	return (n + '0');
}

/**
* print_number
* @n: param
*/
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10 > 0)
		print_number(n / 10);
	_putchar(n % 10 + '0');
}

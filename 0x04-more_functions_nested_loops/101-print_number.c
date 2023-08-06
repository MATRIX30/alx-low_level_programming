#include "main.h"

/**
* print_number - convert int to char
* @n: integer to be converted to char
*/
void print_number(int n)
{
	unsigned int m;

	m = -n;
	if (n < 0)
	{
		_putchar('-');
	}
	else
	{
		m = n;
	}
	if (m / 10 > 0)
		print_number(m / 10);
	_putchar(m % 10 + '0');
}

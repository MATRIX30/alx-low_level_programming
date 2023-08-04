#include "main.h"
/**
* print_binary - function to print bin rep of int n
* @n: unsigned int n
*/

void print_binary(unsigned long int n)
{
	unsigned long int filter;

	filter = 1 << 31;
	while (filter > 0)
	{
		if (n & filter)
			_putchar('1');
		else
			_putchar('0');
		filter >>= 1;
	}
}

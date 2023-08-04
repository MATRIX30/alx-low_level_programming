#include "main.h"
/**
* print_binary - function to print bin rep of int n
* @n: unsigned int n
*/

void print_binary(unsigned long int n)
{
	unsigned long int filter;
	unsigned long int res;
	int count;

	filter = 1;
	res = 0;

	while (n > 0)
	{
		res <<= 1;
		if ((n & filter) == 1)
		{
			res |= filter;
		}
		n >>= 1;
		count++;
	}

	if (count == 0)
	{
		_putchar('0');
	}
	while (count > 0)
	{
		if ((res & filter) == 1)
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}
		res >>= 1;
		count--;
	}

}

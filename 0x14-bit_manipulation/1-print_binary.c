#include "main.h"
/**
* print_binary - function to print bin rep of int n
* @n: unsigned int n
*/

void print_binary(unsigned long int n)
{
	unsigned long int filter;
	int print_flag = 0;

	filter = 1 << 31;
	while (filter > 0)
	{
		if (n & filter)
		{
			_putchar('1');
			print_flag = 1;
		}
		else
		{
			if (print_flag)
			{
				_putchar('0');
			}
		}
		filter >>= 1;
	}
	if (filter == 0 && print_flag == 0)
	{
		_putchar('0');
	}
}

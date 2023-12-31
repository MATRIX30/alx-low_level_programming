#include "main.h"
/**
* print_binary - function to print bin rep of int n
* @n: unsigned int n
*/

void print_binary(unsigned long int n)
{
	unsigned long int filter;
	unsigned long int res;
	unsigned long int count;

	filter = 1;
	res = 0;
	count = 0;

	/* get the number and store it in a variable res*/
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
	/* print result in reverse order */
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

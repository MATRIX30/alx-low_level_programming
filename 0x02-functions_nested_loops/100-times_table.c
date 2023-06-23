#include "main.h"
#include <stdlib.h>
void print_times_table(int n);
/**
* print_times_table - prints out the 9 time table
* @n: this is the number of times table we wish to create
*/
void print_times_table(int n)
{
	int i = 0;
	int j = 0;
	int base = 48;
	int hund;
	int tent;
	int unit;
	int res;

	if ((n > 15) || (n < 0))
	{
		exit(0);
	}

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			res = i * j;
			unit = res % 10;
			tent = ((res - unit)  / 10) % 10;
			hund = (res - (tent * 10)) / 100;
			if (res > 99)
			{
				if (j > 0)
				{
					_putchar(',');
					_putchar(' ');
				}
				_putchar(hund + base);
				_putchar(tent + base);
				_putchar(unit + base);
			}
			else if (res > 9)
			{
				if (j > 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(tent + base);
				_putchar(unit + base);
			}
			else
			{
				if (j > 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(unit + base);
			}
		}
		_putchar('\n');
	}
}

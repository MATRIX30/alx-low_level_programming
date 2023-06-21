#include "main.h"

/**
* times_table - prints out the 9 time table
*/
void times_table(void)
{
	int i = 0;
	int j = 0;
	int base = 48;
	int tent;
	int unit;
	int res;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			res = i * j;
			if (res > 9)
			{
				unit = res % 10;
				tent = (res - unit) / 10;
				_putchar(tent + base);
				_putchar(unit + base);
			}
			else
			{
				res += base;
				unit = res;
				_putchar(unit);
			}
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}

#include "main.h"
/**
* more_numbers - prints numbers from 0-14 10 times
*/

void more_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		int j = 48;
		int k = 48;

		while (j <= 62)
		{
			if (j <= 57)
			{
				_putchar(j);
			}
			else
			{
				_putchar(49);
				_putchar(k);
				k++;
			}
			j++;
		}
	}
	_putchar('\n');
}

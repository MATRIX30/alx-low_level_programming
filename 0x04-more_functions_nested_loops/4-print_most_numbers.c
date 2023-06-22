#include "main.h"
/**
* print_most_numbers - prints numbers from 0-9 with _putchar
*/

void print_most_numbers(void)
{
	int i = 48;

	while (i >= 48 && i <= 57)
	{
		if (i != 50 && i != 52)
		{
			_putchar(i);
		}
		i++;
	}
	_putchar('\n');
}

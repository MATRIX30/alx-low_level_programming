#include "main.h"
/**
* print_numbers - prints numbers from 0-9 with _putchar
*/

void print_numbers(void)
{
	int i = 48;

	while (i >= 48 && i <= 57)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}

#include "main.h"
/**
* print_alphabet_x10 - This function
* prints the alphabet in small letters 10 times
* Return: 0 for SUCCESS
*/
void print_alphabet_x10(void)
{
	int i = 97;
	int j = 0;

	while (j < 10)
	{
		while (i <= 122)
		{
			_putchar(i);
			i++;
		}
		i = 97;
		_putchar('\n');
		j++;
	}
}

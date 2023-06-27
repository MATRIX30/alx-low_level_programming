#include "main.h"

/**
* puts_half - returns the lenght of a string
* @str: param
* Return: int of the length of s
*/

void puts_half(char *str)
{
	int count = 0;
	int i = 0;

	while (*(str + i) != '\0')
	{
		count += 1;
		i += 1;
	}

	count = count -1;
	if (count % 2 == 0)
	{
		i = count / 2;
	}
	else
	{
		i = (count - 1) / 2;
	}
	while (i <= count)
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}

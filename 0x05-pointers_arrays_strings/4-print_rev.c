#include "main.h"
#include <stddef.h>
/**
* print_rev - returns the lenght of a string
* @s: param
* Return: int of the length of s
*/

void print_rev(char *s)
{
	int count;
	int i = 0;

	count = 0;

	if (s == NULL)
	{
		count = 0;
	}
	else
	{
		while (*(s + i) != '\0')
		{
			count += 1;
			i += 1;
		}
	}

	while (count >= 0)
	{
		_putchar(*(s + count - 1));
		count--;
	}
	_putchar('\n');
}

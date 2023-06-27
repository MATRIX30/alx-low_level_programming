#include "main.h"
#include <stddef.h>
/**
* print_rev - returns the lenght of a string
* @s: param
* Return: int of the length of s
*/

void print_rev(char *s)
{
	int count = 0;
	int i = 0;

	while (*(s + i) != '\0')
	{
		count += 1;
		i += 1;
	}
	count = count -1;
	while (count >= 0)
	{
		_putchar(*(s + count));
		count--;
	}
	_putchar('\n');
}

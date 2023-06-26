#include "main.h"
#include <stddef.h>
/**
* rev_string - returns the lenght of a string
* @s: param
*/

void rev_string(char *s)
{
	int count;
	int i = 0;

	count = 0;

	char tmp[] = s;

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
		_putchar(*(s + count));
		count--;
	}
	_putchar('\n');

}

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

	i = 0;
	char temp[count];

	while (count >= 0)
	{
		temp[i] = *(s + count);
		count--;
		i++;
	}
	s = temp;
	_putchar('\n');
}

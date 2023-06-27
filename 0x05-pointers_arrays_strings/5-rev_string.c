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

	/* get length of string */
	while (*(s + i) != '\0')
	{
		count += 1;
		i += 1;
	}

	int index = count - 1;
	char temp[count + 1];

	temp[count] = '\0';
	/* storing the reverse string in temp */
	for (i = 0; i < count; i++)
	{
		temp[i] = *(s + index - i);
	}
	for (i = 0; i <= count; i++)
	{
		*(s + i) = temp[i];
	}
}

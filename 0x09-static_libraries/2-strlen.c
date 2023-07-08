#include "main.h"
#include <stddef.h>
/**
*_strlen - returns the lenght of a string
* @s: param
* Return: int of the length of s
*/

int _strlen(char *s)
{
	int count;
	int i = 0;

	count = 0;

	if (s == NULL)
	{
		return (count);
	}
	else
	{
		while (*(s + i) != '\0')
		{
			count += 1;
			i += 1;
		}
		return (count);
	}
}

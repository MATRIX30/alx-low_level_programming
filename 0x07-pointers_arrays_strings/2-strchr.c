#include <stddef.h>
#include "main.h"
/**
* _strchr - returns the pionter to the  first occurance of c in s
* @s: pointer to a string
* @c: character to look for in s
* Return: pointer to first c found in s or Null otherwise
*/

char *_strchr(char *s, char c)
{
	int i = 0;

	if ( c == '\0')
	{
		return (s+i);
	}

	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}
		i++;
	}
	return (NULL);
}

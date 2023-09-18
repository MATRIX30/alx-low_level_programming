#include "main.h"
#include <stddef.h>
/**
* _strpbrk - function locates the first occurance of string s
* @s: param source string
* @accept: param string to search
* Return: pointer to s
*/

char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j = 0;

	while (*(s + i) != '\0')
	{
		while (*(accept + j) != '\0')
		{
			if (*(s + i) == *(accept + j))
			{
				return (s + i);
			}
			j++;
		}
		i++;
		j = 0;
	}
	return (NULL);

}

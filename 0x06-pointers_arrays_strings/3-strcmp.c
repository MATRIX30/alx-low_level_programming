#include "main.h"
#include <string.h>

/**
* _strcmp - main
* @s1: param
* @s2: param
*Return: dest
*/

int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*(const unsigned char *)s1 - *(const unsigned char *)s2);
}

#include "main.h"
/**
* _memset - this function fills memory with n bytes of b
*            where b is the data and n the param
* @s: pointer to the memory to start filling form
* @b: characters to use to fill memory with
* @n: number of bytes to fill with
* Return: pionter to s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}

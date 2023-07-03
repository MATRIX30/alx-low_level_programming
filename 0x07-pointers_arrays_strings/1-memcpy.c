#include "main.h"
/**
* _memcpy - this function copies memory from one location to another
* @dest: destination pointer
* @src: source pointer
* @n: size of the bytes to copy
* Return: pointer to destination
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}

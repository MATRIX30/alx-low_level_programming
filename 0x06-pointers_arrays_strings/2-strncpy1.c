#include "main.h"

/**
* _strncpy - concatinates 2 strings up to the nth character
* @dest: destination param
* @src: source param
* @n: number of char param
* Return: character pointer
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int j;

	if (n == 0)
	{
		*(dest + i) = '\0';
		return (dest);
	}

	j = 0;

	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		*(dest + j) = *(src + j);
	}

	*(dest + j) = '\0';
	return (dest);
}

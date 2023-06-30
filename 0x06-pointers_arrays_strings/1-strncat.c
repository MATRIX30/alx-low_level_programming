#include "main.h"

/**
* _strncat - concatinates 2 strings up to the nth character
* @dest: destination param
* @src: source param
* @n: number of char param
* Return: character pointer
*/

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j;

	while (*(dest + i))
	{
		i++;
	}
	if (n == 0)
	{
		*(dest + i) = '\0';
		return (dest);
	}

	j = 0;

	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		*(dest + i) = *(src + j);
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}

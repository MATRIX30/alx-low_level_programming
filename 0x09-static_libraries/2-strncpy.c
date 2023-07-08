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
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}

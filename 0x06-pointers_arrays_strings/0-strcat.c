#include "main.h"
/**
* _strcat - concate function
* @dest: destination string
* @src: source string
* Return: returns a pointer to the destination string
*/

char *_strcat(char *dest, char *src)
{
	int i = 0;

	while (*dest)
	{
		dest++;
		i++;
	}

	while (*src)
	{
		*(dest + i) = *src;
		src++;
	}
	*(dest + i) = '\0';
	return (dest);
}

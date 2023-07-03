#include "main.h"
#include <stddef.h>
#include <string.h>
/**
* _strstr - find the first occurance of substring needle
* @haystack: main string
* @needle: substring to find
* Return: pointer to beginning of substring
*/

char *_strstr(char *haystack, char *needle)
{
	int len = strlen(needle);

	while (*haystack)
	{
		if (!memcmp(haystack++, needle, len))
		{
			return (haystack - 1);
		}
		return (NULL);
	}
}

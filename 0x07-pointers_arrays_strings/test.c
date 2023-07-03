#include "main.h"
#include <stddef.h>
/**
* _strstr - find the first occurance of substring needle
* @haystack: main string
* @needle: substring to find
* Return: pointer to beginning of substring
*/

char *_strstr(char *haystack, char *needle)
{
	int len = 0;
	int i, j;
	int res = 0;
	int count = 0;

	while (*(needle + len) != '\0')
	{
		len++;
	}
	for (i = 0; *(haystack + i + len - 1) != '\0'; i++)
	{
		for (j = 0; j < len; j++)
		{
			if (*(haystack + i + j) != *(needle + j))
			{
				res = 0;
				continue;
			}
			res = 1;
			count++;
			if (j == len - 1 && res == 1 && count == len)
			{
				return ((haystack + i));
			}
		}
		j = 0;
		count = 0;
	}
	return (NULL);
}

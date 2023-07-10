#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* _strdup - function that returns a pointer to a newly allocated space
* @str: size of array
* Return: Null if size 0 else return pointer to the string str
*/

char *_strdup(char *str)
{
	char *new_str;
	unsigned int size;
	unsigned int i;

	size = strlen(str);
	if (str == NULL)
	{
		return (NULL);
	}
	new_str = malloc((size + 1) * sizeof(char));
	if (new_str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= size; i++)
	{
		new_str[i] = str[i];
	}
	return (new_str);
}

#include <stdio.h>
#include <stdlib.h>

/**
* create_array - creates an array of char initalized with specific char
* @size: size of array
* @c: characters to be initialized with
* Return: Null if size 0 else return pointer to array
*/

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	arr = malloc(size * sizeof(char));
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}

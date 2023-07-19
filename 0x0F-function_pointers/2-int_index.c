#include "function_pointers.h"
#include <stdlib.h>
/**
* int_index - function to search for the index of an integer
* @array: array
* @size: size of array
* @cmp: pointer to compare function
* Return: integer
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
	{
		exit(EXIT_FAILURE);
	}

	if (size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}

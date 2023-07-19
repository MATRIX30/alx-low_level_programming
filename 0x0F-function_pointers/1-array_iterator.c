#include "function_pointers.h"
/**
* array_iterator - functiont to apply function iteratively
* @array: the pointer to the array of integers
* @size: the size of the array
* @action: pointer to the function to apply
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < size; i++)
	{
		action(*(array + i));
	}
}

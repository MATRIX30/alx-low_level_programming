#include "search_algos.h"
/**
 * linear_search - Algorithm for linear search
 * @array: the array to be searched
 * @size: the size of the array
 * @value: the value to be searched
 * Return:  the element if found or -1 otherwise
*/
int linear_search(int *array, size_t size, int value)
{
	size_t index = 0;

	if (array == NULL)
		return (-1);
	while (index < size)
	{
		printf("Value checked array[%ld] = [%d]\n", index, array[index]);
		if (array[index] == value)
		{
			return (index);
		}
		index = index + 1;
	}
	return (-1);
}

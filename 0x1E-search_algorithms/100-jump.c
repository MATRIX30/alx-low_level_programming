#include "search_algos.h"
#include <math.h>
/**
 * jump_search - performs jump search on an array
 * @array: array to perform jump search on
 * @size: size of the array
 * @value: the value to be searched
 * Return: index of first element if found -1  otherwise
*/
int jump_search(int *array, size_t size, int value)
{
	size_t jump = (int)sqrt(size);
	size_t prev = 0;
	size_t i;

	if (array == NULL)
		return (-1);

	while (array[prev] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);

		if (prev + jump < size)
			prev += jump;
		else
			break;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", prev - jump, prev);

	for (i = prev - jump; i <= prev && i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}

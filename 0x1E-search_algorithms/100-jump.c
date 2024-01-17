#include "search_algos.h"
#include <math.h>
/**
 * jump_search - performs jump search on an array
 * @array: array to perform jump search on
 * @size: size of the array
 * @value: the value to be searched
 * Return: index of first element if found -1  otherwise
*/
int jump_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value)
{
	size_t start, stop, i;
	int jump;
	size_t dif = 0;

	if (array == NULL)
	{
		return (-1);
	}

	jump = (int)sqrt(size);
	stop = jump;
	start = 0;

	/* Identify the block where value can be found in */
	printf("Value checked array[%ld] = [%d]\n", start, array[start]);
	while (array[stop] < value && start < size - 1)
	{
		/*printf("Value checked array[%ld] = [%d]\n",stop, array[stop]);*/
		printf("Value checked array[%ld] = [%d]\n", stop, array[stop]);
		/* check if jump point is still less than value and start is not  n-1*/
		/*set start to stop and update stop by jump*/

		start = stop;
		stop = stop + jump;

		/* if stop > n -1 set n to the end element in the list*/
		if (stop > size - 1)
		{
			dif = stop - size + 1;
			stop = size - 1;
			break;
		}
	}

	printf("Value found between indexes [%ld] and [%ld]\n", start, stop + dif);
	/* perform Linear search on that block */
	for (i = start; i <= stop ; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}

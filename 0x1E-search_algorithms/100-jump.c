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
	size_t start, stop;
	int jump;

	if (array == NULL)
	{
		return (-1);
	}

	jump = (int)sqrt(size);
	stop = 0;

	while (stop < size)
	{
		start = stop;
		stop = stop + jump;


		printf("Value checked array[%ld] = [%d]\n", start, array[start]);
		if (array[stop] >= value)
		{
			/* perform linear search */


			printf("Value found between indexes [%ld] and [%ld]\n", start, stop);
			while (start <= stop)
			{
				/*printf("Start: %ld-- stop: %ld\n",start, stop); */
				printf("Value checked array[%ld] = [%d]\n", start, array[start]);
				if (array[start] == value)
				{

					return (start);
				}
				start = start + 1;
			}
			return (-1);
		}
	}
	if (stop - size > 0)
	{
		printf("Value found between indexes [%ld] and [%ld]\n", start, stop);
		while (start < size)
		{
			/*printf("Start: %ld-- stop: %ld\n",start, stop); */
			printf("Value checked array[%ld] = [%d]\n", start, array[start]);
			if (array[start] == value)
			{

				return (start);
			}
			start = start + 1;
		}
	}
	return (-1);
}

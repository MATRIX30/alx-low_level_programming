#include "search_algos.h"
/**
 * interpolation_search - function to perform interpolation search
 * @array: array to search
 * @size: size of the array
 * @value: value to search for in array
 * Return: returns the first index of the element if found -1 otherwise
*/
int interpolation_search(int *array, size_t size, int value)
{
	size_t probe, low, high;

	if (array == NULL || size == 0)
	{
		return (-1);
	}

	low = 0;
	high = size - 1;

	while (low <= high)
	{
		probe = low + (
			(
				(double)(high - low) / (array[high] - array[low])) * (value - array[low])
			);

		if (probe >= size)
		{
			printf("Value checked array[%ld] is out of range\n", probe);
			return (-1);
		}
		printf("Value checked array[%ld] = [%d]\n", probe, array[probe]);
		if (array[probe] == value)
		{
			return (probe);
		}
		if (array[probe] < value)
		{
			low = probe + 1;
		}
		else
		{
			high = probe - 1;
		}
	}
	return (-1);
}

#include "search_algos.h"
/**
 * print_array - function to print an array
 * @array: the array to be printed
 * @start: starting index of list
 * @stop: stop index of list
*/

void print_array(int *array, size_t start, size_t stop);
void print_array(int *array, size_t start, size_t stop)
{
	printf("Searching in array:");
	while (start <= stop)
	{
		if (start == stop)
		{
			printf(" %d\n", array[stop]);
		} else
		{
			printf(" %d,", array[start]);
		}
		start = start + 1;
	}
}
/**
 * binary_search_with_low_high - function to perform binary search on an array
 * @array: a sorted array of integers to be searched
 * @low: the lower index to start search from
 * @high: the high index to end search at
 * @value: value to search for in array
 * Return: return index of where element is found or -1 otherwise
*/
int binary_search_with_low_high(int *array, size_t low, size_t high, int value)
{
	size_t mid;

	if (array == NULL)
	{
		return (-1);
	}
	while (low <= high)
	{
		print_array(array, low, high);
		mid = (low + high) / 2;
		if (array[mid] == value)
		{
			return (mid);
		}
		if (array[mid] > value)
		{
			high = mid - 1;
		}
		else
		{
			low = mid + 1;
		}
	}
	return (-1);
}

/**
 * exponential_search - performs exponential search on an array
 * @array: array to be searched
 * @size: the size of the array
 * @value: value to look for in array
 * Return: index of where the element is found -1 otherwise
*/
int exponential_search(int *array, size_t size, int value)
{
	size_t index = 1, low;


	if (array == NULL || size == 0)
	{
		return (-1);
	}
	if (array[0] == value)
	{
		return (0);
	}


	while (index < size && array[index] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", index, array[index]);
		low = index;
		index *= 2;
	}


	if (index >= size)
	{
		index = size - 1;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", low, index);
	return (binary_search_with_low_high(array, low, index, value));
}

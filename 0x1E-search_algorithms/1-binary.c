#include "search_algos.h"
/**
 * print_array - function to print an array
 * @array: the array to be printed
 * @start: starting index of list
 * @stop: stop index of list
*/
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
 * binary_search - function to perform binary search on an array
 * @array: a sorted array of integers to be searched
 * @size: size of the array
 * @value: value to search for in array
 * Return: return index of where element is found or -1 otherwise
*/
int binary_search(int *array, size_t size, int value)
{
	size_t low, high, mid;

	low = 0;
	high = size - 1;
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

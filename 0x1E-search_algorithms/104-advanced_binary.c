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
 * advanced_binary_helper - function to help advanced binary search
 * @array: the array to be searched
 * @low: lower inded of the array
 * @high: higher index of the array
 * @value: the value to be searched in the array
 * Return: index of element if found or -1 otherwise
*/
int advanced_binary_helper(int *array, size_t low, size_t high, int value);
int advanced_binary_helper(int *array, size_t low, size_t high, int value)
{
	size_t mid;

	mid = (low + high) / 2;

	if (low <= high)
	{
		print_array(array, low, high);

		if (value == array[low])
		{
			return (low);
		}

		else
		{
			if (array[mid] >= value)
			{
				return (advanced_binary_helper(array, low, mid, value));
			}
			else
			{
				return (advanced_binary_helper(array, mid + 1, high, value));
			}
		}

	}
	return (-1);
}
/**
 * advanced_binary - advanced version of binary
 * search to find index of first element
 * @array: array of elements to search
 * @size: size of the array
 * @value: value to look for in array
 * Return: index of element if found or -1 otherwise
*/
int advanced_binary(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL)
	{
		return (-1);
	}
	return (advanced_binary_helper(array, 0, size - 1, value));
}

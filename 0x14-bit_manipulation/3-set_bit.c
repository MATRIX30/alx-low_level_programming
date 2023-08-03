#include "main.h"
/**
* set_bit - function to get the bit at an index
* @n: integer number
* @index: index to get bit from
* Return: bit at that position
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int filter;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	filter = 1 << index;
	*n = (*n) | filter;
	return (1);
}

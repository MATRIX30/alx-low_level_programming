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

	filter = 1 << index;
	return (int)(*n |= filter);
}

#include "main.h"
/**
* get_bit - function to get the bit at an index
* @n: integer number
* @index: index to get bit from
* Return: bit at that position
*/

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int filter;

	filter = 1 << index;
	if (n & filter)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

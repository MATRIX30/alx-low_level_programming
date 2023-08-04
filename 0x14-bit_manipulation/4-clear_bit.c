#include "main.h"
/**
* clear_bit - function to clear the number of bytes
* @n: integer value
* @index: positon to clear the byte
* Return: 1 if work -1 otherwise
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int filter;

	if (index > sizeof(unsigned long int) * 8 - 1)
	{
		return (-1);
	}

	filter = 1 << index;
	*n = *n & ~filter;
	return (1);
}

#include "main.h"
/**
* flip_bits - function that counts number of bits to flip
* @n: first number
* @m: second number
* Return: number of bytes to flip
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	
	while (n | m)
	{

		if ((n & 1) != (m & 1))
		{
			count++;
		}
		n >>= 1;
		m >>= 1;
	}
	return (count);

}

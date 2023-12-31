#include "main.h"

/**
* binary_to_uint - converts binary to int
* @b: binary string
* Return: unsigned int representation of the binary number
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0;


	if (b == NULL)
	{
		return (0);
	}

	while (*b != '\0')
	{
		if (*b != '1' && *b != '0')
		{
			return (0);
		}
		sum = sum << 1;
		if (*b == '1')
		{
			sum |= 1;
		}
		b++;
	}
	return (sum);
}

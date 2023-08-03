#include "main.h"
/**
* get_string_length - function that behaves like strlen
* @b: pointer to the string
* Return: length of the string
*/
unsigned int get_string_length(const char *b)
{
	unsigned int len = 0;

	while (*b != '\0')
	{
		len++;
		b++;
	}
	return (len);
}

/**
* binary_to_uint - converts binary to int
* @b: binary string
* Return: unsigned int representation of the binary number
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int len;
	int multi;
	unsigned int sum = 0;


	len = get_string_length(b);
	multi = 1 << (len - 1);
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
		if (*b == '1')
		{
			sum += multi;
		}
		b++;
		multi /= 2;
	}
	return (sum);
}

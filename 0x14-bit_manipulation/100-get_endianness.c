#include "main.h"
/**
* get_endianness - function to check for endianness
* Return: 1 if endianness 0
*/
int get_endianness(void)
{
	unsigned int j = 1;
	char *c = (char *)&j;

	if (*c)
		return (1);
	else
		return (0);
}

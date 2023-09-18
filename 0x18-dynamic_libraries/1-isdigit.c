#include "main.h"
/**
* _isdigit - test if an int enter maps to digit in ascii
* @c: int parameter
* Return: 1 if success 0 otherwise
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}

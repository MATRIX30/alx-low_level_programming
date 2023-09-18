#include "main.h"
/**
* _abs - returns the absolute value of its arguement
* @c: the int value we want to look for its abs
* Return: The absolute value of int
*/

int _abs(int c)
{
	int res;

	if (c >= 0)
	{
		return (c);
	}
	else
	{
		res = -1 * c;
		return (res);
	}
}

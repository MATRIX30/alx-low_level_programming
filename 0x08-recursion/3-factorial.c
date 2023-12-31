#include "main.h"
/**
* factorial - This function calculates the factorial of a number
* @n: number param
* Return: int factorial of n
*/

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}

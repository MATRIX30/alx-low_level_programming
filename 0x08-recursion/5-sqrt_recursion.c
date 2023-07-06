#include "main.h"
/**
* sqrt_helper - helper for sqrt
* @n: number param
* @min: min param
* @max: max param
* Return: sqrt of num
*/
int sqrt_helper(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	if (i > n / 2)
	{
		return (-1);
	}
	return (sqrt_helper(n, i + 1));
}
/**
* _sqrt_recursion - main function
* @n: num param
* Return: sqrt of n if exist -1 otherwise
*/
int _sqrt_recursion(int n)
{
	if (n < 1)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}
	return (sqrt_helper(n, 1));
}

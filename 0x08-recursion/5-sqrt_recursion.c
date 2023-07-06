#include "main.h"
/**
* sqrt_helper - helper for sqrt
* @n: number param
* @min: min param
* @max: max param
* Return: sqrt of num
*/
int sqrt_helper(int n, int min, int max)
{
	unsigned int guess = (min + max) / 2;
	unsigned int res = guess * guess;

	if (min > max)
	{
		return (-1);
	}
	if (res == n)
	{
		return (guess);
	}
	else if (res < n)
	{
		return (sqrt_helper(n, guess + 1, max));
	}
	else
	{
		return (sqrt_helper(n, min, guess - 1));
	}
}
/**
* _sqrt_recursion - main function
* @n: num param
* Return: sqrt of n if exist -1 otherwise
*/
int _sqrt_recursion(int n)
{
	return (sqrt_helper(n, 1, n));
}

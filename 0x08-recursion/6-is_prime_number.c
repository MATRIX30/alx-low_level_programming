#include "main.h"
/**
* is_prime_helper - helper function for is prime
* @n: num param
* @div: divisor param
* Return: interger param
*/

int is_prime_helper(int n, int div)
{
	if (n == div)
	{
		return (1);
	}
	else
	{
		return (n % div != 0 && is_prime_helper(n, div + 1));
	}
}

/**
* is_prime_number - main function
* @n: number param
* Return: 1 if prime 0 otherwise
*/

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (is_prime_helper(n, 2));
	}
}

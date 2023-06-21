#include <stdio.h>
/**
* fib - function to calculate fibonacci
* @n: the number
* Return: fib of n
*/

double fib(int n)
{
	double res;

	if ((n == 1) || (n == 2))
	{
		res = n;
		return (res);
	}
	else
	{
		res = fib(n - 1) + fib(n - 2);
		return (res);
	}
}


/**
* main - entry piont
* Return: 0 on success
*/

int main(void)
{
	double res = 0;

	printf("%ld", fib(98)); 
	return (0);
}

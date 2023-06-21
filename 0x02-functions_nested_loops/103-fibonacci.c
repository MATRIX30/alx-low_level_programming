#include <stdio.h>
/**
* fib - function to calculate fibonacci
* @n: the number
* Return: fib of n
*/

long fib(int n)
{
	long res;

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
	long term = 0;

	for (i = 1; i <= 33; i++)
	{
		if (fib(i) % 2 == 0)
		{
			term += fib(i);
		}
	}
	printf("%ld", term);
	printf("\n");
	return (0);
}

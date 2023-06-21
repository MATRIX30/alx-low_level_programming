i#include <stdio.h>
/**
* fib - function to calculate fibonacci
* @n: the number
* Return: fib of n
*/

int fib(int n)
{
	int res;

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
	int i = 1;
	for (i = 1; i <= 50; i++)
	{
		printf("%d, ",fib(i));
	}
	printf("\n");
	return (0);
}

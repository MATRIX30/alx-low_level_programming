#include <stdio.h>
/**
* fib - function to calculate fibonacci
* @n: the number
* Return: fib of n
*/

void fib50(void)
{
	long long n1 = 1;
	long long n2 = 2;
	long long sum = n1 + n2;
	int i = 0;

	printf("%lld, ", n1);
	printf("%lld, ", n2);
	while (i < 50 - 2)
	{
		printf("%lld, ", sum);
		n1 = n2;
		n2 = sum;
		sum = n2 + n1;
		i++;
	}
}
/**
* main - entry piont
* Return: 0 on success
*/

int main(void)
{
	fib50();
	return (0);
}

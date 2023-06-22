#include <stdio.h>
/**
* fib50 - function to calculate fibonacci
*/

void fib50(void)
{
	long n1 = 1;
	long n2 = 2;
	long sum = n1 + n2;
	int i = 0;

	printf("%ld, ", n1);
	printf("%ld, ", n2);
	while (i < 50 - 2)
	{
		if (i == 50 - 2)
		{
			printf("%ld", sum);
		}
		else
		{
			printf("%ld, ", sum);
		}
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

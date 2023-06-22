#include <stdio.h>
/**
* fib98 - function to calculate fibonacci
*/

void fib98(void)
{
	unsigned long n1 = 1;
	unsigned long n2 = 2;
	unsigned long sum = n1 + n2;
	int i = 0;

	printf("%lu, ", n1);
	printf("%lu, ", n2);
	while (i < 98 - 2)
	{
		if (i == 95)
		{
			printf("%lu", sum);
		}
		else
		{
			printf("%lu, ", sum);
		}
		n1 = n2;
		n2 = sum;
		sum = n2 + n1;
		i++;
	}
	putchar('\n');
}
/**
* main - entry piont
* Return: 0 on success
*/

int main(void)
{
	fib98();
	return (0);
}

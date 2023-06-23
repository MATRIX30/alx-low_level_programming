#include <stdio.h>
/**
* main - entry point
* Return: exit point
*/

int main(void)
{
	unsigned long p:

	p = 612852475143;

	while (p % 2 == 0 || p % 3 == 0 || p % 5 == 0)
	{
		if (p % 2 == 0)
		{
			p /= 2;
		}
		else if (p % 3 == 0)
		{
			p /= 3;
		}
		else
		{
			p /= 5;
		}
	}
	prinf("%d\n", p);
	return (0);
}

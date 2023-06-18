#include <stdio.h>

/**
 * main - entry point
 * Return: exit point with 0 if successful
 */

int main(void)
{
	int i = 48;
	int j = 48;

	while (i < 58)
	{
		while (j < 58)
		{
			if ((i != j) && (i < j))
			{
				putchar(i);
				putchar(j);
				if ((i == 56) && (j == 57))
				{
					putchar(' ');
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
			j++;
		}
		j = 48;
		i++;
	}
	return (0);
}

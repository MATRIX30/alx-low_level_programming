#include <stdio.h>

/**
 * main - entry point
 * Return: exit point
 */

int main(void)
{
	int i = 48;
	int j = 48;
	int k = 48;

	while (i < 58)
	{
		while (j < 58)
		{
			while (k < 58)
			{
				if (((i != j) && (j != k) && (i != k)) && ((i < j) && (j < k)))
				{
					putchar(i);
					putchar(j);
					putchar(k);
					if ((i == 55) && (j == 56) && (k == 57))
					{
						putchar('\n');
					}
					else
					{
						putchar(',');
						putchar(' ');
					}
				}
				k++;
			}
			k = 48;
			j++;
		}
		j = 48;
		i++;
	}
	return (0);
}

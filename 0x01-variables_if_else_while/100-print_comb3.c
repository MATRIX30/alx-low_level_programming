#include <stdio.h>
/**
 * main - entry point
 * Return: exit poing
 */
int main(void)
{
	int i = 48;
	int j = 48;
	int x = 0;

	while (i < 58)
	{
		while (j < 58)
		{
			if ((i != j) && (i < j))
			{
				if (x == 0)
				{
					putchar(i);
					putchar(j);
					x = 5;
				}

				putchar(',');
				putchar(' ');
				putchar(i);
				putchar(j);
			}
			j++;
		}
		j = 48;
		i++;
	}
	return (0);
}

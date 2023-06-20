#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers
 * Return: 0 if successful
 */

int main(void)
{
	int i = 48;
	int j = 48;
	int k = 48;
	int l = 48;

	while (i < 58)
	{
		while (j < 58)
		{
			while (k < 58)
			{
				while (l < 58)
				{
					if ((((i == k) && (j < l)) || ((i < k) && (j <= l)) || ((i < k) && (j > l))))
					{
						if (!(((i == j) && (j == k) && (k == l)) || ((i == k) && (j == l))))
						{
							putchar(i);
							putchar(j);
							putchar(' ');
							putchar(k);
							putchar(l);
							if ((i == 57) && (j == 56) && (k == 57) && (l == 57))
							{
								putchar('\n');
							}
							else
							{
								putchar(',');
								putchar(' ');
							}
						}
					}
					l++;
				}
				l = 48;
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

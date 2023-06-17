#include <stdio.h>
/**
 * main - entry oing
 * Return: exit point
 */
int main(void)
{
	int i = 0;
	char x = '0';

	while (i < 10)
	{
		putchar(x);
		if (i < 9)
		{
			putchar(',');
		}
		x++;
		i++;
	}
	putchar('\n');
	return (0);
}

#include <stdio.h>
/**
 * main - entry oing
 * Return: exit point
 */
int main(void)
{
	int i = 48;

	while (i < 58)
	{
		putchar(i);
		if (i < 57)
		{
			putchar(',');
		}
		i++;
	}
	putchar('\n');
	return (0);
}

#include <stdio.h>
/**
 * main - entry oing
 * Return: exit point
 */
int main(void)
{
	int i = 26;
	char x = 'z';

	while (i > 0)
	{
		putchar(x);
		x--;
		i--;
	}
	putchar('\n');
	return (0);
}

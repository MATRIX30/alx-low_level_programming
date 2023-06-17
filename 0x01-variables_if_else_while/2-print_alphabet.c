#include <stdio.h>
/**
 * main - entry oing
 * Return: exit point
 */
int main(void)
{
	int i = 0;
	char x = 'a';

	while (i < 26)
	{
		putchar(x);
		x++;
		i++;
	}
	putchar('\\n');
	return (0);
}

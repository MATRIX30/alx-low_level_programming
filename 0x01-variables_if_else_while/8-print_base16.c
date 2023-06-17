#include <stdio.h>
/**
 * main - entry oing
 * Return: exit point
 */
int main(void)
{
	int i = 0;

	while (i < 16)
	{
		printf("%x", i);
		i++;
	}
	putchar('\n');
	return (0);
}

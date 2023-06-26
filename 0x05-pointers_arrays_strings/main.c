#include "main.h"
#include <stdio.h>
/**
* main - main function
* Return: 0 if succes 0 otherwise
*/

int main(void)
{
	_putchar('A');
	_putchar('\n');
	int n;

	n = 402;
	printf("n=%d\n", n);
	reset_to_98(&n);
	printf("n=%d\n", n);
	return (0);
}

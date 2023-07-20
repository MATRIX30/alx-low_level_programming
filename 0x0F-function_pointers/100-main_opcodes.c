#include <stdio.h>
#include <stdlib.h>
/**
* print_opcodes - print
* @n: param
*/
void print_opcodes(int n)
{
	char *p = (char *)print_opcodes;
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%02x", p[i] & 0xff);
	}
	printf("\n");
}

/**
* main - function
* @argc: param
* @argv: param
* Return: 0 for value
*/
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	int n = atoi(argv[1]);

	if (n < 0)
	{
		printf("Error\n");
		return (2);
	}
	print_opcodes(n);
	return (0);
}

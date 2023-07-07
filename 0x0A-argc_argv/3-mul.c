#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* main - main entry point into the program
* @argc: variable holding the number of parameters entered to function
* @argv: an array to pointer to various parameter string supplied to program
* Return: 0 for success 1 otherwise
*/

int main(int argc, char **argv)
{
	int res = 0;
	int a, b;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		res = a * b;
		printf("%d\n", res);
	}
	exit(EXIT_SUCCESS);
}

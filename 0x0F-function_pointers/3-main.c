#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
* main - function this is the main
* @argc: count of arguments
* @argv: parameter settings
* Return: fluent for understanding
*/

int main(int argc, char *argv[])
{
	int a = atoi(argv[1]);
	int b = atoi(argv[3]);
	
	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if ((*argv[2] == '/' || *argv[2] == '%') && atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (get_op_func(argv[2])(a, b));
}

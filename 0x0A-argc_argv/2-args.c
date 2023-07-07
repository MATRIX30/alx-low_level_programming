#include <stdio.h>
#include <stdlib.h>
/**
* main - main entry point into the program
* @argc: variable holding the number of parameters entered to function
* @argv: an array to pointer to various parameter string supplied to program
* Return: 0 for success 1 otherwise
*/

int main(int argc, char **argv)
{
	while (argc)
	{
		printf("%s\n", *argv++);
		argc--;
	}
	exit(EXIT_SUCCESS);
}

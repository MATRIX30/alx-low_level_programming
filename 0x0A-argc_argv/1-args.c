#include <stdio.h>
#include <stdlib.h>
/**
* main - main entry point into the program
* @argc: variable holding the number of parameters entered to function
* @argv: an array to pointer to various parameter string supplied to program
* Return: 0 for success 1 otherwise
*/

int main(int argc, __attribute__((unused)) char **argv)
{
	printf("%d\n", argc - 1);
	exit(EXIT_SUCCESS);
}

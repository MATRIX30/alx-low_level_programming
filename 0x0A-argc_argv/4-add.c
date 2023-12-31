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
	int i = 1;
	int j = 0;

	if (argc == 1)
	{
		printf("0\n");
		exit(EXIT_SUCCESS);
	}
	while (i < argc)
	{
		while (*(argv[i] + j) != '\0')
		{
			if ((*argv[i] < 48 || *argv[i] > 57) && *argv[i] != 45)
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		j = 0;
		res += atoi(argv[i]);
		i++;

	}
	printf("%d\n", res);
	return (0);
}

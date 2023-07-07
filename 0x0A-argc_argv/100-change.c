#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
* main - main program
* @argc: arguement count
* @argv: array of pointers to arguments
* Return: n number of coins needed to change amount where amount = argv[1]
*/

int main(int argc, char *argv[])
{
	int change[5] = {25, 10, 5, 2, 1};
	int count = 0;
	int sum = 0;
	int i = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (atoi(argv[1]) < 0)
	{
		printf("0\n");
		exit(EXIT_SUCCESS);
	}
	while (i < 5)
	{
		if (sum + change[i] <= atoi(argv[1]))
		{
			sum += change[i];
			count++;
		}
		else if (sum == atoi(argv[1]))
		{
			printf("%d", count);
			exit(EXIT_SUCCESS);
		}
		else
		{
			i++;
		}
	}
	printf("%d\n", count);
	return (0);
}

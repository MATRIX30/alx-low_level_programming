#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}
	for (int i = 1; i < argc; i++)
	{
		for (int j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (98);
			}
		}
	}

	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);

	printf("%d\n", num1 * num2);
	return (0);
}


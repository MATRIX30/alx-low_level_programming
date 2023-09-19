#include <stdio.h>
/**
* rand - function to generate predefined random numbers
* Return: a predifined random number
*/

int rand(void)
{
	static int num = -1;

	num++;

	switch (num)
	{
		case 0:
			return (8);
		case 1:
			return (8);
		case 2:
			return (7);
		case 3:
			return (9);
		case 4:
			return (23);
		case 5:
			return (74);
		default:
			return (num * num % 30000);
	}
}


#include "main.h"
#include <stdio.h>

/**
* print_to_98 - This function prints all natural numbers to 98
* @n: this is the parameter of the number being entered
*/

void print_to_98(int n)
{
	
	if (n <= 98)
	{
		while (n <= 98)
		{
			if (n != 98)
			{
				printf("%d, ", n);
			}
			else
			{
				printf("%d", n);
			}
			n++;
		}
	}
	else
	{
		while (n > 98)
		{
			if (n != 98)
			{
				printf("%d, ", n);
			}
			else 
			{
				printf("%d", n);
			}
			n--;
		}
	}
	putchar('\n');
}

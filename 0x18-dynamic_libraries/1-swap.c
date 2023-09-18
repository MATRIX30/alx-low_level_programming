#include "main.h"
/**
* swap_int - swaps value of a and b
* @a: first number
* @b: second number
* Return: void
*/

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;

	*a = *b;

	*b = tmp;
}

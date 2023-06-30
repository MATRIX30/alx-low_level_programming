#include "main.h"
/**
* reverse_array - reverse function
* @a: pointer to array to be reversed
* @n: size of array a
*/

void reverse_array(int *a, int n)
{
	int i = 0;
	int j = n - 1;
	int temp;

	while (i < j)
	{
		temp = *(a + i);
		*(a + i) = *(a + j);
		*(a + j) = temp;
		i++;
		j--;
	}
}

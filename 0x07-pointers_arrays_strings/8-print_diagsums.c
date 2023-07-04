#include "main.h"
#include <stdio.h>
/**
* print_diagsums - prints the sume of diagonal elenents
* @a: param
* @size: size param
*/

void print_diagsums(int *a, int size)
{
	int ldiag = 0;
	int aldiag = 0;
	int i, j = 1;

	for (i = 0; i < size; i++)
	{
		ldiag += *(a + (size * i) + i);
		aldiag += *(a + (size - 1) * j);
		j++;
	}
	printf("%d, %d\n", ldiag, aldiag);
}

#include "main.h"
/**
* leet - main function
* @v: param
* Return: pointer to v
*/

char *leet(char *v)
{
	int i;

	for (i = 0; *(v + i) != '\0'; i++)
	{
		if (*(v + i) == 'a' || *(v + i) == 'A')
		{
			*(v + i) = '4';
		}
		else if (*(v + i) == 'e' || *(v + i) == 'E')
		{
			*(v + i) = '3';
		}
		else if (*(v + i) == 'o' || *(v + i) == 'O')
		{
			*(v + i) = '0';
		}
		else if (*(v + i) == 't' || *(v + i) == 'T')
		{
			*(v + i) = '7';
		}
		else if (*(v + i) == 'l' || *(v + i) == 'L')
		{
			*(v + i) = '1';
		}
		else
		{
		}
	}
	return (v);
}

#include "main.h"
/**
* rot13 - main program
* @v: param
* Return: v
*/

char *rot13(char *v)
{
	char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i, j;

	for (i = 0; *(v + i) != '\0'; i++)
	{
		for (j = 0; *(input + j) != '\0'; j++)
		{
			if (*(v + i) == *(input + j))
			{
				*(v + i) = *(output + j);
			}
		}
	}
	return (v);

}

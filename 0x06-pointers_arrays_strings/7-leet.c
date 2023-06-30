#include "main.h"
/**
* leet - main function
* @v: param
* Return: pointer to v
*/

char *leet(char *v)
{
	int i;
	int j;
	char text[] = "aAeEoOtTlL";
	char code[] = "4433007711";

	for (i = 0; *(v + i) != '\0'; i++)
	{
		for (j = 0; text[j] != '\0'; j++)
		{
			if (*(v + i) == text[j])
			{
				*(v + i) = code[j];
			}
		}
	}
	return (v);
}

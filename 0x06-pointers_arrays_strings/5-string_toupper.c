#include "main.h"
/**
* string_toupper - main function
* @v: parameter
* Return: uppercase version of v
*/

char *string_toupper(char *v)
{
	int i;
	int index;

	for (i = 0; *(v + i) != '\0'; i++)
	{
		if (*(v + i) >= 97 && *(v + i) <= 122)
		{
			index = *(v + i) - 97;
			*(v + i) = index + 65;
		}
	}
	return (v);
}

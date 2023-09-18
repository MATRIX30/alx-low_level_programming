#include "main.h"
/**
* _strspn - function to count the number of substring characters in
*         accept that are in s
* @s: Param string
* @accept: param
* Return: int which is number of occurances
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int res = 0;
	int i = 0;
	int j = 0;
	int present;

	while (*(s + i) != '\0')
	{
		present = 0;
		while (*(accept + j) != '\0')
		{
			if (*(s + i) == *(accept + j))
			{
				res++;
				present = 1;
			}
			j++;
		}
		if (!present)
		{
			return (res);
		}
		i++;
		j = 0;
	}
	return (res);
}

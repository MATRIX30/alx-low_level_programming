#include "main.h"
/**
*_isalpha - This program verify if c is character
* @c: parameter to the function and integer
* Return: 1 if c is a character 0 otherwise
*/

int _isalpha(int c)
{
	if (((c >= 97) && (c <= 122)) || ((c >= 65) && (c <= 90)))
	{
		return (1);
	}
	return (0);
}

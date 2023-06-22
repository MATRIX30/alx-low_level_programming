#include "main.h"
/**
* _isupper - returns 1 if its upper case
* @c: integer value of the character to test
* Return: 1 if success 0 otherwise
*/

int _isupper(int c);
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}

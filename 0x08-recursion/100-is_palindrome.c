#include "main.h"
#include <string.h>
/**
* is_palindrome - function to return 1 if s is a palindrome
* @s: string to test if its palindrome
* Return: 1 if s is palindrome 0 otherwise
*/

int is_palindrome(char *s)
{
	int len = strlen(s);

	if (len <= 1)
	{
		return (1);
	}
	else
	{
		return ((*(s) == *(s + (len - 1))) && (is_palindrome())
	}
}

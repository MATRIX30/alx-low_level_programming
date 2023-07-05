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
		char s_cpy[1000];

		strncpy(s_cpy, s + 1, len - 2);
		s_cpy[len - 2] = '\0';
		return ((*(s) == *(s + (len - 1))) && (is_palindrome(s_cpy)));
	}
}


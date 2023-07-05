#include "main.h"
/**
* _strlen_recursion - gets len of string recursively
* @s: string param
* Return: int length of s
*/

int _strlen_recursion(char *s)
{
	int res = 0;

	if (*s == '\0')
	{
		return (res);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}

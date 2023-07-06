#include "main.h"
/**
* wildcmp - comparison of string
* @s1: first param
* @s2: second param
* Return: 1 if success 0 otherwise
*/

int wildcmp(char *s1, char *s2)
{
	if (*s1 == *s2)
	{
		return (1);
	}
	if (*s2 == '*')
	{
		return (1);
	}
	if (*s1 && *s2 == '*')
	{
		return (wildcmp((s1 + 1), (s2)));
	}
	if (*s1 && *s2 == '*' && *(s1 + 1) == *(s2 + 1))
	{
		return (wildcmp((s1 + 1), (s2 + 1)));
	}
	if (*s1 != *s2)
	{
		return (0);
	}
	else
	{
		return ((*s1 == *s2 && wildcmp((s1 + 1), (s2 + 1))));
	}

}

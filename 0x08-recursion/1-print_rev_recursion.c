#include "main.h"
#include <string.h>
/**
* _print_rev_recursion - prints strings recursively
* @s: string param
*/

void _print_rev_recursion(char *s)
{
	int len = strlen(s);
	char s_cpy[1000];

	if (*s == "")
	{
	}
	if (len <= 1)
	{
		_putchar(*s);
	}
	else
	{
		_putchar(*(s + len - 1));
		strncpy(s_cpy, s, len - 1);
		s_cpy[len - 1] = '\0';
		_print_rev_recursion(s_cpy);

	}
}

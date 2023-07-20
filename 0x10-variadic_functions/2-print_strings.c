#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
* print_strings - function to print string
* @separator: seperator character
* @n: number n
* @...: variable args
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	char *s;
	
	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(list, char *);
		if ( s == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", s);
		}

		if ( i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
}

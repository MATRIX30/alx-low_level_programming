#include <stdarg.h>
#include <stdio.h>

/**
* print_numbers - function to print numbers
* @separator: param
* @n: param
* @...: param
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;

	va_start(list, n);
	if (separator != NULL)
	{
		for (i = 0; i < n; i++)
		{
			if (i < n - 1)
			{
				printf("%d%s", va_arg(list, int), separator);
			}
		}
		printf("%d\n", va_arg(list, int));
	}

}

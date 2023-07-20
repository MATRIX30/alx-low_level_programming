#include <stdarg.h>
#include <stddef.h>
/**
* sum_them_all - functions sums all the arguments supplied to it
* @n: param
* @...: variable parameters
* Return: sum of all parameters
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int sum = 0;

	va_start(args, n);
	for (i = 0; i < n; i++)
		sum += va_arg(args, int);
	va_end(args);
	return (sum);
}


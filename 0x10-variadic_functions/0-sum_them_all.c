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
	unsigned int i;
	int sum = 0;
	/* step 1: declare variable of type va_list */
	va_list list;
	if (n == 0)
	{
		return (0);
	}
	/* step 2: create pointer to fist elem of list using va_start */
	va_start(list, n);
	/* step 3: iterate over the elements using var_args summing them up */
	for (i = 0; i < n; i++)
	{
		sum += va_arg(list, int);
	}
	/* step 4: terminate with va_end */
	va_end(list);
	return (sum);
}

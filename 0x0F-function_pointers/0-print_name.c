#include "function_pointers.h"
#include <stdlib.h>
/**
* print_name - prints the name
* @name: param
* @f: pointer to function
*/

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		exit(EXIT_FAILURE);
	}
	f(name);
}

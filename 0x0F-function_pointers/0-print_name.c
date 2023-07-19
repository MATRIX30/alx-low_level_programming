#include "function_pointers.h"
/**
* print_name - prints the name
* @name: param
* @f: pointer to function
*/

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
	{
		name = "";
	}
	f(name);
}

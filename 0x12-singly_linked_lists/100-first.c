#include <stdio.h>
/**
* prints - function to print before main
*/

void prints(void) __attribute__((constructor))__
{
	printf("You're beat! and yet, you must  allow,\n");
	printf("I bore my house upon my back!\n");
}

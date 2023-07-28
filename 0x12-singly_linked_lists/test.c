#include <stdio.h>
/**
* prints - function to print before main
*
*/

void prints(void) __attribute__((constructor));
void prints(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}

#include <unistd.h>

int __putchar(char c)
{
	return(write(1,&c,1));
}

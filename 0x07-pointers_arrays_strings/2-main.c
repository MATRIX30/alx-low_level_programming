#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = "good child";
    char *f;

    f = _strchr(s, '\0');

    if (f != NULL)
    {
        printf("%s\n", f);
    }
    else
    {
	    printf("It is null");
    }
    return (0);
}

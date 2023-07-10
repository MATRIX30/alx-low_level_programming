#include<stdio.h>
#include<string.h>

int main(void)
{
	char a[] = "Hello good morning world";
	char b[] = "morning";

	printf("%s",strstr(a,b));
	return (0);
}

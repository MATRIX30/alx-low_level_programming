#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* str_concat - function that cancatenates two strings
* @s1: string 1
* @s2: string 2
* Return: Null if size 0 else return pointer to the new concatenated string
*/

char *str_concat(char *s1, char *s2)
{
	int len = 0;
	char *new_str, __attribute__((unused)) pt;
	int i, j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	len += strlen(s1);
	len += strlen(s2);
	new_str = malloc(sizeof(char) * (len + 1));
	if (new_str == NULL)
	{
		return (NULL);
	}
	strcpy(new_str, s1);
	i = strlen(s1);
	for (j = 0 ; *(s2 + j) != '\0'; j++)
	{
		*(new_str + i) = *(s2 + j);
		i++;
	}
	new_str[len] = '\0';
	return (new_str);
}

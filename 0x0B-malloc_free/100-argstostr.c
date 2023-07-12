#include <stdlib.h>
/**
* argstostr -  function that concatenates all the arguments
* @ac: argument count param
* @av: pionter to a Pointer
* Return: char
*/
char *argstostr(int ac, char **av)
{
	int i, j, k;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0, k = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++, k++)
			;
		k++;
	}
	s = malloc(sizeof(char) * (k + 1));
	if (s == NULL)
		return (NULL);
	for (i = 0, k = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++, k++)
			s[k] = av[i][j];
		s[k] = '\n';
		k++;
	}
	s[k] = '\0';
	return (s);
}

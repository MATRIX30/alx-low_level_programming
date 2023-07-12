#include <stdlib.h>
#include <string.h>
/**
* strtow - helper function
* @str: param
* Return: pointer to pointer
*/

char **strtow(char *str)
{
	char **words;
	int i, j, k = 0, len;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	len = strlen(str);
	words = malloc(sizeof(char *) * (len + 1));
	if (words == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
	{
		if (str[i] != ' ')
		{
			for (j = i; str[j] != ' ' && str[j] != '\0'; j++)
				;
			words[k] = malloc(sizeof(char) * (j - i + 1));
			if (words[k] == NULL)
				return (NULL);
			for (; i < j; i++)
				words[k][i - k] = str[i];
			words[k++][i - k] = '\0';
		}
	}
	words[k] = NULL;
	return (words);
}



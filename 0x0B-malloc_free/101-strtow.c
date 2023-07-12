#include <stdlib.h>
/**
* count_words - helper function
* @str: param
* Return: in count
*/
int count_words(char *str)
{
	int i, count = 0;

	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			count++;
	}
	return (count);
}

/**
* strtow - helper function
* @str: param
* Return: pointer to pointer
*/

char **strtow(char *str)
{
	int i, j, k, len;
	char **words;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	words = malloc(sizeof(char *) * (count_words(str) + 1));
	if (words == NULL)
		return (NULL);
	for (i = 0, j = 0; str[i]; i++)
	{
		if (str[i] != ' ')
		{
			len = 0;
			for (k = i; str[k] && str[k] != ' '; k++)
				len++;
			words[j] = malloc(sizeof(char) * (len + 1));
			if (words[j] == NULL)
			{
				for (j--; j >= 0; j--)
					free(words[j]);
				free(words);
				return (NULL);
			}
			for (k = 0; k < len; k++, i++)
			words[j][k] = str[i];
			words[j][k] = '\0';
			j++;
		}
	}
	words[j] = NULL;
	return (words);
}

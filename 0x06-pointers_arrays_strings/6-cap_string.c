#include "main.h"
/**
* cap_string - main function
* @v: param
* Return: capitlized v
*/
char *cap_string(char *v);
char *cap_string(char *v)
{
	int i;
	int sep = 0;
	int index;

	for (i = 0; *(v + i) != '\0'; i++)
	{
		switch (*(v + i))
		{
			case ',':
				sep = 1;
				break;
			case ';':
				sep = 1;
				break;
			case '.':
				sep = 1;
				break;
			case '!':
				sep = 1;
				break;
			case '?':
				sep = 1;
				break;
			case '"':
				sep = 1;
				break;
			case '(':
				sep = 1;
				break;
			case ')':
				sep = 1;
				break;
			case '{':
				sep = 1;
				break;
			case '}':
				sep = 1;
				break;
			case '\n':
				sep = 1;
				break;
			case '\t':
				sep = 1;
				break;
			case ' ':
				sep = 1;
				break;
			default:
				break;
		}

		if (sep == 1 && *(v + i + 1) >= 97 && *(v + i + 1) <= 122)
		{
			index = *(v + i + 1) - 97;
			*(v + i + 1) = index + 65;
		}
		sep = 0;
	}
	return (v);
}

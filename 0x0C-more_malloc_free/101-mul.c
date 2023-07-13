#include <stdio.h>
#include <stdlib.h>

/**
 * _isdigit - checks if a character is a digit
 * @c: character to check
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(char c)
{
    return (c >= '0' && c <= '9');
}

/**
 * _atoi - converts a string to an integer
 * @s: string to convert
 *
 * Return: integer value of string
 */
int _atoi(char *s)
{
    int i, n;

    for (i = 0, n = 0; _isdigit(s[i]); i++)
        n = n * 10 + (s[i] - '0');

    return (n);
}

/**
 * main - multiplies two positive numbers
 * @argc: number of arguments passed to program
 * @argv: array of arguments passed to program
 *
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char **argv)
{
    int num1, num2;

    if (argc != 3)
    {
        printf("Error\n");
        return (98);
    }

    if (!_isdigit(*argv[1]) || !_isdigit(*argv[2]))
    {
        printf("Error\n");
        return (98);
    }



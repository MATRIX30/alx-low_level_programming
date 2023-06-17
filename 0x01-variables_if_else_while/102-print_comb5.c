#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers
 * Return: 0 if successful
 */
int main(void)
{
    int i = 0;
    while (i < 100)
    {
        int j = 0;
        while (j < 100)
        {
            if (i <= j)
            {
                putchar(i / 10 + '0');
                putchar(i % 10 + '0');
                putchar(' ');
                putchar(j / 10 + '0');
                putchar(j % 10 + '0');
                if (i != 98 || j != 99)
                {
                    putchar(',');
                    putchar(' ');
                }
            }
            j++;
        }
        i++;
    }
    return (0);
}

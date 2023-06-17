#include <stdio.h>
/**
 * main - entry point
 * Return: exit poing
 */

int main(void) {
    int i = 0;

    while (i < 100) {
        int j = i + 1;

        while (j < 100) {
            putchar(i / 10 + '0');
            putchar(i % 10 + '0');
            putchar(',');
            putchar(' ');
            putchar(j / 10 + '0');
            putchar(j % 10 + '0');
            if (i != 98) {
                putchar(',');
                putchar(' ');
            }
            j++;
        }
        i++;
    }
    return (0);
}

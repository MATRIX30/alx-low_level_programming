#include <stdio.h>

int main() {
    int i = 0;
    while (i < 1000) {
        int j = i + 1;
        while (j < 1000) {
            int k = j + 1;
            while (k < 1000) {
                if (i / 100 != i % 10 && i / 100 != j / 10 && i / 100 != j % 10 && i / 100 != k / 100 && i / 100 != k % 10 && i % 10 != j / 10 && i % 10 != j % 10 && i % 10 != k / 100 && i % 10 != k % 10 && j / 10 != j % 10 && j / 10 != k / 100 && j / 10 != k % 10 && j % 10 != k / 100 && j % 10 != k % 10) {
                    putchar(i / 100 + '0');
                    putchar((i / 10) % 10 + '0');
                    putchar(i % 10 + '0');
                    putchar(',');
                    putchar(' ');
                    putchar(j / 100 + '0');
                    putchar((j / 10) % 10 + '0');
                    putchar(j % 10 + '0');
                    putchar(',');
                    putchar(' ');
                    putchar(k / 100 + '0');
                    putchar((k / 10) % 10 + '0');
                    putchar(k % 10 + '0');
                    if (i != 789) {
                        putchar(',');
                        putchar(' ');
                    }
                }
                k++;
            }
            j++;
        }
        i++;
    }
    return 0;
}

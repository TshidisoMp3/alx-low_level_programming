#include <stdio.h>

/**
 * main - print the first 50 fibonacci numbers
 * Return: always 0
 */

int main(void) {
    long int i, j, count, sum, temp;

    i = 0;
    j = 1;
    count = 0;

    while (count < 50) {
        temp = j;
        j += i;
        i = temp;
        printf("%ld", j);
        if (count < 49) {
            printf(", ");
        }
        count++;
    }
}

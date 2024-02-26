#include <stdio.h>

/**
 * main - print the first 50 fibonacci numbers
 * Return: always 0
 */

void generateFibonacci(int n) {
    int i;
    long int a = 0, b = 1, c = 0;
    
    for (i = 0; i < n; i++) {
        if (i == 0) {
        printf("%ld", a);
        } else if (i == 1) {
        printf(", %ld", b);
        } else {
        c = a + b;
        a = b;
        b = c;
        printf(", %ld", c);
        }
    }
    printf("\n");
}

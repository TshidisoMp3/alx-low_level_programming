#include <stdio.h>

/**
 * main - print the first 50 fibonacci numbers
 * Return: always 0
 */

void generateFibonacci(int n) {
    int first = 1, second = 2, next;

    for (int i = 0; i < n; i++) {
        if (i <= 1) {
            next = i;
        } else {
            next = first + second;
            first = second;
            second = next;
        }
        printf("%d\n", next);
    }
}
int main(void)
{
    generateFibonacci(50);
    return (0);
}

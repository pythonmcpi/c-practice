/* Write a function to calculate factorial (n) */
/* Build: g++ -o 2.9_factorial_loop.exe 2.9_factorial_loop.c */

#include <stdio.h>

int main(void) {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int c = 1;
    for (int i = n; i > 1; i--) {
        c *= i;
    }

    printf("%d! = %d\n", n, c);

    return 0;
}
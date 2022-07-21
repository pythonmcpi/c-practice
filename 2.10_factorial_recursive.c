/* Try to write the factorial function recursively */
/* Build: g++ -o 2.10_factorial_recursive.exe 2.10_factorial_recursive.c */

#include <stdio.h>

int recursive_factorial(int);

int main(void) {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int c = recursive_factorial(n);
    printf("%d! = %d\n", n, c);

    return 0;
}

int recursive_factorial(int x) {
    if (x > 1)
        return x * recursive_factorial(x - 1);
    return x;
}
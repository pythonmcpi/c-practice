/* Write a function to raise a number to an integer power, x_to_int_n(x,n) */
/* Build: g++ -o 2.8_integer_power.exe 2.8_integer_power.c */

#include <stdio.h>

double x_to_int_n(double x, int n);

int main(void) {
    double x;
    int n;
    printf("Enter a number: ");
    scanf("%lf", &x);
    printf("Enter a power: ");
    scanf("%d", &n);

    double y = x_to_int_n(x, n);

    printf("%.2f ** %d = %.2f\n", x, n, y);

    return 0;
}

double x_to_int_n(double x, int n) {
    double current = x;
    for (;n > 1; --n) {
        current *= x;
    }
    return current;
}

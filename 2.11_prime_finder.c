/* Write a program to input a positive number and print all the prime number less than or equal to that number, using functions like is_prime() and get_positive_int() */
/* Build: g++ -o 2.11_prime_finder.exe 2.11_prime_finder.c */

#include <stdio.h>
#include <stdbool.h>

// Required functions
bool is_prime(int);
int get_positive_int();

int main(void) {
    int n = get_positive_int();
    int c;

    for (int i = n; i > 0; i--) {
        if (is_prime(i)) {
            c++;
            printf("%d ", i);
        }
    }

    printf("\nFound %d prime number(s).\n", c);

    return 0;
}

bool is_prime(int n) {
    if (n < 4) // n = 1, 2, or 3, which are all prime
        return true;
    
    for (int i = n - 1; i > 1; i--) {
        double mod = n % i;
        if (mod == 0.0) {
            return false;
        }
    }

    return true;
}

int get_positive_int() {
    int n = -1;

    while (n <= 0) {
        printf("Enter a positive integer: ");
        scanf("%d", &n);
    }

    return n;
}
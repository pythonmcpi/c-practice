/* Input a number and decide if it is prime */
/* Build: g++ -o 1.4_prime.exe 1.4_prime.c */

#include <stdio.h>
#include <math.h>

int main(void) {
    int x;
    double sqrt_x;

    printf("Input a number: ");
    scanf("%d", &x);
    sqrt_x = sqrt(x);

    for (int n = 2; n <= sqrt_x; n++) {
        if (!(x % n)) { /* Not prime, since we found a factor */
            printf("%d is not prime\n", x);
            return 0;
        }
    }

    printf("%d is prime\n", x);

    return 0;
}

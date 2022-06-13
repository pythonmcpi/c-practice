/* Input a number in print all its factors */
/* Build: g++ -o 1.3_factor.exe 1.3_factor.c */

#include <stdio.h>
#include <math.h>

int main(void) {
    int x;
    double sqrt_x;

    printf("Input a number: ");
    scanf("%d", &x);
    sqrt_x = sqrt(x);

    for (int n = 1; n <= sqrt_x; n++) {
        if (!(x % n)) /* No remainder */
            printf("Factors found: %d and %d\n", n, x / n);
    }

    return 0;
}

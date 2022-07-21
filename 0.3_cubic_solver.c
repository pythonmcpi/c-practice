/* Solve a cubic equation (0 = ax^3 + bx^2 + cx + d) given a, b, c, and d. */
/* Build: g++ -o 0.3_cubic_solver.exe 0.3_cubic_solver.c */

#include <stdio.h>
#include <float.h>
#include <math.h>

void prompt(char, double *);
void solve(double (*)(double), double *, double *);

double cubic(double);
double black_magic(double);

double a, b, c, d;

int main(void) {
    // Step 1: Get input
    prompt('a', &a);
    prompt('b', &b);
    prompt('c', &c);
    prompt('d', &d);

    // Step 2: Binary search for real solution
    double x, y;
    solve(&cubic, &x, &y);
    printf("Solution found: (%.6f, %.6f)\n", x, y);

    // Step 3: Figure out total number of solutions
    // aka calculus stuff that makes my head hurt
    double x2, y2;
    solve(&black_magic, &x2, &y2);

    printf("%.6f, %.6f", x2, y2);

    return 0;
}

void prompt(char c, double *n) {
    printf("%c = ", c);
    scanf("%lf", n);
}

void solve(double (*equation)(double), double *rx, double *ry) {
    /* Binary search for the solution and call the function given for to get the value of y. */

    double upper_bound = DBL_MAX;
    double lower_bound = DBL_MIN;

    // Step 3: Binary search for one of the real solutions
    double x, y;

    while (fabs(upper_bound - lower_bound) > 0.000001) {
        x = (upper_bound + lower_bound) / 2;
        y = (*equation)(x);

        //printf("%f .. %f | x = %f, y = %f\n", upper_bound, lower_bound, x, y);

        if (fabs(y) < 0.000001) {
            // Close enough
            upper_bound = x;
            lower_bound = x;
            
            continue;
        }

        if (y < 0)
            lower_bound = x;
        else
            upper_bound = x;
    }

    *rx = x;
    *ry = y;
}

double cubic(double x) {
    return a * pow(x, 3) + b * pow(x, 2) + c * x + d;
}

double black_magic(double x) {
    return 3 * a * pow(x, 2) + 2 * b * x + c;
}
/*
    Write a rogram to print all Fahrenheit and Celsius temperatures using the conversion
    C = (F-32)*5/9
    for 20 degree increments from 32 to 212. (See K&R,p. 9 if you are stuck.)
*/
/* Build: g++ -o 1.2_temperature.exe 1.2_temperature.c */

#include <stdio.h>

int main(void) {
    double c;
    for (int f = 32; f <= 212; f += 20) {
        c = (((double) f) - 32)*5/9;
        printf("F = %d, C = %.1f\n", f, c);
    }

    return 0;
}

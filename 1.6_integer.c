/* Input an integer and print the value of each digit in English: 932 => nine three two */
/* Build: g++ -o 1.6_integer.exe 1.6_integer.c */

#include <stdio.h>
#include <string.h>

int main(void) {
    char x[1024];
    int length;
    int n;

    printf("Enter a number: ");
    scanf("%1024s", &x);
    length = strlen(x);

    for (int i = 0; i < length; i++) {
        n = x[i] - '0'; /* Convert to corresponding int */
        switch (n) {
            case 0: printf("zero "); break;
            case 1: printf("one "); break;
            case 2: printf("two "); break;
            case 3: printf("three "); break;
            case 4: printf("four "); break;
            case 5: printf("five "); break;
            case 6: printf("six "); break;
            case 7: printf("seven "); break;
            case 8: printf("eight "); break;
            case 9: printf("nine "); break;
        }
    }

    printf("\n");

    return 0;
}

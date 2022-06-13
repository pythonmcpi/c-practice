/* Count the number of characters and lines in a file (use '\n' to find lines) */
/* Build: g++ -o 1.7_fileinfo.exe 1.7_fileinfo.c */

#include <stdio.h>

int main(void) {
    char filename[1024];
    FILE *ptr;

    int line_count = 1;
    int char_count = 0;

    printf("Enter a file name/path: ");
    scanf("%1024s", &filename);

    ptr = fopen(filename, "r");

    if (ptr == NULL) {
        printf("Failed to open file.\n");
        return 1;
    }

    while (!feof(ptr)) {
        char c = fgetc(ptr);
        if (c == EOF) break;
        if (c == '\n') line_count++;
        char_count++;
    }

    printf("File %s has:\n", filename);
    printf("  %d lines\n", line_count);
    printf("  %d characters\n", char_count);

    return 0;
}

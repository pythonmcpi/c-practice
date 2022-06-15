/* Custom Challenge: Find segment intersections given endpoints of two straight segments */
/* Build: g++ -o 0.2_line_intersection.exe 0.2_line_intersection.c */

#include <stdio.h>

int main(void) {
    double x1, x2, x3, x4, y1, y2, y3, y4;

    printf("Segment 1: (x1, y1) to (x2, y2)\n");
    printf("Segment 2: (x3, y3) to (x4, y4)\n");

    /* Get input first */
    printf("x1: "); scanf("%lf", &x1);
    printf("y1: "); scanf("%lf", &y1);
    printf("x2: "); scanf("%lf", &x2);
    printf("y2: "); scanf("%lf", &y2);
    printf("x3: "); scanf("%lf", &x3);
    printf("y3: "); scanf("%lf", &y3);
    printf("x4: "); scanf("%lf", &x4);
    printf("y4: "); scanf("%lf", &y4);

    double slope1 = (y1 - y2) / (x1 - x2);
    double slope2 = (y3 - y4) / (x3 - x4);

    double yint1 = y1 - (slope1 * x1);
    double yint2 = y3 - (slope2 * x3);

    if (slope1 == slope2) {
        if (yint1 == yint2) {
            printf("Lines overlap\n");
            return 0;
        }
        printf("No intersection\n");
        return 0;
    }

    double x = (yint2 - yint1) / (slope1 - slope2);
    double y = (slope1 * x) + yint1;

    printf("Intersection at (%.2f, %.2f)", x, y);

    return 0;
}

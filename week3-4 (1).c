#include <stdio.h>

int main() {
    float u, a, t, distance;
    printf("Enter initial velocity (u), acceleration (a), and time (t):50,80,6s ");
    scanf("%f %f %f", &u, &a, &t);
    distance = (u * t) + (0.5 * a * t * t);
    printf("Distance traveled = %.2f\n", distance);
    return 0;
}
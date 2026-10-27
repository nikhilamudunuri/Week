#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, s, area;
    printf("Enter the three sides of the triangle:5,6,7 ");
    scanf("%f %f %f", &a, &b, &c);
    s = (a + b + c) / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    printf("Area of the triangle = %.2f\n", area);
    return 0;
}
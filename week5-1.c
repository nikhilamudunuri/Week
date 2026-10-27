
#include <stdio.h>

int main() {
    int num1, num2, num3, num4;
    int max, min;

    printf("Enter four integers:4,7,12,17 ");
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

    // Finding Maximum
    max = num1;
    if (num2 > max) max = num2;
    if (num3 > max) max = num3;
    if (num4 > max) max = num4;

    // Finding Minimum
    min = num1;
    if (num2 < min) min = num2;
    if (num3 < min) min = num3;
    if (num4 < min) min = num4;

    printf("Maximum number = %d\n", max);
    printf("Minimum number = %d\n", min);

    return 0;
}
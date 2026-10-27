
#include <stdio.h>

int main() {
    float num1, num2, num3, sum, avg;
    printf("Enter three numbers:5,6,7 ");
    scanf("%f %f %f", &num1, &num2, &num3);
    sum = num1 + num2 + num3;
    avg = sum / 3;
    printf("Sum = %.2f\n", sum);
    printf("Average = %.2f\n", avg);
    return 0;
}
#include <stdio.h>

int main() {
    float principal, rate, time, si;
    printf("Enter principal amount, rate of interest, and time period:2,4,6");
    scanf("%f %f %f", &principal, &rate, &time);
    si = (principal * rate * time) / 100;
    printf("Simple Interest = %.2f\n", si);
    return 0;
}
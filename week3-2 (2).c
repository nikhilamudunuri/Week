#include <stdio.h>
#include <math.h>

int main() {
    double principal, rate, time, ci, amount;
    printf("Enter principal amount, rate of interest, and time period:5,55,67 ");
    scanf("%lf %lf %lf", &principal, &rate, &time);
    amount = principal * pow((1 + rate / 100), time);
    ci = amount - principal;
    printf("Compound Interest = %.2lf\n", ci);
    return 0;
}
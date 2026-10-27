#include <stdio.h>

int main() {
    float units, total_bill;

    printf("Enter total units consumed: 8");
    scanf("%f", &units);

    if (units <= 100) {
        total_bill = units * 1.50;
    } else if (units <= 200) {
        total_bill = units * 2.50;
    } else if (units <= 500) {
        total_bill = units * 4.00;
    } else {
        total_bill = units * 6.00;
    }

    printf("Total Electricity Bill Amount: ₹%.2f\n", total_bill);

    return 0;
}
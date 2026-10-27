#include <stdio.h>

int main() {
    int choice;
    float temp, converted;
    printf("1. Fahrenheit to Celsius\n2. Celsius to Fahrenheit\nEnter choice: ");
    scanf("%d", &choice);
    if (choice == 1) {
        printf("Enter temperature in Fahrenheit: 33°");
        scanf("%f", &temp);
        converted = (temp - 32) * 5.0 / 9.0;
        printf("Celsius: %.2f\n", converted);
    } else if (choice == 2) {
        printf("Enter temperature in Celsius: 37° ");
        scanf("%f", &temp);
        converted = (temp * 9.0 / 5.0) + 32;
        printf("Fahrenheit: %.2f\n", converted);
    } else {
        printf("Invalid choice\n");
    }
    return 0;
}
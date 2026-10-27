#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, discriminant, root1, root2, realPart, imagPart;

    printf("Enter coefficients a, b and c:88,54,78 ");
    scanf("%f %f %f", &a, &b, &c);

    discriminant = b * b - 4 * a * c;

    // Real and different roots
    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are real and different:\n");
        printf("Root 1 = %.2f\n", root1);
        printf("Root 2 = %.2f\n", root2);
    }
    // Real and equal roots
    else if (discriminant == 0) {
        root1 = root2 = -b / (2 * a);
        printf("Roots are real and equal:\n");
        printf("Root 1 = Root 2 = %.2f\n", root1);
    }
    // Complex / Imaginary roots
    else {
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);
        printf("Roots are complex and imaginary:\n");
        printf("Root 1 = %.2f + %.2fi\n", realPart, imagPart);
        printf("Root 2 = %.2f - %.2fi\n", realPart, imagPart);
    }

    return 0;
}
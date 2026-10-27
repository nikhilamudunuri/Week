
#include <stdio.h>

int main() {
    int A = 2, B = 3, C = 4, D = 5, E = 6, F = 7, G = 8;
    int i = 5, J;

    // a. A + B * C + (D * E) + F * G
    int res_a = A + B * C + (D * E) + F * G;
    printf("Expression a: %d\n", res_a);

    // b. A / B * C - B + A * D / 3
    int res_b = A / B * C - B + A * D / 3;
    printf("Expression b: %d\n", res_b);

    // c. A+++B---A
    int res_c = A++ + B-- - A;
    printf("Expression c: %d\n", res_c);

    // d. J = (i++) + (++i)
    J = (i++) + (++i);
    printf("Expression d: %d\n", J);

    return 0;
}
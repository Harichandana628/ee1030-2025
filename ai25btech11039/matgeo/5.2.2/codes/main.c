#include <stdio.h>

int main() {
    // Coefficients of equations
    float a11 = 5, a12 = -4, b1 = -8;
    float a21 = 7, a22 = 6, b2 = 9;

    // Determinant of coefficient matrix
    float detA = a11 * a22 - a12 * a21;

    // Check if determinant is zero (no unique solution)
    if (detA == 0) {
        printf("No unique solution (determinant = 0)\n");
        return 0;
    }

    // Determinants for u and v using Cramer's Rule
    float detU = b1 * a22 - a12 * b2;   // (-8)*6 - (-4)*9 = -12
    float detV = a11 * b2 - b1 * a21;   // (5)*9 - (-8)*7 = 101

    // Compute solution
    float u = detU / detA;   // -12 / 58 = -0.2069
    float v = detV / detA;   // 101 / 58 = 1.7414

    // Print results
    printf("Solution:\n");
    printf("u = %.6f  (≈ -6/29)\n", u);
    printf("v = %.6f  (≈ 101/58)\n", v);

    return 0;
}

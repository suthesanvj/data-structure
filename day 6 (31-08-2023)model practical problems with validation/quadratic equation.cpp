#include <stdio.h>
#include <math.h>
#include <stdbool.h> 
int main() {
    double a, b, c;
    double discriminant, root1, root2, realPart, imaginaryPart;

    printf("Enter the coefficient of x^2 (a): ");
    if (scanf("%lf", &a) != 1) {
        printf("Invalid input for coefficient a.\n");
        return 1; 
    }

    printf("Enter the coefficient of x (b): ");
    if (scanf("%lf", &b) != 1) {
        printf("Invalid input for coefficient b.\n");
        return 1; 
    }

    printf("Enter the constant term (c): ");
    if (scanf("%lf", &c) != 1) {
        printf("Invalid input for constant term c.\n");
        return 1;
    }

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Root 1: %lf\n", root1);
        printf("Root 2: %lf\n", root2);
        printf("Nature of roots: Real and distinct\n");
    } else if (discriminant == 0) {
        root1 = -b / (2 * a);
        printf("Root: %lf\n", root1);
        printf("Nature of roots: Real and equal\n");
    } else {
        realPart = -b / (2 * a);
        imaginaryPart = sqrt(-discriminant) / (2 * a);
        printf("Root 1: %lf + %lfi\n", realPart, imaginaryPart);
        printf("Root 2: %lf - %lfi\n", realPart, imaginaryPart);
        printf("Nature of roots: Complex\n");
    }
    return 0;
}


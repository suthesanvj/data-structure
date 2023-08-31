#include <stdio.h>
#include <math.h>
int main() {
double a, b, c;
double discriminant, root1, root2, realPart, imaginaryPart;
 printf("Enter the coefficient of x^2 (a): ");
  scanf("%lf", &a);
printf("Enter the coefficient of x (b): ");
scanf("%lf", &b);
  printf("Enter the constant term (c): ");
  scanf("%lf", &c);
  discriminant = b*b - 4*a*c;
 if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2*a);
        root2 = (-b - sqrt(discriminant)) / (2*a);
        printf("Root 1: %lf\n", root1);
        printf("Root 2: %lf\n", root2);
        printf("Nature of roots: Real and distinct\n");
    } else if (discriminant == 0) {
        root1 = -b / (2*a);
        printf("Root: %lf\n", root1);
        printf("Nature of roots: Real and equal\n");
    } else {
        realPart = -b / (2*a);
        imaginaryPart = sqrt(-discriminant) / (2*a);
        printf("Root 1: %lf + %lfi\n", realPart, imaginaryPart);
        printf("Root 2: %lf - %lfi\n", realPart, imaginaryPart);
       printf("Nature of roots: Complex\n");
    }
    return 0;
}

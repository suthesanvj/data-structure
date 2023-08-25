#include <stdio.h>

int fibonacciSum(int n) {
    if (n <= 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }

    int fib[n + 1];
    fib[0] = 0;
    fib[1] = 1;

    int sum = fib[0] + fib[1];
    for (int i = 2; i <= n; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
        sum += fib[i];
    }

    return sum;
}

int main() {
    int terms;

    printf("Enter the number of terms for Fibonacci series: ");
    scanf("%d", &terms);

    int sum = fibonacciSum(terms);

    printf("Sum of Fibonacci series up to %d terms: %d\n", terms, sum);

    return 0;
}


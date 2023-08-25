#include <stdio.h>

void printOddAndEven(int arr[], int size) {
    printf("Odd values in the array: ");
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 != 0) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");

    printf("Even values in the array: ");
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}

int main() {
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int elements[size];
    printf("Enter elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &elements[i]);
    }

    printOddAndEven(elements, size);

    return 0;
}


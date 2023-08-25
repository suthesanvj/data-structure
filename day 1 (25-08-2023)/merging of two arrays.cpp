#include <stdio.h>

void mergeArrays(int arr1[], int size1, int arr2[], int size2, int result[]) {
    int i = 0, j = 0, k = 0;

    while (i < size1 && j < size2) {
        if (arr1[i] < arr2[j]) {
            result[k++] = arr1[i++];
        } else {
            result[k++] = arr2[j++];
        }
    }

    while (i < size1) {
        result[k++] = arr1[i++];
    }

    while (j < size2) {
        result[k++] = arr2[j++];
    }
}

int main() {
    int size1, size2;

    printf("Enter the size of the first array: ");
    scanf("%d", &size1);

    int arr1[size1];
    printf("Enter elements of the first array:\n");
    for (int i = 0; i < size1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the size of the second array: ");
    scanf("%d", &size2);

    int arr2[size2];
    printf("Enter elements of the second array:\n");
    for (int i = 0; i < size2; i++) {
        scanf("%d", &arr2[i]);
    }

    int mergedSize = size1 + size2;
    int mergedArray[mergedSize];

    mergeArrays(arr1, size1, arr2, size2, mergedArray);

    printf("Merged array:\n");
    for (int i = 0; i < mergedSize; i++) {
        printf("%d ", mergedArray[i]);
    }
    printf("\n");

    return 0;
}


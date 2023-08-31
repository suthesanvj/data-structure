#include <stdio.h>
void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
void printColumnWise(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d\n", arr[i]);
    }
}
int main() {
    int arr[] = {45, 67, 3, 4, 56, 78, 23, 12, 11, 89};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("Original numbers:\n");
    printColumnWise(arr, size);
    bubbleSort(arr, size);
    printf("\nSorted numbers in increasing order:\n");
    printColumnWise(arr, size);
    return 0;
}

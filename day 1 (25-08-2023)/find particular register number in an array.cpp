#include <stdio.h>

int searchRegisterNumber(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i; 
        }
    }
    return -1; 
}

int main() {
    int size, target;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int registerNumbers[size];
    printf("Enter the register numbers:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &registerNumbers[i]);
    }

    printf("Enter the register number to search for: ");
    scanf("%d", &target);

    int index = searchRegisterNumber(registerNumbers, size, target);

    if (index != -1) {
        printf("Register number %d found at index %d.\n", target, index);
    } else {
        printf("Register number %d not found in the array.\n", target);
    }

    return 0;
}


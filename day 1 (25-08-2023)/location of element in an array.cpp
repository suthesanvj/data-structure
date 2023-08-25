#include <stdio.h>

void findElementLocations(int arr[], int size, int target) {
    printf("Locations of element %d in the array: ", target);
    
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int size, target;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int elements[size];
    printf("Enter elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &elements[i]);
    }

    printf("Enter the element to search for: ");
    scanf("%d", &target);

    findElementLocations(elements, size, target);

    return 0;
}


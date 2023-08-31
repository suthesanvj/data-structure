#include <stdio.h>

void readMatrix(int matrix[][10], int rows, int cols) {
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

void printMatrix(int matrix[][10], int rows, int cols) {
    printf("Resultant Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void addMatrix(int result[][10], int matrix1[][10], int matrix2[][10], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}

void subtractMatrix(int result[][10], int matrix1[][10], int matrix2[][10], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }
}

void multiplyMatrix(int result[][10], int matrix1[][10], int matrix2[][10], int rows1, int cols1, int cols2) {
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < cols1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}

int main() {
    int choice, rows1, cols1, rows2, cols2;
    int matrix1[10][10], matrix2[10][10], result[10][10];

    printf("Enter the number of rows and columns of matrix 1: ");
    scanf("%d %d", &rows1, &cols1);
    readMatrix(matrix1, rows1, cols1);

    printf("Enter the number of rows and columns of matrix 2: ");
    scanf("%d %d", &rows2, &cols2);
    readMatrix(matrix2, rows2, cols2);

    while (1) {
        printf("\nMenu:\n");
        printf("1. Add matrices\n");
        printf("2. Subtract matrices\n");
        printf("3. Multiply matrices\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (rows1 == rows2 && cols1 == cols2) {
                    addMatrix(result, matrix1, matrix2, rows1, cols1);
                    printMatrix(result, rows1, cols1);
                } else {
                    printf("Matrices cannot be added. Dimensions are not the same.\n");
                }
                break;

            case 2:
                if (rows1 == rows2 && cols1 == cols2) {
                    subtractMatrix(result, matrix1, matrix2, rows1, cols1);
                    printMatrix(result, rows1, cols1);
                } else {
                    printf("Matrices cannot be subtracted. Dimensions are not the same.\n");
                }
                break;

            case 3:
                if (cols1 == rows2) {
                    multiplyMatrix(result, matrix1, matrix2, rows1, cols1, cols2);
                    printMatrix(result, rows1, cols2);
                } else {
                    printf("Matrices cannot be multiplied. Number of columns in the first matrix must be equal to the number of rows in the second matrix.\n");
                }
                break;

            case 4:
                printf("Exiting...\n");
                return 0;

            default:
                printf("Invalid choice.\n");
        }
    }

    return 0;
}


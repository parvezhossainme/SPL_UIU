#include <stdio.h>

#define MAX_SIZE 100

int isUT(int matrix[3][3], int n) {
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (matrix[i][j] != 0) {
                return 0; // Not upper triangular
            }
        }
    }
    return 1; // Upper triangular
}

int calculateDiagonalResult(int matrix[3][3], int n, int isUpperTriangular) {
    int result = 0;
    if (isUpperTriangular) {
        result = 1;
        for (int i = 0; i < n; i++) {
            result *= matrix[i][i];
        }
    } else {
        for (int i = 0; i < n; i++) {
            result += matrix[i][i];
        }
    }
    return result;
}

int main() {
    int n;
    scanf("%d", &n);
    int matrix[n][n];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int isUpperTri = isUT(matrix, n);
    int result = calculateDiagonalResult(matrix, n, isUpperTri);

    if (isUpperTri) {
        printf("Product of the main diagonal entries: %d\n", result);
    } else {
        printf("Sum of the main diagonal entries: %d\n", result);
    }

    return 0;
}

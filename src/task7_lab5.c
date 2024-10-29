#include <stdio.h>

void multiplyMatrices(int m, int n, int p, int A[m][n], int B[n][p], int C[m][p]) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            C[i][j] = 0;
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            for (int k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

void inputMatrix(int rows, int cols, int matrix[rows][cols]) {
    printf("Enter elements of the matrix (%dx%d):\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
}

void printMatrix(int rows, int cols, int matrix[rows][cols]) {
    printf("Matrix (%dx%d):\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int m, n, p;

    printf("Enter rows and columns for Matrix A: ");
    scanf("%d %d", &m, &n);
    printf("Enter columns for Matrix B (rows will match Matrix A columns): ");
    scanf("%d", &p);

    int A[m][n], B[n][p], C[m][p];

    inputMatrix(m, n, A);
    inputMatrix(n, p, B);

    multiplyMatrices(m, n, p, A, B, C);

    printf("Resultant Matrix C (Matrix A x Matrix B):\n");
    printMatrix(m, p, C);

    return 0;
}


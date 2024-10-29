#include <stdio.h>

void matrix_multiply(int rowsA, int colsA, int colsB, double A[rowsA][colsA], double B[colsA][colsB], double C[rowsA][colsB]) {
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++) {
            C[i][j] = 0;
            for (int k = 0; k < colsA; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

int main() {
    double A[2][3] = {{1, 2, 3}, {4, 5, 6}};
    double B[3][2] = {{1, 2}, {3, 4}, {5, 6}};
    double C[2][2];

    matrix_multiply(2, 3, 2, A, B, C);

    for (int i = 0; i < 2; i++)



#include <stdio.h>

void matrix_vector_multiply(int rows, int cols, double matrix[rows][cols], double vector[cols], double result[rows]) {
    for (int i = 0; i < rows; i++) {
        result[i] = 0;
        for (int j = 0; j < cols; j++) {
            result[i] += matrix[i][j] * vector[j];
        }
    }
}

int main() {
    double matrix[2][3] = {{1, 2, 3}, {4, 5, 6}};
    double vector[3] = {1, 1, 1};
    double result[2];

    matrix_vector_multiply(2, 3, matrix, vector, result);

    for (int i = 0; i < 2; i++) {
        printf("%f\n", result[i]);
    }
    return 0;
}


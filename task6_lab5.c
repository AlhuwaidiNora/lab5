#include <stdio.h>

void axpy(int n, double a, double x[], double b, double y[], double result[]) {
    for (int i = 0; i < n; i++) {
        result[i] = a * x[i] + b * y[i];
    }
}

int main() {
    double x[3] = {1, 2, 3};
    double y[3] = {4, 5, 6};
    double result[3];
    axpy(3, 2, x, 3, y, result);

    for (int i = 0; i < 3; i++) {
        printf("%f\n", result[i]);
    }
    return 0;
}

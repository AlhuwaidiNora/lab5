#include <stdio.h>

int add_int(int a, int b) { return a + b; }
float add_float(float a, float b) { return a + b; }
float area_circle(float radius) { return 3.14159 * radius * radius; }
float area_rectangle(float length, float width) { return length * width; }
int factorial(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) result *= i;
    return result;
}

int main() {
    printf("Addition (int): %d\n", add_int(2, 3));
    printf("Addition (float): %.2f\n", add_float(2.5, 3.5));
    printf("Area of Circle: %.2f\n", area_circle(5));
    printf("Area of Rectangle: %.2f\n", area_rectangle(4, 6));
    printf("Factorial: %d\n", factorial(5));
    return 0;
}


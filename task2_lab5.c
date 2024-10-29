#include <stdio.h>

void check_endianness() {
    unsigned int x = 1;
    char *c = (char*)&x;
    if (*c)
        printf("Little Endian\n");
    else
        printf("Big Endian\n");
}

void check_architecture() {
    if (sizeof(void*) == 4)
        printf("32-bit architecture\n");
    else
        printf("64-bit architecture\n");
}

int main() {
    check_endianness();
    check_architecture();
    return 0;
}

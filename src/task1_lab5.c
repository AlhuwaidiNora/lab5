#include <stdio.h>

void print_addresses() {
    int intArray[4];
    char charArray[4];
    short shortArray[4];
    double doubleArray[4];

    printf("Integer Array:\n");
    for (int i = 0; i < 4; i++) {
        printf("%p\n", (void*)&intArray[i]);
    }

    printf("\nCharacter Array:\n");
    for (int i = 0; i < 4; i++) {
        printf("%p\n", (void*)&charArray[i]);
    }

    printf("\nShort Array:\n");
    for (int i = 0; i < 4; i++) {
        printf("%p\n", (void*)&shortArray[i]);
    }

    printf("\nDouble Array:\n");
    for (int i = 0; i < 4; i++) {
        printf("%p\n", (void*)&doubleArray[i]);
    }
}

int main() {
    print_addresses();
    return 0;
}

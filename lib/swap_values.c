#include <stdio.h>

void swap_values(int *a, int *b) {
    // store value from pointer a in a temporary variable
    int temporary_value_placeholder = *a;
    // assign value from pointer b to pointer a
    *a = *b;
    // assign value from temporary variable to pointer b
    *b = temporary_value_placeholder;
}

int swap_values_main() {
    int x = 10;
    int y = 20;
    printf("x:%d, y:%d\n", x, y);
    // pass address of x, and y
    swap_values(&x, &y);
    printf("x:%d, y:%d\n", x, y);
    return 0;
}

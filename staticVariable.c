#include <stdio.h>

void demo() {
    static int count = 0;  // Initialized once
    count++;
    printf("Called %d times\n", count);
}

int main() {
    demo();
    demo();
    demo();
    demo();
    return 0;
}
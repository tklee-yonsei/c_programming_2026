#include <stdio.h>

int a[10] = { 2, 3, 5, 7, 11, 
    13, 17, 19, 23, 29 };

void print_array() {
    for (int* p = a; p < a + 10; p++) {
        printf("%d ", *p);
    }
}

int main() {
    print_array();
    return 0;
}
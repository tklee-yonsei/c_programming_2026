#include <stdio.h>

int fibonacci_recursive(int n);

int main() {
    int n = 10;
    printf("Fibonacci of %d is %d\n", n, fibonacci_recursive(n));
    return 0;
}

int fibonacci_recursive(int n) {
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    return fibonacci_recursive(n - 1) + fibonacci_recursive(n - 2);
}
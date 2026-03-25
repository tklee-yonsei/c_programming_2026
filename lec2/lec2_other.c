#include <stdio.h>

int main() {
    int d;
    for (;;) {
        printf("Enter a number (0 to exit): ");
        scanf("%d", &d);
        if (d == 0) {
            break;
        }
    }

    return 0;
}
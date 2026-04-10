#include <stdio.h>

int main() {
    for (int i = 0; i < 10; i++) {
        i++;
        printf("i: %d\n", i);

        int i2 = 5;
        i2--;
        printf("i2: %d\n", i2);
    }
    return 0;
}
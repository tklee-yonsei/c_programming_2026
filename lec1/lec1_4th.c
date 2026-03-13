#include <stdio.h>

int main() {
    int a = 2;
    float a2 = 2.0;
    int b = 3;
    float c = 3.0;

    printf("a % b = %d\n", a % b);
    printf("a %%% c (c cast to int): %d\n", a % (int)c);
    printf("a2 %%% b (a2 cast to int): %d\n", (int)a2 % b);
    return 0;
}
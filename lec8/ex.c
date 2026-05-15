#include <stdio.h>
#include <stdlib.h>

int main() {
    int* a = (int*)malloc(sizeof(int));
    *a = 10;

    printf("a = %d\n", *a);

    free(a);

    printf("a = %d\n", *a);
    return 0;
}
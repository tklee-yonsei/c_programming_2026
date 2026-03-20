#include <stdio.h>

int main() {
    int var_floor = 3;
    int var_ho = 4;

    if (var_floor % 2 != 0) {
        if (var_ho % 2 != 0) {
            printf("Use ev1.\n");
        } else {
            printf("Use ev2.\n");
        }
    } else {
        if (var_ho % 2 != 0) {
            printf("Use ev3.\n");
        } else {
            printf("Use ev4.\n");
        }
    }
    
    return 0;
}
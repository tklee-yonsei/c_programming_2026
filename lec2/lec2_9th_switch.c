#include <stdio.h>

int main() {
    int var_score = 100;

    switch (var_score / 10) {
        case 10:
        case 9:
            printf("Grade: A\n");
            break;
        case 8:
            printf("Grade: B\n");
            break;
        case 7:
            printf("Grade: C\n");
            break;
        default:
            printf("Grade: F\n");
            break;
    }

    return 0;
}
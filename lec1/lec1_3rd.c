#include <stdio.h>

int main() {
    int num1;
    float f1;
    char c1;

    printf("Enter an integer, float, char: ");
    scanf("%d,%f/%c", &num1, &f1, &c1);
    
    printf("You entered: %d, %f, %c\n", num1, f1, c1);
    return 0;
}
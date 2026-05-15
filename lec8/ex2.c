#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "math.h"


int main() {
    char* str = (char*)malloc(10 * sizeof(char));

    str = "Hello";
    // strcpy(str, "Hello");

    char temp[] = "Hello";
    for (int i = 0; i < 5; i++) {
        str[i] = temp[i];
    }   

    return 0;
}
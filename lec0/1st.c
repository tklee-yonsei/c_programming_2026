#include<stdio.h>

int main() {
    int n = 5;  // 산의 높이
    
    for (int i = 1; i <= n; i++) {
        // 공백 출력
        for (int j = 0; j < n - i; j++) {
            printf(" ");
        }
        // 별 출력
        for (int j = 0; j < 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}


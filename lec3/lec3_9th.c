#include <stdio.h>

#define N 5
#define M 9

int main() {
    int arr[N][M];

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            arr[i][j] = i * M + j; // Assign a value to the 2D array (for example, sum of indices)
        }
    }
    // arr[4][8] = 44;

    printf("Element at arr[4][8]: %d\n", arr[4][8]); // Accessing the element at row 4, column 8
    printf("Element at &arr[4][7]: %d\n", &arr[4][7]); // Accessing the element at row 4, column 8
    printf("Element at &arr[4][8]: %d\n", &arr[4][8]); // Accessing the element at row 4, column 8


    return 0;
}
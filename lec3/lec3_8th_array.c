#include <stdio.h>

#define MAX_SIZE 100
#define RANGE 50

int main() {
    int n, i, number;
    int frequency[RANGE] = {0}; // Initialize frequency array to 0
    int arr[MAX_SIZE];

    printf("Enter the number of elements (max %d): ", MAX_SIZE);
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("Input %d number: ", i + 1);
        scanf("%d", &number);
        arr[i] = number; // Store the number in the array
        if(number >= 0 && number < RANGE) {
            frequency[number]++; // Increment the frequency of the number
        }
    }

    printf("Number Frequency\n");
    for(i = 0; i < RANGE; i++) {
        if(frequency[i] > 0) {
            printf("%d: %d\n", i, frequency[i]);
        }
    }

    return 0;
}
#include <stdio.h>

int findMax(int arr[], int size);

int findMin(int arr[], int size);

double findAvg(int arr[], int size);

int main() {
    int arr[] = {3, 5, 2, 8, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    int max = findMax(arr, size);
    int min = findMin(arr, size);
    double average = findAvg(arr, size);

    printf("Maximum element in the array: %d\n", max);
    printf("Minimum element in the array: %d\n", min);
    printf("Average of the array: %.2f\n", average);
    return 0;
}

int findMax(int arr[], int size) {
    int max = arr[0];
    for (int i = 0; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int findMin(int arr[], int size) {
    int min = arr[0];
    for (int i = 0; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

double findAvg(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return (double)sum / size;
}
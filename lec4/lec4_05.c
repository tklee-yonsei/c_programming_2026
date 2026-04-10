#include <stdio.h>

int sumOfArray(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

int sumOfArray2(int arr[]) {    
}

int main() {
    int myArray[] = {1, 2, 3, 4, 5};
    int size = sizeof(myArray) / sizeof(myArray[0]);
    
    int result = sumOfArray(myArray, size);
    printf("The sum of the array is: %d\n", result);
    
    return 0;
}
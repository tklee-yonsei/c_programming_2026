#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void printArray(const int arr[], int size) {
	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void shuffleArray(int arr[], int size) {
	for (int i = size - 1; i > 0; i--) {
		int j = rand() % (i + 1);
		int temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
	}
}

int compareAscending(int a, int b) {
	return a > b;
}

int compareDescending(int a, int b) {
	return a < b;
}

void sortArray(int arr[], int size, int (*compare)(int, int)) {
	for (int i = 0; i < size - 1; i++) {
		for (int j = 0; j < size - i - 1; j++) {
			if (compare(arr[j], arr[j + 1])) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

int main(void) {
	int arr[] = {1, 2, 3, 4, 5};
	int size = sizeof(arr) / sizeof(arr[0]);

	srand((unsigned int)time(NULL));

	printf("원본 배열: ");
	printArray(arr, size);

	shuffleArray(arr, size);
	printf("섞인 배열: ");
	printArray(arr, size);

	sortArray(arr, size, compareAscending);
	printf("오름차순 정렬 배열: ");
	printArray(arr, size);

	sortArray(arr, size, compareDescending);
	printf("내림차순 정렬 배열: ");
	printArray(arr, size);

	return 0;
}

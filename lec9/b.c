#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

typedef struct {
	char name[20];
	int age;
	double score;
	double height;
} Student;

void printStudents(const Student arr[], int size) {
	printf("%-10s %-5s %-7s %-7s\n", "Name", "Age", "Score", "Height");
	printf("--------------------------------\n");
	for (int i = 0; i < size; i++) {
		printf("%-10s %-5d %-7.1f %-7.1f\n", arr[i].name, arr[i].age, arr[i].score, arr[i].height);
	}
	printf("\n");
}

void copyStudents(Student dest[], const Student src[], int size) {
	for (int i = 0; i < size; i++) {
		dest[i] = src[i];
	}
}

void shuffleStudents(Student arr[], int size) {
	for (int i = size - 1; i > 0; i--) {
		int j = rand() % (i + 1);
		Student temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
	}
}

int compareByName(const Student *a, const Student *b) {
	return strcmp(a->name, b->name);
}

int compareByAge(const Student *a, const Student *b) {
	return a->age - b->age;
}

int compareByScore(const Student *a, const Student *b) {
	if (a->score > b->score) return 1;
	if (a->score < b->score) return -1;
	return 0;
}

int compareByHeight(const Student *a, const Student *b) {
	if (a->height > b->height) return 1;
	if (a->height < b->height) return -1;
	return 0;
}

void sortStudents(Student arr[], int size, 
    int (*compare)(const Student *, const Student *)) {
	for (int i = 0; i < size - 1; i++) {
		for (int j = 0; j < size - i - 1; j++) {
			if (compare(&arr[j], &arr[j + 1]) > 0) {
				Student temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

int main(void) {
	Student students[] = {
		{"Alice", 20, 88.5, 165.2},
		{"Brian", 22, 91.0, 178.4},
		{"Cindy", 19, 95.3, 162.7},
		{"David", 21, 84.8, 181.0},
		{"Eva", 23, 89.9, 170.1},
		{"Frank", 20, 77.4, 175.5}
	};
	int size = sizeof(students) / sizeof(students[0]);

	Student shuffled[size];
	Student working[size];

	srand((unsigned int)time(NULL));

	copyStudents(shuffled, students, size);
	shuffleStudents(shuffled, size);

	printf("Shuffled students:\n");
	printStudents(shuffled, size);

	copyStudents(working, shuffled, size);
	sortStudents(working, size, compareByName);
	printf("Sorted by name:\n");
	printStudents(working, size);

	copyStudents(working, shuffled, size);
	sortStudents(working, size, compareByAge);
	printf("Sorted by age:\n");
	printStudents(working, size);

	copyStudents(working, shuffled, size);
	sortStudents(working, size, compareByScore);
	printf("Sorted by score:\n");
	printStudents(working, size);

	copyStudents(working, shuffled, size);
	sortStudents(working, size, compareByHeight);
	printf("Sorted by height:\n");
	printStudents(working, size);

	return 0;
}

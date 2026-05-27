#include "student.h"

#include <stdio.h>
#include <string.h>

static int calculate_total(const int scores[], int count) {
  int total = 0;

  for (int i = 0; i < count; i++) {
    total += scores[i];
  }

  return total;
}

static double calculate_average(const int scores[], int count) {
  return (double)calculate_total(scores, count) / count;
}

void init_student(Student* student, const char* name, const ScoreSet* scores) {
  strcpy(student->name, name);

  student->score[SUBJECT_PROGRAMMING] = scores->programming;
  student->score[SUBJECT_MATH] = scores->math;
  student->score[SUBJECT_ENGLISH] = scores->english;

  student->total = 0;
  student->average = 0.0;
  student->grade = 'F';
}

void evaluate_student(Student* student, GradePolicy policy) {
  student->total = calculate_total(student->score, SUBJECT_COUNT);
  student->average = calculate_average(student->score, SUBJECT_COUNT);
  student->grade = policy(student->average);
}

char standard_grade_policy(double average) {
  if (average >= 90.0) {
    return 'A';
  }
  if (average >= 80.0) {
    return 'B';
  }
  if (average >= 70.0) {
    return 'C';
  }
  if (average >= 60.0) {
    return 'D';
  }
  return 'F';
}

char strict_grade_policy(double average) {
  if (average >= 95.0) {
    return 'A';
  }
  if (average >= 85.0) {
    return 'B';
  }
  if (average >= 75.0) {
    return 'C';
  }
  if (average >= 65.0) {
    return 'D';
  }
  return 'F';
}

int compare_by_total_desc(const Student* left, const Student* right) {
  if (left->total != right->total) {
    return right->total - left->total;
  }

  return strcmp(left->name, right->name);
}

int compare_by_name_asc(const Student* left, const Student* right) {
  return strcmp(left->name, right->name);
}

void sort_students(Student students[], int count, StudentCompare compare) {
  for (int i = 0; i < count - 1; i++) {
    int best = i;

    for (int j = i + 1; j < count; j++) {
      if (compare(&students[j], &students[best]) < 0) {
        best = j;
      }
    }

    if (best != i) {
      Student temp = students[i];
      students[i] = students[best];
      students[best] = temp;
    }
  }
}

void print_students(const Student students[], int count, const char* title) {
  printf("%s\n", title);
  printf("----------------------------------------\n");
  printf("%-10s %-8s %-8s %-8s %-8s %-6s\n", "Name", "Prog", "Math", "Eng",
         "Avg", "Grade");

  for (int i = 0; i < count; i++) {
    printf("%-10s %-8d %-8d %-8d %-8.1f %-6c\n", students[i].name,
           students[i].score[SUBJECT_PROGRAMMING],
           students[i].score[SUBJECT_MATH], students[i].score[SUBJECT_ENGLISH],
           students[i].average, students[i].grade);
  }

  printf("\n");
}
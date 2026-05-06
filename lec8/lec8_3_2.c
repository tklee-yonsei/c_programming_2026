#include <stdio.h>

typedef struct {
    int id;
    char name[50];
} Employee;

int main() {
    Employee emp1 = {1, "John Doe"};
    Employee emp2 = {2, "Jane Smith"};

    Employee ee[] = {emp1, emp2};

    printf("emp1: ID=%d, Name=%s\n", ee[0].id, ee[0].name);

    return 0;
}
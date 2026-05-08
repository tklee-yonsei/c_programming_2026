#include <stdio.h>

typedef struct {
    int id;
    char name[50];
} Employee;

void print_employee(Employee emp) {
    printf("ID=%d, Name=%s\n", emp.id, emp.name);
}

int main() {
    Employee emp1 = {1, "John Doe"};
    Employee emp2 = {2, "Jane Smith"};

    Employee ee[] = {emp1, emp2};

    print_employee(ee[0]);

    return 0;
}
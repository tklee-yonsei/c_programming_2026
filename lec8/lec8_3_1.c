#include <stdio.h>

typedef struct {
    int day;
    int month;
    int year;
} Date;

typedef struct {
    char name[50];
    Date birthdate;
    Date join_date;
} Person;

Date build_date(int day, 
    int month, int year);
Person build_person(const char* name, 
    Date birthdate, Date join_date);

void print_person_info(Person person);

int main() {
    Date p1_birthdate = build_date(
        15, 5, 1990);
    Date p1_join_date = build_date(
        1, 1, 2020);
    char p1_name[] = "Alice";
    Person p1 = build_person(
        p1_name, 
        p1_birthdate, 
        p1_join_date);
    
    print_person_info(p1);

    return 0;
}

Date build_date(int day, int month, int year) {
    Date date;
    date.day = day;
    date.month = month;
    date.year = year;
    return date;
}

Person build_person(const char* name, 
    Date birthdate, Date join_date) {
    Person person;
    snprintf(person.name, 
        sizeof(person.name), 
        "%s", 
        name);
    person.birthdate = birthdate;
    person.join_date = join_date;
    return person;
}

void print_date(Date date) {
    printf("%02d/%02d/%04d", 
        date.day, 
        date.month, 
        date.year);
}

void print_person_info(Person person) {
    printf("Name: %s\n", person.name);

    printf("Birthdate: ");
    print_date(person.birthdate);
    printf("\n");

    printf("Join Date: ");
    print_date(person.join_date);
    printf("\n");
}
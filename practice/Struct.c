#include <stdio.h>
#include <string.h>

struct Student {
    int id;
    char name[50];
    float marks;
};

int main() {
    struct Student s;

    s.id = 101;
    strcpy(s.name, "Rahul");
    s.marks = 85.5;

    printf("ID: %d\n", s.id);
    printf("Name: %s\n", s.name);
    printf("Marks: %.2f\n", s.marks);

    return 0;
}

#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

void swap(struct Student *a, struct Student *b) {
    struct Student temp = *a;
    *a = *b;
    *b = temp;
}

void sortStudents(struct Student *students, int size) {
    int i, j;
    for (i = 0; i < size - 1; i++) {
        for (j = 0; j < size - i - 1; j++) {
            if (students[j].roll > students[j + 1].roll) {
                swap(&students[j], &students[j + 1]);
            }
        }
    }
}

void displayStudents(struct Student *students, int size) {
    int i;
    printf("Sorted Students:\n");
    for (i = 0; i < size; i++) {
        printf("Name: %s\n", students[i].name);
        printf("Roll: %d\n", students[i].roll);
        printf("Marks: %.2f\n\n", students[i].marks);
    }
}

int main() {
    int i, numStudents;

    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    struct Student students[numStudents];

    for (i = 0; i < numStudents; i++) {
        printf("Enter details for student %d:\n", i+1);
        printf("Name: ");
        scanf(" %[^\n]s", students[i].name);
        printf("Roll: ");
        scanf("%d", &students[i].roll);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
        printf("\n");
    }

    sortStudents(students, numStudents);

    displayStudents(students, numStudents);

    return 0;
}

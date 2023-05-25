#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student *studentPtr;

    studentPtr = (struct Student *)malloc(sizeof(struct Student));

    if (studentPtr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter student details:\n");
    printf("Name: ");
    scanf(" %[^\n]s", studentPtr->name);
    printf("Roll: ");
    scanf("%d", &(studentPtr->roll));
    printf("Marks: ");
    scanf("%f", &(studentPtr->marks));

    printf("\nStudent details:\n");
    printf("Name: %s\n", studentPtr->name);
    printf("Roll: %d\n", studentPtr->roll);
    printf("Marks: %.2f\n", studentPtr->marks);

    free(studentPtr);

    return 0;
}

#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    FILE *file;
    struct Student student;
    int rollNumber, found = 0;

    // Open the file in binary read mode
    file = fopen("students.dat", "rb");

    if (file == NULL) {
        printf("Unable to open the file.\n");
        return 1;
    }

    printf("Enter the roll number of the student to search: ");
    scanf("%d", &rollNumber);

    // Search for the student in the file based on roll number
    while (fread(&student, sizeof(struct Student), 1, file)) {
        if (student.roll == rollNumber) {
            printf("Student found!\n");
            printf("Name: %s\n", student.name);
            printf("Roll: %d\n", student.roll);
            printf("Marks: %.2f\n", student.marks);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Student not found.\n");
    }

    // Close the file
    fclose(file);

    return 0;
}

#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    FILE *file;
    struct Student student;
    int numStudents, i;

    // Open the file in binary write mode
    file = fopen("students.dat", "wb");

    if (file == NULL) {
        printf("Unable to create the file.\n");
        return 1;
    }

    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    printf("Enter the details of students:\n");

    // Input and write the details of each student to the file
    for (i = 0; i < numStudents; i++) {
        printf("Student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", student.name);
        printf("Roll: ");
        scanf("%d", &student.roll);
        printf("Marks: ");
        scanf("%f", &student.marks);

        // Write the student structure to the file
        fwrite(&student, sizeof(struct Student), 1, file);
    }

    // Close the file
    fclose(file);

    printf("Student details written to the file successfully.\n");

    return 0;
}

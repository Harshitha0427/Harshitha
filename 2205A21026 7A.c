#include <stdio.h>

int main() {
    FILE *file;
    char text[100];

    // Open the file in append mode
    file = fopen("data.txt", "a");

    if (file == NULL) {
        printf("Unable to open the file.\n");
        return 1;
    }

    printf("Enter text to append to the file (max 100 characters):\n");
    fgets(text, sizeof(text), stdin);

    // Append the entered text to the file
    fprintf(file, "%s", text);

    // Close the file
    fclose(file);

    printf("Text appended to the file successfully.\n");

    return 0;
}

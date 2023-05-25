#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Usage: ./program_name <integer> <filename>\n");
        return 1;
    }

    int n = atoi(argv[1]); // Convert the first command line argument to an integer
    char *filename = argv[2]; // Get the second command line argument as the filename

    FILE *file = fopen(filename, "r"); // Open the file in read mode

    if (file == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }

    char line[256];
    int lineCount = 0;

    while (lineCount < n && fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line);
        lineCount++;
    }

    fclose(file); // Close the file

    return 0;
}

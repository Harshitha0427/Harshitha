#include <stdio.h>
#include <string.h>

struct Address {
    char street[50];
    char city[50];
    int pin;
};

struct Person {
    char name[50];
    struct Address address;
};

int main() {
    int numPersons,i;

    printf("Enter the number of persons: ");
    scanf("%d", &numPersons);

    // Declare an array of persons
    struct Person persons[numPersons];

    // Input details of persons
    for (i = 0; i < numPersons; i++) {
        printf("\nEnter details of person %d:\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]", persons[i].name);
        printf("Address - Street: ");
        scanf(" %[^\n]", persons[i].address.street);
        printf("Address - City: ");
        scanf(" %[^\n]", persons[i].address.city);
        printf("Address - PIN: ");
        scanf("%d", &persons[i].address.pin);
    }

    // Print details of all persons
    printf("\nDetails of all persons:\n");
    for (i = 0; i < numPersons; i++) {
        printf("\nPerson %d:\n", i + 1);
        printf("Name: %s\n", persons[i].name);
        printf("Address - Street: %s\n", persons[i].address.street);
        printf("Address - City: %s\n", persons[i].address.city);
        printf("Address - PIN: %d\n", persons[i].address.pin);
    }

    return 0;
}

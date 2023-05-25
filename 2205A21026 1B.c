#include <stdio.h>

struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    int numEmployees,i;
    float totalSalary = 0.0;

    printf("Enter the number of employees: ");
    scanf("%d", &numEmployees);

    // Declare an array of employees
    struct Employee employees[numEmployees];

    // Input details of employees
    for (i = 0; i < numEmployees; i++) {
        printf("\nEnter details of employee %d:\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]", employees[i].name);
        printf("ID: ");
        scanf("%d", &employees[i].id);
        printf("Salary: ");
        scanf("%f", &employees[i].salary);

        // Calculate total salary
        totalSalary += employees[i].salary;
    }

    // Display total salary
    printf("\nTotal Salary: %.2f\n", totalSalary);

    return 0;
}

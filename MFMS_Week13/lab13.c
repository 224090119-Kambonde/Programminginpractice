
#include <stdio.h>
#include <stdlib.h>
#include "record.h"

int main(void) {
    Employee *employees = NULL;
    int count = 0;
    int capacity = 2;
    int id;

    // Allocate memory for 2 employees
    employees = malloc(capacity * sizeof(Employee));

    if (employees == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Keep accepting employees until ID 0 is entered
    while (1) {
        printf("\nEnter employee ID (0 to stop): ");
        scanf("%d", &id);

        if (id == 0) {
            break;
        }

        // Increase capacity when the array is full
        if (count == capacity) {
            int newCapacity = capacity * 2;

            Employee *bigger = realloc(
                employees, newCapacity * sizeof(Employee)
            );

            if (bigger == NULL) {
                printf("Memory resizing failed.\n");
                free(employees);
                return 1;
            }

            employees = bigger;
            capacity = newCapacity;

            printf("Capacity increased to %d employees.\n",
                   capacity);
        }

        employees[count].id = id;

        printf("Enter name: ");
        scanf("%29s", employees[count].name);

        printf("Enter department: ");
        scanf("%19s", employees[count].department);

        printf("Enter salary: ");
        scanf("%lf", &employees[count].salary);

        count++;
    }

    // Display all employees
    printf("\nEmployee Records\n");
    printf("ID    NAME       DEPARTMENT    SALARY\n");

    for (int i = 0; i < count; i++) {
        printf("%-5d %-10s %-13s %.2f\n",
               employees[i].id,
               employees[i].name,
               employees[i].department,
               employees[i].salary);
    }

    printf("\nTotal employees: %d\n", count);
    printf("Final capacity: %d\n", capacity);

    // Release allocated memory
    free(employees);
    employees = NULL;

    return 0;
}

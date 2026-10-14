#include <stdio.h>
#include "Employees.h"
#include "Budget.h"
#include "Utilities.h"
#include "Reports.h"
int main(void){
    int choice = 0;
    int ID = 0;
    int position = -1;
    do{
        
        printf("Municipal Financial Management\n");
        printf("1. Add Employee\n");
        printf("2. List Employees\n");
        printf("3. Search Employee\n");
        printf("4. Calculate Budget Balance\n");
        printf("5. Display Report\n");
        printf("6. Exit\n");
        printf("Enter choice: ");
        choice = readInt();
        
        switch(choice){
            case 1:
                addEmployee();
                break;
            case 2:
                listEmployees();
                break;
            case 3:
                printf("Enter employee ID to search: ");
                ID = readInt();
                position = searchEmployee(ID);
                if (position >= 0) printf("Employee found at position %d.\n", position);
                else printf("Employee not found.\n");
                break;
            case 4:
                calculateBudgetBalance();
                break;
            case 5:
                displayReport();
                break;
            case 6:
                printf("Goodbye.\n");
                break;
            default:
                printf("Invalid choice. Please choose 1 to 6.\n");
        }
    } while(choice != 6);
return 0;
}
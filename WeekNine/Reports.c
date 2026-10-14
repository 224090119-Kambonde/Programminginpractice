#include <stdio.h>
#include "Reports.h"
#include "Employees.h"
#include "Budget.h"

void displayReport(void){
    printf("\nMFMS SUMMARY REPORT:\n");
    printf("NUmber of employees: %d\n", getEmployeeCount());
    printf("Total employee payroll: %.2f\n", calculatePayrollTotal());
    printf("Most recent budget balance: %.2f\n", getLastBudgetBalance());
}
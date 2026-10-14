#include <stdio.h>
#include "Employees.h"
#include "Utilities.h"
#define MAX_EMPLOYEES 50

static int employeeIDQuantity[MAX_EMPLOYEES];
static char employeeNames[MAX_EMPLOYEES][50];
static double employeeSalaries[MAX_EMPLOYEES];
static int employeeCount = 0;

void addEmployee(void){
    if(employeeCount >= MAX_EMPLOYEES){
        printf("Employee lis is full.\n");
        return;
    }
    printf("Enter employee ID: ");
    employeeIDQuantity[employeeCount]= readInt();
    printf("Enter employee name: ");
    readWord(employeeNames[employeeCount], 50);
    printf("Enter employee salary: ");
    employeeSalaries[employeeCount] = readDouble();
    employeeCount++; 
    printf("Employee added successfully.\n");
}
void listEmployee(void){
    if(employeeCount == 0){
        printf("No employees have been added.\n");
        return;
    }
    for(int i=0; i<employeeCount; i++)
    printf("ID: %d | Name: %s | Salary: %.2f\n", employeeIDQuantity[i], employeeNames[i], employeeSalaries[i]);
}
int searchEmployee(int ID){
    for(int i=0; i<employeeCount; i++)
    if(employeeIDQuantity[i]== ID)
    return i;
    return -1;
}
double calculatePayrollTotoal(void){
    double total = 0.00;
    for(int i=0; i<employeeCount; i++)
    total += employeeSalaries[i];
    return total;
}
int getEmployeeCount(void){
    return employeeCount;
}
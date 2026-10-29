#include <stdio.h>
#include <string.h>
#include "record.h"

Employee employees[MAX_RECORDS];
int employeeCount = 0;

void addEmployee(void){
    if (employeeCount >= MAX_RECORDS){
        printf("Employee list is full.\n");
        return;
    }

    printf("Enter employee ID: ");
    scanf("%d", &employees[employeeCount].id);

    printf("Enter name: ");
    scanf("%29s", employees[employeeCount].name);

    printf("Enter department: ");
    scanf("%19s", employees[employeeCount].department);

    printf("Enter salary: ");
    scanf("%lf", &employees[employeeCount].salary);

    employeeCount++;
    printf("Employee added succesfuly.\n");
}

void displayEmployees(void){
  
    printf("\nID.....NAME.....DEPARTMENT.....SALARY.....\n");

    for(int i=0; i< employeeCount; i++){
        printf("%-5d %-10s %-13s %.2f\n",
        employees[i].id,
     employees[i].name,
     employees[i].department,
     employees[i].salary);
    }
}
Employee *findEmployee(Employee list[], int n, int id){
    for(int i =0; i< n; i++){
        if(list[i].id == id){
            return &list[i];
        }
    }
return NULL;
}
void updateSalary(Employee *e, double newSalary){
    if(e !=NULL){
        e->salary =newSalary;
    }
}


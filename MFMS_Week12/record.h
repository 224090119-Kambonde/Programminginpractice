#ifndef RECORDS_H
#define RECORDS_H
#define MAX_RECORDS 100

//from the week 11 notes now where creating structures for the date, employees and supplier.
typedef struct{
    int day;
    int month;
    int year;
}Date;

typedef struct {
    int id;
    char name[30];
    char department[20];
    double salary;
}Employee;

typedef struct{
    int id;
    char name[40];
    char email[40];
    char phone[15];
    char town[20];
}Supplier;

typedef struct{
    int id;
    char description[40];
    double value;
    Date acquired;
}Asset;

typedef struct{
    char department[20];
    double allocated;
    double spent;
}Budget;

typedef struct{
    int id;
    char title[40];
    double budget;
    Date startDate;
    Date endDate;
}Project;


void updateSalary(Employee *e, double newSalary);
Employee *findEmployee(Employee list[], int n, int id);

void addEMployee(void);
void displayEmployees(void);
Employee *findEmployee(Employee list[], int n, int id);
void updateSalary(Employee *e, double newSalary);
#endif
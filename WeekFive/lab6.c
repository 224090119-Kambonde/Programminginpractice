#include <stdio.h>
#include <string.h>
int main(){
//A. Employee salaries
 //dont forget to initialize your variables before you add values into them
    double total = 0.00;
    double highest = 0.00;
    double lowest = 0.00;
    double average = 0.00;
    double search = 0.00;
    int found =0;

    //prompt for the employees salary
    double salary[50];
    for(int i=0; i<50; i++){
        printf("Enter the salary of employee %d", i+1);
        scanf("%lf", &salary[i]);
    }
    //calculate the total salary
for(int i=0; i<50; i++){
    total = salary[i]+total;
}
    //calculate the average salary
average = total/50;

    //Determind the highest salary
highest = salary[0];
for(int i=0; i<50; i++){
    if(salary[i]>highest){
        highest = salary[0];
    }
}
    //Determine the lowest salary
    for(int i=0; i<50; i++){
if(salary[i]<lowest){
    lowest = salary[i];
}
    }
// Search for a particular salary
printf("Enter the salary you are searching for: ");
scanf("%lf", &salary);
for(int i=0; i<50; i++){
    if(salary[i] == search){
        found =1;
        printf("Salary found at employee %d\n", i+1);
    }
}
if(!found){
    printf("Salary not found.\n");
}

//B. Department budgets
float budgets[10];
float totalBudget= 0.00;
float average= 0.00;
float temp =0.00;

//Capture 10 department budgets
for(int i=0; i<10; i++){
printf("Enter the departments budget", i+1);
scanf("%f", &budgets[i]);
}
//display the budgets
for(int i=0; i<10; i++){
printf("%.2f\n", budgets[i]);
}

//Calculate the total budget
for(int i=0; i<10; i++){
    totalBudget= budgets[i]+totalBudget;
}

//Calculate the average budget
average = totalBudget/10;

//Sort budgets from lowest to highest
for (int i = 0; i < 10 - 1; i++) {

    for (int j = 0; j < 10 - i - 1; j++) {

        if (budgets[j] > budgets[j + 1]) {

            temp = budgets[j];
            budgets[j] = budgets[j + 1];
            budgets[j + 1] = temp;
        }
    }
}

printf("Budgets from lowest to highest: \n");
for(int i=0; i<10; i++){
    printf("%.2f\n", budgets[i]);
}

//C. Vehicle regstration numbers
char registrations[20][20]; 

//Capture 20 registration numbers
for(int i=0; i<20; i++){
    printf("Enter vehicle registration: ");
    scanf("%19s", registrations[i]);
}

//Display all registration numbers
printf("Vehicle registrations: \n");
for(int i=0; i<20; i++){
    printf("%s\n", registrations[i]);
}

//Search for a particular registration number
char searchRegistration[20];
int found = 0;

printf("Enter the registration number you want to search for: ");
scanf("%19s", searchRegistration);

for (int i = 0; i < 20; i++) {

    if (strcmp(registrations[i], searchRegistration) == 0) {

        found = 1;

        printf("Registration found at position %d\n", i + 1);

        break;
    }
}

if (!found) {
    printf("Registration not found.\n");
}
    return 0;
}
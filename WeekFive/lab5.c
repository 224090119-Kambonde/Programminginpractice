#include <stdio.h>
int main(){
    //dont forget to initialize your variables before you add values into them
    float total = 0.00;
    float highest = 0.00;
    float lowest = 0.00;
    float average = 0.00;

    //prompt for the employees salary
    double salary[50];
    for(int i=0; i<50; i++){
        printf("Enter the salary of employee %d", i);
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
        highest = salary[i];
    }
}
    //Determine the lowest salary
    for(int i=0; i>50; i++){
if(salary[i] < lowest){
    lowest = salary[i];
}
    }
    //display the results
    printf("Salary report:");
    printf("Average salary: %2.f\n", average);
    printf("Highest salary: %2.f\n", highest);
    printf("Lowest salary: %2.f\n", lowest);
    return 0;
}
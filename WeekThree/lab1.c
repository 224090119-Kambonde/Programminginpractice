#include <stdio.h>

int main(){
//now we declare variables needed in this code (since its a double)
double salary= 0.00;
double housingAllowance= 0.00;
double transportAllowance= 0.00;
double taxAmount= 0.00;
double grossSalary= 0.00;
double netSalary= 0.00;

printf("Enter basic salary: "); 
scanf("%f", &salary); 
printf("Enter housing allowance: "); 
scanf("%f", &housingAllowance); 
printf("Enter transport allowance: "); 
scanf("%f", &transportAllowance); 
printf("Enter tax: "); 
scanf("%f", &taxAmount); 
grossSalary = salary + housingAllowance + transportAllowance; 
netSalary = grossSalary - taxAmount;
printf("\nGross Salary: %.2f\n", grossSalary); 
printf("Net Salary: %.2f\n", netSalary);

//next: ask the user for housing allowance, ask for transport allowance, and ask for the taxing amount
//calculate the gross
//display the gross
//calculate the net
//display the net

    return 0;

}
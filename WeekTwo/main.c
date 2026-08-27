#include <stdio.h>

int main(){
    printf("Municipal Budget Caculator");
//this is where we declare our variables//
double revenue=0; 
double expense=0;
double balance=0;
int departments=0;
double payroll=0;
double procurement=0;
double assets=0;


//we are going to prompt the user for revenue, were first printing a statement//
printf("Please enter the total revenue.");
scanf("%lf", &revenue);

//then we prompt the user for expense//
printf("Please enter the total expense.");
scanf("%lf", &expense);

//we are going to prompt user for departments//
printf("Please enter the number of departments");
scanf("%d", &departments);

//we are going to prompt the user for their payroll//
printf("Please enter your payroll");
scanf("%lf", payroll);

//now we are prompting the user for rhe procurement
printf("Please enter the procurement");
scanf("%lf", procurement);
 //guess what, now where doing assets//
 printf("Please enter the assets");
 scanf("%lf", assets);


//now were calculating the balance//

balance=revenue-expense; 

//now we display the revenue and expense that was calculated and the balance//
printf("Total Revenue:    %.2f", revenue);
printf("Total Expense:    %.2f", expense);
printf("Total Balance:    %.2f", balance);
printf("Total amount of departments:    %d", departments);
printf("Total Payroll:     %.2f", payroll);
printf("Total Procurement:    %.2f", procurement);
printf("Total Assets:    %.2f", assets);



return 0;
}
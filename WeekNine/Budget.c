#include <stdio.h>
#include "Budget.h"
#include "Utilities.h"

static double lastBudgetBalance = 0.00;
void calculateBudgetBalance(void){
double revenue = 0.00;
double expenses = 0.00;
printf("Enter revenue: ");
revenue = readDouble();

printf("Enter expenses: ");
expenses = readDouble();

lastBudgetBalance= revenue - expenses;
printf("Budget balance: %.2f\n", lastBudgetBalance);
if(lastBudgetBalance > 0)
printf("Surplus\n");
else if(lastBudgetBalance < 0)
printf("Deficit\n");
else 
printf("Balance\n");
    return;
}
double getLastBudgetBalance(void){
    return lastBudgetBalance;
}
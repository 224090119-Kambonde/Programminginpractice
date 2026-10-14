#include <stdio.h>
float calculateBudget(float revenue, float expenses){
    return revenue - expenses;
}
int main(void){
    float revenue = 0.00;
    float expenses = 0.00;
    float balance= 0.00;
printf("Enter revenue: ");
scanf("%f", &revenue);
printf("Enter expenses: ");
scanf("%f", &expenses);

balance = calculateBudget(revenue, expenses);
printf("Budget balance: %.2f\n", balance);
//now we create an if statement to sort out which balances have any value above 0 in it
if(balance>0)
    printf("Surplus\n");
else if(balance<0)
    printf("Deficient\n");
else
printf("Balanced\n");

return 0;
}
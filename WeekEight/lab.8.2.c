#include <stdio.h>
float calculateVAT(float amount){
    return amount * 0.15;
}
int main(void)
{
float amount= 0.00;
float VAT= 0.00;
printf("Enter amount: ");
scanf("%f", &amount);

VAT= calculateVAT(amount);
printf("VAT: %.2f\n", VAT);
return 0;
}
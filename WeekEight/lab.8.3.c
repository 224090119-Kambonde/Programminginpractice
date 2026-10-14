#include <stdio.h>
float calculateSalary(float basic, 
float housing, 
float transport){
    return basic + housing + transport;
}
int main(void){
    float basic = 0.00;
    float housing = 0.00;
    float transport = 0.00;
    float grossSalary = 0.00;
    printf("Enter basic salary: ");
    scanf("%f", &basic);
    printf("Enter housing allowance: ");
    scanf("%f", &housing);
    printf("Enter transport allowance: ");
    scanf("%f", &transport);
    grossSalary = calculateSalary(basic, housing, transport);
    printf("Gross salary: %.2f\n", grossSalary);
return 0;
}
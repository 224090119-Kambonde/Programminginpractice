#include <stdio.h>
void swapSalaries(double *a, double *b){
    double temp = *a;
    *a = *b;
    *b = temp;
}
void swapSalariesWrong(double a, double b){
    double temp = a;
    a =b;
    b =temp;
}
 double findHighest(const double salaries[], int n){
    double highest =salaries[0];

    for(int i =1; i<n; i++){
        if(salaries[i] > highest){
            highest = salaries[i];
        }
    }
return highest;
}

double calculateAverage(const double salaries[], int n){
    double total = 0.00;
    for(int i = 0; i<n; i++){
        total +=salaries[i];
    }
return total/n;
}


void giveRaise(double salaries[], int n, double percent){
    for( int i = 0; i<n; i++){
        salaries[i] =salaries[i] + (salaries[i]* percent/100);
    }

}

void displaySalaries(const double salaries[], int n){
    for(int i =0; i <n; i++){
        printf("%.2f\n", salaries[i]);
    }
}
int main (void){
    double salary1 = 5000.00;
    double salary2 = 7000.00;

printf("Before swapping: %.2f and %.2f\n", salary1, salary2);
swapSalariesWrong(salary1, salary2);
printf("After ordinary parameters: &.2f and %.2f\n", salary1, salary2);

double salaries[]= {5000.00, 7000.00, 6000.00};
int n= 3;
printf("\nOriginal salaries: \n");
displaySalaries(salaries, n);

printf("Highest salary: &.2f\n", findHighest(salaries, n));

printf("Average salary: %.2f\n", calculateAverage(salaries, n));

giveRaise(salaries, n, 10);
printf("\nSalaries after the 10%% raise: \n");
displaySalaries(salaries, n);

return 0;
}
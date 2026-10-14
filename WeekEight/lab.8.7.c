#include <stdio.h>
void displayMessage(void);
void displayMenu(void);
float calculateVAT(float amount);
float calculateSalary(float basic, float housing, float transport);
float calculateBudget(float revenue, float expenses);
int searchEmployee(int ID, int employeeIDQuantity[], int size);

void displayMessage(void){
    printf("Welcome to the Municipal Financial Management Systeem\n");
}
void displayMenu(void){
    printf("Municipal Financial Management\n");
    printf("1. Calculate VAT\n");
    printf("2. Calculate salary\n");
    printf("3. Calculate budget\n");
    printf("4. Search employee\n");
    printf("5. Exit\n");

    printf("Enter your choice: ");
}
float calculateVAT(float amount){
    return amount * 0.15;
}
float calculateSalary(float basic, float housing, float transport){
    return basic + housing + transport;
}
float calculateBudget(float revenue, float expenses){
    return revenue - expenses;
}
int searchEmployee(int ID, int IDQuantity[], int size){
for(int i=0; i<size; i++){
    if(IDQuantity[i]== ID)
    return i;
}
return -1;
}
int main(void){
    int choice = 0; 
    int employeeIDQuantity[]= {101, 103, 103, 104, 105};
    int searchID = 0;
    int position = -1;
    int size =sizeof(employeeIDQuantity) / sizeof(employeeIDQuantity[0]);
    float amount = 0.00, basic = 0.00, housing = 0.00, transport = 0.00;
    float revenue = 0.00, expenses = 0.00, result = 0.00;

    displayMessage();
    do{
        displayMenu( );
        if (scanf("%d", &choice) != 1){
            printf("Invalid input. Please enter a number.\n");
            return 1;
        }
        switch (choice){
        case 1: 
            printf("Enter amount: ");
            scanf("%f", &amount);
            printf("VAT: %.2f\n", calculateVAT(amount));
            break;
        case 2:
            printf("Enter basic salary: ");
            scanf("%f", &housing);

            printf("Enter housing allowance: ");
            scanf("%f", &housing);

            printf("Enter transport allowance: ");
            scanf("%f", &transport);

            printf("Gross salary: %.2f\n", calculateSalary(basic, housing, transport));
            break;
        case 3:
        printf("Enter revenue: ");
        scanf("%f", &revenue);

        printf("Enter expenses: ");
        scanf("%f", &expenses);
        result = calculateBudget(revenue, expenses);
        printf("Budget balance: %.2f\n", result);
        if(result > 0)
            printf("Surplus\n");
        else if(result < 0)
            printf("Deficit\n");
        else 
            printf("Balanced\n");
        break;
        case 4:
        printf("Enter employee ID: ");
        scanf("%d", &searchID);
        position= searchEmployee(searchID, employeeIDQuantity, size);
        if(position>=0)
            printf("Employee found at position %d.\n", position);
        else 
        printf("Employee not found.\n");
        break;
        default: 
        printf("Invalid choice, Please choose from option 1 to 5.\n");    
        }
        
    
    } while (choice != 5);
   return 0;
}
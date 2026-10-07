#include <stdio.h>
#include <string.h>
int main(){
    char supplierName[50];
    char email[50];
    char phoneNumber[20];
    char town[100];
//ask the user to enter their following information:
//ask for the supplier name 
printf("Enter supplier name.", supplierName);
scanf("%s\n", &supplierName);

//then for the email
printf("Enter email.", email);
scanf("%s\n", &email);

//then the phone
printf("Enter phone number.", phoneNumber);
scanf("%s\n", &phoneNumber);

//finally the town they originally came from
printf("Enter town of origin.", town);
scanf("%s\n", &town);

//then we print the information lended by the user altogether
printf("\nSupplier Information:\n");
printf("Supplier name: %s\n", &supplierName);
printf("Email: %s\n", &email);
printf("Phone number: %s\n", &phoneNumber);
printf("Town: %s\n", &town);

return 0;
}
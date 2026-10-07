#include <stdio.h>
#include <string.h>
int main(){
    char supplierName[50];
    char email[50];
    char phoneNumber[20];
    char town[100];

    printf("Enter supplier name.", supplierName);
scanf("%s\n", &supplierName);

printf("Enter email.", email);
scanf("%s\n", &email);

printf("Enter phone number.", phoneNumber);
scanf("%s\n", &phoneNumber);

printf("Enter town of origin.", town);
scanf("%s\n", &town);
//we repeat what we typed in task 1 and past it into task 2
printf("Length of supplier name %lu\n", strlen(supplierName));

//this function displays the lenght of the name that was supplied to the value supplier name
//the function "%lu",means that were storing a long unsigned value. and we are using strlen to check the length of the string and it returns as a integer(usually)
printf("Length of email: %lu\n", strlen(email));
printf("Length of town: lu\n", strlen(town));
    return 0; 
}
#include <stdio.h>
#include <string.h>
int main(){
char supplierName[50];
char copiedName[50];

printf("Enter the supplier name:");
scanf("%s", supplierName);
//strcpy() copies the value of what we have inserted in the brakets
strcpy(copiedName, supplierName);

printf("Original supplier name: %s/n", supplierName);
printf("Copied supplier name: %s\n", copiedName);
    return 0;
}
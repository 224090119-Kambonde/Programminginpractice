#include <stdio.h>
#include <string.h>
int main(){
    char supplierName[50];
    char town[100];
    char description[250];

    printf("Enter the supplier name: ");
    scanf("%s", &supplierName);

    printf("Enter the town: ");
    scanf("%s", &town);

    strcat(description, supplierName);
    strcat(description, "operates in ");
    strcat(description, town);
    strcat(description, "."); 

    printf("Supplier description: %s\n", &description);
    return 0; 
}
#include <stdio.h>
#include <string.h>
int main(){
    char supplierName[50];
    char email[50];
    char phoneNumber[20];
    char town[100];
    //now we copy what we wrote at task 1 and then initialise and write down choice number 0;
    int choice =0;
//we create a supplier management menu
    printf("\nSupplier management\n");
    printf("1. Add supplier\n");
    printf("2. Displayy supplier\n");
    printf("3. Search supplier\n");
    printf("4. Show name lenght\n");
    printf("5. Exit\n");

    //now that we have crafted a menu where the user can choose from, we prompt the user for what they want
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if(choice==1){
        printf("Enter supplier name: ");
        scanf("%s", supplierName);

        printf("Enter email: ");
        scanf("%s", email);

        printf("Enter phone: ");
        scanf("%s", phoneNumber);

        printf("Enter town : ");
        scanf("%s", town);

        printf("Supplier added successfully.\n");
    }
else if(choice==2){
printf("\nSupplier information\n");
printf("Supplier name: %s\n", supplierName);
printf("Email: %s\n", email);
printf("Phone number: %s\n", phoneNumber);
printf("Town: %s\n", town);
}
else if(choice==3){
    char searchSupplier[50];

    printf("Enter supplier name to search: ");
    scanf("%s", searchSupplier);

    if(strcmp(searchSupplier, supplierName)==0){
        printf("Supplier found.\n");
    }
else{
    printf("Supplier not found.\n");
}
}
else if(choice==4){

    printf("Supplier name length: %lu\n", strlen(supplierName));
}
else if(choice==5){
    printf("Existing supplier management.\n");
}
else{
    printf("Invalid choice.\n");
}

    return 0;
}
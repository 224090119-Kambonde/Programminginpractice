#include <stdio.h>
#include <string.h>
int main(){
char supplier1[50];
char supplier2[50];
char searchSupplier[50];

//prompt for the supplier names and store them
printf("Enter the first supplier name:");
scanf("%s", supplier1);
//then the second supplier because we want 2
printf("Enter the second supplier name:");
scanf("%s", supplier2);

//prompting the user for which supplier they specifically want
printf("Enter the supplier you want to search for:");
scanf("%s", searchSupplier);
//the function strcmp compares 2 strings, if they are the same it returns a 0, thats why there is a ==0
if (strcmp(searchSupplier, supplier1)==0){
    printf("Supplier found.\n");
}
else if(strcmp(searchSupplier, supplier2==0)){
    printf("Supplier found.\n");
}
else{
    printf("Supplier not found.\n");
}
    return 0;
}
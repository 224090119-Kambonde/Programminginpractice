#include <stdio.h>
int searchEmployee(int ID, int IDQuantity[], int size){
for(int i=0; i<size; i++){
    if(IDQuantity[i]== ID)
    return i;
}
return -1;
}
int main(void){
    int employeeIDQuantity[]= {101, 103, 103, 104, 105};
    int searchID = 0;
    int position = -1;
    int size =sizeof(employeeIDQuantity) / sizeof(employeeIDQuantity[0]);
    printf("Enter employee ID: ");
    scanf("%d", &searchID);

    position = searchEmployee(searchID, employeeIDQuantity, size);
    if (position != -1)
        printf("Employee found at position %d. \n", position);
    else
    printf("Employee not found.\n");
    return 0;
}
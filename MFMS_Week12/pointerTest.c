#include <stdio.h>

int main(){
int number = 10;
int *ptr = &number;

printf("Original value: %d\n", number);
printf("Address of number: %p\n", (void *)ptr);
printf("Value using pointer: %d\n", *ptr);
*ptr = 20;
printf("New value: %d\n", number);

    return 0;
}
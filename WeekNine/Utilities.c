#include <stdio.h>
#include <string.h>
#include "utilities.h"

int readInt(void){
    int value = 0;
    int ch;
    while(scanf("%d", &value) !=1){
        while((ch = getchar()) != '\n' && ch != EOF){ }
        printf("Please enter the whole number: ");
    }
    return value; 
}
double readDouble(void){
    double value = 0.00;
    while(scanf("%lf", &value) != 1){
        int ch;
while((ch = getchar()) != '\n' && ch != EOF){ }
printf("Please enter a number: ");
    }
    return value;
}
void readWord(char text[], int size){
    int ch;
    if(scanf("%49s", text) != 1) text[0] = '\0';
    while(( ch = getchar()) != '\n' && ch != EOF){ }
    (void)size;
}
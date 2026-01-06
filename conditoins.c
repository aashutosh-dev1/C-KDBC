#include<stdio.h>

int main(){
  /* Branching Statements */

    //if condition
    int value = 11;

    if(value>=10){
        printf("Hello From Statements\n");
        printf("Hello From Statements2\n");
        printf("Hello From Statements3\n");
    }
    //if-else condition
    // if(conditions){
    //     //statement
    // }else{
    //     //statement
    // }
    int newValue = 90;
    if(newValue>=10){
        printf("** Hello From newValue ** \n");
    }else{
        printf("Invlaid Number");
    }
 
    // else if condition
    int isOdd = 50;
    if(isOdd % 2 == 0){
        printf("Even\n");
    }else if(isOdd % 2 == 1){
        printf("Odd\n");
    }else{
        printf("No Numbers");
    }

    //Switch Statement
    int day;
    printf("Enter day \n");
    scanf(" %d", &day);
    switch (day){
        case 1: 
        printf("Day is 1 \n");
         break;
        case 2: 
        printf("Day is 2 \n");
         break;
        case 10:
        default:
             printf("Other day");
             break;
        }


    return 0;
}
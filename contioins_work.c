#include<stdio.h>

int main(){

    // int number ;

    // printf("Enter a number \n");
    // scanf("%d\n",&number);

    // if(number>0 ){
    //     printf("Positive \n");
    // }else if(number<0){
    //     printf("Negative \n");
    // }else{
    //     printf("We are zero");
    // }

    int a, b;
    char choice;

    printf("Enter 2 numbers\n");
    scanf("%d%d",&a,&b);

    printf("Enter Choice between (+,-.*)\n");
    scanf(" %c",&choice);

    switch(choice){
        case '+':
            printf("Added number %d",a+b);
          
        case '-':
            printf("Subtracted number %d",a-b);
          
         case '*':
            printf("Multiplied number %d",a*b);
           
        default:
            printf("Enter valid choice");    
    }



    return 0;
}


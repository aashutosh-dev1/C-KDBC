#include<stdio.h>

int main(){
    int i =1 ;
    int n;
    printf("Enter any number \n");
    scanf("%d",&n);
    do{
         printf(" %d x %d = %d \n",n,i, n*i);  
        i++;
    }while(i<=10);
}
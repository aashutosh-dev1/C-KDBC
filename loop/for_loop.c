#include<stdio.h>

int main(){
    // For Loop
        //initlaization , condition, increament
   int n ;
   printf("Enter a number: ");
   scanf("%d",&n);
   for(int i =0 ; i<=20;i++){
    printf("%d x %d = %d\n",n, i ,n*i);
   }
    return 0;
}
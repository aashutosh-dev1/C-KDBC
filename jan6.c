#include<stdio.h>

int main(){
    int a, b,c;

    printf("Enter 3 numbers \n");
    scanf("%d %d %d",&a,&b,&c);

    if(a>b && a>c){
        printf("A is greatest %d",a);
        if(b>c){
            printf(" second %d",b);
            printf("smallest %d",c);
        }else{
            printf(" second %d",c);
            printf("smallest %d",b);
        }
    }else if(b>a && b>c){
        printf("B is greatest %d",b);
         if(a>c){
            printf(" second %d",a);
            printf("smallest %d",c);
        }else{
            printf(" second %d",c);
            printf("smallest %d",a);
        }

    }else{
           printf("C is greatest %d",c);
           if(a>b){
            printf("Second %d",a);
            printf("smallest %d",b);
           }else{
             printf("Second %d",b);
            printf("smallest %d",a);
           }
    }
    return 0;
}
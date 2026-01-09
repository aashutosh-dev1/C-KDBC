#include<stdio.h>

int main(){
    int a[] = {10, 20, 30, 40, 50};
    int i;

    int totalSize = sizeof(a);
    printf("totalSize of elements = %d\n", totalSize);

    int elementSize = sizeof(a[0]);
    int n = totalSize / elementSize;

    printf("Number of elements = %d\n", n);

    printf("Array elements are:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    // int a ;

    // for(a = 0; a < 10; a++){
    //     // printf("%d\n\n", a);
    //     printf("%d\n", a++);
    // }
    //     printf("%d\n", a);
    return 0;
}
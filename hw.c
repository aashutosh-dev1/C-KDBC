#include <stdio.h>

int main()
{
    int n=10, i;
    int present= 0;
    int status;
  

    for(i = 1; i <= n; i++)
    {
        printf("Enter attendance for student %d (1 = Present, 0 = Absent): ", i);
        scanf("%d", &status);

        if(status == 1)
        {
            present++;
        }
    }

    float percentage = ((float)present/n) * 100;

    printf("\nTotal Present Students = %d", present);
    printf("\nAttendance Percentage = %.2f%%\n", percentage);

    return 0;
}
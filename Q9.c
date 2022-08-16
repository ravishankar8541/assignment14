/*Write a program in C to read n number of values in an array and display it in reverse
order. Take array values from the user*/
#include"stdio.h"
int main()
{
    int arr[5];
    printf("Enter Number :\n");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Reverse are :");
    for(int i=4;i>=0;i--)
    {
        printf("%d",arr[i]);
    }
    return 0;
}

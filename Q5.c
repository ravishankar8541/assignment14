/*Write a program to find the smallest number stored in an array of size 10. Take array
values from the user.*/
#include"stdio.h"
int main()
{

    int arr[10],lower=0,i;
    printf("Enter a number :\n");
    for(i=0;i<10;i++)
{
    scanf("%d",&arr[i]);
}
lower=arr[0];
for(i=0;i<10;i++)
{
    if(lower>arr[i])
        lower=arr[i];

}
printf("Greatest number is %d",lower);
return 0;
}

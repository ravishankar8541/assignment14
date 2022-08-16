/*Write a program to find the greatest number stored in an array of size 10. Take array
values from the user.*/
#include"stdio.h"
int main()
{

    int arr[10],greater=0,i;
    printf("Enter a number :\n");
    for(i=0;i<10;i++)
{
    scanf("%d",&arr[i]);
}
for(i=0;i<10;i++)
{
    if(greater<arr[i])
        greater=arr[i];

}
printf("Greatest number is %d",greater);
return 0;
}

//Write a program to find second largest in an array.Take array values from the user
#include"stdio.h"
int main()
{
    int arr[7],largest=0,S_largest;
    printf("Enter Element :\n");
    for(int i=0;i<7;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<7;i++)
    {

        if(largest<arr[i])
        {
            S_largest=largest;
            largest=arr[i];
        }
        else
        {
            if(largest>arr[i] &&  S_largest<arr[i])
           S_largest=arr[i];
        }

    }

    printf("Second largest is %d",S_largest);
}

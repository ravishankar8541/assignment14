/*Write a program to find the second smallest number in an array.Take array values
from the user.*/
#include"stdio.h"
int main()
{
    int Smallest=0,S_Smallest,arr[7];
    printf("Enter the Element :\n");
    for(int i=0;i<7;i++)
    {
        scanf("%d",&arr[i]);
    }
    Smallest=arr[1];

    for(int i=0;i<7;i++)
    {
        if(Smallest>arr[i])
        {
        S_Smallest=Smallest;
            Smallest=arr[i];
        }
        else{
            if(Smallest<arr[i] && S_Smallest>arr[i])
                S_Smallest=arr[i];
        }

    }
    printf("Second smallest is %d",S_Smallest);
}

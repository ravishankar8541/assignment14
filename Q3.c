/*Write a program to calculate the sum of all even numbers and sum of all odd
numbers, which are stored in an array of size 10. Take array values from the user.*/
#include"stdio.h"
int main()
{
    int arr[10],sumEven=0,sumOdd=0;
    float Avg;
    printf("Enter a number :\n");
    for(int i=0;i<10;i++)
    {
      scanf("%d",&arr[i]);
      if(arr[i]%2==0)
        sumEven=sumEven+arr[i];
      else
        sumOdd=sumOdd+arr[i];
    }

    printf("\nSum of even number is %d ",sumEven);
    printf("\nSum of odd number is %d ",sumOdd);
 return 0;
}

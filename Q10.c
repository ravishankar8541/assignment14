/*. Write a program in C to copy the elements of one array into another array.Take array
values from the user*/
#include"stdio.h"
int main()
{

    int a[10],b[10];
    printf("Enter The Elements of array :\n");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        b[i]=a[i];
    }
    for(int i=0;i<10;i++)
    {
        printf("%d ",b[i]);

    }
    return 0;
}

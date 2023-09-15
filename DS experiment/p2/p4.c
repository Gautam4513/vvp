/*Write a C Program to Swap Max and Min Value from array of 10 
integer value.*/
#include<stdio.h>
int main()
{
    int a[50];
    int n,i,temp;
    int *max;
    int *min;
    max=&a[0];
    min=&a[0];
    printf("enter a size of array: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nenter a[%d]",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        if(*max<a[i])
        {
            max=&a[i];
        }
    }
    for(i=0;i<n-1;i++)
    {
        if(*min>a[i])
        {
            min=&a[i];
        }
    }
    printf("max=%d min=%d",*max,*min);
    temp=*max;
    *max=*min;
    *min=temp;
    printf("after swaping");
    for(i=0;i<n;i++)
    {
        printf("\na[%d]=%d",i+1,a[i]);
    }
    return 0;
}
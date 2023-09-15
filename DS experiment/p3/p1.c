/*Write a C Program to implement searching on ordered array of 10 integer value*/
#include<stdio.h>
int main()
{
    int a[20];
    int s,n,i,temp,b=0,j;
    printf("enter a size of array : ");
    scanf("%d",&n);
    //for entering a value of array
    for(i=0;i<n;i++)
    {
        printf("\nenter a[%d]=",i+1);
        scanf("%d",&a[i]);
    }
    //for sorting a array
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
        }
    }
    printf("array in assending order is ");
    for(i=0;i<n;i++)
    {
        printf("\na[%d]=%d",i+1,a[i]);
    }
    printf("\nenter a value you want to find : ");
    scanf("%d",&s);
    //for find value
    for(i=0;i<n;i++)
    {
        if(s==a[i])
        {
            printf("\nmath is foun");
            printf("\na[%d]=%d",i+1,a[i]);
            b=1;
        }
    }
    if (b==0) printf("\nmatch is not found");
    return 0;
}
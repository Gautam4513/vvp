/*Write a C Program to insert a value in array of 10 integers at 
specific position.*/
#include<stdio.h>
int main()
{
    int a[20];
    int n,i,pos,j;
    printf("enter a size of array : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter a a[%d]=",i+1);
        scanf("%d",&a[i]);   
    }
    printf("you enter this:");
    for(i=0;i<n;i++)
    {
        printf("\na[%d]=%d",i+1,a[i]);   
    }
    printf("\nenter a position where you add a value : ");
    scanf("%d",&pos);
    for(i=n;i>=pos-1;i--)
    {
        a[i]=a[i-1];
    }
    printf("a[%d]=",pos);
    scanf("%d",&a[pos-1]);
    i=0;
    for(i=0;i<n+1;i++)
    {
        printf("\na[%d]=%d",i+1,a[i]);   
    }
    return 0;
}
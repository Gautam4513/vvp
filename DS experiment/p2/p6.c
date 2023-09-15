/*Write a C Program to delete a value in array of 10 integers from specific position.*/
#include<stdio.h>
int main()
{
    int a[20];
    int n,i,pos,j;
    printf("enter a size of array : ");
    scanf("%d",&n);
    //for entering a array value
    for(i=0;i<n;i++)
    {
        printf("enter a a[%d]=",i+1);
        scanf("%d",&a[i]);   
    }
    printf("\nenter a position where you delete a value : ");
    scanf("%d",&pos);//for entering a position
    //for delete the value
    for(i=pos-1;i<n;i++)
    {
        a[i]=a[i+1];
    }
    //for print the out put
    for(i=0;i<n-1;i++)
    {
        printf("\na[%d]=%d",i+1,a[i]);   
    }
}
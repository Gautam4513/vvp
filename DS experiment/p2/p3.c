/*Write a C Program to find largest value from array of 10 integers*/
#include<stdio.h>
int main()
{
    int array[10];
    int i,max;
    printf("enter a array values : ");
    for(i=0;i<10;i++)
    {
        printf("enter a array[%d]= ",i+1);
        scanf("%d",&array[i]);
    }
    max=array[0];
    for(i=0;i<10;i++)
    {
        if(max<array[i])
        {
            max=array[i];
        }
    }
    printf("max is %d",max);

}
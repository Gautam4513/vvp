/*Write a c program to implement function Swap using two different
parameter passing mechanism.*/
#include<stdio.h>
void swap(int *a,int *b);
void main()
{
    int n,m;
    printf ("enter a value of n : ");
    scanf("%d",&n);
    printf("enter a value of m : ");
    scanf("%d",&m);
    printf("befor swaping\nn=%d \nm=%d",n,m);
    swap(&n,&m);
    printf("\nafter swaping \nn=%d \nm=%d",n,m);
}
void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

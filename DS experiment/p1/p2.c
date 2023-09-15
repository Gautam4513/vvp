/*) Write a c program to store 5 values in appropriate data structure
and compute addition for the same, modify the size to store 10
values and compute addition. */
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n1,n2,i,j,sum=0;
    int *ptr;
    printf("enter a size : ");
    scanf("%d",&n1);
    ptr=(int*)calloc(n1,sizeof(int));
    for(i=0;i<n1;i++)
    {
        printf("enter a value of %d : ",i+1);
        scanf("%d",&ptr[i]);
        sum=sum+ptr[i];
    }
    for(i=0;i<n1;i++)
    {
    printf("\nptr[%d]=%d",i+1,ptr[i]);
    }
    printf("\nsum=%d",sum);
    printf("\n\nenter a new size : ");
    scanf("%d",&n2);
    ptr=realloc(ptr,n2*sizeof(int));
    for(i=n1;i<n2;i++)
    {
        printf("enter a value of %d : ",i+1);
        scanf("%d",&ptr[i]);
    }
    sum=0;
    for(i=0;i<n2;i++)
    {
        sum=sum+ptr[i];
    }
    for(i=0;i<n2;i++)
    {
        printf("ptr[%d]=%d\n",i+1,ptr[i]);
    }
    printf("sum=%d",sum);

    return 0;
}

/*) Write a C Program to implement searching on unordered array of
10 integer value.*/
#include<stdio.h>
int main()
{
    int array[10];
    int i,n,a=0;
    printf("enter a array values : ");
    for(i=0;i<10;i++)
    {
        printf("enter a array[%d]= ",i+1);
        scanf("%d",&array[i]);
    }
    printf("enter a integer you want to find : ");
    scanf("%d",&n);
    for(i=0;i<=9;i++)
    {
        if(array[i]==n)
        {
            printf("mathch is found array[%d]=%d\n",i+1,array[i]);
            a=1;
        }


    }
    if(a==0)
    {
        printf("match is not found");
    }
    return 0;
}

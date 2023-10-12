/*Write a c Program to implement Tower of Hanoi problem.*/
#include<stdio.h>
void toh(int n, char S , char H , char D)
{
    if(n==1)
    {
        printf("\ndist 1 move from %c to %c",S,D);
        return ;
    }
    toh(n-1,S,D,H);
    printf("\ndisk %d move from %c to %c ",n,S,D);
    toh(n-1,H,D,S);
}
int main()
{
    int  n;
    printf("enter a number of disk : ");
    scanf("%d",&n);
    toh(n,'A','B','C');
}
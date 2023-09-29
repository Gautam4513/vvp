/*Write a C Program to implement Stack with all necessary overflow and underflow condition 
(Use array as data structure).
1)PUSH 2) POP 3) DISPLAY.*/
#include <stdio.h>
int s[5];
int top=-1;
void pop();
void puse();
void print();
int isempty();
int isfull();
int main ()
{
    int n;
    g:
    printf("\nenter 1 - puse\nenter 2-pop\nenter 3-print\nenter 4-exite\n");
    scanf("%d",&n);
    switch (n)
    {
    case 1:
        puse();
        break;
    case 2:
        pop();
        break;
    case 3:
        print();
        break;
    case 4:
        printf("you are exited");
        goto exit;

    default:
        break;
    }
    goto g;
    exit:
    return 0;
}
int isempty()
{
    if (top==-1)
    {
        printf("stack is uderflow");
        return 1;
    }
    return 0;
}
int isfull()
{
    if (top>=5)
    {
        printf("stack is overflow");
        return 1;
    }
    return 0;
}
void puse()

{
    int x;
    if(isfull()!=1)
    {
        printf("enter a number you want to puse : ");
        scanf("%d",&x);
        top=top+1;
        s[top]=x;
        printf("successfully pushed");
    }
}
void pop()
{
    if(isempty()!=1)
    {
        top--;
        printf("successfully poped");
    }
}
void print()
{
    int i;
    if(isempty()!=1)
    {
        for(i=0;i<=top;i++)
        {
            printf("\ns[%d]=%d",i,s[i]);
        }
    }
}

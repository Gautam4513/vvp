/*Write a C Program to convert infix notation into its equivalent 
postfix notation using stack*/
#include<stdio.h>
#include<string.h>
int top=-1;
char stack[50];
char infix[50];
int isempty()
{
    if(top==-1)
    {
        return 1;
    }
    else return 0;
}
void push( char x)
{
    top++;
    stack[top]=x;
}
void pop()
{
    top--;
}
int p(char x)
{
    if(x=='+'||x=='-') return 1;
    else if (x=='*'||x=='/') return 2;
    else if (x=='^') return 3;
    else return 0;
}
int main()
{
    char postfix[100];
    int i;
    printf("enter a infix : \n");
    gets(infix);
    int j=0;
    for(i=0;i<strlen(infix);i++)
    {
        if((infix[i]>='a'&&infix[i]<='z')||(infix[i]>='A'&&infix[i]<='Z'))
        {
            
            postfix[j]=infix[i];
            j++;
            //printf("%c",infix[i]);
        }
        else if (infix[i]=='+'||infix[i]=='-'||infix[i]=='*'||infix[i]=='/'||infix[i]=='^')
        {
            if(isempty())
            {
                push(infix[i]);
            }
            else if(p(infix[i])>p(stack[top]))
            {
                push(infix[i]);
            }
            else if(p(infix[i])<=p(stack[top])&&infix[i]!='^')
            {
                while((p(infix[i])<=p(stack[top])&&infix[i]!='^')&&isempty()!=1)
                {
                    
                    postfix[j]=stack[top];
                    j++;
                   // printf("%c",stack[top]);
                    pop();
                }
                push(infix[i]);
            }
            else if(p(infix[i])==p(stack[top])&&infix[i]=='^')
            {
                push(infix[i]);
            }
        }
        else if(infix[i]=='(')
         {
               push(infix[i]);
         }
         else if(infix[i]==')')
         {
             while(stack[top]!='(')
             {
                 
                 postfix[j]=stack[top];
                 j++;
                 //printf("%c",stack[top]);
                 pop();
             }
             if(stack[top]=='(')
             {
                 pop();
             }
         }
    
    }
    if(!isempty())
    {
        while(!isempty())
        {
             
             postfix[j]=stack[top];
             j++;
            //printf("%c",stack[top]);
            pop();
        }
    }
    puts(postfix);

    return 0;
}
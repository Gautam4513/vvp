/*Write a C Program to implement Infix to prefix conversion using 
stack.*/
#include<stdio.h>
#include<string.h>
#include<stdbool.h>

int stack[30];
int top=-1;

void push(int x)
{
        top++;
        stack[top]=x;
}

void pop()
{
        top--;
}

bool isEmpty()
{
    if(top==-1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool isOperator(char c)
{
    if(c=='+' || c=='-' || c=='/' || c=='*' || c=='^')
    {
        return true;
    }
    else
    {
        return 0;
    }
}

int precedence(char ch)
{
    if(ch=='+' || ch=='-')
    {
        return 1;
    }
    else if(ch=='*' || ch=='/')
    {
        return 2;

    }
    else if(ch=='^')
    {
        return 3;
    }
    else{
        return 0;
    }
}

void main()
{
    int count=0;
    char infix[20],prefix[20]="";
    printf("Enter the infix Expression : ");
    scanf("%s",infix);

    for(int i=(strlen(infix)-1);i>=0;i--)
    {
      if(infix[i]>='A' && infix[i]<='Z'|| infix[i]>='a' && infix[i]<='z')
      {
        prefix[count]=infix[i];
         count++;

      }
      else if(isOperator(infix[i]))
      {
        if(isEmpty())
        {

            push(infix[i]);
        }
        else if(precedence(infix[i])>precedence(stack[top]))
        {
            push(infix[i]);
        }
        else if(precedence(infix[i])==precedence(stack[top]) && infix[i]!='^')
        {
            push(infix[i]);
        }
        else
        {
            while(!isEmpty() && precedence(infix[i])<=precedence(stack[top]))
            {
              prefix[count]=stack[top];
              count++;
              pop();
            }
            push(infix[i]);
        }
      }
      else if(infix[i]==')')
      {
        push(infix[i]);
      }
      else if(infix[i]=='(')
      {
        while (stack[top]!=')')
        {
            prefix[count]=stack[top];
            count++;
            pop();
        }
        if(stack[top]==')')
        {
            pop();
        }
      }

    }
    while (!isEmpty())
    {
        prefix[count] = stack[top];
        count++;
        pop();
    }    
    for(int count=(strlen(infix)-1);count>=0;count--)
    {
        printf("%c ",prefix[count]);
    }
    

}

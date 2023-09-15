/*Write a c program to create calculator
 (use user defined function named Calculator).*/
 #include<stdio.h>
int c;
int calcu(int x, int y);
void main()
{
    int a,b;
    float ans;
    printf("enter a first value of a : ");
    scanf("%d",&a);
    printf("enter a second value of b : ");
    scanf("%d",&b);
    printf("\nenter 1 for add\nenter 2 for sub \nenter 3 for mul \nenter 4 for div \nenter 5 for modulo \n : ");
    scanf("%d",&c);
    ans=calcu(a,b);
    printf("ANS = %f",ans);
}
int calcu( x,  y)
{
    if(c==1) return (x+y);
    else if (c==2) return (x-y);
    else if (c==3) return (x*y);
    else if (c==4) return (x/y);
    else if (c==5) return (x%y);
    else printf("enter a carect option");
}
